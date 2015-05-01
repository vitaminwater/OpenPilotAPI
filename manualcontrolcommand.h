/**
 ******************************************************************************
 *
 * @file       manualcontrolcommand.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: manualcontrolcommand.xml. 
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
#ifndef MANUALCONTROLCOMMAND_H
#define MANUALCONTROLCOMMAND_H

#include <string>
#include <sstream>
#include <iostream>
#include <string.h>

#include "UAVObject.h"

    // Data Fields
typedef struct {
        float Throttle;
        float Roll;
        float Pitch;
        float Yaw;
        float Collective;
        float Thrust;
        unsigned short int Channel[9];
        unsigned char Connected;
        unsigned char FlightModeSwitchPosition;

} __attribute__((packed)) DataFieldsManualControlCommand;

class ManualControlCommand: public UAVObject
{

public:
	int instance;
	DataFieldsManualControlCommand dataFields;
	static int numInstances;

    // Field information
    // Field Throttle information
    // Field Roll information
    // Field Pitch information
    // Field Yaw information
    // Field Collective information
    // Field Thrust information
    // Field Channel information
    /* Number of elements for field Channel */
    static const unsigned int CHANNEL_NUMELEM = 9;
    // Field Connected information
    /* Enumeration options for field Connected */
    typedef enum { CONNECTED_FALSE=0, CONNECTED_TRUE=1 } ConnectedOptions;
    // Field FlightModeSwitchPosition information

  
    // Constants
    static const unsigned int NUMBYTES = sizeof(DataFieldsManualControlCommand);

    // Functions
    ManualControlCommand(UAVObjManager* manager);
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
	
    static ManualControlCommand* GetInstance(UAVObjectManager* objMngr, unsigned int instID = 0);

    Q_INVOKABLE float getThrottle() const;
    Q_INVOKABLE float getRoll() const;
    Q_INVOKABLE float getPitch() const;
    Q_INVOKABLE float getYaw() const;
    Q_INVOKABLE float getCollective() const;
    Q_INVOKABLE float getThrust() const;
    Q_INVOKABLE unsigned short int getChannel(unsigned int index) const;
    Q_INVOKABLE unsigned char getConnected() const;
    Q_INVOKABLE unsigned char getFlightModeSwitchPosition() const;


public slots:
    void setThrottle(float value);
    void setRoll(float value);
    void setPitch(float value);
    void setYaw(float value);
    void setCollective(float value);
    void setThrust(float value);
    void setChannel(unsigned int index, unsigned short int value);
    void setConnected(unsigned char value);
    void setFlightModeSwitchPosition(unsigned char value);


signals:
    void ThrottleChanged(float value);
    void RollChanged(float value);
    void PitchChanged(float value);
    void YawChanged(float value);
    void CollectiveChanged(float value);
    void ThrustChanged(float value);
    void ChannelChanged(unsigned int index, unsigned short int value);
    void ConnectedChanged(unsigned char value);
    void FlightModeSwitchPositionChanged(unsigned char value);


private slots:
    void emitNotifications();
	
private:
    DataFields data;

    void setDefaultFieldValues();*/

};

#endif // MANUALCONTROLCOMMAND_H
