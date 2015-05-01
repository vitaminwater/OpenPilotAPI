/**
 ******************************************************************************
 *
 * @file       accelstate.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: accelstate.xml.
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

#include "accelstate.h"

int AccelState::numInstances = 0;

/**
 * Constructor
 */
AccelState::AccelState(UAVObjManager* manager): UAVObject(manager, 0xAD3C0E06, "AccelState", "The filtered acceleration data.", "State", 1, 0, ACCESS_READWRITE, ACCESS_READWRITE, 0, 0, UPDATEMODE_PERIODIC, UPDATEMODE_MANUAL, 1000, 0, 0)
{

}

int AccelState::UAVObjSetDataField(const char *dataIn, const std::string fieldID){
	if(fieldID == "x") {
		memset( &(dataFields.x), 0, sizeof(dataFields.x));
		memcpy( &(dataFields.x), dataIn, sizeof(dataFields.x));
	} else if(fieldID == "y") {
		memset( &(dataFields.y), 0, sizeof(dataFields.y));
		memcpy( &(dataFields.y), dataIn, sizeof(dataFields.y));
	} else if(fieldID == "z") {
		memset( &(dataFields.z), 0, sizeof(dataFields.z));
		memcpy( &(dataFields.z), dataIn, sizeof(dataFields.z));
	}
	return 0;
}

int AccelState::UAVObjGetDataField(char *dataOut, const std::string fieldID){
	if(fieldID == "x") {
		memcpy( dataOut, &(dataFields.x), sizeof(dataFields.x));
	} else if(fieldID == "y") {
		memcpy( dataOut, &(dataFields.y), sizeof(dataFields.y));
	} else if(fieldID == "z") {
		memcpy( dataOut, &(dataFields.z), sizeof(dataFields.z));
	}
	return 0;
}

int AccelState::UAVObjUnpack(const unsigned char *dataIn){
	memcpy(&dataFields, dataIn, NUMBYTES);
	return 0;
}

int AccelState::UAVObjPack(unsigned char *dataOut) {
	memcpy(dataOut, &dataFields, NUMBYTES);
	return 0;
}

unsigned short AccelState::UAVObjGetInstance() const {
	return instance;
}
unsigned short AccelState::UAVObjGetNumBytes() const {
	return sizeof(dataFields);
}
unsigned short AccelState::UAVObjGetNumInstances() const {
	return numInstances;
}

std::string AccelState::prettyPrint() {
	std::stringstream ss;
	ss << "\nPrinting object: accelstate" << std::endl;
	ss << "\tx: " << dataFields.x << std::endl;
	ss << "\ty: " << dataFields.y << std::endl;
	ss << "\tz: " << dataFields.z << std::endl;

	return ss.str();
}

/*/***/
/* * Initialize object fields with the default values.*/
/* * If a default value is not specified the object fields*/
/* * will be initialized to zero.*/
/* */
/*void AccelState::setDefaultFieldValues()*/
/*{*/
/**/
/*}*/

/*/***/
/* * Get the object data fields*/
/* */
/*AccelState::DataFields AccelState::getData()*/
/*{*/
/*    QMutexLocker locker(mutex);*/
/*    return data;*/
/*}*/

/*/***/
/* * Set the object data fields*/
/* */
/*void AccelState::setData(const DataFields& data)*/
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

/*void AccelState::emitNotifications()*/
/*{*/
/*            //if (data.x != oldData.x)
            emit xChanged(data.x);
        //if (data.y != oldData.y)
            emit yChanged(data.y);
        //if (data.z != oldData.z)
            emit zChanged(data.z);
*/
/*}*/

/*/***/
/* * Create a clone of this object, a new instance ID must be specified.*/
/* * Do not use this function directly to create new instances, the*/
/* * UAVObjectManager should be used instead.*/
/* */
/*UAVDataObject *AccelState::clone(unsigned int instID)*/
/*{*/
/*    AccelState *obj = new AccelState();*/
/*    obj->initialize(instID, this->getMetaObject());*/
/*    return obj;*/
/*}*/

/*/***/
/* * Create a clone of this object only to be used to retrieve defaults*/
/* */
/*UAVDataObject *AccelState::dirtyClone()*/
/*{*/
/*    AccelState *obj = new AccelState();*/
/*    return obj;*/
/*}*/

/*/***/
/* * Static function to retrieve an instance of the object.*/
/* */
/*AccelState *AccelState::GetInstance(UAVObjectManager *objMngr, unsigned int instID)*/
/*{*/
/*    return dynamic_cast<AccelState *>(objMngr->getObject(AccelState::OBJID, instID));*/
/*}*/

/*float AccelState::getx() const
{
   QMutexLocker locker(mutex);
   return data.x;
}
void AccelState::setx(float value)
{
   mutex->lock();
   bool changed = data.x != value;
   data.x = value;
   mutex->unlock();
   if (changed) emit xChanged(value);
}

float AccelState::gety() const
{
   QMutexLocker locker(mutex);
   return data.y;
}
void AccelState::sety(float value)
{
   mutex->lock();
   bool changed = data.y != value;
   data.y = value;
   mutex->unlock();
   if (changed) emit yChanged(value);
}

float AccelState::getz() const
{
   QMutexLocker locker(mutex);
   return data.z;
}
void AccelState::setz(float value)
{
   mutex->lock();
   bool changed = data.z != value;
   data.z = value;
   mutex->unlock();
   if (changed) emit zChanged(value);
}

*/
