/**
 ******************************************************************************
 *
 * @file       stabilizationsettings.h
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
#ifndef STABILIZATIONSETTINGS_H
#define STABILIZATIONSETTINGS_H

#include <string>
#include <sstream>
#include <iostream>
#include <string.h>

#include "UAVObject.h"

    // Data Fields
typedef struct {
        float VbarSensitivity[3];
        float VbarRollPI[2];
        float VbarPitchPI[2];
        float VbarYawPI[2];
        float VbarTau;
        float GyroTau;
        float DerivativeGamma;
        float AxisLockKp;
        float WeakLevelingKp;
        float CruiseControlMaxPowerFactor;
        float CruiseControlPowerTrim;
        float CruiseControlPowerDelayComp;
        float ScaleToAirspeed;
        float ScaleToAirspeedLimits[2];
        unsigned char FlightModeMap[6];
        char VbarGyroSuppress;
        unsigned char VbarPiroComp;
        unsigned char VbarMaxAngle;
        unsigned char DerivativeCutoff;
        unsigned char MaxAxisLock;
        unsigned char MaxAxisLockRate;
        unsigned char MaxWeakLevelingRate;
        unsigned char RattitudeModeTransition;
        char CruiseControlMinThrust;
        unsigned char CruiseControlMaxThrust;
        unsigned char CruiseControlMaxAngle;
        unsigned char CruiseControlFlightModeSwitchPosEnable[6];
        unsigned char CruiseControlInvertedThrustReversing;
        unsigned char CruiseControlInvertedPowerOutput;
        unsigned char LowThrottleZeroIntegral;
        unsigned char FlightModeAssistMap[6];

} __attribute__((packed)) DataFieldsStabilizationSettings;

class StabilizationSettings: public UAVObject
{

public:
	int instance;
	DataFieldsStabilizationSettings dataFields;
	static int numInstances;

    // Field information
    // Field VbarSensitivity information
    /* Array element names for field VbarSensitivity */
    typedef enum { VBARSENSITIVITY_ROLL=0, VBARSENSITIVITY_PITCH=1, VBARSENSITIVITY_YAW=2 } VbarSensitivityElem;
    /* Number of elements for field VbarSensitivity */
    static const unsigned int VBARSENSITIVITY_NUMELEM = 3;
    // Field VbarRollPI information
    /* Array element names for field VbarRollPI */
    typedef enum { VBARROLLPI_KP=0, VBARROLLPI_KI=1 } VbarRollPIElem;
    /* Number of elements for field VbarRollPI */
    static const unsigned int VBARROLLPI_NUMELEM = 2;
    // Field VbarPitchPI information
    /* Array element names for field VbarPitchPI */
    typedef enum { VBARPITCHPI_KP=0, VBARPITCHPI_KI=1 } VbarPitchPIElem;
    /* Number of elements for field VbarPitchPI */
    static const unsigned int VBARPITCHPI_NUMELEM = 2;
    // Field VbarYawPI information
    /* Array element names for field VbarYawPI */
    typedef enum { VBARYAWPI_KP=0, VBARYAWPI_KI=1 } VbarYawPIElem;
    /* Number of elements for field VbarYawPI */
    static const unsigned int VBARYAWPI_NUMELEM = 2;
    // Field VbarTau information
    // Field GyroTau information
    // Field DerivativeGamma information
    // Field AxisLockKp information
    // Field WeakLevelingKp information
    // Field CruiseControlMaxPowerFactor information
    // Field CruiseControlPowerTrim information
    // Field CruiseControlPowerDelayComp information
    // Field ScaleToAirspeed information
    // Field ScaleToAirspeedLimits information
    /* Array element names for field ScaleToAirspeedLimits */
    typedef enum { SCALETOAIRSPEEDLIMITS_MIN=0, SCALETOAIRSPEEDLIMITS_MAX=1 } ScaleToAirspeedLimitsElem;
    /* Number of elements for field ScaleToAirspeedLimits */
    static const unsigned int SCALETOAIRSPEEDLIMITS_NUMELEM = 2;
    // Field FlightModeMap information
    /* Enumeration options for field FlightModeMap */
    typedef enum { FLIGHTMODEMAP_BANK1=0, FLIGHTMODEMAP_BANK2=1, FLIGHTMODEMAP_BANK3=2 } FlightModeMapOptions;
    /* Number of elements for field FlightModeMap */
    static const unsigned int FLIGHTMODEMAP_NUMELEM = 6;
    // Field VbarGyroSuppress information
    // Field VbarPiroComp information
    /* Enumeration options for field VbarPiroComp */
    typedef enum { VBARPIROCOMP_FALSE=0, VBARPIROCOMP_TRUE=1 } VbarPiroCompOptions;
    // Field VbarMaxAngle information
    // Field DerivativeCutoff information
    // Field MaxAxisLock information
    // Field MaxAxisLockRate information
    // Field MaxWeakLevelingRate information
    // Field RattitudeModeTransition information
    // Field CruiseControlMinThrust information
    // Field CruiseControlMaxThrust information
    // Field CruiseControlMaxAngle information
    // Field CruiseControlFlightModeSwitchPosEnable information
    /* Enumeration options for field CruiseControlFlightModeSwitchPosEnable */
    typedef enum { CRUISECONTROLFLIGHTMODESWITCHPOSENABLE_FALSE=0, CRUISECONTROLFLIGHTMODESWITCHPOSENABLE_TRUE=1 } CruiseControlFlightModeSwitchPosEnableOptions;
    /* Number of elements for field CruiseControlFlightModeSwitchPosEnable */
    static const unsigned int CRUISECONTROLFLIGHTMODESWITCHPOSENABLE_NUMELEM = 6;
    // Field CruiseControlInvertedThrustReversing information
    /* Enumeration options for field CruiseControlInvertedThrustReversing */
    typedef enum { CRUISECONTROLINVERTEDTHRUSTREVERSING_UNREVERSED=0, CRUISECONTROLINVERTEDTHRUSTREVERSING_REVERSED=1 } CruiseControlInvertedThrustReversingOptions;
    // Field CruiseControlInvertedPowerOutput information
    /* Enumeration options for field CruiseControlInvertedPowerOutput */
    typedef enum { CRUISECONTROLINVERTEDPOWEROUTPUT_ZERO=0, CRUISECONTROLINVERTEDPOWEROUTPUT_NORMAL=1, CRUISECONTROLINVERTEDPOWEROUTPUT_BOOSTED=2 } CruiseControlInvertedPowerOutputOptions;
    // Field LowThrottleZeroIntegral information
    /* Enumeration options for field LowThrottleZeroIntegral */
    typedef enum { LOWTHROTTLEZEROINTEGRAL_FALSE=0, LOWTHROTTLEZEROINTEGRAL_TRUE=1 } LowThrottleZeroIntegralOptions;
    // Field FlightModeAssistMap information
    /* Enumeration options for field FlightModeAssistMap */
    typedef enum { FLIGHTMODEASSISTMAP_NONE=0, FLIGHTMODEASSISTMAP_GPSASSIST=1 } FlightModeAssistMapOptions;
    /* Number of elements for field FlightModeAssistMap */
    static const unsigned int FLIGHTMODEASSISTMAP_NUMELEM = 6;

  
    // Constants
    static const unsigned int NUMBYTES = sizeof(DataFieldsStabilizationSettings);

    // Functions
    StabilizationSettings(UAVObjManager* manager);
	int UAVObjSetDataField(const char *dataIn, const std::string fieldID);
	int UAVObjGetDataField(char *dataOut, const std::string fieldID);
	int UAVObjUnpack(const unsigned char *dataIn);
	int UAVObjPack(unsigned char *dataOut);
	unsigned short UAVObjGetInstance() const;
	unsigned short UAVObjGetNumBytes() const;
	unsigned short UAVObjGetNumInstances() const;
	std::string prettyPrint();

    /*DataFields getData();
    void setData(const DataFields& data);
    Metadata getDefaultMetadata();
    UAVDataObject* clone(unsigned int instID);
	UAVDataObject* dirtyClone();
	
    static StabilizationSettings* GetInstance(UAVObjectManager* objMngr, unsigned int instID = 0);

    Q_INVOKABLE float getVbarSensitivity(unsigned int index) const;
    Q_INVOKABLE float getVbarRollPI(unsigned int index) const;
    Q_INVOKABLE float getVbarPitchPI(unsigned int index) const;
    Q_INVOKABLE float getVbarYawPI(unsigned int index) const;
    Q_INVOKABLE float getVbarTau() const;
    Q_INVOKABLE float getGyroTau() const;
    Q_INVOKABLE float getDerivativeGamma() const;
    Q_INVOKABLE float getAxisLockKp() const;
    Q_INVOKABLE float getWeakLevelingKp() const;
    Q_INVOKABLE float getCruiseControlMaxPowerFactor() const;
    Q_INVOKABLE float getCruiseControlPowerTrim() const;
    Q_INVOKABLE float getCruiseControlPowerDelayComp() const;
    Q_INVOKABLE float getScaleToAirspeed() const;
    Q_INVOKABLE float getScaleToAirspeedLimits(unsigned int index) const;
    Q_INVOKABLE unsigned char getFlightModeMap(unsigned int index) const;
    Q_INVOKABLE char getVbarGyroSuppress() const;
    Q_INVOKABLE unsigned char getVbarPiroComp() const;
    Q_INVOKABLE unsigned char getVbarMaxAngle() const;
    Q_INVOKABLE unsigned char getDerivativeCutoff() const;
    Q_INVOKABLE unsigned char getMaxAxisLock() const;
    Q_INVOKABLE unsigned char getMaxAxisLockRate() const;
    Q_INVOKABLE unsigned char getMaxWeakLevelingRate() const;
    Q_INVOKABLE unsigned char getRattitudeModeTransition() const;
    Q_INVOKABLE char getCruiseControlMinThrust() const;
    Q_INVOKABLE unsigned char getCruiseControlMaxThrust() const;
    Q_INVOKABLE unsigned char getCruiseControlMaxAngle() const;
    Q_INVOKABLE unsigned char getCruiseControlFlightModeSwitchPosEnable(unsigned int index) const;
    Q_INVOKABLE unsigned char getCruiseControlInvertedThrustReversing() const;
    Q_INVOKABLE unsigned char getCruiseControlInvertedPowerOutput() const;
    Q_INVOKABLE unsigned char getLowThrottleZeroIntegral() const;
    Q_INVOKABLE unsigned char getFlightModeAssistMap(unsigned int index) const;


public slots:
    void setVbarSensitivity(unsigned int index, float value);
    void setVbarRollPI(unsigned int index, float value);
    void setVbarPitchPI(unsigned int index, float value);
    void setVbarYawPI(unsigned int index, float value);
    void setVbarTau(float value);
    void setGyroTau(float value);
    void setDerivativeGamma(float value);
    void setAxisLockKp(float value);
    void setWeakLevelingKp(float value);
    void setCruiseControlMaxPowerFactor(float value);
    void setCruiseControlPowerTrim(float value);
    void setCruiseControlPowerDelayComp(float value);
    void setScaleToAirspeed(float value);
    void setScaleToAirspeedLimits(unsigned int index, float value);
    void setFlightModeMap(unsigned int index, unsigned char value);
    void setVbarGyroSuppress(char value);
    void setVbarPiroComp(unsigned char value);
    void setVbarMaxAngle(unsigned char value);
    void setDerivativeCutoff(unsigned char value);
    void setMaxAxisLock(unsigned char value);
    void setMaxAxisLockRate(unsigned char value);
    void setMaxWeakLevelingRate(unsigned char value);
    void setRattitudeModeTransition(unsigned char value);
    void setCruiseControlMinThrust(char value);
    void setCruiseControlMaxThrust(unsigned char value);
    void setCruiseControlMaxAngle(unsigned char value);
    void setCruiseControlFlightModeSwitchPosEnable(unsigned int index, unsigned char value);
    void setCruiseControlInvertedThrustReversing(unsigned char value);
    void setCruiseControlInvertedPowerOutput(unsigned char value);
    void setLowThrottleZeroIntegral(unsigned char value);
    void setFlightModeAssistMap(unsigned int index, unsigned char value);


signals:
    void VbarSensitivityChanged(unsigned int index, float value);
    void VbarRollPIChanged(unsigned int index, float value);
    void VbarPitchPIChanged(unsigned int index, float value);
    void VbarYawPIChanged(unsigned int index, float value);
    void VbarTauChanged(float value);
    void GyroTauChanged(float value);
    void DerivativeGammaChanged(float value);
    void AxisLockKpChanged(float value);
    void WeakLevelingKpChanged(float value);
    void CruiseControlMaxPowerFactorChanged(float value);
    void CruiseControlPowerTrimChanged(float value);
    void CruiseControlPowerDelayCompChanged(float value);
    void ScaleToAirspeedChanged(float value);
    void ScaleToAirspeedLimitsChanged(unsigned int index, float value);
    void FlightModeMapChanged(unsigned int index, unsigned char value);
    void VbarGyroSuppressChanged(char value);
    void VbarPiroCompChanged(unsigned char value);
    void VbarMaxAngleChanged(unsigned char value);
    void DerivativeCutoffChanged(unsigned char value);
    void MaxAxisLockChanged(unsigned char value);
    void MaxAxisLockRateChanged(unsigned char value);
    void MaxWeakLevelingRateChanged(unsigned char value);
    void RattitudeModeTransitionChanged(unsigned char value);
    void CruiseControlMinThrustChanged(char value);
    void CruiseControlMaxThrustChanged(unsigned char value);
    void CruiseControlMaxAngleChanged(unsigned char value);
    void CruiseControlFlightModeSwitchPosEnableChanged(unsigned int index, unsigned char value);
    void CruiseControlInvertedThrustReversingChanged(unsigned char value);
    void CruiseControlInvertedPowerOutputChanged(unsigned char value);
    void LowThrottleZeroIntegralChanged(unsigned char value);
    void FlightModeAssistMapChanged(unsigned int index, unsigned char value);


private slots:
    void emitNotifications();
	
private:
    DataFields data;

    void setDefaultFieldValues();*/

};

#endif // STABILIZATIONSETTINGS_H
