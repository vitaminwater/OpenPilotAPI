/**
 ******************************************************************************
 *
 * @file       flightmodesettings.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: flightmodesettings.xml. 
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
#ifndef FLIGHTMODESETTINGS_H
#define FLIGHTMODESETTINGS_H

#include <string>
#include <sstream>
#include <iostream>
#include <string.h>

#include "UAVObject.h"

    // Data Fields
typedef struct {
        float ReturnToBaseAltitudeOffset;
        float LandingVelocity;
        float PositionHoldOffset[2];
        float VarioControlLowPassAlpha;
        unsigned short int ArmedTimeout;
        unsigned short int ArmingSequenceTime;
        unsigned short int DisarmingSequenceTime;
        unsigned char Arming;
        unsigned char Stabilization1Settings[4];
        unsigned char Stabilization2Settings[4];
        unsigned char Stabilization3Settings[4];
        unsigned char Stabilization4Settings[4];
        unsigned char Stabilization5Settings[4];
        unsigned char Stabilization6Settings[4];
        unsigned char FlightModePosition[6];
        unsigned char DisableSanityChecks;

} __attribute__((packed)) DataFieldsFlightModeSettings;

class FlightModeSettings: public UAVObject
{

public:
	int instance;
	DataFieldsFlightModeSettings dataFields;
	static int numInstances;

    // Field information
    // Field ReturnToBaseAltitudeOffset information
    // Field LandingVelocity information
    // Field PositionHoldOffset information
    /* Array element names for field PositionHoldOffset */
    typedef enum { POSITIONHOLDOFFSET_HORIZONTAL=0, POSITIONHOLDOFFSET_VERTICAL=1 } PositionHoldOffsetElem;
    /* Number of elements for field PositionHoldOffset */
    static const unsigned int POSITIONHOLDOFFSET_NUMELEM = 2;
    // Field VarioControlLowPassAlpha information
    // Field ArmedTimeout information
    // Field ArmingSequenceTime information
    // Field DisarmingSequenceTime information
    // Field Arming information
    /* Enumeration options for field Arming */
    typedef enum { ARMING_ALWAYSDISARMED=0, ARMING_ALWAYSARMED=1, ARMING_ROLLLEFT=2, ARMING_ROLLRIGHT=3, ARMING_PITCHFORWARD=4, ARMING_PITCHAFT=5, ARMING_YAWLEFT=6, ARMING_YAWRIGHT=7, ARMING_ACCESSORY0=8, ARMING_ACCESSORY1=9, ARMING_ACCESSORY2=10 } ArmingOptions;
    // Field Stabilization1Settings information
    /* Enumeration options for field Stabilization1Settings */
    typedef enum { STABILIZATION1SETTINGS_MANUAL=0, STABILIZATION1SETTINGS_RATE=1, STABILIZATION1SETTINGS_ATTITUDE=2, STABILIZATION1SETTINGS_AXISLOCK=3, STABILIZATION1SETTINGS_WEAKLEVELING=4, STABILIZATION1SETTINGS_VIRTUALBAR=5, STABILIZATION1SETTINGS_ACRO=6, STABILIZATION1SETTINGS_RATTITUDE=7, STABILIZATION1SETTINGS_ALTITUDEHOLD=8, STABILIZATION1SETTINGS_ALTITUDEVARIO=9, STABILIZATION1SETTINGS_CRUISECONTROL=10 } Stabilization1SettingsOptions;
    /* Array element names for field Stabilization1Settings */
    typedef enum { STABILIZATION1SETTINGS_ROLL=0, STABILIZATION1SETTINGS_PITCH=1, STABILIZATION1SETTINGS_YAW=2, STABILIZATION1SETTINGS_THRUST=3 } Stabilization1SettingsElem;
    /* Number of elements for field Stabilization1Settings */
    static const unsigned int STABILIZATION1SETTINGS_NUMELEM = 4;
    // Field Stabilization2Settings information
    /* Enumeration options for field Stabilization2Settings */
    typedef enum { STABILIZATION2SETTINGS_MANUAL=0, STABILIZATION2SETTINGS_RATE=1, STABILIZATION2SETTINGS_ATTITUDE=2, STABILIZATION2SETTINGS_AXISLOCK=3, STABILIZATION2SETTINGS_WEAKLEVELING=4, STABILIZATION2SETTINGS_VIRTUALBAR=5, STABILIZATION2SETTINGS_ACRO=6, STABILIZATION2SETTINGS_RATTITUDE=7, STABILIZATION2SETTINGS_ALTITUDEHOLD=8, STABILIZATION2SETTINGS_ALTITUDEVARIO=9, STABILIZATION2SETTINGS_CRUISECONTROL=10 } Stabilization2SettingsOptions;
    /* Array element names for field Stabilization2Settings */
    typedef enum { STABILIZATION2SETTINGS_ROLL=0, STABILIZATION2SETTINGS_PITCH=1, STABILIZATION2SETTINGS_YAW=2, STABILIZATION2SETTINGS_THRUST=3 } Stabilization2SettingsElem;
    /* Number of elements for field Stabilization2Settings */
    static const unsigned int STABILIZATION2SETTINGS_NUMELEM = 4;
    // Field Stabilization3Settings information
    /* Enumeration options for field Stabilization3Settings */
    typedef enum { STABILIZATION3SETTINGS_MANUAL=0, STABILIZATION3SETTINGS_RATE=1, STABILIZATION3SETTINGS_ATTITUDE=2, STABILIZATION3SETTINGS_AXISLOCK=3, STABILIZATION3SETTINGS_WEAKLEVELING=4, STABILIZATION3SETTINGS_VIRTUALBAR=5, STABILIZATION3SETTINGS_ACRO=6, STABILIZATION3SETTINGS_RATTITUDE=7, STABILIZATION3SETTINGS_ALTITUDEHOLD=8, STABILIZATION3SETTINGS_ALTITUDEVARIO=9, STABILIZATION3SETTINGS_CRUISECONTROL=10 } Stabilization3SettingsOptions;
    /* Array element names for field Stabilization3Settings */
    typedef enum { STABILIZATION3SETTINGS_ROLL=0, STABILIZATION3SETTINGS_PITCH=1, STABILIZATION3SETTINGS_YAW=2, STABILIZATION3SETTINGS_THRUST=3 } Stabilization3SettingsElem;
    /* Number of elements for field Stabilization3Settings */
    static const unsigned int STABILIZATION3SETTINGS_NUMELEM = 4;
    // Field Stabilization4Settings information
    /* Enumeration options for field Stabilization4Settings */
    typedef enum { STABILIZATION4SETTINGS_MANUAL=0, STABILIZATION4SETTINGS_RATE=1, STABILIZATION4SETTINGS_ATTITUDE=2, STABILIZATION4SETTINGS_AXISLOCK=3, STABILIZATION4SETTINGS_WEAKLEVELING=4, STABILIZATION4SETTINGS_VIRTUALBAR=5, STABILIZATION4SETTINGS_ACRO=6, STABILIZATION4SETTINGS_RATTITUDE=7, STABILIZATION4SETTINGS_ALTITUDEHOLD=8, STABILIZATION4SETTINGS_ALTITUDEVARIO=9, STABILIZATION4SETTINGS_CRUISECONTROL=10 } Stabilization4SettingsOptions;
    /* Array element names for field Stabilization4Settings */
    typedef enum { STABILIZATION4SETTINGS_ROLL=0, STABILIZATION4SETTINGS_PITCH=1, STABILIZATION4SETTINGS_YAW=2, STABILIZATION4SETTINGS_THRUST=3 } Stabilization4SettingsElem;
    /* Number of elements for field Stabilization4Settings */
    static const unsigned int STABILIZATION4SETTINGS_NUMELEM = 4;
    // Field Stabilization5Settings information
    /* Enumeration options for field Stabilization5Settings */
    typedef enum { STABILIZATION5SETTINGS_MANUAL=0, STABILIZATION5SETTINGS_RATE=1, STABILIZATION5SETTINGS_ATTITUDE=2, STABILIZATION5SETTINGS_AXISLOCK=3, STABILIZATION5SETTINGS_WEAKLEVELING=4, STABILIZATION5SETTINGS_VIRTUALBAR=5, STABILIZATION5SETTINGS_ACRO=6, STABILIZATION5SETTINGS_RATTITUDE=7, STABILIZATION5SETTINGS_ALTITUDEHOLD=8, STABILIZATION5SETTINGS_ALTITUDEVARIO=9, STABILIZATION5SETTINGS_CRUISECONTROL=10 } Stabilization5SettingsOptions;
    /* Array element names for field Stabilization5Settings */
    typedef enum { STABILIZATION5SETTINGS_ROLL=0, STABILIZATION5SETTINGS_PITCH=1, STABILIZATION5SETTINGS_YAW=2, STABILIZATION5SETTINGS_THRUST=3 } Stabilization5SettingsElem;
    /* Number of elements for field Stabilization5Settings */
    static const unsigned int STABILIZATION5SETTINGS_NUMELEM = 4;
    // Field Stabilization6Settings information
    /* Enumeration options for field Stabilization6Settings */
    typedef enum { STABILIZATION6SETTINGS_MANUAL=0, STABILIZATION6SETTINGS_RATE=1, STABILIZATION6SETTINGS_ATTITUDE=2, STABILIZATION6SETTINGS_AXISLOCK=3, STABILIZATION6SETTINGS_WEAKLEVELING=4, STABILIZATION6SETTINGS_VIRTUALBAR=5, STABILIZATION6SETTINGS_ACRO=6, STABILIZATION6SETTINGS_RATTITUDE=7, STABILIZATION6SETTINGS_ALTITUDEHOLD=8, STABILIZATION6SETTINGS_ALTITUDEVARIO=9, STABILIZATION6SETTINGS_CRUISECONTROL=10 } Stabilization6SettingsOptions;
    /* Array element names for field Stabilization6Settings */
    typedef enum { STABILIZATION6SETTINGS_ROLL=0, STABILIZATION6SETTINGS_PITCH=1, STABILIZATION6SETTINGS_YAW=2, STABILIZATION6SETTINGS_THRUST=3 } Stabilization6SettingsElem;
    /* Number of elements for field Stabilization6Settings */
    static const unsigned int STABILIZATION6SETTINGS_NUMELEM = 4;
    // Field FlightModePosition information
    /* Enumeration options for field FlightModePosition */
    typedef enum { FLIGHTMODEPOSITION_MANUAL=0, FLIGHTMODEPOSITION_STABILIZED1=1, FLIGHTMODEPOSITION_STABILIZED2=2, FLIGHTMODEPOSITION_STABILIZED3=3, FLIGHTMODEPOSITION_STABILIZED4=4, FLIGHTMODEPOSITION_STABILIZED5=5, FLIGHTMODEPOSITION_STABILIZED6=6, FLIGHTMODEPOSITION_POSITIONHOLD=7, FLIGHTMODEPOSITION_COURSELOCK=8, FLIGHTMODEPOSITION_POSITIONROAM=9, FLIGHTMODEPOSITION_HOMELEASH=10, FLIGHTMODEPOSITION_ABSOLUTEPOSITION=11, FLIGHTMODEPOSITION_RETURNTOBASE=12, FLIGHTMODEPOSITION_LAND=13, FLIGHTMODEPOSITION_PATHPLANNER=14, FLIGHTMODEPOSITION_POI=15, FLIGHTMODEPOSITION_AUTOCRUISE=16 } FlightModePositionOptions;
    /* Number of elements for field FlightModePosition */
    static const unsigned int FLIGHTMODEPOSITION_NUMELEM = 6;
    // Field DisableSanityChecks information
    /* Enumeration options for field DisableSanityChecks */
    typedef enum { DISABLESANITYCHECKS_FALSE=0, DISABLESANITYCHECKS_TRUE=1 } DisableSanityChecksOptions;

  
    // Constants
    static const unsigned int NUMBYTES = sizeof(DataFieldsFlightModeSettings);

    // Functions
    FlightModeSettings(UAVObjManager* manager);
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
	
    static FlightModeSettings* GetInstance(UAVObjectManager* objMngr, unsigned int instID = 0);

    Q_INVOKABLE float getReturnToBaseAltitudeOffset() const;
    Q_INVOKABLE float getLandingVelocity() const;
    Q_INVOKABLE float getPositionHoldOffset(unsigned int index) const;
    Q_INVOKABLE float getVarioControlLowPassAlpha() const;
    Q_INVOKABLE unsigned short int getArmedTimeout() const;
    Q_INVOKABLE unsigned short int getArmingSequenceTime() const;
    Q_INVOKABLE unsigned short int getDisarmingSequenceTime() const;
    Q_INVOKABLE unsigned char getArming() const;
    Q_INVOKABLE unsigned char getStabilization1Settings(unsigned int index) const;
    Q_INVOKABLE unsigned char getStabilization2Settings(unsigned int index) const;
    Q_INVOKABLE unsigned char getStabilization3Settings(unsigned int index) const;
    Q_INVOKABLE unsigned char getStabilization4Settings(unsigned int index) const;
    Q_INVOKABLE unsigned char getStabilization5Settings(unsigned int index) const;
    Q_INVOKABLE unsigned char getStabilization6Settings(unsigned int index) const;
    Q_INVOKABLE unsigned char getFlightModePosition(unsigned int index) const;
    Q_INVOKABLE unsigned char getDisableSanityChecks() const;


public slots:
    void setReturnToBaseAltitudeOffset(float value);
    void setLandingVelocity(float value);
    void setPositionHoldOffset(unsigned int index, float value);
    void setVarioControlLowPassAlpha(float value);
    void setArmedTimeout(unsigned short int value);
    void setArmingSequenceTime(unsigned short int value);
    void setDisarmingSequenceTime(unsigned short int value);
    void setArming(unsigned char value);
    void setStabilization1Settings(unsigned int index, unsigned char value);
    void setStabilization2Settings(unsigned int index, unsigned char value);
    void setStabilization3Settings(unsigned int index, unsigned char value);
    void setStabilization4Settings(unsigned int index, unsigned char value);
    void setStabilization5Settings(unsigned int index, unsigned char value);
    void setStabilization6Settings(unsigned int index, unsigned char value);
    void setFlightModePosition(unsigned int index, unsigned char value);
    void setDisableSanityChecks(unsigned char value);


signals:
    void ReturnToBaseAltitudeOffsetChanged(float value);
    void LandingVelocityChanged(float value);
    void PositionHoldOffsetChanged(unsigned int index, float value);
    void VarioControlLowPassAlphaChanged(float value);
    void ArmedTimeoutChanged(unsigned short int value);
    void ArmingSequenceTimeChanged(unsigned short int value);
    void DisarmingSequenceTimeChanged(unsigned short int value);
    void ArmingChanged(unsigned char value);
    void Stabilization1SettingsChanged(unsigned int index, unsigned char value);
    void Stabilization2SettingsChanged(unsigned int index, unsigned char value);
    void Stabilization3SettingsChanged(unsigned int index, unsigned char value);
    void Stabilization4SettingsChanged(unsigned int index, unsigned char value);
    void Stabilization5SettingsChanged(unsigned int index, unsigned char value);
    void Stabilization6SettingsChanged(unsigned int index, unsigned char value);
    void FlightModePositionChanged(unsigned int index, unsigned char value);
    void DisableSanityChecksChanged(unsigned char value);


private slots:
    void emitNotifications();
	
private:
    DataFields data;

    void setDefaultFieldValues();*/

};

#endif // FLIGHTMODESETTINGS_H
