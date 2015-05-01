/**
 ******************************************************************************
 *
 * @file       taskinfo.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: taskinfo.xml. 
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
#ifndef TASKINFO_H
#define TASKINFO_H

#include <string>
#include <sstream>
#include <iostream>
#include <string.h>

#include "UAVObject.h"

    // Data Fields
typedef struct {
        unsigned short int StackRemaining[21];
        unsigned char Running[21];
        unsigned char RunningTime[21];

} __attribute__((packed)) DataFieldsTaskInfo;

class TaskInfo: public UAVObject
{

public:
	int instance;
	DataFieldsTaskInfo dataFields;
	static int numInstances;

    // Field information
    // Field StackRemaining information
    /* Array element names for field StackRemaining */
    typedef enum { STACKREMAINING_SYSTEM=0, STACKREMAINING_CALLBACKSCHEDULER0=1, STACKREMAINING_CALLBACKSCHEDULER1=2, STACKREMAINING_CALLBACKSCHEDULER2=3, STACKREMAINING_CALLBACKSCHEDULER3=4, STACKREMAINING_RECEIVER=5, STACKREMAINING_STABILIZATION=6, STACKREMAINING_ACTUATOR=7, STACKREMAINING_SENSORS=8, STACKREMAINING_ATTITUDE=9, STACKREMAINING_ALTITUDE=10, STACKREMAINING_AIRSPEED=11, STACKREMAINING_MAGBARO=12, STACKREMAINING_FLIGHTPLAN=13, STACKREMAINING_TELEMETRYTX=14, STACKREMAINING_TELEMETRYRX=15, STACKREMAINING_RADIORX=16, STACKREMAINING_COM2USBBRIDGE=17, STACKREMAINING_USB2COMBRIDGE=18, STACKREMAINING_GPS=19, STACKREMAINING_OSDGEN=20 } StackRemainingElem;
    /* Number of elements for field StackRemaining */
    static const unsigned int STACKREMAINING_NUMELEM = 21;
    // Field Running information
    /* Enumeration options for field Running */
    typedef enum { RUNNING_FALSE=0, RUNNING_TRUE=1 } RunningOptions;
    /* Array element names for field Running */
    typedef enum { RUNNING_SYSTEM=0, RUNNING_CALLBACKSCHEDULER0=1, RUNNING_CALLBACKSCHEDULER1=2, RUNNING_CALLBACKSCHEDULER2=3, RUNNING_CALLBACKSCHEDULER3=4, RUNNING_RECEIVER=5, RUNNING_STABILIZATION=6, RUNNING_ACTUATOR=7, RUNNING_SENSORS=8, RUNNING_ATTITUDE=9, RUNNING_ALTITUDE=10, RUNNING_AIRSPEED=11, RUNNING_MAGBARO=12, RUNNING_FLIGHTPLAN=13, RUNNING_TELEMETRYTX=14, RUNNING_TELEMETRYRX=15, RUNNING_RADIORX=16, RUNNING_COM2USBBRIDGE=17, RUNNING_USB2COMBRIDGE=18, RUNNING_GPS=19, RUNNING_OSDGEN=20 } RunningElem;
    /* Number of elements for field Running */
    static const unsigned int RUNNING_NUMELEM = 21;
    // Field RunningTime information
    /* Array element names for field RunningTime */
    typedef enum { RUNNINGTIME_SYSTEM=0, RUNNINGTIME_CALLBACKSCHEDULER0=1, RUNNINGTIME_CALLBACKSCHEDULER1=2, RUNNINGTIME_CALLBACKSCHEDULER2=3, RUNNINGTIME_CALLBACKSCHEDULER3=4, RUNNINGTIME_RECEIVER=5, RUNNINGTIME_STABILIZATION=6, RUNNINGTIME_ACTUATOR=7, RUNNINGTIME_SENSORS=8, RUNNINGTIME_ATTITUDE=9, RUNNINGTIME_ALTITUDE=10, RUNNINGTIME_AIRSPEED=11, RUNNINGTIME_MAGBARO=12, RUNNINGTIME_FLIGHTPLAN=13, RUNNINGTIME_TELEMETRYTX=14, RUNNINGTIME_TELEMETRYRX=15, RUNNINGTIME_RADIORX=16, RUNNINGTIME_COM2USBBRIDGE=17, RUNNINGTIME_USB2COMBRIDGE=18, RUNNINGTIME_GPS=19, RUNNINGTIME_OSDGEN=20 } RunningTimeElem;
    /* Number of elements for field RunningTime */
    static const unsigned int RUNNINGTIME_NUMELEM = 21;

  
    // Constants
    static const unsigned int NUMBYTES = sizeof(DataFieldsTaskInfo);

    // Functions
    TaskInfo(UAVObjManager* manager);
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
	
    static TaskInfo* GetInstance(UAVObjectManager* objMngr, unsigned int instID = 0);

    Q_INVOKABLE unsigned short int getStackRemaining(unsigned int index) const;
    Q_INVOKABLE unsigned char getRunning(unsigned int index) const;
    Q_INVOKABLE unsigned char getRunningTime(unsigned int index) const;


public slots:
    void setStackRemaining(unsigned int index, unsigned short int value);
    void setRunning(unsigned int index, unsigned char value);
    void setRunningTime(unsigned int index, unsigned char value);


signals:
    void StackRemainingChanged(unsigned int index, unsigned short int value);
    void RunningChanged(unsigned int index, unsigned char value);
    void RunningTimeChanged(unsigned int index, unsigned char value);


private slots:
    void emitNotifications();
	
private:
    DataFields data;

    void setDefaultFieldValues();*/

};

#endif // TASKINFO_H
