/**
 ******************************************************************************
 *
 * @file       attitudestate.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: attitudestate.xml. 
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
#ifndef ATTITUDESTATE_H
#define ATTITUDESTATE_H

#include <string>
#include <sstream>
#include <iostream>
#include <string.h>

#include "UAVObject.h"

    // Data Fields
typedef struct {
        float q1;
        float q2;
        float q3;
        float q4;
        float Roll;
        float Pitch;
        float Yaw;

} __attribute__((packed)) DataFieldsAttitudeState;

class AttitudeState: public UAVObject
{

public:
	int instance;
	DataFieldsAttitudeState dataFields;
	static int numInstances;

    // Field information
    // Field q1 information
    // Field q2 information
    // Field q3 information
    // Field q4 information
    // Field Roll information
    // Field Pitch information
    // Field Yaw information

  
    // Constants
    static const unsigned int NUMBYTES = sizeof(DataFieldsAttitudeState);

    // Functions
    AttitudeState(UAVObjManager* manager);
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
	
    static AttitudeState* GetInstance(UAVObjectManager* objMngr, unsigned int instID = 0);

    Q_INVOKABLE float getq1() const;
    Q_INVOKABLE float getq2() const;
    Q_INVOKABLE float getq3() const;
    Q_INVOKABLE float getq4() const;
    Q_INVOKABLE float getRoll() const;
    Q_INVOKABLE float getPitch() const;
    Q_INVOKABLE float getYaw() const;


public slots:
    void setq1(float value);
    void setq2(float value);
    void setq3(float value);
    void setq4(float value);
    void setRoll(float value);
    void setPitch(float value);
    void setYaw(float value);


signals:
    void q1Changed(float value);
    void q2Changed(float value);
    void q3Changed(float value);
    void q4Changed(float value);
    void RollChanged(float value);
    void PitchChanged(float value);
    void YawChanged(float value);


private slots:
    void emitNotifications();
	
private:
    DataFields data;

    void setDefaultFieldValues();*/

};

#endif // ATTITUDESTATE_H
