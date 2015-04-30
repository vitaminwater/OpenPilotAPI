/**
 ******************************************************************************
 *
 * @file       callbackinfo.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: callbackinfo.xml. 
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
#ifndef CALLBACKINFO_H
#define CALLBACKINFO_H

#include <string>
#include <sstream>
#include <iostream>
#include <string.h>

#include "UAVObject.h"

    // Data Fields
typedef struct {
        unsigned int RunningTime[9];
        short int StackRemaining[9];
        unsigned char Running[9];

} __attribute__((packed)) DataFieldsCallbackInfo;

class CallbackInfo: public UAVObject
{

public:
	int instance;
	DataFieldsCallbackInfo dataFields;
	static int numInstances;

    // Field information
    // Field RunningTime information
    /* Array element names for field RunningTime */
    typedef enum { RUNNINGTIME_EVENTDISPATCHER=0, RUNNINGTIME_STATEESTIMATION=1, RUNNINGTIME_ALTITUDEHOLD=2, RUNNINGTIME_STABILIZATION0=3, RUNNINGTIME_STABILIZATION1=4, RUNNINGTIME_PATHFOLLOWER=5, RUNNINGTIME_PATHPLANNER0=6, RUNNINGTIME_PATHPLANNER1=7, RUNNINGTIME_MANUALCONTROL=8 } RunningTimeElem;
    /* Number of elements for field RunningTime */
    static const unsigned int RUNNINGTIME_NUMELEM = 9;
    // Field StackRemaining information
    /* Array element names for field StackRemaining */
    typedef enum { STACKREMAINING_EVENTDISPATCHER=0, STACKREMAINING_STATEESTIMATION=1, STACKREMAINING_ALTITUDEHOLD=2, STACKREMAINING_STABILIZATION0=3, STACKREMAINING_STABILIZATION1=4, STACKREMAINING_PATHFOLLOWER=5, STACKREMAINING_PATHPLANNER0=6, STACKREMAINING_PATHPLANNER1=7, STACKREMAINING_MANUALCONTROL=8 } StackRemainingElem;
    /* Number of elements for field StackRemaining */
    static const unsigned int STACKREMAINING_NUMELEM = 9;
    // Field Running information
    /* Enumeration options for field Running */
    typedef enum { RUNNING_FALSE=0, RUNNING_TRUE=1 } RunningOptions;
    /* Array element names for field Running */
    typedef enum { RUNNING_EVENTDISPATCHER=0, RUNNING_STATEESTIMATION=1, RUNNING_ALTITUDEHOLD=2, RUNNING_STABILIZATION0=3, RUNNING_STABILIZATION1=4, RUNNING_PATHFOLLOWER=5, RUNNING_PATHPLANNER0=6, RUNNING_PATHPLANNER1=7, RUNNING_MANUALCONTROL=8 } RunningElem;
    /* Number of elements for field Running */
    static const unsigned int RUNNING_NUMELEM = 9;

  
    // Constants
    static const unsigned int NUMBYTES = sizeof(DataFieldsCallbackInfo);

    // Functions
    CallbackInfo(UAVObjManager* manager);
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
	
    static CallbackInfo* GetInstance(UAVObjectManager* objMngr, unsigned int instID = 0);

    Q_INVOKABLE unsigned int getRunningTime(unsigned int index) const;
    Q_INVOKABLE short int getStackRemaining(unsigned int index) const;
    Q_INVOKABLE unsigned char getRunning(unsigned int index) const;


public slots:
    void setRunningTime(unsigned int index, unsigned int value);
    void setStackRemaining(unsigned int index, short int value);
    void setRunning(unsigned int index, unsigned char value);


signals:
    void RunningTimeChanged(unsigned int index, unsigned int value);
    void StackRemainingChanged(unsigned int index, short int value);
    void RunningChanged(unsigned int index, unsigned char value);


private slots:
    void emitNotifications();
	
private:
    DataFields data;

    void setDefaultFieldValues();*/

};

#endif // CALLBACKINFO_H
