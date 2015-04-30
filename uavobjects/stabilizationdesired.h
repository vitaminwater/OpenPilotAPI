/**
 ******************************************************************************
 *
 * @file       stabilizationdesired.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: stabilizationdesired.xml. 
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
#ifndef STABILIZATIONDESIRED_H
#define STABILIZATIONDESIRED_H

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
        unsigned char StabilizationMode[4];

} __attribute__((packed)) DataFieldsStabilizationDesired;

class StabilizationDesired: public UAVObject
{

public:
	int instance;
	DataFieldsStabilizationDesired dataFields;
	static int numInstances;

    // Field information
    // Field Roll information
    // Field Pitch information
    // Field Yaw information
    // Field Thrust information
    // Field StabilizationMode information
    /* Enumeration options for field StabilizationMode */
    typedef enum { STABILIZATIONMODE_MANUAL=0, STABILIZATIONMODE_RATE=1, STABILIZATIONMODE_ATTITUDE=2, STABILIZATIONMODE_AXISLOCK=3, STABILIZATIONMODE_WEAKLEVELING=4, STABILIZATIONMODE_VIRTUALBAR=5, STABILIZATIONMODE_ACRO=6, STABILIZATIONMODE_RATTITUDE=7, STABILIZATIONMODE_ALTITUDEHOLD=8, STABILIZATIONMODE_ALTITUDEVARIO=9, STABILIZATIONMODE_CRUISECONTROL=10 } StabilizationModeOptions;
    /* Array element names for field StabilizationMode */
    typedef enum { STABILIZATIONMODE_ROLL=0, STABILIZATIONMODE_PITCH=1, STABILIZATIONMODE_YAW=2, STABILIZATIONMODE_THRUST=3 } StabilizationModeElem;
    /* Number of elements for field StabilizationMode */
    static const unsigned int STABILIZATIONMODE_NUMELEM = 4;

  
    // Constants
    static const unsigned int NUMBYTES = sizeof(DataFieldsStabilizationDesired);

    // Functions
    StabilizationDesired(UAVObjManager* manager);
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
	
    static StabilizationDesired* GetInstance(UAVObjectManager* objMngr, unsigned int instID = 0);

    Q_INVOKABLE float getRoll() const;
    Q_INVOKABLE float getPitch() const;
    Q_INVOKABLE float getYaw() const;
    Q_INVOKABLE float getThrust() const;
    Q_INVOKABLE unsigned char getStabilizationMode(unsigned int index) const;


public slots:
    void setRoll(float value);
    void setPitch(float value);
    void setYaw(float value);
    void setThrust(float value);
    void setStabilizationMode(unsigned int index, unsigned char value);


signals:
    void RollChanged(float value);
    void PitchChanged(float value);
    void YawChanged(float value);
    void ThrustChanged(float value);
    void StabilizationModeChanged(unsigned int index, unsigned char value);


private slots:
    void emitNotifications();
	
private:
    DataFields data;

    void setDefaultFieldValues();*/

};

#endif // STABILIZATIONDESIRED_H
