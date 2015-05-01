/**
 ******************************************************************************
 *
 * @file       systemalarms.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: systemalarms.xml. 
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
#ifndef SYSTEMALARMS_H
#define SYSTEMALARMS_H

#include <string>
#include <sstream>
#include <iostream>
#include <string.h>

#include "UAVObject.h"

    // Data Fields
typedef struct {
        unsigned char Alarm[21];
        unsigned char ExtendedAlarmStatus[2];
        unsigned char ExtendedAlarmSubStatus[2];

} __attribute__((packed)) DataFieldsSystemAlarms;

class SystemAlarms: public UAVObject
{

public:
	int instance;
	DataFieldsSystemAlarms dataFields;
	static int numInstances;

    // Field information
    // Field Alarm information
    /* Enumeration options for field Alarm */
    typedef enum { ALARM_UNINITIALISED=0, ALARM_OK=1, ALARM_WARNING=2, ALARM_CRITICAL=3, ALARM_ERROR=4 } AlarmOptions;
    /* Array element names for field Alarm */
    typedef enum { ALARM_SYSTEMCONFIGURATION=0, ALARM_BOOTFAULT=1, ALARM_OUTOFMEMORY=2, ALARM_STACKOVERFLOW=3, ALARM_CPUOVERLOAD=4, ALARM_EVENTSYSTEM=5, ALARM_TELEMETRY=6, ALARM_RECEIVER=7, ALARM_MANUALCONTROL=8, ALARM_ACTUATOR=9, ALARM_ATTITUDE=10, ALARM_SENSORS=11, ALARM_MAGNETOMETER=12, ALARM_AIRSPEED=13, ALARM_STABILIZATION=14, ALARM_GUIDANCE=15, ALARM_PATHPLAN=16, ALARM_BATTERY=17, ALARM_FLIGHTTIME=18, ALARM_I2C=19, ALARM_GPS=20 } AlarmElem;
    /* Number of elements for field Alarm */
    static const unsigned int ALARM_NUMELEM = 21;
    // Field ExtendedAlarmStatus information
    /* Enumeration options for field ExtendedAlarmStatus */
    typedef enum { EXTENDEDALARMSTATUS_NONE=0, EXTENDEDALARMSTATUS_REBOOTREQUIRED=1, EXTENDEDALARMSTATUS_FLIGHTMODE=2, EXTENDEDALARMSTATUS_UNSUPPORTEDCONFIG_ONESHOT=3, EXTENDEDALARMSTATUS_BADTHROTTLEORCOLLECTIVEINPUTRANGE=4 } ExtendedAlarmStatusOptions;
    /* Array element names for field ExtendedAlarmStatus */
    typedef enum { EXTENDEDALARMSTATUS_SYSTEMCONFIGURATION=0, EXTENDEDALARMSTATUS_BOOTFAULT=1 } ExtendedAlarmStatusElem;
    /* Number of elements for field ExtendedAlarmStatus */
    static const unsigned int EXTENDEDALARMSTATUS_NUMELEM = 2;
    // Field ExtendedAlarmSubStatus information
    /* Array element names for field ExtendedAlarmSubStatus */
    typedef enum { EXTENDEDALARMSUBSTATUS_SYSTEMCONFIGURATION=0, EXTENDEDALARMSUBSTATUS_BOOTFAULT=1 } ExtendedAlarmSubStatusElem;
    /* Number of elements for field ExtendedAlarmSubStatus */
    static const unsigned int EXTENDEDALARMSUBSTATUS_NUMELEM = 2;

  
    // Constants
    static const unsigned int NUMBYTES = sizeof(DataFieldsSystemAlarms);

    // Functions
    SystemAlarms(UAVObjManager* manager);
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
	
    static SystemAlarms* GetInstance(UAVObjectManager* objMngr, unsigned int instID = 0);

    Q_INVOKABLE unsigned char getAlarm(unsigned int index) const;
    Q_INVOKABLE unsigned char getExtendedAlarmStatus(unsigned int index) const;
    Q_INVOKABLE unsigned char getExtendedAlarmSubStatus(unsigned int index) const;


public slots:
    void setAlarm(unsigned int index, unsigned char value);
    void setExtendedAlarmStatus(unsigned int index, unsigned char value);
    void setExtendedAlarmSubStatus(unsigned int index, unsigned char value);


signals:
    void AlarmChanged(unsigned int index, unsigned char value);
    void ExtendedAlarmStatusChanged(unsigned int index, unsigned char value);
    void ExtendedAlarmSubStatusChanged(unsigned int index, unsigned char value);


private slots:
    void emitNotifications();
	
private:
    DataFields data;

    void setDefaultFieldValues();*/

};

#endif // SYSTEMALARMS_H
