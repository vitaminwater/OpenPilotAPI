/**
 ******************************************************************************
 *
 * @file       magsensor.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: magsensor.xml.
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

#include "magsensor.h"

int MagSensor::numInstances = 0;

/**
 * Constructor
 */
MagSensor::MagSensor(UAVObjManager* manager): UAVObject(manager, 0x70DAD456, "MagSensor", "Calibrated sensor data from 3 axis magnetometer in MilliGauss.", "Sensors", 1, 0, ACCESS_READWRITE, ACCESS_READWRITE, 0, 0, UPDATEMODE_PERIODIC, UPDATEMODE_MANUAL, 10000, 0, 0)
{

}

int MagSensor::UAVObjSetDataField(const char *dataIn, const std::string fieldID){
	if(fieldID == "x") {
		memset( &(dataFields.x), 0, sizeof(dataFields.x));
		memcpy( &(dataFields.x), dataIn, sizeof(dataFields.x));
	} else if(fieldID == "y") {
		memset( &(dataFields.y), 0, sizeof(dataFields.y));
		memcpy( &(dataFields.y), dataIn, sizeof(dataFields.y));
	} else if(fieldID == "z") {
		memset( &(dataFields.z), 0, sizeof(dataFields.z));
		memcpy( &(dataFields.z), dataIn, sizeof(dataFields.z));
	} else if(fieldID == "temperature") {
		memset( &(dataFields.temperature), 0, sizeof(dataFields.temperature));
		memcpy( &(dataFields.temperature), dataIn, sizeof(dataFields.temperature));
	}
	return 0;
}

int MagSensor::UAVObjGetDataField(char *dataOut, const std::string fieldID){
	if(fieldID == "x") {
		memcpy( dataOut, &(dataFields.x), sizeof(dataFields.x));
	} else if(fieldID == "y") {
		memcpy( dataOut, &(dataFields.y), sizeof(dataFields.y));
	} else if(fieldID == "z") {
		memcpy( dataOut, &(dataFields.z), sizeof(dataFields.z));
	} else if(fieldID == "temperature") {
		memcpy( dataOut, &(dataFields.temperature), sizeof(dataFields.temperature));
	}
	return 0;
}

int MagSensor::UAVObjUnpack(const unsigned char *dataIn){
	memcpy(&dataFields, dataIn, NUMBYTES);
	return 0;
}

int MagSensor::UAVObjPack(unsigned char *dataOut) {
	memcpy(dataOut, &dataFields, NUMBYTES);
	return 0;
}

unsigned short MagSensor::UAVObjGetInstance() const {
	return instance;
}
unsigned short MagSensor::UAVObjGetNumBytes() const {
	return sizeof(dataFields);
}
unsigned short MagSensor::UAVObjGetNumInstances() const {
	return numInstances;
}

std::string MagSensor::prettyPrint() {
	std::stringstream ss;
	ss << "\nPrinting object: magsensor" << std::endl;
	ss << "\tx: " << dataFields.x << std::endl;
	ss << "\ty: " << dataFields.y << std::endl;
	ss << "\tz: " << dataFields.z << std::endl;
	ss << "\ttemperature: " << dataFields.temperature << std::endl;

	return ss.str();
}

/*/***/
/* * Initialize object fields with the default values.*/
/* * If a default value is not specified the object fields*/
/* * will be initialized to zero.*/
/* */
/*void MagSensor::setDefaultFieldValues()*/
/*{*/
/**/
/*}*/

/*/***/
/* * Get the object data fields*/
/* */
/*MagSensor::DataFields MagSensor::getData()*/
/*{*/
/*    QMutexLocker locker(mutex);*/
/*    return data;*/
/*}*/

/*/***/
/* * Set the object data fields*/
/* */
/*void MagSensor::setData(const DataFields& data)*/
/*{*/
/*    QMutexLocker locker(mutex);*/
/*    // Get metadata*/
/*    Metadata mdata = getMetadata();*/
/*    // Update object if the access mode permits*/
/*    if (UAVObject::GetGcsAccess(mdata) == ACCESS_READWRITE) {*/
/*        this->data = data;*/
/*        emit objectUpdatedAuto(this); // trigger object updated event*/
/*        emit objectUpdated(this);*/
/*    }*/
/*}*/

/*void MagSensor::emitNotifications()*/
/*{*/
/*            //if (data.x != oldData.x)
            emit xChanged(data.x);
        //if (data.y != oldData.y)
            emit yChanged(data.y);
        //if (data.z != oldData.z)
            emit zChanged(data.z);
        //if (data.temperature != oldData.temperature)
            emit temperatureChanged(data.temperature);
*/
/*}*/

/*/***/
/* * Create a clone of this object, a new instance ID must be specified.*/
/* * Do not use this function directly to create new instances, the*/
/* * UAVObjectManager should be used instead.*/
/* */
/*UAVDataObject *MagSensor::clone(unsigned int instID)*/
/*{*/
/*    MagSensor *obj = new MagSensor();*/
/*    obj->initialize(instID, this->getMetaObject());*/
/*    return obj;*/
/*}*/

/*/***/
/* * Create a clone of this object only to be used to retrieve defaults*/
/* */
/*UAVDataObject *MagSensor::dirtyClone()*/
/*{*/
/*    MagSensor *obj = new MagSensor();*/
/*    return obj;*/
/*}*/

/*/***/
/* * Static function to retrieve an instance of the object.*/
/* */
/*MagSensor *MagSensor::GetInstance(UAVObjectManager *objMngr, unsigned int instID)*/
/*{*/
/*    return dynamic_cast<MagSensor *>(objMngr->getObject(MagSensor::OBJID, instID));*/
/*}*/

/*float MagSensor::getx() const
{
   QMutexLocker locker(mutex);
   return data.x;
}
void MagSensor::setx(float value)
{
   mutex->lock();
   bool changed = data.x != value;
   data.x = value;
   mutex->unlock();
   if (changed) emit xChanged(value);
}

float MagSensor::gety() const
{
   QMutexLocker locker(mutex);
   return data.y;
}
void MagSensor::sety(float value)
{
   mutex->lock();
   bool changed = data.y != value;
   data.y = value;
   mutex->unlock();
   if (changed) emit yChanged(value);
}

float MagSensor::getz() const
{
   QMutexLocker locker(mutex);
   return data.z;
}
void MagSensor::setz(float value)
{
   mutex->lock();
   bool changed = data.z != value;
   data.z = value;
   mutex->unlock();
   if (changed) emit zChanged(value);
}

float MagSensor::gettemperature() const
{
   QMutexLocker locker(mutex);
   return data.temperature;
}
void MagSensor::settemperature(float value)
{
   mutex->lock();
   bool changed = data.temperature != value;
   data.temperature = value;
   mutex->unlock();
   if (changed) emit temperatureChanged(value);
}

*/
