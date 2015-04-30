/**
 ******************************************************************************
 *
 * @file       flightstatus.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: flightstatus.xml. 
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
#ifndef FLIGHTSTATUS_H
#define FLIGHTSTATUS_H

#include <string>
#include <sstream>
#include <iostream>
#include <string.h>

#include "UAVObject.h"

    // Data Fields
typedef struct {
        unsigned char Armed;
        unsigned char FlightMode;
        unsigned char FlightModeAssist;
        unsigned char AssistedControlState;
        unsigned char AssistedThrottleState;
        unsigned char ControlChain[3];

} __attribute__((packed)) DataFieldsFlightStatus;

class FlightStatus: public UAVObject
{

public:
	int instance;
	DataFieldsFlightStatus dataFields;
	static int numInstances;

    // Field information
    // Field Armed information
    /* Enumeration options for field Armed */
    typedef enum { ARMED_DISARMED=0, ARMED_ARMING=1, ARMED_ARMED=2 } ArmedOptions;
    // Field FlightMode information
    /* Enumeration options for field FlightMode */
    typedef enum { FLIGHTMODE_MANUAL=0, FLIGHTMODE_STABILIZED1=1, FLIGHTMODE_STABILIZED2=2, FLIGHTMODE_STABILIZED3=3, FLIGHTMODE_STABILIZED4=4, FLIGHTMODE_STABILIZED5=5, FLIGHTMODE_STABILIZED6=6, FLIGHTMODE_POSITIONHOLD=7, FLIGHTMODE_COURSELOCK=8, FLIGHTMODE_POSITIONROAM=9, FLIGHTMODE_HOMELEASH=10, FLIGHTMODE_ABSOLUTEPOSITION=11, FLIGHTMODE_RETURNTOBASE=12, FLIGHTMODE_LAND=13, FLIGHTMODE_PATHPLANNER=14, FLIGHTMODE_POI=15, FLIGHTMODE_AUTOCRUISE=16 } FlightModeOptions;
    // Field FlightModeAssist information
    /* Enumeration options for field FlightModeAssist */
    typedef enum { FLIGHTMODEASSIST_NONE=0, FLIGHTMODEASSIST_GPSASSIST_PRIMARYTHRUST=1, FLIGHTMODEASSIST_GPSASSIST=2 } FlightModeAssistOptions;
    // Field AssistedControlState information
    /* Enumeration options for field AssistedControlState */
    typedef enum { ASSISTEDCONTROLSTATE_PRIMARY=0, ASSISTEDCONTROLSTATE_BRAKE=1, ASSISTEDCONTROLSTATE_HOLD=2 } AssistedControlStateOptions;
    // Field AssistedThrottleState information
    /* Enumeration options for field AssistedThrottleState */
    typedef enum { ASSISTEDTHROTTLESTATE_MANUAL=0, ASSISTEDTHROTTLESTATE_AUTO=1, ASSISTEDTHROTTLESTATE_AUTOOVERRIDE=2 } AssistedThrottleStateOptions;
    // Field ControlChain information
    /* Enumeration options for field ControlChain */
    typedef enum { CONTROLCHAIN_FALSE=0, CONTROLCHAIN_TRUE=1 } ControlChainOptions;
    /* Array element names for field ControlChain */
    typedef enum { CONTROLCHAIN_STABILIZATION=0, CONTROLCHAIN_PATHFOLLOWER=1, CONTROLCHAIN_PATHPLANNER=2 } ControlChainElem;
    /* Number of elements for field ControlChain */
    static const unsigned int CONTROLCHAIN_NUMELEM = 3;

  
    // Constants
    static const unsigned int NUMBYTES = sizeof(DataFieldsFlightStatus);

    // Functions
    FlightStatus(UAVObjManager* manager);
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
	
    static FlightStatus* GetInstance(UAVObjectManager* objMngr, unsigned int instID = 0);

    Q_INVOKABLE unsigned char getArmed() const;
    Q_INVOKABLE unsigned char getFlightMode() const;
    Q_INVOKABLE unsigned char getFlightModeAssist() const;
    Q_INVOKABLE unsigned char getAssistedControlState() const;
    Q_INVOKABLE unsigned char getAssistedThrottleState() const;
    Q_INVOKABLE unsigned char getControlChain(unsigned int index) const;


public slots:
    void setArmed(unsigned char value);
    void setFlightMode(unsigned char value);
    void setFlightModeAssist(unsigned char value);
    void setAssistedControlState(unsigned char value);
    void setAssistedThrottleState(unsigned char value);
    void setControlChain(unsigned int index, unsigned char value);


signals:
    void ArmedChanged(unsigned char value);
    void FlightModeChanged(unsigned char value);
    void FlightModeAssistChanged(unsigned char value);
    void AssistedControlStateChanged(unsigned char value);
    void AssistedThrottleStateChanged(unsigned char value);
    void ControlChainChanged(unsigned int index, unsigned char value);


private slots:
    void emitNotifications();
	
private:
    DataFields data;

    void setDefaultFieldValues();*/

};

#endif // FLIGHTSTATUS_H
