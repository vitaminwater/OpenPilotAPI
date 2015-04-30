/**
 ******************************************************************************
 *
 * @file       stabilizationsettings.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: stabilizationsettings.xml.
 *             This is an automatically generated file.
 *             DO NOT modify manually.
 *
 * @brief      The UAVUObjects GCS plugin
 *****************************************************************************/
/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License
 * for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
 */

#include "stabilizationsettings.h"

int StabilizationSettings::numInstances = 0;

/**
 * Constructor
 */
StabilizationSettings::StabilizationSettings(UAVObjManager* manager): UAVObject(manager, 0x73603180, "StabilizationSettings", "PID settings used by the Stabilization module to combine the @ref AttitudeActual and @ref AttitudeDesired to compute @ref ActuatorDesired", "Control", 1, 1, ACCESS_READWRITE, ACCESS_READWRITE, 1, 1, UPDATEMODE_ONCHANGE, UPDATEMODE_ONCHANGE, 0, 0, 0)
{

}

int StabilizationSettings::UAVObjSetDataField(const char *dataIn, const std::string fieldID){
	if(fieldID == "VbarSensitivity") {
		memset( &(dataFields.VbarSensitivity), 0, sizeof(dataFields.VbarSensitivity));
		memcpy( &(dataFields.VbarSensitivity), dataIn, sizeof(dataFields.VbarSensitivity));
	} else if(fieldID == "VbarRollPI") {
		memset( &(dataFields.VbarRollPI), 0, sizeof(dataFields.VbarRollPI));
		memcpy( &(dataFields.VbarRollPI), dataIn, sizeof(dataFields.VbarRollPI));
	} else if(fieldID == "VbarPitchPI") {
		memset( &(dataFields.VbarPitchPI), 0, sizeof(dataFields.VbarPitchPI));
		memcpy( &(dataFields.VbarPitchPI), dataIn, sizeof(dataFields.VbarPitchPI));
	} else if(fieldID == "VbarYawPI") {
		memset( &(dataFields.VbarYawPI), 0, sizeof(dataFields.VbarYawPI));
		memcpy( &(dataFields.VbarYawPI), dataIn, sizeof(dataFields.VbarYawPI));
	} else if(fieldID == "VbarTau") {
		memset( &(dataFields.VbarTau), 0, sizeof(dataFields.VbarTau));
		memcpy( &(dataFields.VbarTau), dataIn, sizeof(dataFields.VbarTau));
	} else if(fieldID == "GyroTau") {
		memset( &(dataFields.GyroTau), 0, sizeof(dataFields.GyroTau));
		memcpy( &(dataFields.GyroTau), dataIn, sizeof(dataFields.GyroTau));
	} else if(fieldID == "DerivativeGamma") {
		memset( &(dataFields.DerivativeGamma), 0, sizeof(dataFields.DerivativeGamma));
		memcpy( &(dataFields.DerivativeGamma), dataIn, sizeof(dataFields.DerivativeGamma));
	} else if(fieldID == "AxisLockKp") {
		memset( &(dataFields.AxisLockKp), 0, sizeof(dataFields.AxisLockKp));
		memcpy( &(dataFields.AxisLockKp), dataIn, sizeof(dataFields.AxisLockKp));
	} else if(fieldID == "WeakLevelingKp") {
		memset( &(dataFields.WeakLevelingKp), 0, sizeof(dataFields.WeakLevelingKp));
		memcpy( &(dataFields.WeakLevelingKp), dataIn, sizeof(dataFields.WeakLevelingKp));
	} else if(fieldID == "CruiseControlMaxPowerFactor") {
		memset( &(dataFields.CruiseControlMaxPowerFactor), 0, sizeof(dataFields.CruiseControlMaxPowerFactor));
		memcpy( &(dataFields.CruiseControlMaxPowerFactor), dataIn, sizeof(dataFields.CruiseControlMaxPowerFactor));
	} else if(fieldID == "CruiseControlPowerTrim") {
		memset( &(dataFields.CruiseControlPowerTrim), 0, sizeof(dataFields.CruiseControlPowerTrim));
		memcpy( &(dataFields.CruiseControlPowerTrim), dataIn, sizeof(dataFields.CruiseControlPowerTrim));
	} else if(fieldID == "CruiseControlPowerDelayComp") {
		memset( &(dataFields.CruiseControlPowerDelayComp), 0, sizeof(dataFields.CruiseControlPowerDelayComp));
		memcpy( &(dataFields.CruiseControlPowerDelayComp), dataIn, sizeof(dataFields.CruiseControlPowerDelayComp));
	} else if(fieldID == "ScaleToAirspeed") {
		memset( &(dataFields.ScaleToAirspeed), 0, sizeof(dataFields.ScaleToAirspeed));
		memcpy( &(dataFields.ScaleToAirspeed), dataIn, sizeof(dataFields.ScaleToAirspeed));
	} else if(fieldID == "ScaleToAirspeedLimits") {
		memset( &(dataFields.ScaleToAirspeedLimits), 0, sizeof(dataFields.ScaleToAirspeedLimits));
		memcpy( &(dataFields.ScaleToAirspeedLimits), dataIn, sizeof(dataFields.ScaleToAirspeedLimits));
	} else if(fieldID == "FlightModeMap") {
		memset( &(dataFields.FlightModeMap), 0, sizeof(dataFields.FlightModeMap));
		memcpy( &(dataFields.FlightModeMap), dataIn, sizeof(dataFields.FlightModeMap));
	} else if(fieldID == "VbarGyroSuppress") {
		memset( &(dataFields.VbarGyroSuppress), 0, sizeof(dataFields.VbarGyroSuppress));
		memcpy( &(dataFields.VbarGyroSuppress), dataIn, sizeof(dataFields.VbarGyroSuppress));
	} else if(fieldID == "VbarPiroComp") {
		memset( &(dataFields.VbarPiroComp), 0, sizeof(dataFields.VbarPiroComp));
		memcpy( &(dataFields.VbarPiroComp), dataIn, sizeof(dataFields.VbarPiroComp));
	} else if(fieldID == "VbarMaxAngle") {
		memset( &(dataFields.VbarMaxAngle), 0, sizeof(dataFields.VbarMaxAngle));
		memcpy( &(dataFields.VbarMaxAngle), dataIn, sizeof(dataFields.VbarMaxAngle));
	} else if(fieldID == "DerivativeCutoff") {
		memset( &(dataFields.DerivativeCutoff), 0, sizeof(dataFields.DerivativeCutoff));
		memcpy( &(dataFields.DerivativeCutoff), dataIn, sizeof(dataFields.DerivativeCutoff));
	} else if(fieldID == "MaxAxisLock") {
		memset( &(dataFields.MaxAxisLock), 0, sizeof(dataFields.MaxAxisLock));
		memcpy( &(dataFields.MaxAxisLock), dataIn, sizeof(dataFields.MaxAxisLock));
	} else if(fieldID == "MaxAxisLockRate") {
		memset( &(dataFields.MaxAxisLockRate), 0, sizeof(dataFields.MaxAxisLockRate));
		memcpy( &(dataFields.MaxAxisLockRate), dataIn, sizeof(dataFields.MaxAxisLockRate));
	} else if(fieldID == "MaxWeakLevelingRate") {
		memset( &(dataFields.MaxWeakLevelingRate), 0, sizeof(dataFields.MaxWeakLevelingRate));
		memcpy( &(dataFields.MaxWeakLevelingRate), dataIn, sizeof(dataFields.MaxWeakLevelingRate));
	} else if(fieldID == "RattitudeModeTransition") {
		memset( &(dataFields.RattitudeModeTransition), 0, sizeof(dataFields.RattitudeModeTransition));
		memcpy( &(dataFields.RattitudeModeTransition), dataIn, sizeof(dataFields.RattitudeModeTransition));
	} else if(fieldID == "CruiseControlMinThrust") {
		memset( &(dataFields.CruiseControlMinThrust), 0, sizeof(dataFields.CruiseControlMinThrust));
		memcpy( &(dataFields.CruiseControlMinThrust), dataIn, sizeof(dataFields.CruiseControlMinThrust));
	} else if(fieldID == "CruiseControlMaxThrust") {
		memset( &(dataFields.CruiseControlMaxThrust), 0, sizeof(dataFields.CruiseControlMaxThrust));
		memcpy( &(dataFields.CruiseControlMaxThrust), dataIn, sizeof(dataFields.CruiseControlMaxThrust));
	} else if(fieldID == "CruiseControlMaxAngle") {
		memset( &(dataFields.CruiseControlMaxAngle), 0, sizeof(dataFields.CruiseControlMaxAngle));
		memcpy( &(dataFields.CruiseControlMaxAngle), dataIn, sizeof(dataFields.CruiseControlMaxAngle));
	} else if(fieldID == "CruiseControlFlightModeSwitchPosEnable") {
		memset( &(dataFields.CruiseControlFlightModeSwitchPosEnable), 0, sizeof(dataFields.CruiseControlFlightModeSwitchPosEnable));
		memcpy( &(dataFields.CruiseControlFlightModeSwitchPosEnable), dataIn, sizeof(dataFields.CruiseControlFlightModeSwitchPosEnable));
	} else if(fieldID == "CruiseControlInvertedThrustReversing") {
		memset( &(dataFields.CruiseControlInvertedThrustReversing), 0, sizeof(dataFields.CruiseControlInvertedThrustReversing));
		memcpy( &(dataFields.CruiseControlInvertedThrustReversing), dataIn, sizeof(dataFields.CruiseControlInvertedThrustReversing));
	} else if(fieldID == "CruiseControlInvertedPowerOutput") {
		memset( &(dataFields.CruiseControlInvertedPowerOutput), 0, sizeof(dataFields.CruiseControlInvertedPowerOutput));
		memcpy( &(dataFields.CruiseControlInvertedPowerOutput), dataIn, sizeof(dataFields.CruiseControlInvertedPowerOutput));
	} else if(fieldID == "LowThrottleZeroIntegral") {
		memset( &(dataFields.LowThrottleZeroIntegral), 0, sizeof(dataFields.LowThrottleZeroIntegral));
		memcpy( &(dataFields.LowThrottleZeroIntegral), dataIn, sizeof(dataFields.LowThrottleZeroIntegral));
	} else if(fieldID == "FlightModeAssistMap") {
		memset( &(dataFields.FlightModeAssistMap), 0, sizeof(dataFields.FlightModeAssistMap));
		memcpy( &(dataFields.FlightModeAssistMap), dataIn, sizeof(dataFields.FlightModeAssistMap));
	}
	return 0;
}

int StabilizationSettings::UAVObjGetDataField(char *dataOut, const std::string fieldID){
	if(fieldID == "VbarSensitivity") {
		memcpy( dataOut, &(dataFields.VbarSensitivity), sizeof(dataFields.VbarSensitivity));
	} else if(fieldID == "VbarRollPI") {
		memcpy( dataOut, &(dataFields.VbarRollPI), sizeof(dataFields.VbarRollPI));
	} else if(fieldID == "VbarPitchPI") {
		memcpy( dataOut, &(dataFields.VbarPitchPI), sizeof(dataFields.VbarPitchPI));
	} else if(fieldID == "VbarYawPI") {
		memcpy( dataOut, &(dataFields.VbarYawPI), sizeof(dataFields.VbarYawPI));
	} else if(fieldID == "VbarTau") {
		memcpy( dataOut, &(dataFields.VbarTau), sizeof(dataFields.VbarTau));
	} else if(fieldID == "GyroTau") {
		memcpy( dataOut, &(dataFields.GyroTau), sizeof(dataFields.GyroTau));
	} else if(fieldID == "DerivativeGamma") {
		memcpy( dataOut, &(dataFields.DerivativeGamma), sizeof(dataFields.DerivativeGamma));
	} else if(fieldID == "AxisLockKp") {
		memcpy( dataOut, &(dataFields.AxisLockKp), sizeof(dataFields.AxisLockKp));
	} else if(fieldID == "WeakLevelingKp") {
		memcpy( dataOut, &(dataFields.WeakLevelingKp), sizeof(dataFields.WeakLevelingKp));
	} else if(fieldID == "CruiseControlMaxPowerFactor") {
		memcpy( dataOut, &(dataFields.CruiseControlMaxPowerFactor), sizeof(dataFields.CruiseControlMaxPowerFactor));
	} else if(fieldID == "CruiseControlPowerTrim") {
		memcpy( dataOut, &(dataFields.CruiseControlPowerTrim), sizeof(dataFields.CruiseControlPowerTrim));
	} else if(fieldID == "CruiseControlPowerDelayComp") {
		memcpy( dataOut, &(dataFields.CruiseControlPowerDelayComp), sizeof(dataFields.CruiseControlPowerDelayComp));
	} else if(fieldID == "ScaleToAirspeed") {
		memcpy( dataOut, &(dataFields.ScaleToAirspeed), sizeof(dataFields.ScaleToAirspeed));
	} else if(fieldID == "ScaleToAirspeedLimits") {
		memcpy( dataOut, &(dataFields.ScaleToAirspeedLimits), sizeof(dataFields.ScaleToAirspeedLimits));
	} else if(fieldID == "FlightModeMap") {
		memcpy( dataOut, &(dataFields.FlightModeMap), sizeof(dataFields.FlightModeMap));
	} else if(fieldID == "VbarGyroSuppress") {
		memcpy( dataOut, &(dataFields.VbarGyroSuppress), sizeof(dataFields.VbarGyroSuppress));
	} else if(fieldID == "VbarPiroComp") {
		memcpy( dataOut, &(dataFields.VbarPiroComp), sizeof(dataFields.VbarPiroComp));
	} else if(fieldID == "VbarMaxAngle") {
		memcpy( dataOut, &(dataFields.VbarMaxAngle), sizeof(dataFields.VbarMaxAngle));
	} else if(fieldID == "DerivativeCutoff") {
		memcpy( dataOut, &(dataFields.DerivativeCutoff), sizeof(dataFields.DerivativeCutoff));
	} else if(fieldID == "MaxAxisLock") {
		memcpy( dataOut, &(dataFields.MaxAxisLock), sizeof(dataFields.MaxAxisLock));
	} else if(fieldID == "MaxAxisLockRate") {
		memcpy( dataOut, &(dataFields.MaxAxisLockRate), sizeof(dataFields.MaxAxisLockRate));
	} else if(fieldID == "MaxWeakLevelingRate") {
		memcpy( dataOut, &(dataFields.MaxWeakLevelingRate), sizeof(dataFields.MaxWeakLevelingRate));
	} else if(fieldID == "RattitudeModeTransition") {
		memcpy( dataOut, &(dataFields.RattitudeModeTransition), sizeof(dataFields.RattitudeModeTransition));
	} else if(fieldID == "CruiseControlMinThrust") {
		memcpy( dataOut, &(dataFields.CruiseControlMinThrust), sizeof(dataFields.CruiseControlMinThrust));
	} else if(fieldID == "CruiseControlMaxThrust") {
		memcpy( dataOut, &(dataFields.CruiseControlMaxThrust), sizeof(dataFields.CruiseControlMaxThrust));
	} else if(fieldID == "CruiseControlMaxAngle") {
		memcpy( dataOut, &(dataFields.CruiseControlMaxAngle), sizeof(dataFields.CruiseControlMaxAngle));
	} else if(fieldID == "CruiseControlFlightModeSwitchPosEnable") {
		memcpy( dataOut, &(dataFields.CruiseControlFlightModeSwitchPosEnable), sizeof(dataFields.CruiseControlFlightModeSwitchPosEnable));
	} else if(fieldID == "CruiseControlInvertedThrustReversing") {
		memcpy( dataOut, &(dataFields.CruiseControlInvertedThrustReversing), sizeof(dataFields.CruiseControlInvertedThrustReversing));
	} else if(fieldID == "CruiseControlInvertedPowerOutput") {
		memcpy( dataOut, &(dataFields.CruiseControlInvertedPowerOutput), sizeof(dataFields.CruiseControlInvertedPowerOutput));
	} else if(fieldID == "LowThrottleZeroIntegral") {
		memcpy( dataOut, &(dataFields.LowThrottleZeroIntegral), sizeof(dataFields.LowThrottleZeroIntegral));
	} else if(fieldID == "FlightModeAssistMap") {
		memcpy( dataOut, &(dataFields.FlightModeAssistMap), sizeof(dataFields.FlightModeAssistMap));
	}
	return 0;
}

int StabilizationSettings::UAVObjUnpack(const unsigned char *dataIn){
	memcpy(&dataFields, dataIn, NUMBYTES);
	return 0;
}

int StabilizationSettings::UAVObjPack(unsigned char *dataOut) {
	memcpy(dataOut, &dataFields, NUMBYTES);
	return 0;
}

unsigned short StabilizationSettings::UAVObjGetInstance() const {
	return instance;
}
unsigned short StabilizationSettings::UAVObjGetNumBytes() const {
	return sizeof(dataFields);
}
unsigned short StabilizationSettings::UAVObjGetNumInstances() const {
	return numInstances;
}

std::string StabilizationSettings::prettyPrint() {
	std::stringstream ss;
	ss << "\nPrinting object: stabilizationsettings" << std::endl;
	ss << "\tVbarSensitivity: " << dataFields.VbarSensitivity << std::endl;
	ss << "\tVbarRollPI: " << dataFields.VbarRollPI << std::endl;
	ss << "\tVbarPitchPI: " << dataFields.VbarPitchPI << std::endl;
	ss << "\tVbarYawPI: " << dataFields.VbarYawPI << std::endl;
	ss << "\tVbarTau: " << dataFields.VbarTau << std::endl;
	ss << "\tGyroTau: " << dataFields.GyroTau << std::endl;
	ss << "\tDerivativeGamma: " << dataFields.DerivativeGamma << std::endl;
	ss << "\tAxisLockKp: " << dataFields.AxisLockKp << std::endl;
	ss << "\tWeakLevelingKp: " << dataFields.WeakLevelingKp << std::endl;
	ss << "\tCruiseControlMaxPowerFactor: " << dataFields.CruiseControlMaxPowerFactor << std::endl;
	ss << "\tCruiseControlPowerTrim: " << dataFields.CruiseControlPowerTrim << std::endl;
	ss << "\tCruiseControlPowerDelayComp: " << dataFields.CruiseControlPowerDelayComp << std::endl;
	ss << "\tScaleToAirspeed: " << dataFields.ScaleToAirspeed << std::endl;
	ss << "\tScaleToAirspeedLimits: " << dataFields.ScaleToAirspeedLimits << std::endl;
	ss << "\tFlightModeMap: " << dataFields.FlightModeMap << std::endl;
	ss << "\tVbarGyroSuppress: " << dataFields.VbarGyroSuppress << std::endl;
	ss << "\tVbarPiroComp: " << dataFields.VbarPiroComp << std::endl;
	ss << "\tVbarMaxAngle: " << dataFields.VbarMaxAngle << std::endl;
	ss << "\tDerivativeCutoff: " << dataFields.DerivativeCutoff << std::endl;
	ss << "\tMaxAxisLock: " << dataFields.MaxAxisLock << std::endl;
	ss << "\tMaxAxisLockRate: " << dataFields.MaxAxisLockRate << std::endl;
	ss << "\tMaxWeakLevelingRate: " << dataFields.MaxWeakLevelingRate << std::endl;
	ss << "\tRattitudeModeTransition: " << dataFields.RattitudeModeTransition << std::endl;
	ss << "\tCruiseControlMinThrust: " << dataFields.CruiseControlMinThrust << std::endl;
	ss << "\tCruiseControlMaxThrust: " << dataFields.CruiseControlMaxThrust << std::endl;
	ss << "\tCruiseControlMaxAngle: " << dataFields.CruiseControlMaxAngle << std::endl;
	ss << "\tCruiseControlFlightModeSwitchPosEnable: " << dataFields.CruiseControlFlightModeSwitchPosEnable << std::endl;
	ss << "\tCruiseControlInvertedThrustReversing: " << dataFields.CruiseControlInvertedThrustReversing << std::endl;
	ss << "\tCruiseControlInvertedPowerOutput: " << dataFields.CruiseControlInvertedPowerOutput << std::endl;
	ss << "\tLowThrottleZeroIntegral: " << dataFields.LowThrottleZeroIntegral << std::endl;
	ss << "\tFlightModeAssistMap: " << dataFields.FlightModeAssistMap << std::endl;

	return ss.str();
}

/*/***/
/* * Initialize object fields with the default values.*/
/* * If a default value is not specified the object fields*/
/* * will be initialized to zero.*/
/* */
/*void StabilizationSettings::setDefaultFieldValues()*/
/*{*/
/*    data.VbarSensitivity[0] = 0.5;
    data.VbarSensitivity[1] = 0.5;
    data.VbarSensitivity[2] = 0.5;
    data.VbarRollPI[0] = 0.005;
    data.VbarRollPI[1] = 0.002;
    data.VbarPitchPI[0] = 0.005;
    data.VbarPitchPI[1] = 0.002;
    data.VbarYawPI[0] = 0.005;
    data.VbarYawPI[1] = 0.002;
    data.VbarTau = 0.5;
    data.GyroTau = 0.005;
    data.DerivativeGamma = 1;
    data.AxisLockKp = 2.5;
    data.WeakLevelingKp = 0.1;
    data.CruiseControlMaxPowerFactor = 3;
    data.CruiseControlPowerTrim = 100;
    data.CruiseControlPowerDelayComp = 0.25;
    data.ScaleToAirspeed = 0;
    data.ScaleToAirspeedLimits[0] = 0.05;
    data.ScaleToAirspeedLimits[1] = 3;
    data.FlightModeMap[0] = 0;
    data.FlightModeMap[1] = 0;
    data.FlightModeMap[2] = 0;
    data.FlightModeMap[3] = 0;
    data.FlightModeMap[4] = 0;
    data.FlightModeMap[5] = 0;
    data.VbarGyroSuppress = 30;
    data.VbarPiroComp = 0;
    data.VbarMaxAngle = 10;
    data.DerivativeCutoff = 20;
    data.MaxAxisLock = 30;
    data.MaxAxisLockRate = 2;
    data.MaxWeakLevelingRate = 5;
    data.RattitudeModeTransition = 80;
    data.CruiseControlMinThrust = 5;
    data.CruiseControlMaxThrust = 90;
    data.CruiseControlMaxAngle = 105;
    data.CruiseControlFlightModeSwitchPosEnable[0] = 0;
    data.CruiseControlFlightModeSwitchPosEnable[1] = 0;
    data.CruiseControlFlightModeSwitchPosEnable[2] = 0;
    data.CruiseControlFlightModeSwitchPosEnable[3] = 0;
    data.CruiseControlFlightModeSwitchPosEnable[4] = 0;
    data.CruiseControlFlightModeSwitchPosEnable[5] = 0;
    data.CruiseControlInvertedThrustReversing = 0;
    data.CruiseControlInvertedPowerOutput = 0;
    data.LowThrottleZeroIntegral = 1;
    data.FlightModeAssistMap[0] = 0;
    data.FlightModeAssistMap[1] = 0;
    data.FlightModeAssistMap[2] = 0;
    data.FlightModeAssistMap[3] = 0;
    data.FlightModeAssistMap[4] = 0;
    data.FlightModeAssistMap[5] = 0;
*/
/*}*/

/*/***/
/* * Get the object data fields*/
/* */
/*StabilizationSettings::DataFields StabilizationSettings::getData()*/
/*{*/
/*    QMutexLocker locker(mutex);*/
/*    return data;*/
/*}*/

/*/***/
/* * Set the object data fields*/
/* */
/*void StabilizationSettings::setData(const DataFields& data)*/
/*{*/
/*    QMutexLocker locker(mutex);*/
/*    // Get metadata*/
/*    Metadata mdata = getMetadata();*/
/*    // Update object if the access mode permits*/
/*    if (UAVObject::GetGcsAccess(mdata) == ACCESS_READWRITE) {*/
/*        this->data = data;*/
/*        emit objectUpdatedAuto(this); // trigger object updated event*/
/*        emit objectUpdated(this);*/
/*    }*/
/*}*/

/*void StabilizationSettings::emitNotifications()*/
/*{*/
/*            //if (data.VbarTau != oldData.VbarTau)
            emit VbarTauChanged(data.VbarTau);
        //if (data.GyroTau != oldData.GyroTau)
            emit GyroTauChanged(data.GyroTau);
        //if (data.DerivativeGamma != oldData.DerivativeGamma)
            emit DerivativeGammaChanged(data.DerivativeGamma);
        //if (data.AxisLockKp != oldData.AxisLockKp)
            emit AxisLockKpChanged(data.AxisLockKp);
        //if (data.WeakLevelingKp != oldData.WeakLevelingKp)
            emit WeakLevelingKpChanged(data.WeakLevelingKp);
        //if (data.CruiseControlMaxPowerFactor != oldData.CruiseControlMaxPowerFactor)
            emit CruiseControlMaxPowerFactorChanged(data.CruiseControlMaxPowerFactor);
        //if (data.CruiseControlPowerTrim != oldData.CruiseControlPowerTrim)
            emit CruiseControlPowerTrimChanged(data.CruiseControlPowerTrim);
        //if (data.CruiseControlPowerDelayComp != oldData.CruiseControlPowerDelayComp)
            emit CruiseControlPowerDelayCompChanged(data.CruiseControlPowerDelayComp);
        //if (data.ScaleToAirspeed != oldData.ScaleToAirspeed)
            emit ScaleToAirspeedChanged(data.ScaleToAirspeed);
        //if (data.VbarGyroSuppress != oldData.VbarGyroSuppress)
            emit VbarGyroSuppressChanged(data.VbarGyroSuppress);
        //if (data.VbarPiroComp != oldData.VbarPiroComp)
            emit VbarPiroCompChanged(data.VbarPiroComp);
        //if (data.VbarMaxAngle != oldData.VbarMaxAngle)
            emit VbarMaxAngleChanged(data.VbarMaxAngle);
        //if (data.DerivativeCutoff != oldData.DerivativeCutoff)
            emit DerivativeCutoffChanged(data.DerivativeCutoff);
        //if (data.MaxAxisLock != oldData.MaxAxisLock)
            emit MaxAxisLockChanged(data.MaxAxisLock);
        //if (data.MaxAxisLockRate != oldData.MaxAxisLockRate)
            emit MaxAxisLockRateChanged(data.MaxAxisLockRate);
        //if (data.MaxWeakLevelingRate != oldData.MaxWeakLevelingRate)
            emit MaxWeakLevelingRateChanged(data.MaxWeakLevelingRate);
        //if (data.RattitudeModeTransition != oldData.RattitudeModeTransition)
            emit RattitudeModeTransitionChanged(data.RattitudeModeTransition);
        //if (data.CruiseControlMinThrust != oldData.CruiseControlMinThrust)
            emit CruiseControlMinThrustChanged(data.CruiseControlMinThrust);
        //if (data.CruiseControlMaxThrust != oldData.CruiseControlMaxThrust)
            emit CruiseControlMaxThrustChanged(data.CruiseControlMaxThrust);
        //if (data.CruiseControlMaxAngle != oldData.CruiseControlMaxAngle)
            emit CruiseControlMaxAngleChanged(data.CruiseControlMaxAngle);
        //if (data.CruiseControlInvertedThrustReversing != oldData.CruiseControlInvertedThrustReversing)
            emit CruiseControlInvertedThrustReversingChanged(data.CruiseControlInvertedThrustReversing);
        //if (data.CruiseControlInvertedPowerOutput != oldData.CruiseControlInvertedPowerOutput)
            emit CruiseControlInvertedPowerOutputChanged(data.CruiseControlInvertedPowerOutput);
        //if (data.LowThrottleZeroIntegral != oldData.LowThrottleZeroIntegral)
            emit LowThrottleZeroIntegralChanged(data.LowThrottleZeroIntegral);
*/
/*}*/

/*/***/
/* * Create a clone of this object, a new instance ID must be specified.*/
/* * Do not use this function directly to create new instances, the*/
/* * UAVObjectManager should be used instead.*/
/* */
/*UAVDataObject *StabilizationSettings::clone(unsigned int instID)*/
/*{*/
/*    StabilizationSettings *obj = new StabilizationSettings();*/
/*    obj->initialize(instID, this->getMetaObject());*/
/*    return obj;*/
/*}*/

/*/***/
/* * Create a clone of this object only to be used to retrieve defaults*/
/* */
/*UAVDataObject *StabilizationSettings::dirtyClone()*/
/*{*/
/*    StabilizationSettings *obj = new StabilizationSettings();*/
/*    return obj;*/
/*}*/

/*/***/
/* * Static function to retrieve an instance of the object.*/
/* */
/*StabilizationSettings *StabilizationSettings::GetInstance(UAVObjectManager *objMngr, unsigned int instID)*/
/*{*/
/*    return dynamic_cast<StabilizationSettings *>(objMngr->getObject(StabilizationSettings::OBJID, instID));*/
/*}*/

/*float StabilizationSettings::getVbarSensitivity(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.VbarSensitivity[index];
}
void StabilizationSettings::setVbarSensitivity(unsigned int index, float value)
{
   mutex->lock();
   bool changed = data.VbarSensitivity[index] != value;
   data.VbarSensitivity[index] = value;
   mutex->unlock();
   if (changed) emit VbarSensitivityChanged(index,value);
}

float StabilizationSettings::getVbarRollPI(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.VbarRollPI[index];
}
void StabilizationSettings::setVbarRollPI(unsigned int index, float value)
{
   mutex->lock();
   bool changed = data.VbarRollPI[index] != value;
   data.VbarRollPI[index] = value;
   mutex->unlock();
   if (changed) emit VbarRollPIChanged(index,value);
}

float StabilizationSettings::getVbarPitchPI(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.VbarPitchPI[index];
}
void StabilizationSettings::setVbarPitchPI(unsigned int index, float value)
{
   mutex->lock();
   bool changed = data.VbarPitchPI[index] != value;
   data.VbarPitchPI[index] = value;
   mutex->unlock();
   if (changed) emit VbarPitchPIChanged(index,value);
}

float StabilizationSettings::getVbarYawPI(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.VbarYawPI[index];
}
void StabilizationSettings::setVbarYawPI(unsigned int index, float value)
{
   mutex->lock();
   bool changed = data.VbarYawPI[index] != value;
   data.VbarYawPI[index] = value;
   mutex->unlock();
   if (changed) emit VbarYawPIChanged(index,value);
}

float StabilizationSettings::getVbarTau() const
{
   QMutexLocker locker(mutex);
   return data.VbarTau;
}
void StabilizationSettings::setVbarTau(float value)
{
   mutex->lock();
   bool changed = data.VbarTau != value;
   data.VbarTau = value;
   mutex->unlock();
   if (changed) emit VbarTauChanged(value);
}

float StabilizationSettings::getGyroTau() const
{
   QMutexLocker locker(mutex);
   return data.GyroTau;
}
void StabilizationSettings::setGyroTau(float value)
{
   mutex->lock();
   bool changed = data.GyroTau != value;
   data.GyroTau = value;
   mutex->unlock();
   if (changed) emit GyroTauChanged(value);
}

float StabilizationSettings::getDerivativeGamma() const
{
   QMutexLocker locker(mutex);
   return data.DerivativeGamma;
}
void StabilizationSettings::setDerivativeGamma(float value)
{
   mutex->lock();
   bool changed = data.DerivativeGamma != value;
   data.DerivativeGamma = value;
   mutex->unlock();
   if (changed) emit DerivativeGammaChanged(value);
}

float StabilizationSettings::getAxisLockKp() const
{
   QMutexLocker locker(mutex);
   return data.AxisLockKp;
}
void StabilizationSettings::setAxisLockKp(float value)
{
   mutex->lock();
   bool changed = data.AxisLockKp != value;
   data.AxisLockKp = value;
   mutex->unlock();
   if (changed) emit AxisLockKpChanged(value);
}

float StabilizationSettings::getWeakLevelingKp() const
{
   QMutexLocker locker(mutex);
   return data.WeakLevelingKp;
}
void StabilizationSettings::setWeakLevelingKp(float value)
{
   mutex->lock();
   bool changed = data.WeakLevelingKp != value;
   data.WeakLevelingKp = value;
   mutex->unlock();
   if (changed) emit WeakLevelingKpChanged(value);
}

float StabilizationSettings::getCruiseControlMaxPowerFactor() const
{
   QMutexLocker locker(mutex);
   return data.CruiseControlMaxPowerFactor;
}
void StabilizationSettings::setCruiseControlMaxPowerFactor(float value)
{
   mutex->lock();
   bool changed = data.CruiseControlMaxPowerFactor != value;
   data.CruiseControlMaxPowerFactor = value;
   mutex->unlock();
   if (changed) emit CruiseControlMaxPowerFactorChanged(value);
}

float StabilizationSettings::getCruiseControlPowerTrim() const
{
   QMutexLocker locker(mutex);
   return data.CruiseControlPowerTrim;
}
void StabilizationSettings::setCruiseControlPowerTrim(float value)
{
   mutex->lock();
   bool changed = data.CruiseControlPowerTrim != value;
   data.CruiseControlPowerTrim = value;
   mutex->unlock();
   if (changed) emit CruiseControlPowerTrimChanged(value);
}

float StabilizationSettings::getCruiseControlPowerDelayComp() const
{
   QMutexLocker locker(mutex);
   return data.CruiseControlPowerDelayComp;
}
void StabilizationSettings::setCruiseControlPowerDelayComp(float value)
{
   mutex->lock();
   bool changed = data.CruiseControlPowerDelayComp != value;
   data.CruiseControlPowerDelayComp = value;
   mutex->unlock();
   if (changed) emit CruiseControlPowerDelayCompChanged(value);
}

float StabilizationSettings::getScaleToAirspeed() const
{
   QMutexLocker locker(mutex);
   return data.ScaleToAirspeed;
}
void StabilizationSettings::setScaleToAirspeed(float value)
{
   mutex->lock();
   bool changed = data.ScaleToAirspeed != value;
   data.ScaleToAirspeed = value;
   mutex->unlock();
   if (changed) emit ScaleToAirspeedChanged(value);
}

float StabilizationSettings::getScaleToAirspeedLimits(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.ScaleToAirspeedLimits[index];
}
void StabilizationSettings::setScaleToAirspeedLimits(unsigned int index, float value)
{
   mutex->lock();
   bool changed = data.ScaleToAirspeedLimits[index] != value;
   data.ScaleToAirspeedLimits[index] = value;
   mutex->unlock();
   if (changed) emit ScaleToAirspeedLimitsChanged(index,value);
}

unsigned char StabilizationSettings::getFlightModeMap(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.FlightModeMap[index];
}
void StabilizationSettings::setFlightModeMap(unsigned int index, unsigned char value)
{
   mutex->lock();
   bool changed = data.FlightModeMap[index] != value;
   data.FlightModeMap[index] = value;
   mutex->unlock();
   if (changed) emit FlightModeMapChanged(index,value);
}

char StabilizationSettings::getVbarGyroSuppress() const
{
   QMutexLocker locker(mutex);
   return data.VbarGyroSuppress;
}
void StabilizationSettings::setVbarGyroSuppress(char value)
{
   mutex->lock();
   bool changed = data.VbarGyroSuppress != value;
   data.VbarGyroSuppress = value;
   mutex->unlock();
   if (changed) emit VbarGyroSuppressChanged(value);
}

unsigned char StabilizationSettings::getVbarPiroComp() const
{
   QMutexLocker locker(mutex);
   return data.VbarPiroComp;
}
void StabilizationSettings::setVbarPiroComp(unsigned char value)
{
   mutex->lock();
   bool changed = data.VbarPiroComp != value;
   data.VbarPiroComp = value;
   mutex->unlock();
   if (changed) emit VbarPiroCompChanged(value);
}

unsigned char StabilizationSettings::getVbarMaxAngle() const
{
   QMutexLocker locker(mutex);
   return data.VbarMaxAngle;
}
void StabilizationSettings::setVbarMaxAngle(unsigned char value)
{
   mutex->lock();
   bool changed = data.VbarMaxAngle != value;
   data.VbarMaxAngle = value;
   mutex->unlock();
   if (changed) emit VbarMaxAngleChanged(value);
}

unsigned char StabilizationSettings::getDerivativeCutoff() const
{
   QMutexLocker locker(mutex);
   return data.DerivativeCutoff;
}
void StabilizationSettings::setDerivativeCutoff(unsigned char value)
{
   mutex->lock();
   bool changed = data.DerivativeCutoff != value;
   data.DerivativeCutoff = value;
   mutex->unlock();
   if (changed) emit DerivativeCutoffChanged(value);
}

unsigned char StabilizationSettings::getMaxAxisLock() const
{
   QMutexLocker locker(mutex);
   return data.MaxAxisLock;
}
void StabilizationSettings::setMaxAxisLock(unsigned char value)
{
   mutex->lock();
   bool changed = data.MaxAxisLock != value;
   data.MaxAxisLock = value;
   mutex->unlock();
   if (changed) emit MaxAxisLockChanged(value);
}

unsigned char StabilizationSettings::getMaxAxisLockRate() const
{
   QMutexLocker locker(mutex);
   return data.MaxAxisLockRate;
}
void StabilizationSettings::setMaxAxisLockRate(unsigned char value)
{
   mutex->lock();
   bool changed = data.MaxAxisLockRate != value;
   data.MaxAxisLockRate = value;
   mutex->unlock();
   if (changed) emit MaxAxisLockRateChanged(value);
}

unsigned char StabilizationSettings::getMaxWeakLevelingRate() const
{
   QMutexLocker locker(mutex);
   return data.MaxWeakLevelingRate;
}
void StabilizationSettings::setMaxWeakLevelingRate(unsigned char value)
{
   mutex->lock();
   bool changed = data.MaxWeakLevelingRate != value;
   data.MaxWeakLevelingRate = value;
   mutex->unlock();
   if (changed) emit MaxWeakLevelingRateChanged(value);
}

unsigned char StabilizationSettings::getRattitudeModeTransition() const
{
   QMutexLocker locker(mutex);
   return data.RattitudeModeTransition;
}
void StabilizationSettings::setRattitudeModeTransition(unsigned char value)
{
   mutex->lock();
   bool changed = data.RattitudeModeTransition != value;
   data.RattitudeModeTransition = value;
   mutex->unlock();
   if (changed) emit RattitudeModeTransitionChanged(value);
}

char StabilizationSettings::getCruiseControlMinThrust() const
{
   QMutexLocker locker(mutex);
   return data.CruiseControlMinThrust;
}
void StabilizationSettings::setCruiseControlMinThrust(char value)
{
   mutex->lock();
   bool changed = data.CruiseControlMinThrust != value;
   data.CruiseControlMinThrust = value;
   mutex->unlock();
   if (changed) emit CruiseControlMinThrustChanged(value);
}

unsigned char StabilizationSettings::getCruiseControlMaxThrust() const
{
   QMutexLocker locker(mutex);
   return data.CruiseControlMaxThrust;
}
void StabilizationSettings::setCruiseControlMaxThrust(unsigned char value)
{
   mutex->lock();
   bool changed = data.CruiseControlMaxThrust != value;
   data.CruiseControlMaxThrust = value;
   mutex->unlock();
   if (changed) emit CruiseControlMaxThrustChanged(value);
}

unsigned char StabilizationSettings::getCruiseControlMaxAngle() const
{
   QMutexLocker locker(mutex);
   return data.CruiseControlMaxAngle;
}
void StabilizationSettings::setCruiseControlMaxAngle(unsigned char value)
{
   mutex->lock();
   bool changed = data.CruiseControlMaxAngle != value;
   data.CruiseControlMaxAngle = value;
   mutex->unlock();
   if (changed) emit CruiseControlMaxAngleChanged(value);
}

unsigned char StabilizationSettings::getCruiseControlFlightModeSwitchPosEnable(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.CruiseControlFlightModeSwitchPosEnable[index];
}
void StabilizationSettings::setCruiseControlFlightModeSwitchPosEnable(unsigned int index, unsigned char value)
{
   mutex->lock();
   bool changed = data.CruiseControlFlightModeSwitchPosEnable[index] != value;
   data.CruiseControlFlightModeSwitchPosEnable[index] = value;
   mutex->unlock();
   if (changed) emit CruiseControlFlightModeSwitchPosEnableChanged(index,value);
}

unsigned char StabilizationSettings::getCruiseControlInvertedThrustReversing() const
{
   QMutexLocker locker(mutex);
   return data.CruiseControlInvertedThrustReversing;
}
void StabilizationSettings::setCruiseControlInvertedThrustReversing(unsigned char value)
{
   mutex->lock();
   bool changed = data.CruiseControlInvertedThrustReversing != value;
   data.CruiseControlInvertedThrustReversing = value;
   mutex->unlock();
   if (changed) emit CruiseControlInvertedThrustReversingChanged(value);
}

unsigned char StabilizationSettings::getCruiseControlInvertedPowerOutput() const
{
   QMutexLocker locker(mutex);
   return data.CruiseControlInvertedPowerOutput;
}
void StabilizationSettings::setCruiseControlInvertedPowerOutput(unsigned char value)
{
   mutex->lock();
   bool changed = data.CruiseControlInvertedPowerOutput != value;
   data.CruiseControlInvertedPowerOutput = value;
   mutex->unlock();
   if (changed) emit CruiseControlInvertedPowerOutputChanged(value);
}

unsigned char StabilizationSettings::getLowThrottleZeroIntegral() const
{
   QMutexLocker locker(mutex);
   return data.LowThrottleZeroIntegral;
}
void StabilizationSettings::setLowThrottleZeroIntegral(unsigned char value)
{
   mutex->lock();
   bool changed = data.LowThrottleZeroIntegral != value;
   data.LowThrottleZeroIntegral = value;
   mutex->unlock();
   if (changed) emit LowThrottleZeroIntegralChanged(value);
}

unsigned char StabilizationSettings::getFlightModeAssistMap(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.FlightModeAssistMap[index];
}
void StabilizationSettings::setFlightModeAssistMap(unsigned int index, unsigned char value)
{
   mutex->lock();
   bool changed = data.FlightModeAssistMap[index] != value;
   data.FlightModeAssistMap[index] = value;
   mutex->unlock();
   if (changed) emit FlightModeAssistMapChanged(index,value);
}

*/
