/**
 ******************************************************************************
 *
 * @file       auxmagsensor.cpp
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

#include "auxmagsensor.h"

int AuxMagSensor::numInstances = 0;

/**
 * Constructor
 */
AuxMagSensor::AuxMagSensor(UAVObjManager* manager): UAVObject(manager, 0x9B459A2, "AuxMagSensor", "Calibrated sensor data from aux 3 axis magnetometer in MilliGauss.", "Sensors", 1, 0, ACCESS_READWRITE, ACCESS_READWRITE, 0, 0, UPDATEMODE_PERIODIC, UPDATEMODE_MANUAL, 10000, 0, 0)
{

}

int AuxMagSensor::UAVObjSetDataField(const char *dataIn, const std::string fieldID){
	if(fieldID == "x") {
		memset( &(dataFields.x), 0, sizeof(dataFields.x));
		memcpy( &(dataFields.x), dataIn, sizeof(dataFields.x));
	} else if(fieldID == "y") {
		memset( &(dataFields.y), 0, sizeof(dataFields.y));
		memcpy( &(dataFields.y), dataIn, sizeof(dataFields.y));
	} else if(fieldID == "z") {
		memset( &(dataFields.z), 0, sizeof(dataFields.z));
		memcpy( &(dataFields.z), dataIn, sizeof(dataFields.z));
	} else if(fieldID == "Status") {
		memset( &(dataFields.Status), 0, sizeof(dataFields.Status));
		memcpy( &(dataFields.Status), dataIn, sizeof(dataFields.Status));
	}
	return 0;
}

int AuxMagSensor::UAVObjGetDataField(char *dataOut, const std::string fieldID){
	if(fieldID == "x") {
		memcpy( dataOut, &(dataFields.x), sizeof(dataFields.x));
	} else if(fieldID == "y") {
		memcpy( dataOut, &(dataFields.y), sizeof(dataFields.y));
	} else if(fieldID == "z") {
		memcpy( dataOut, &(dataFields.z), sizeof(dataFields.z));
	} else if(fieldID == "Status") {
		memcpy( dataOut, &(dataFields.Status), sizeof(dataFields.Status));
	}
	return 0;
}

int AuxMagSensor::UAVObjUnpack(const unsigned char *dataIn){
	memcpy(&dataFields, dataIn, NUMBYTES);
	return 0;
}

int AuxMagSensor::UAVObjPack(unsigned char *dataOut) {
	memcpy(dataOut, &dataFields, NUMBYTES);
	return 0;
}

unsigned short AuxMagSensor::UAVObjGetInstance() const {
	return instance;
}
unsigned short AuxMagSensor::UAVObjGetNumBytes() const {
	return sizeof(dataFields);
}
unsigned short AuxMagSensor::UAVObjGetNumInstances() const {
	return numInstances;
}

std::string AuxMagSensor::prettyPrint() {
	std::stringstream ss;
	ss << "\nPrinting object: auxmagsensor" << std::endl;
	ss << "\tx: " << dataFields.x << std::endl;
	ss << "\ty: " << dataFields.y << std::endl;
	ss << "\tz: " << dataFields.z << std::endl;
	ss << "\tStatus: " << dataFields.Status << std::endl;

	return ss.str();
}

/*/***/
/* * Initialize object fields with the default values.*/
/* * If a default value is not specified the object fields*/
/* * will be initialized to zero.*/
/* */
/*void AuxMagSensor::setDefaultFieldValues()*/
/*{*/
/*    data.Status = 0;
*/
/*}*/

/*/***/
/* * Get the object data fields*/
/* */
/*AuxMagSensor::DataFields AuxMagSensor::getData()*/
/*{*/
/*    QMutexLocker locker(mutex);*/
/*    return data;*/
/*}*/

/*/***/
/* * Set the object data fields*/
/* */
/*void AuxMagSensor::setData(const DataFields& data)*/
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

/*void AuxMagSensor::emitNotifications()*/
/*{*/
/*            //if (data.x != oldData.x)
            emit xChanged(data.x);
        //if (data.y != oldData.y)
            emit yChanged(data.y);
        //if (data.z != oldData.z)
            emit zChanged(data.z);
        //if (data.Status != oldData.Status)
            emit StatusChanged(data.Status);
*/
/*}*/

/*/***/
/* * Create a clone of this object, a new instance ID must be specified.*/
/* * Do not use this function directly to create new instances, the*/
/* * UAVObjectManager should be used instead.*/
/* */
/*UAVDataObject *AuxMagSensor::clone(unsigned int instID)*/
/*{*/
/*    AuxMagSensor *obj = new AuxMagSensor();*/
/*    obj->initialize(instID, this->getMetaObject());*/
/*    return obj;*/
/*}*/

/*/***/
/* * Create a clone of this object only to be used to retrieve defaults*/
/* */
/*UAVDataObject *AuxMagSensor::dirtyClone()*/
/*{*/
/*    AuxMagSensor *obj = new AuxMagSensor();*/
/*    return obj;*/
/*}*/

/*/***/
/* * Static function to retrieve an instance of the object.*/
/* */
/*AuxMagSensor *AuxMagSensor::GetInstance(UAVObjectManager *objMngr, unsigned int instID)*/
/*{*/
/*    return dynamic_cast<AuxMagSensor *>(objMngr->getObject(AuxMagSensor::OBJID, instID));*/
/*}*/

/*float AuxMagSensor::getx() const
{
   QMutexLocker locker(mutex);
   return data.x;
}
void AuxMagSensor::setx(float value)
{
   mutex->lock();
   bool changed = data.x != value;
   data.x = value;
   mutex->unlock();
   if (changed) emit xChanged(value);
}

float AuxMagSensor::gety() const
{
   QMutexLocker locker(mutex);
   return data.y;
}
void AuxMagSensor::sety(float value)
{
   mutex->lock();
   bool changed = data.y != value;
   data.y = value;
   mutex->unlock();
   if (changed) emit yChanged(value);
}

float AuxMagSensor::getz() const
{
   QMutexLocker locker(mutex);
   return data.z;
}
void AuxMagSensor::setz(float value)
{
   mutex->lock();
   bool changed = data.z != value;
   data.z = value;
   mutex->unlock();
   if (changed) emit zChanged(value);
}

unsigned char AuxMagSensor::getStatus() const
{
   QMutexLocker locker(mutex);
   return data.Status;
}
void AuxMagSensor::setStatus(unsigned char value)
{
   mutex->lock();
   bool changed = data.Status != value;
   data.Status = value;
   mutex->unlock();
   if (changed) emit StatusChanged(value);
}

*/
