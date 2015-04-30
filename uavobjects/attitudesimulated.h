/**
 ******************************************************************************
 *
 * @file       attitudesimulated.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: attitudesimulated.xml. 
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
#ifndef ATTITUDESIMULATED_H
#define ATTITUDESIMULATED_H

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
        float Velocity[3];
        float Position[3];

} __attribute__((packed)) DataFieldsAttitudeSimulated;

class AttitudeSimulated: public UAVObject
{

public:
	int instance;
	DataFieldsAttitudeSimulated dataFields;
	static int numInstances;

    // Field information
    // Field q1 information
    // Field q2 information
    // Field q3 information
    // Field q4 information
    // Field Roll information
    // Field Pitch information
    // Field Yaw information
    // Field Velocity information
    /* Array element names for field Velocity */
    typedef enum { VELOCITY_NORTH=0, VELOCITY_EAST=1, VELOCITY_DOWN=2 } VelocityElem;
    /* Number of elements for field Velocity */
    static const unsigned int VELOCITY_NUMELEM = 3;
    // Field Position information
    /* Array element names for field Position */
    typedef enum { POSITION_NORTH=0, POSITION_EAST=1, POSITION_DOWN=2 } PositionElem;
    /* Number of elements for field Position */
    static const unsigned int POSITION_NUMELEM = 3;

  
    // Constants
    static const unsigned int NUMBYTES = sizeof(DataFieldsAttitudeSimulated);

    // Functions
    AttitudeSimulated(UAVObjManager* manager);
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
	
    static AttitudeSimulated* GetInstance(UAVObjectManager* objMngr, unsigned int instID = 0);

    Q_INVOKABLE float getq1() const;
    Q_INVOKABLE float getq2() const;
    Q_INVOKABLE float getq3() const;
    Q_INVOKABLE float getq4() const;
    Q_INVOKABLE float getRoll() const;
    Q_INVOKABLE float getPitch() const;
    Q_INVOKABLE float getYaw() const;
    Q_INVOKABLE float getVelocity(unsigned int index) const;
    Q_INVOKABLE float getPosition(unsigned int index) const;


public slots:
    void setq1(float value);
    void setq2(float value);
    void setq3(float value);
    void setq4(float value);
    void setRoll(float value);
    void setPitch(float value);
    void setYaw(float value);
    void setVelocity(unsigned int index, float value);
    void setPosition(unsigned int index, float value);


signals:
    void q1Changed(float value);
    void q2Changed(float value);
    void q3Changed(float value);
    void q4Changed(float value);
    void RollChanged(float value);
    void PitchChanged(float value);
    void YawChanged(float value);
    void VelocityChanged(unsigned int index, float value);
    void PositionChanged(unsigned int index, float value);


private slots:
    void emitNotifications();
	
private:
    DataFields data;

    void setDefaultFieldValues();*/

};

#endif // ATTITUDESIMULATED_H
