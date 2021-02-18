// License: Apache 2.0. See LICENSE file in root directory.
// Copyright(c) 2020 Intel Corporation. All Rights Reserved.

#include "../test.h"
#include "librealsense2/rs.hpp"
#include <condition_variable>
#include "hw-monitor.h"

using namespace rs2;

inline rs2::device_list find_devices_by_product_line_or_exit( int product )
{
    rs2::context ctx;
    rs2::device_list devices_list = ctx.query_devices( product );
    if( devices_list.size() == 0 )
    {
        std::cout << "No device of the " << product << " product line was found; skipping test"
                  << std::endl;
        exit( 0 );
    }

    return devices_list;
}

inline void exit_if_fw_version_is_under( rs2::device & dev, librealsense::firmware_version version )
{
    std::string fw_version;
    REQUIRE_NOTHROW(fw_version = dev.get_info( RS2_CAMERA_INFO_FIRMWARE_VERSION ));

    if (librealsense::firmware_version(fw_version) < version)
    {
        std::cout << "FW version " << fw_version << " is under the minimum requiered FW version "
                  << version << std::endl;
        exit( 0 );
    }
}

// Remove the frame's stream (or streams if a frameset) from the list of streams we expect to arrive
// If any stream is unexpected, it is ignored
inline void remove_all_streams_arrived( rs2::frame f,
                                        std::vector< rs2::stream_profile > & expected_streams )
{
    auto remove_stream = [&]() {
        auto it = std::remove_if( expected_streams.begin(),
                                  expected_streams.end(),
                                  [&]( rs2::stream_profile s ) {
                                      return s.stream_type() == f.get_profile().stream_type();
                                  } );


        if( it != expected_streams.end() )
            expected_streams.erase( it );
    };

    if( f.is< rs2::frameset >() )
    {
        auto set = f.as< rs2::frameset >();
        set.foreach_rs( [&]( rs2::frame fr ) { remove_stream(); } );
    }
    else
    {
        remove_stream();
    }
}

template < class T >
inline void start_default_l500_depth_profiles( rs2::depth_sensor depth_sens, T callback, bool with_confidence = false )
{
    auto depth = find_default_depth_profile( depth_sens );
    auto ir = find_default_ir_profile( depth_sens );

    if (with_confidence)
    {
        auto confidence = find_confidence_corresponding_to_depth( depth_sens, depth );
        REQUIRE_NOTHROW( depth_sens.open( { depth, ir, confidence } ) );
    }
    else
    {
        REQUIRE_NOTHROW( depth_sens.open( { depth, ir } ) );
    }

    REQUIRE_NOTHROW( depth_sens.start( callback ) );
}

inline stream_profile find_default_depth_profile( rs2::depth_sensor depth_sens )
{
    std::vector< stream_profile > stream_profiles;
    REQUIRE_NOTHROW( stream_profiles = depth_sens.get_stream_profiles() );

    auto depth_profile
        = std::find_if( stream_profiles.begin(), stream_profiles.end(), []( stream_profile sp ) {
              return sp.is_default() && sp.stream_type() == RS2_STREAM_DEPTH;
          } );

    REQUIRE( depth_profile != stream_profiles.end() );
    return *depth_profile;
}

inline stream_profile find_default_ir_profile( rs2::depth_sensor depth_sens )
{
    std::vector< stream_profile > stream_profiles;
    REQUIRE_NOTHROW( stream_profiles = depth_sens.get_stream_profiles() );

    auto ir_profile
        = std::find_if( stream_profiles.begin(), stream_profiles.end(), []( stream_profile sp ) {
              return sp.is_default() && sp.stream_type() == RS2_STREAM_INFRARED;
          } );

    REQUIRE( ir_profile != stream_profiles.end() );
    return *ir_profile;
}

inline stream_profile
find_profile( rs2::depth_sensor depth_sens, rs2_stream stream, rs2_sensor_mode mode )
{
    std::vector< stream_profile > stream_profiles;
    REQUIRE_NOTHROW( stream_profiles = depth_sens.get_stream_profiles() );

    std::map< rs2_sensor_mode, std::pair< uint32_t, uint32_t > > sensor_mode_to_resolution
        = { { { RS2_SENSOR_MODE_VGA }, { 640, 480 } },
            { { RS2_SENSOR_MODE_XGA }, { 1024, 768 } },
            { { RS2_SENSOR_MODE_QVGA }, { 320, 240 } } };


    auto profile
        = std::find_if( stream_profiles.begin(), stream_profiles.end(), [&]( stream_profile sp ) {
              auto vp = sp.as< video_stream_profile >();
              if( vp )
              {
                  return sp.stream_type() == stream
                      && vp.width() == sensor_mode_to_resolution[mode].first
                      && vp.height() == sensor_mode_to_resolution[mode].second;
              }
              return false;
          } );

    REQUIRE( profile != stream_profiles.end() );
    return *profile;
}

inline stream_profile find_confidence_corresponding_to_depth( rs2::depth_sensor depth_sens,
                                                       stream_profile depth_profile )
{
    std::vector< stream_profile > stream_profiles;
    REQUIRE_NOTHROW( stream_profiles = depth_sens.get_stream_profiles() );

    auto confidence_profile
        = std::find_if( stream_profiles.begin(), stream_profiles.end(), [&]( stream_profile sp ) {
              return sp.stream_type() == RS2_STREAM_CONFIDENCE
                  && sp.as< rs2::video_stream_profile >().width()
                         == depth_profile.as< rs2::video_stream_profile >().width()
                  && sp.as< rs2::video_stream_profile >().height()
                         == depth_profile.as< rs2::video_stream_profile >().height();
          } );

    REQUIRE( confidence_profile != stream_profiles.end() );
    return *confidence_profile;
}

inline void do_while_streaming( rs2::sensor depth_sens,
                                std::vector< stream_profile > profiles,
                                std::function< void() > action )
{
    REQUIRE_NOTHROW( depth_sens.open( profiles ) );
    REQUIRE_NOTHROW( depth_sens.start( [&]( rs2::frame f ) {} ) );

    action();

    depth_sens.stop();
    depth_sens.close();
}
