/**
 ******************************************************************************
 *
 * @file       gyrosensor.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: gyrosensor.xml. 
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
#ifndef GYROSENSOR_H
#define GYROSENSOR_H

#include <string>
#include <sstream>
#include <iostream>
#include <string.h>

#include "UAVObject.h"

    // Data Fields
typedef struct {
        float x;
        float y;
        float z;
        float temperature;

} __attribute__((packed)) DataFieldsGyroSensor;

class GyroSensor: public UAVObject
{

public:
	int instance;
	DataFieldsGyroSensor dataFields;
	static int numInstances;

    // Field information
    // Field x information
    // Field y information
    // Field z information
    // Field temperature information

  
    // Constants
    static const unsigned int NUMBYTES = sizeof(DataFieldsGyroSensor);

    // Functions
    GyroSensor(UAVObjManager* manager);
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
	
    static GyroSensor* GetInstance(UAVObjectManager* objMngr, unsigned int instID = 0);

    Q_INVOKABLE float getx() const;
    Q_INVOKABLE float gety() const;
    Q_INVOKABLE float getz() const;
    Q_INVOKABLE float gettemperature() const;


public slots:
    void setx(float value);
    void sety(float value);
    void setz(float value);
    void settemperature(float value);


signals:
    void xChanged(float value);
    void yChanged(float value);
    void zChanged(float value);
    void temperatureChanged(float value);


private slots:
    void emitNotifications();
	
private:
    DataFields data;

    void setDefaultFieldValues();*/

};

#endif // GYROSENSOR_H
