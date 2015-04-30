/**
 ******************************************************************************
 *
 * @file       actuatordesired.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: actuatordesired.xml. 
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
#ifndef ACTUATORDESIRED_H
#define ACTUATORDESIRED_H

#include <string>
#include <sstream>
#include <iostream>
#include <string.h>

#include "UAVObject.h"

    // Data Fields
typedef struct {
        float Roll;
        float Pitch;
        float Yaw;
        float Thrust;
        float UpdateTime;
        float NumLongUpdates;

} __attribute__((packed)) DataFieldsActuatorDesired;

class ActuatorDesired: public UAVObject
{

public:
	int instance;
	DataFieldsActuatorDesired dataFields;
	static int numInstances;

    // Field information
    // Field Roll information
    // Field Pitch information
    // Field Yaw information
    // Field Thrust information
    // Field UpdateTime information
    // Field NumLongUpdates information

  
    // Constants
    static const unsigned int NUMBYTES = sizeof(DataFieldsActuatorDesired);

    // Functions
    ActuatorDesired(UAVObjManager* manager);
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
	
    static ActuatorDesired* GetInstance(UAVObjectManager* objMngr, unsigned int instID = 0);

    Q_INVOKABLE float getRoll() const;
    Q_INVOKABLE float getPitch() const;
    Q_INVOKABLE float getYaw() const;
    Q_INVOKABLE float getThrust() const;
    Q_INVOKABLE float getUpdateTime() const;
    Q_INVOKABLE float getNumLongUpdates() const;


public slots:
    void setRoll(float value);
    void setPitch(float value);
    void setYaw(float value);
    void setThrust(float value);
    void setUpdateTime(float value);
    void setNumLongUpdates(float value);


signals:
    void RollChanged(float value);
    void PitchChanged(float value);
    void YawChanged(float value);
    void ThrustChanged(float value);
    void UpdateTimeChanged(float value);
    void NumLongUpdatesChanged(float value);


private slots:
    void emitNotifications();
	
private:
    DataFields data;

    void setDefaultFieldValues();*/

};

#endif // ACTUATORDESIRED_H
