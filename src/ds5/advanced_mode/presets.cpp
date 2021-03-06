// License: Apache 2.0. See LICENSE file in root directory.
// Copyright(c) 2017 Intel Corporation. All Rights Reserved.

#include "presets.h"

namespace librealsense
{
    void default_400(preset& p)
    {
        p.depth_controls.deepSeaMedianThreshold = 500;
        p.depth_controls.deepSeaNeighborThreshold = 7;
        p.depth_controls.deepSeaSecondPeakThreshold = 325;
        p.depth_controls.lrAgreeThreshold = 24;
        p.depth_controls.minusDecrement = 10;
        p.depth_controls.plusIncrement = 10;
        p.depth_controls.scoreThreshA = 1;
        p.depth_controls.scoreThreshB = 2047;
        p.depth_controls.textureCountThreshold = 0;
        p.depth_controls.textureDifferenceThreshold = 0;
        p.rsm.diffThresh = 4.f;
        p.rsm.removeThresh = 63;
        p.rsm.rsmBypass = 0; // inverted field, should be the opposite in the json 
        p.rsm.sloRauDiffThresh = 1.f;
        p.rsvc.minEast = 1;
        p.rsvc.minNorth = 1;
        p.rsvc.minNSsum = 3;
        p.rsvc.minSouth = 1;
        p.rsvc.minWest = 1;
        p.rsvc.minWEsum = 3;
        p.rsvc.uShrink = 3;
        p.rsvc.vShrink = 1;
        p.color_control.disableRAUColor = 0;
        p.color_control.disableSADColor = 0;
        p.color_control.disableSADNormalize = 0;
        p.color_control.disableSLOLeftColor = 0;
        p.color_control.disableSLORightColor = 0;
        p.rctc.rauDiffThresholdBlue = 51;
        p.rctc.rauDiffThresholdGreen = 51;
        p.rctc.rauDiffThresholdRed = 51;
        p.sctc.diffThresholdBlue = 72;
        p.sctc.diffThresholdGreen = 72;
        p.sctc.diffThresholdRed = 72;
        p.spc.sloK1Penalty = 60;
        p.spc.sloK1PenaltyMod1 = 105;
        p.spc.sloK1PenaltyMod2 = 70;
        p.spc.sloK2Penalty = 342;
        p.spc.sloK2PenaltyMod1 = 190;
        p.spc.sloK2PenaltyMod2 = 130;
        p.hdad.lambdaAD = 800.f;
        p.hdad.lambdaCensus = 26.f;
        p.cc.colorCorrection1 = 0.4620000123978f;
        p.cc.colorCorrection2 = 0.5400000214577f;
        p.cc.colorCorrection3 = 0.5400000214577f;
        p.cc.colorCorrection4 = 0.2080000042915f;
        p.cc.colorCorrection5 = -0.3319999873638f;
        p.cc.colorCorrection6 = -0.2129999995232f;
        p.cc.colorCorrection7 = -0.2129999995232f;
        p.cc.colorCorrection8 = 0.6850000023842f;
        p.cc.colorCorrection9 = 0.930999994278f;
        p.cc.colorCorrection10 = -0.5540000200272f;
        p.cc.colorCorrection11 = -0.5540000200272f;
        p.cc.colorCorrection12 = 0.04600000008941f;
        p.depth_table.depthClampMax = 65536;
        p.depth_table.depthClampMin = 0;
        p.depth_table.depthUnits = 1000;
        p.depth_table.disparityShift = 0;
        p.ae.meanIntensitySetPoint = 400;
        p.census.uDiameter = 9;
        p.census.vDiameter = 9;
        p.depth_exposure.exposure = 33000.f;
        p.depth_auto_exposure.auto_exposure = 1;
        p.depth_gain.gain = 16.f;
    }

    void default_405u(preset& p)
    {
        p.depth_controls.deepSeaMedianThreshold = 500;
        p.depth_controls.deepSeaNeighborThreshold = 7;
        p.depth_controls.deepSeaSecondPeakThreshold = 325;
        p.depth_controls.lrAgreeThreshold = 24;
        p.depth_controls.minusDecrement = 10;
        p.depth_controls.plusIncrement = 10;
        p.depth_controls.scoreThreshA = 1;
        p.depth_controls.scoreThreshB = 2047;
        p.depth_controls.textureCountThreshold = 0;
        p.depth_controls.textureDifferenceThreshold = 0;
        p.rsm.diffThresh = 4.f;
        p.rsm.removeThresh = 63;
        p.rsm.rsmBypass = 0; // inverted field, should be the opposite in the json 
        p.rsm.sloRauDiffThresh = 1.f;
        p.rsvc.minEast = 1;
        p.rsvc.minNorth = 1;
        p.rsvc.minNSsum = 3;
        p.rsvc.minSouth = 1;
        p.rsvc.minWest = 1;
        p.rsvc.minWEsum = 3;
        p.rsvc.uShrink = 3;
        p.rsvc.vShrink = 1;
        p.color_control.disableRAUColor = 0;
        p.color_control.disableSADColor = 0;
        p.color_control.disableSADNormalize = 0;
        p.color_control.disableSLOLeftColor = 0;
        p.color_control.disableSLORightColor = 0;
        p.rctc.rauDiffThresholdBlue = 51;
        p.rctc.rauDiffThresholdGreen = 51;
        p.rctc.rauDiffThresholdRed = 51;
        p.sctc.diffThresholdBlue = 72;
        p.sctc.diffThresholdGreen = 72;
        p.sctc.diffThresholdRed = 72;
        p.spc.sloK1Penalty = 60;
        p.spc.sloK1PenaltyMod1 = 105;
        p.spc.sloK1PenaltyMod2 = 70;
        p.spc.sloK2Penalty = 342;
        p.spc.sloK2PenaltyMod1 = 190;
        p.spc.sloK2PenaltyMod2 = 130;
        p.hdad.lambdaAD = 800.f;
        p.hdad.lambdaCensus = 26.f;
        p.cc.colorCorrection1 = 0.4620000123978f;
        p.cc.colorCorrection2 = 0.5400000214577f;
        p.cc.colorCorrection3 = 0.5400000214577f;
        p.cc.colorCorrection4 = 0.2080000042915f;
        p.cc.colorCorrection5 = -0.3319999873638f;
        p.cc.colorCorrection6 = -0.2129999995232f;
        p.cc.colorCorrection7 = -0.2129999995232f;
        p.cc.colorCorrection8 = 0.6850000023842f;
        p.cc.colorCorrection9 = 0.930999994278f;
        p.cc.colorCorrection10 = -0.5540000200272f;
        p.cc.colorCorrection11 = -0.5540000200272f;
        p.cc.colorCorrection12 = 0.04600000008941f;
        p.depth_table.depthClampMax = 65536;
        p.depth_table.depthClampMin = 0;
        p.depth_table.depthUnits = 1000;
        p.depth_table.disparityShift = 0;
        p.ae.meanIntensitySetPoint = 400;
        p.census.uDiameter = 9;
        p.census.vDiameter = 9;
        p.laser_state.laser_state = 1;
        p.laser_power.laser_power = 150.f;
        p.depth_exposure.exposure = 33000.f;
        p.depth_auto_exposure.auto_exposure = 1;
        p.depth_gain.gain = 16.f;
    }

    void default_405(preset& p)
    {
        p.depth_controls.deepSeaMedianThreshold = 500;
        p.depth_controls.deepSeaNeighborThreshold = 7;
        p.depth_controls.deepSeaSecondPeakThreshold = 325;
        p.depth_controls.lrAgreeThreshold = 24;
        p.depth_controls.minusDecrement = 10;
        p.depth_controls.plusIncrement = 10;
        p.depth_controls.scoreThreshA = 1;
        p.depth_controls.scoreThreshB = 2047;
        p.depth_controls.textureCountThreshold = 0;
        p.depth_controls.textureDifferenceThreshold = 0;
        p.rsm.diffThresh = 4.f;
        p.rsm.removeThresh = 63;
        p.rsm.rsmBypass = 0;  //inverted field, should be the opposite in the json 
        p.rsm.sloRauDiffThresh = 1.f;
        p.rsvc.minEast = 1;
        p.rsvc.minNorth = 1;
        p.rsvc.minNSsum = 3;
        p.rsvc.minSouth = 1;
        p.rsvc.minWest = 1;
        p.rsvc.minWEsum = 3;
        p.rsvc.uShrink = 3;
        p.rsvc.vShrink = 1;
        p.color_control.disableRAUColor = 0;
        p.color_control.disableSADColor = 0;
        p.color_control.disableSADNormalize = 0;
        p.color_control.disableSLOLeftColor = 0;
        p.color_control.disableSLORightColor = 0;
        p.rctc.rauDiffThresholdBlue = 51;
        p.rctc.rauDiffThresholdGreen = 51;
        p.rctc.rauDiffThresholdRed = 51;
        p.sctc.diffThresholdBlue = 72;
        p.sctc.diffThresholdGreen = 72;
        p.sctc.diffThresholdRed = 72;
        p.spc.sloK1Penalty = 60;
        p.spc.sloK1PenaltyMod1 = 105;
        p.spc.sloK1PenaltyMod2 = 70;
        p.spc.sloK2Penalty = 342;
        p.spc.sloK2PenaltyMod1 = 190;
        p.spc.sloK2PenaltyMod2 = 130;
        p.hdad.lambdaAD = 800.f;
        p.hdad.lambdaCensus = 26.f;
        p.hdad.ignoreSAD = 0;
        p.cc.colorCorrection1 = -0.0556641f;
        p.cc.colorCorrection2 = 0.560547f;
        p.cc.colorCorrection3 = 0.560547f;
        p.cc.colorCorrection4 = 0.170898f;
        p.cc.colorCorrection5 = -0.275391f;
        p.cc.colorCorrection6 = -0.238281f;
        p.cc.colorCorrection7 = -0.238281f;
        p.cc.colorCorrection8 = 1.34766f;
        p.cc.colorCorrection9 = 0.959961f;
        p.cc.colorCorrection10 = -0.194336f;
        p.cc.colorCorrection11 = -0.194336f;
        p.cc.colorCorrection12 = -0.589844f;
        p.depth_table.depthClampMax = 65536;
        p.depth_table.depthClampMin = 0;
        p.depth_table.depthUnits = 100;
        p.depth_table.disparityShift = 0;
        p.depth_table.disparityMode = 0;
        p.ae.meanIntensitySetPoint = 1000;
        p.census.uDiameter = 9;
        p.census.vDiameter = 9;
        p.depth_exposure.exposure = 32000.f;
        p.depth_auto_exposure.auto_exposure = 1;
        p.depth_gain.gain = 16.f;
        p.amplitude_factor.amplitude = 0.f;
        p.depth_auto_white_balance.auto_white_balance = 1;
    }

    void default_410(preset& p)
    {
        p.depth_controls.deepSeaMedianThreshold = 500;
        p.depth_controls.deepSeaNeighborThreshold = 7;
        p.depth_controls.deepSeaSecondPeakThreshold = 325;
        p.depth_controls.lrAgreeThreshold = 24;
        p.depth_controls.minusDecrement = 10;
        p.depth_controls.plusIncrement = 10;
        p.depth_controls.scoreThreshA = 1;
        p.depth_controls.scoreThreshB = 2047;
        p.depth_controls.textureCountThreshold = 0;
        p.depth_controls.textureDifferenceThreshold = 0;
        p.rsm.diffThresh = 4.f;
        p.rsm.removeThresh = 63;
        p.rsm.rsmBypass = 0; // inverted field, should be the opposite in the json 
        p.rsm.sloRauDiffThresh = 1.f;
        p.rsvc.minEast = 1;
        p.rsvc.minNorth = 1;
        p.rsvc.minNSsum = 3;
        p.rsvc.minSouth = 1;
        p.rsvc.minWest = 1;
        p.rsvc.minWEsum = 3;
        p.rsvc.uShrink = 3;
        p.rsvc.vShrink = 1;
        p.color_control.disableRAUColor = 0;
        p.color_control.disableSADColor = 0;
        p.color_control.disableSADNormalize = 0;
        p.color_control.disableSLOLeftColor = 0;
        p.color_control.disableSLORightColor = 0;
        p.rctc.rauDiffThresholdBlue = 51;
        p.rctc.rauDiffThresholdGreen = 51;
        p.rctc.rauDiffThresholdRed = 51;
        p.sctc.diffThresholdBlue = 72;
        p.sctc.diffThresholdGreen = 72;
        p.sctc.diffThresholdRed = 72;
        p.spc.sloK1Penalty = 60;
        p.spc.sloK1PenaltyMod1 = 105;
        p.spc.sloK1PenaltyMod2 = 70;
        p.spc.sloK2Penalty = 342;
        p.spc.sloK2PenaltyMod1 = 190;
        p.spc.sloK2PenaltyMod2 = 130;
        p.hdad.lambdaAD = 800.f;
        p.hdad.lambdaCensus = 26.f;
        p.cc.colorCorrection1 = 0.461914f;
        p.cc.colorCorrection2 = 0.540039f;
        p.cc.colorCorrection3 = 0.540039f;
        p.cc.colorCorrection4 = 0.208008f;
        p.cc.colorCorrection5 = -0.332031f;
        p.cc.colorCorrection6 = -0.212891f;
        p.cc.colorCorrection7 = -0.212891f;
        p.cc.colorCorrection8 = 0.68457f;
        p.cc.colorCorrection9 = 0.930664f;
        p.cc.colorCorrection10 = -0.553711f;
        p.cc.colorCorrection11 = -0.553711f;
        p.cc.colorCorrection12 = 0.0458984f;
        p.depth_table.depthClampMax = 65536;
        p.depth_table.depthClampMin = 0;
        p.depth_table.depthUnits = 1000;
        p.depth_table.disparityShift = 0;
        p.ae.meanIntensitySetPoint = 400;
        p.census.uDiameter = 9;
        p.census.vDiameter = 9;
        p.laser_state.laser_state = 1;
        p.laser_power.laser_power = 150.f;
        p.color_auto_exposure.auto_exposure = 1;
        p.color_exposure.exposure = 156;
        p.color_backlight_compensation.backlight_compensation = 0;
        p.color_brightness.brightness = 0;
        p.color_contrast.contrast = 50;
        p.color_gain.gain = 64;
        p.color_gamma.gamma = 300;
        p.color_hue.hue = 0;
        p.color_power_line_frequency.power_line_frequency = 3;
        p.color_saturation.saturation = 64;
        p.color_sharpness.sharpness = 50;
        p.color_auto_white_balance.auto_white_balance = 1;
        p.color_white_balance.white_balance = 4600;
        p.depth_exposure.exposure = 32000.f;
        p.depth_auto_exposure.auto_exposure = 1;
        p.depth_gain.gain = 16.f;
    }

    void default_420(preset& p)
    {
        p.depth_controls.deepSeaMedianThreshold = 500;
        p.depth_controls.deepSeaNeighborThreshold = 7;
        p.depth_controls.deepSeaSecondPeakThreshold = 325;
        p.depth_controls.lrAgreeThreshold = 24;
        p.depth_controls.minusDecrement = 10;
        p.depth_controls.plusIncrement = 10;
        p.depth_controls.scoreThreshA = 1;
        p.depth_controls.scoreThreshB = 2047;
        p.depth_controls.textureCountThreshold = 0;
        p.depth_controls.textureDifferenceThreshold = 0;
        p.rsm.diffThresh = 4.f;
        p.rsm.removeThresh = 63;
        p.rsm.rsmBypass = 0; // inverted field, should be the opposite in the json 
        p.rsm.sloRauDiffThresh = 1.f;
        p.rsvc.minEast = 1;
        p.rsvc.minNorth = 1;
        p.rsvc.minNSsum = 3;
        p.rsvc.minSouth = 1;
        p.rsvc.minWest = 1;
        p.rsvc.minWEsum = 3;
        p.rsvc.uShrink = 3;
        p.rsvc.vShrink = 1;
        p.color_control.disableRAUColor = 0;
        p.color_control.disableSADColor = 0;
        p.color_control.disableSADNormalize = 0;
        p.color_control.disableSLOLeftColor = 0;
        p.color_control.disableSLORightColor = 0;
        p.rctc.rauDiffThresholdBlue = 51;
        p.rctc.rauDiffThresholdGreen = 51;
        p.rctc.rauDiffThresholdRed = 51;
        p.sctc.diffThresholdBlue = 72;
        p.sctc.diffThresholdGreen = 72;
        p.sctc.diffThresholdRed = 72;
        p.spc.sloK1Penalty = 60;
        p.spc.sloK1PenaltyMod1 = 105;
        p.spc.sloK1PenaltyMod2 = 70;
        p.spc.sloK2Penalty = 342;
        p.spc.sloK2PenaltyMod1 = 190;
        p.spc.sloK2PenaltyMod2 = 130;
        p.hdad.lambdaAD = 800.f;
        p.hdad.lambdaCensus = 26.f;
        p.cc.colorCorrection1 = 0.2989999949932f;
        p.cc.colorCorrection2 = 0.2939999997616f;
        p.cc.colorCorrection3 = 0.2939999997616f;
        p.cc.colorCorrection4 = 0.1140000000596f;
        p.cc.colorCorrection5 = 0.f;
        p.cc.colorCorrection6 = 0.f;
        p.cc.colorCorrection7 = 0.f;
        p.cc.colorCorrection8 = 0.f;
        p.cc.colorCorrection9 = 0.f;
        p.cc.colorCorrection10 = 0.f;
        p.cc.colorCorrection11 = 0.f;
        p.cc.colorCorrection12 = 0.f;
        p.depth_table.depthClampMax = 65536;
        p.depth_table.depthClampMin = 0;
        p.depth_table.depthUnits = 1000;
        p.depth_table.disparityShift = 0;
        p.ae.meanIntensitySetPoint = 1536;
        p.census.uDiameter = 9;
        p.census.vDiameter = 9;
        p.depth_exposure.exposure = 8500.f;
        p.depth_auto_exposure.auto_exposure = 1;
        p.depth_gain.gain = 16.f;
    }

    void default_430(preset& p)
    {
        p.depth_controls.deepSeaMedianThreshold = 500;
        p.depth_controls.deepSeaNeighborThreshold = 7;
        p.depth_controls.deepSeaSecondPeakThreshold = 325;
        p.depth_controls.lrAgreeThreshold = 24;
        p.depth_controls.minusDecrement = 10;
        p.depth_controls.plusIncrement = 10;
        p.depth_controls.scoreThreshA = 1;
        p.depth_controls.scoreThreshB = 2047;
        p.depth_controls.textureCountThreshold = 0;
        p.depth_controls.textureDifferenceThreshold = 0;
        p.rsm.diffThresh = 4.f;
        p.rsm.removeThresh = 63;
        p.rsm.rsmBypass = 0;
        p.rsm.sloRauDiffThresh = 1.f;
        p.rsvc.minEast = 1;
        p.rsvc.minNorth = 1;
        p.rsvc.minNSsum = 3;
        p.rsvc.minSouth = 1;
        p.rsvc.minWest = 1;
        p.rsvc.minWEsum = 3;
        p.rsvc.uShrink = 3;
        p.rsvc.vShrink = 1;
        p.color_control.disableRAUColor = 0;
        p.color_control.disableSADColor = 0;
        p.color_control.disableSADNormalize = 0;
        p.color_control.disableSLOLeftColor = 0;
        p.color_control.disableSLORightColor = 0;
        p.rctc.rauDiffThresholdBlue = 51;
        p.rctc.rauDiffThresholdGreen = 51;
        p.rctc.rauDiffThresholdRed = 51;
        p.sctc.diffThresholdBlue = 72;
        p.sctc.diffThresholdGreen = 72;
        p.sctc.diffThresholdRed = 72;
        p.spc.sloK1Penalty = 60;
        p.spc.sloK1PenaltyMod1 = 105;
        p.spc.sloK1PenaltyMod2 = 70;
        p.spc.sloK2Penalty = 342;
        p.spc.sloK2PenaltyMod1 = 190;
        p.spc.sloK2PenaltyMod2 = 130;
        p.hdad.lambdaAD = 800.f;
        p.hdad.lambdaCensus = 26.f;
        p.cc.colorCorrection1 = 0.298828f;
        p.cc.colorCorrection2 = 0.293945f;
        p.cc.colorCorrection3 = 0.293945f;
        p.cc.colorCorrection4 = 0.114258f;
        p.cc.colorCorrection5 = 0.f;
        p.cc.colorCorrection6 = 0.f;
        p.cc.colorCorrection7 = 0.f;
        p.cc.colorCorrection8 = 0.f;
        p.cc.colorCorrection9 = 0.f;
        p.cc.colorCorrection10 = 0.f;
        p.cc.colorCorrection11 = 0.f;
        p.cc.colorCorrection12 = 0.f;
        p.depth_table.depthClampMax = 65536;
        p.depth_table.depthClampMin = 0;
        p.depth_table.depthUnits = 1000;
        p.depth_table.disparityShift = 0;
        p.ae.meanIntensitySetPoint = 1536;
        p.census.uDiameter = 9;
        p.census.vDiameter = 9;
        p.laser_state.laser_state = 1;
        p.laser_power.laser_power = 150.f;
        p.depth_exposure.exposure = 8500.f;
        p.depth_auto_exposure.auto_exposure = 1;
        p.color_auto_exposure.auto_exposure = 1;
        p.color_exposure.exposure = 156;
        p.color_backlight_compensation.backlight_compensation = 0;
        p.color_brightness.brightness = 0;
        p.color_contrast.contrast = 50;
        p.color_gain.gain = 64;
        p.color_gamma.gamma = 300;
        p.color_hue.hue = 0;
        p.color_power_line_frequency.power_line_frequency = 3;
        p.color_saturation.saturation = 64;
        p.color_sharpness.sharpness = 50;
        p.color_auto_white_balance.auto_white_balance = 1;
        p.color_white_balance.white_balance = 4600;
        p.depth_gain.gain = 16.f;
        p.hdad.ignoreSAD = 0;
        p.amplitude_factor.amplitude = 0.f;
    }
    // the only different between high res to mid & low is the amplitude_factor value
    void default_450_high_res(preset& p)
    {
        p.amplitude_factor.amplitude = 0.f;
    }

    //used as base preset for the D450
    void default_450_mid_low_res(preset& p)
    {
        p.depth_controls.deepSeaMedianThreshold = 500;
        p.depth_controls.deepSeaNeighborThreshold = 7;
        p.depth_controls.deepSeaSecondPeakThreshold = 325;
        p.depth_controls.lrAgreeThreshold = 24;
        p.depth_controls.minusDecrement = 10;
        p.depth_controls.plusIncrement = 10;
        p.depth_controls.scoreThreshA = 1;
        p.depth_controls.scoreThreshB = 2047;
        p.depth_controls.textureCountThreshold = 0;
        p.depth_controls.textureDifferenceThreshold = 0;
        p.rsm.diffThresh = 4.f;
        p.rsm.removeThresh = 63;
        p.rsm.rsmBypass = 0; // inverted field, should be the opposite in the json
        p.rsm.sloRauDiffThresh = 1.f;
        p.rsvc.minEast = 1;
        p.rsvc.minNorth = 1;
        p.rsvc.minNSsum = 3;
        p.rsvc.minSouth = 1;
        p.rsvc.minWest = 1;
        p.rsvc.minWEsum = 3;
        p.rsvc.uShrink = 3;
        p.rsvc.vShrink = 1;
        p.color_control.disableRAUColor = 0;
        p.color_control.disableSADColor = 0;
        p.color_control.disableSADNormalize = 0;
        p.color_control.disableSLOLeftColor = 0;
        p.color_control.disableSLORightColor = 0;
        p.rctc.rauDiffThresholdBlue = 51;
        p.rctc.rauDiffThresholdGreen = 51;
        p.rctc.rauDiffThresholdRed = 51;
        p.sctc.diffThresholdBlue = 72;
        p.sctc.diffThresholdGreen = 72;
        p.sctc.diffThresholdRed = 72;
        p.spc.sloK1Penalty = 60;
        p.spc.sloK1PenaltyMod1 = 105;
        p.spc.sloK1PenaltyMod2 = 70;
        p.spc.sloK2Penalty = 342;
        p.spc.sloK2PenaltyMod1 = 190;
        p.spc.sloK2PenaltyMod2 = 130;
        p.hdad.lambdaAD = 800.f;
        p.hdad.lambdaCensus = 26.f;
        p.cc.colorCorrection1 = -0.493164f;
        p.cc.colorCorrection2 = 0.831055f;
        p.cc.colorCorrection3 = 0.831055f;
        p.cc.colorCorrection4 = -0.368164f;
        p.cc.colorCorrection5 = -0.133789f;
        p.cc.colorCorrection6 = -0.323242f;
        p.cc.colorCorrection7 = -0.323242f;
        p.cc.colorCorrection8 = 1.19141f;
        p.cc.colorCorrection9 = 0.90918f;
        p.cc.colorCorrection10 = -0.272461f;
        p.cc.colorCorrection11 = -0.272461f;
        p.cc.colorCorrection12 = -0.355469f;
        p.depth_table.depthClampMax = 65536;
        p.depth_table.depthClampMin = 0;
        p.depth_table.depthUnits = 1000;
        p.depth_table.disparityShift = 0;
        p.ae.meanIntensitySetPoint = 1000;
        p.census.uDiameter = 9;
        p.census.vDiameter = 9;
        p.laser_state.laser_state = 1;
        p.laser_power.laser_power = 150.f;
        p.depth_exposure.exposure = 8500.f;
        p.depth_auto_exposure.auto_exposure = 1;
        p.color_auto_exposure.auto_exposure = 1;
        p.color_exposure.exposure = 156;
        p.color_backlight_compensation.backlight_compensation = 0;
        p.color_brightness.brightness = 0;
        p.color_contrast.contrast = 50;
        p.color_gain.gain = 64;
        p.color_gamma.gamma = 300;
        p.color_hue.hue = 0;
        p.color_power_line_frequency.power_line_frequency = 3;
        p.color_saturation.saturation = 64;
        p.color_sharpness.sharpness = 50;
        p.color_auto_white_balance.auto_white_balance = 1;
        p.color_white_balance.white_balance = 4600;
        p.depth_gain.gain = 16.f;
        p.hdad.ignoreSAD = 0;
        p.amplitude_factor.amplitude = 0.08f;

    }

    void high_accuracy(preset& p)
    {
        p.census.uDiameter = 9;
        p.census.vDiameter = 9;
        p.depth_controls.deepSeaMedianThreshold = 796;
        p.depth_controls.deepSeaNeighborThreshold = 108;
        p.depth_controls.deepSeaSecondPeakThreshold = 647;
        p.depth_controls.lrAgreeThreshold = 10;
        p.depth_controls.minusDecrement = 25;
        p.depth_controls.plusIncrement = 2;
        p.depth_controls.scoreThreshA = 4;
        p.depth_controls.scoreThreshB = 2893;
        p.depth_controls.textureCountThreshold = 0;
        p.depth_controls.textureDifferenceThreshold = 1722;
        p.rsm.diffThresh = 1.65625f;
        p.rsm.removeThresh = 136;
        p.rsm.rsmBypass = 0;
        p.rsm.sloRauDiffThresh = 0.785714f;
        p.rsvc.minEast = 6;
        p.rsvc.minNorth = 3;
        p.rsvc.minNSsum = 7;
        p.rsvc.minSouth = 2;
        p.rsvc.minWest = 2;
        p.rsvc.minWEsum = 12;
        p.rsvc.uShrink = 3;
        p.rsvc.vShrink = 0;
        p.color_control.disableRAUColor = 0;
        p.color_control.disableSADColor = 0;
        p.color_control.disableSADNormalize = 0;
        p.color_control.disableSLOLeftColor = 0;
        p.color_control.disableSLORightColor = 1;
        p.rctc.rauDiffThresholdBlue = 803;
        p.rctc.rauDiffThresholdGreen = 578;
        p.rctc.rauDiffThresholdRed = 1007;
        p.sctc.diffThresholdBlue = 13;
        p.sctc.diffThresholdGreen = 15;
        p.sctc.diffThresholdRed = 30;
        p.spc.sloK1Penalty = 155;
        p.spc.sloK1PenaltyMod1 = 160;
        p.spc.sloK1PenaltyMod2 = 59;
        p.spc.sloK2Penalty = 190;
        p.spc.sloK2PenaltyMod1 = 507;
        p.spc.sloK2PenaltyMod2 = 493;
        p.hdad.lambdaAD = 751.f;
        p.hdad.lambdaCensus = 6.f;
        p.hdad.ignoreSAD = 0;
    }

    void high_density(preset& p)
    {
        p.census.uDiameter = 9;
        p.census.vDiameter = 9;
        p.depth_controls.deepSeaMedianThreshold = 789;
        p.depth_controls.deepSeaNeighborThreshold = 12;
        p.depth_controls.deepSeaSecondPeakThreshold = 222;
        p.depth_controls.lrAgreeThreshold = 18;
        p.depth_controls.minusDecrement = 6;
        p.depth_controls.plusIncrement = 21;
        p.depth_controls.scoreThreshA = 96;
        p.depth_controls.scoreThreshB = 1443;
        p.depth_controls.textureCountThreshold = 0;
        p.depth_controls.textureDifferenceThreshold = 2466;
        p.rsm.diffThresh = 1.21875f;
        p.rsm.removeThresh = 82;
        p.rsm.rsmBypass = 0;  // inverted field, should be the opposite in the json 
        p.rsm.sloRauDiffThresh = 0.28125f;
        p.rsvc.minEast = 2;
        p.rsvc.minNorth = 1;
        p.rsvc.minNSsum = 6;
        p.rsvc.minSouth = 3;
        p.rsvc.minWest = 3;
        p.rsvc.minWEsum = 7;
        p.rsvc.uShrink = 4;
        p.rsvc.vShrink = 0;
        p.color_control.disableRAUColor = 0;
        p.color_control.disableSADColor = 0;
        p.color_control.disableSADNormalize = 0;
        p.color_control.disableSLOLeftColor = 0;
        p.color_control.disableSLORightColor = 0;
        p.rctc.rauDiffThresholdBlue = 112;
        p.rctc.rauDiffThresholdGreen = 585;
        p.rctc.rauDiffThresholdRed = 18;
        p.sctc.diffThresholdBlue = 8;
        p.sctc.diffThresholdGreen = 200;
        p.sctc.diffThresholdRed = 279;
        p.spc.sloK1Penalty = 55;
        p.spc.sloK1PenaltyMod1 = 326;
        p.spc.sloK1PenaltyMod2 = 134;
        p.spc.sloK2Penalty = 235;
        p.spc.sloK2PenaltyMod1 = 506;
        p.spc.sloK2PenaltyMod2 = 206;
        p.hdad.lambdaAD = 618.f;
        p.hdad.lambdaCensus = 15.f;
        p.hdad.ignoreSAD = 0;
    }

    void mid_density(preset& p)
    {
        p.census.uDiameter = 9;
        p.census.vDiameter = 9;
        p.depth_controls.deepSeaMedianThreshold = 1021;
        p.depth_controls.deepSeaNeighborThreshold = 97;
        p.depth_controls.deepSeaSecondPeakThreshold = 600;
        p.depth_controls.lrAgreeThreshold = 19;
        p.depth_controls.minusDecrement = 23;
        p.depth_controls.plusIncrement = 3;
        p.depth_controls.scoreThreshA = 54;
        p.depth_controls.scoreThreshB = 887;
        p.depth_controls.textureCountThreshold = 0;
        p.depth_controls.textureDifferenceThreshold = 0;
        p.rsm.diffThresh = 1.8125f;
        p.rsm.removeThresh = 81;
        p.rsm.rsmBypass = 0;  //inverted field, should be the opposite in the json 
        p.rsm.sloRauDiffThresh = 1.f;
        p.rsvc.minEast = 3;
        p.rsvc.minNorth = 1;
        p.rsvc.minNSsum = 6;
        p.rsvc.minSouth = 3;
        p.rsvc.minWest = 5;
        p.rsvc.minWEsum = 11;
        p.rsvc.uShrink = 3;
        p.rsvc.vShrink = 1;
        p.color_control.disableRAUColor = 0;
        p.color_control.disableSADColor = 0;
        p.color_control.disableSADNormalize = 0;
        p.color_control.disableSLOLeftColor = 0;
        p.color_control.disableSLORightColor = 1;
        p.rctc.rauDiffThresholdBlue = 14;
        p.rctc.rauDiffThresholdGreen = 723;
        p.rctc.rauDiffThresholdRed = 186;
        p.sctc.diffThresholdBlue = 16;
        p.sctc.diffThresholdGreen = 259;
        p.sctc.diffThresholdRed = 896;
        p.spc.sloK1Penalty = 132;
        p.spc.sloK1PenaltyMod1 = 77;
        p.spc.sloK1PenaltyMod2 = 234;
        p.spc.sloK2Penalty = 342;
        p.spc.sloK2PenaltyMod1 = 390;
        p.spc.sloK2PenaltyMod2 = 151;
        p.hdad.lambdaAD = 935.f;
        p.hdad.lambdaCensus = 26.f;
        p.hdad.ignoreSAD = 0;
    }

    void hand_gesture(preset& p)
    {
        p.depth_controls.deepSeaMedianThreshold = 240;
        p.depth_controls.deepSeaNeighborThreshold = 110;
        p.depth_controls.deepSeaSecondPeakThreshold = 31;
        p.depth_controls.lrAgreeThreshold = 20;
        p.depth_controls.minusDecrement = 20;
        p.depth_controls.plusIncrement = 3;
        p.depth_controls.scoreThreshA = 24;
        p.depth_controls.scoreThreshB = 791;
        p.depth_controls.textureCountThreshold = 0;
        p.depth_controls.textureDifferenceThreshold = 783;
        p.rsm.diffThresh = 3.8125f;
        p.rsm.removeThresh = 92;
        p.rsm.rsmBypass = 0;  //inverted field, should be the opposite in the json
        p.rsm.sloRauDiffThresh = 0.46875f;
        p.rsvc.minEast = 3;
        p.rsvc.minNorth = 1;
        p.rsvc.minNSsum = 4;
        p.rsvc.minSouth = 3;
        p.rsvc.minWest = 1;
        p.rsvc.minWEsum = 14;
        p.rsvc.uShrink = 3;
        p.rsvc.vShrink = 1;
        p.color_control.disableRAUColor = 0;
        p.color_control.disableSADColor = 0;
        p.color_control.disableSADNormalize = 0;
        p.color_control.disableSLOLeftColor = 0;
        p.color_control.disableSLORightColor = 1;
        p.rctc.rauDiffThresholdBlue = 50;
        p.rctc.rauDiffThresholdGreen = 73;
        p.rctc.rauDiffThresholdRed = 141;
        p.sctc.diffThresholdBlue = 130;
        p.sctc.diffThresholdGreen = 244;
        p.sctc.diffThresholdRed = 618;
        p.spc.sloK1Penalty = 63;
        p.spc.sloK1PenaltyMod1 = 14;
        p.spc.sloK1PenaltyMod2 = 119;
        p.spc.sloK2Penalty = 45;
        p.spc.sloK2PenaltyMod1 = 21;
        p.spc.sloK2PenaltyMod2 = 12;
        p.hdad.ignoreSAD = 0;
        p.hdad.lambdaAD = 1001.f;
        p.hdad.lambdaCensus = 7.f;
        p.census.uDiameter = 9;
        p.census.vDiameter = 3;
    }

    void d415_remove_ir(preset& p)
    {
        p.cc.colorCorrection1 = 0.5205079913139f;
        p.cc.colorCorrection2 = 1.990234017372f;
        p.cc.colorCorrection3 = 1.506836056709f;
        p.cc.colorCorrection4 = -2.f;
        p.cc.colorCorrection5 = -2.f;
        p.cc.colorCorrection6 = -0.08203099668026f;
        p.cc.colorCorrection7 = 1.123046994209f;
        p.cc.colorCorrection8 = 1.013671994209f;
        p.cc.colorCorrection9 = 1.698241949081f;
        p.cc.colorCorrection10 = -2.f;
        p.cc.colorCorrection11 = 0.5751950144768f;
        p.cc.colorCorrection12 = -0.4111329913139f;
    }

    void d460_remove_ir(preset& p)
    {
        p.cc.colorCorrection1 = 1.917968988419f;
        p.cc.colorCorrection2 = 1.990234017372f;
        p.cc.colorCorrection3 = -2.f;
        p.cc.colorCorrection4 = -2.f;
        p.cc.colorCorrection5 = -1.041015982628f;
        p.cc.colorCorrection6 = 0.0546870008111f;
        p.cc.colorCorrection7 = -0.21875f;
        p.cc.colorCorrection8 = 0.9042969942093f;
        p.cc.colorCorrection9 = 0.9042969942093f;
        p.cc.colorCorrection10 = -0.5478519797325f;
        p.cc.colorCorrection11 = -0.1367190033197f;
        p.cc.colorCorrection12 = -0.1914059966803f;
    }
}
