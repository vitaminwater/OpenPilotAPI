/**
 ******************************************************************************
 *
 * @file       osdsettings.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: osdsettings.xml. 
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
#ifndef OSDSETTINGS_H
#define OSDSETTINGS_H

#include <string>
#include <sstream>
#include <iostream>
#include <string.h>

#include "UAVObject.h"

    // Data Fields
typedef struct {
        short int AttitudeSetup[2];
        short int TimeSetup[2];
        short int BatterySetup[2];
        short int SpeedSetup[2];
        short int AltitudeSetup[2];
        short int HeadingSetup[2];
        unsigned char Attitude;
        unsigned char Time;
        unsigned char Battery;
        unsigned char Speed;
        unsigned char Altitude;
        unsigned char Heading;
        unsigned char Screen;
        unsigned char White;
        unsigned char Black;
        unsigned char AltitudeSource;

} __attribute__((packed)) DataFieldsOsdSettings;

class OsdSettings: public UAVObject
{

public:
	int instance;
	DataFieldsOsdSettings dataFields;
	static int numInstances;

    // Field information
    // Field AttitudeSetup information
    /* Array element names for field AttitudeSetup */
    typedef enum { ATTITUDESETUP_X=0, ATTITUDESETUP_Y=1 } AttitudeSetupElem;
    /* Number of elements for field AttitudeSetup */
    static const unsigned int ATTITUDESETUP_NUMELEM = 2;
    // Field TimeSetup information
    /* Array element names for field TimeSetup */
    typedef enum { TIMESETUP_X=0, TIMESETUP_Y=1 } TimeSetupElem;
    /* Number of elements for field TimeSetup */
    static const unsigned int TIMESETUP_NUMELEM = 2;
    // Field BatterySetup information
    /* Array element names for field BatterySetup */
    typedef enum { BATTERYSETUP_X=0, BATTERYSETUP_Y=1 } BatterySetupElem;
    /* Number of elements for field BatterySetup */
    static const unsigned int BATTERYSETUP_NUMELEM = 2;
    // Field SpeedSetup information
    /* Array element names for field SpeedSetup */
    typedef enum { SPEEDSETUP_X=0, SPEEDSETUP_Y=1 } SpeedSetupElem;
    /* Number of elements for field SpeedSetup */
    static const unsigned int SPEEDSETUP_NUMELEM = 2;
    // Field AltitudeSetup information
    /* Array element names for field AltitudeSetup */
    typedef enum { ALTITUDESETUP_X=0, ALTITUDESETUP_Y=1 } AltitudeSetupElem;
    /* Number of elements for field AltitudeSetup */
    static const unsigned int ALTITUDESETUP_NUMELEM = 2;
    // Field HeadingSetup information
    /* Array element names for field HeadingSetup */
    typedef enum { HEADINGSETUP_X=0, HEADINGSETUP_Y=1 } HeadingSetupElem;
    /* Number of elements for field HeadingSetup */
    static const unsigned int HEADINGSETUP_NUMELEM = 2;
    // Field Attitude information
    /* Enumeration options for field Attitude */
    typedef enum { ATTITUDE_DISABLED=0, ATTITUDE_ENABLED=1 } AttitudeOptions;
    // Field Time information
    /* Enumeration options for field Time */
    typedef enum { TIME_DISABLED=0, TIME_ENABLED=1 } TimeOptions;
    // Field Battery information
    /* Enumeration options for field Battery */
    typedef enum { BATTERY_DISABLED=0, BATTERY_ENABLED=1 } BatteryOptions;
    // Field Speed information
    /* Enumeration options for field Speed */
    typedef enum { SPEED_DISABLED=0, SPEED_ENABLED=1 } SpeedOptions;
    // Field Altitude information
    /* Enumeration options for field Altitude */
    typedef enum { ALTITUDE_DISABLED=0, ALTITUDE_ENABLED=1 } AltitudeOptions;
    // Field Heading information
    /* Enumeration options for field Heading */
    typedef enum { HEADING_DISABLED=0, HEADING_ENABLED=1 } HeadingOptions;
    // Field Screen information
    // Field White information
    // Field Black information
    // Field AltitudeSource information
    /* Enumeration options for field AltitudeSource */
    typedef enum { ALTITUDESOURCE_GPS=0, ALTITUDESOURCE_BARO=1 } AltitudeSourceOptions;

  
    // Constants
    static const unsigned int NUMBYTES = sizeof(DataFieldsOsdSettings);

    // Functions
    OsdSettings(UAVObjManager* manager);
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
	
    static OsdSettings* GetInstance(UAVObjectManager* objMngr, unsigned int instID = 0);

    Q_INVOKABLE short int getAttitudeSetup(unsigned int index) const;
    Q_INVOKABLE short int getTimeSetup(unsigned int index) const;
    Q_INVOKABLE short int getBatterySetup(unsigned int index) const;
    Q_INVOKABLE short int getSpeedSetup(unsigned int index) const;
    Q_INVOKABLE short int getAltitudeSetup(unsigned int index) const;
    Q_INVOKABLE short int getHeadingSetup(unsigned int index) const;
    Q_INVOKABLE unsigned char getAttitude() const;
    Q_INVOKABLE unsigned char getTime() const;
    Q_INVOKABLE unsigned char getBattery() const;
    Q_INVOKABLE unsigned char getSpeed() const;
    Q_INVOKABLE unsigned char getAltitude() const;
    Q_INVOKABLE unsigned char getHeading() const;
    Q_INVOKABLE unsigned char getScreen() const;
    Q_INVOKABLE unsigned char getWhite() const;
    Q_INVOKABLE unsigned char getBlack() const;
    Q_INVOKABLE unsigned char getAltitudeSource() const;


public slots:
    void setAttitudeSetup(unsigned int index, short int value);
    void setTimeSetup(unsigned int index, short int value);
    void setBatterySetup(unsigned int index, short int value);
    void setSpeedSetup(unsigned int index, short int value);
    void setAltitudeSetup(unsigned int index, short int value);
    void setHeadingSetup(unsigned int index, short int value);
    void setAttitude(unsigned char value);
    void setTime(unsigned char value);
    void setBattery(unsigned char value);
    void setSpeed(unsigned char value);
    void setAltitude(unsigned char value);
    void setHeading(unsigned char value);
    void setScreen(unsigned char value);
    void setWhite(unsigned char value);
    void setBlack(unsigned char value);
    void setAltitudeSource(unsigned char value);


signals:
    void AttitudeSetupChanged(unsigned int index, short int value);
    void TimeSetupChanged(unsigned int index, short int value);
    void BatterySetupChanged(unsigned int index, short int value);
    void SpeedSetupChanged(unsigned int index, short int value);
    void AltitudeSetupChanged(unsigned int index, short int value);
    void HeadingSetupChanged(unsigned int index, short int value);
    void AttitudeChanged(unsigned char value);
    void TimeChanged(unsigned char value);
    void BatteryChanged(unsigned char value);
    void SpeedChanged(unsigned char value);
    void AltitudeChanged(unsigned char value);
    void HeadingChanged(unsigned char value);
    void ScreenChanged(unsigned char value);
    void WhiteChanged(unsigned char value);
    void BlackChanged(unsigned char value);
    void AltitudeSourceChanged(unsigned char value);


private slots:
    void emitNotifications();
	
private:
    DataFields data;

    void setDefaultFieldValues();*/

};

#endif // OSDSETTINGS_H
