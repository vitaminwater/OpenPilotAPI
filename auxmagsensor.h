/**
 ******************************************************************************
 *
 * @file       auxmagsensor.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: auxmagsensor.xml. 
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
#ifndef AUXMAGSENSOR_H
#define AUXMAGSENSOR_H

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
        unsigned char Status;

} __attribute__((packed)) DataFieldsAuxMagSensor;

class AuxMagSensor: public UAVObject
{

public:
	int instance;
	DataFieldsAuxMagSensor dataFields;
	static int numInstances;

    // Field information
    // Field x information
    // Field y information
    // Field z information
    // Field Status information
    /* Enumeration options for field Status */
    typedef enum { STATUS_NONE=0, STATUS_OK=1 } StatusOptions;

  
    // Constants
    static const unsigned int NUMBYTES = sizeof(DataFieldsAuxMagSensor);

    // Functions
    AuxMagSensor(UAVObjManager* manager);
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
	
    static AuxMagSensor* GetInstance(UAVObjectManager* objMngr, unsigned int instID = 0);

    Q_INVOKABLE float getx() const;
    Q_INVOKABLE float gety() const;
    Q_INVOKABLE float getz() const;
    Q_INVOKABLE unsigned char getStatus() const;


public slots:
    void setx(float value);
    void sety(float value);
    void setz(float value);
    void setStatus(unsigned char value);


signals:
    void xChanged(float value);
    void yChanged(float value);
    void zChanged(float value);
    void StatusChanged(unsigned char value);


private slots:
    void emitNotifications();
	
private:
    DataFields data;

    void setDefaultFieldValues();*/

};

#endif // AUXMAGSENSOR_H
