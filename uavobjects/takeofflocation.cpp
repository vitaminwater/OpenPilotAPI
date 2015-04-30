/**
 ******************************************************************************
 *
 * @file       takeofflocation.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: takeofflocation.xml.
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

#include "takeofflocation.h"

int TakeOffLocation::numInstances = 0;

/**
 * Constructor
 */
TakeOffLocation::TakeOffLocation(UAVObjManager* manager): UAVObject(manager, 0xD292FDCC, "TakeOffLocation", "TakeOffLocation setting which contains the destination of a ReturnToBase operation", "Navigation", 1, 1, ACCESS_READWRITE, ACCESS_READWRITE, 1, 1, UPDATEMODE_ONCHANGE, UPDATEMODE_ONCHANGE, 0, 0, 0)
{

}

int TakeOffLocation::UAVObjSetDataField(const char *dataIn, const std::string fieldID){
	if(fieldID == "North") {
		memset( &(dataFields.North), 0, sizeof(dataFields.North));
		memcpy( &(dataFields.North), dataIn, sizeof(dataFields.North));
	} else if(fieldID == "East") {
		memset( &(dataFields.East), 0, sizeof(dataFields.East));
		memcpy( &(dataFields.East), dataIn, sizeof(dataFields.East));
	} else if(fieldID == "Down") {
		memset( &(dataFields.Down), 0, sizeof(dataFields.Down));
		memcpy( &(dataFields.Down), dataIn, sizeof(dataFields.Down));
	} else if(fieldID == "Mode") {
		memset( &(dataFields.Mode), 0, sizeof(dataFields.Mode));
		memcpy( &(dataFields.Mode), dataIn, sizeof(dataFields.Mode));
	} else if(fieldID == "Status") {
		memset( &(dataFields.Status), 0, sizeof(dataFields.Status));
		memcpy( &(dataFields.Status), dataIn, sizeof(dataFields.Status));
	}
	return 0;
}

int TakeOffLocation::UAVObjGetDataField(char *dataOut, const std::string fieldID){
	if(fieldID == "North") {
		memcpy( dataOut, &(dataFields.North), sizeof(dataFields.North));
	} else if(fieldID == "East") {
		memcpy( dataOut, &(dataFields.East), sizeof(dataFields.East));
	} else if(fieldID == "Down") {
		memcpy( dataOut, &(dataFields.Down), sizeof(dataFields.Down));
	} else if(fieldID == "Mode") {
		memcpy( dataOut, &(dataFields.Mode), sizeof(dataFields.Mode));
	} else if(fieldID == "Status") {
		memcpy( dataOut, &(dataFields.Status), sizeof(dataFields.Status));
	}
	return 0;
}

int TakeOffLocation::UAVObjUnpack(const unsigned char *dataIn){
	memcpy(&dataFields, dataIn, NUMBYTES);
	return 0;
}

int TakeOffLocation::UAVObjPack(unsigned char *dataOut) {
	memcpy(dataOut, &dataFields, NUMBYTES);
	return 0;
}

unsigned short TakeOffLocation::UAVObjGetInstance() const {
	return instance;
}
unsigned short TakeOffLocation::UAVObjGetNumBytes() const {
	return sizeof(dataFields);
}
unsigned short TakeOffLocation::UAVObjGetNumInstances() const {
	return numInstances;
}

std::string TakeOffLocation::prettyPrint() {
	std::stringstream ss;
	ss << "\nPrinting object: takeofflocation" << std::endl;
	ss << "\tNorth: " << dataFields.North << std::endl;
	ss << "\tEast: " << dataFields.East << std::endl;
	ss << "\tDown: " << dataFields.Down << std::endl;
	ss << "\tMode: " << dataFields.Mode << std::endl;
	ss << "\tStatus: " << dataFields.Status << std::endl;

	return ss.str();
}

/*/***/
/* * Initialize object fields with the default values.*/
/* * If a default value is not specified the object fields*/
/* * will be initialized to zero.*/
/* */
/*void TakeOffLocation::setDefaultFieldValues()*/
/*{*/
/*    data.North = 0;
    data.East = 0;
    data.Down = 0;
    data.Mode = 0;
    data.Status = 1;
*/
/*}*/

/*/***/
/* * Get the object data fields*/
/* */
/*TakeOffLocation::DataFields TakeOffLocation::getData()*/
/*{*/
/*    QMutexLocker locker(mutex);*/
/*    return data;*/
/*}*/

/*/***/
/* * Set the object data fields*/
/* */
/*void TakeOffLocation::setData(const DataFields& data)*/
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

/*void TakeOffLocation::emitNotifications()*/
/*{*/
/*            //if (data.North != oldData.North)
            emit NorthChanged(data.North);
        //if (data.East != oldData.East)
            emit EastChanged(data.East);
        //if (data.Down != oldData.Down)
            emit DownChanged(data.Down);
        //if (data.Mode != oldData.Mode)
            emit ModeChanged(data.Mode);
        //if (data.Status != oldData.Status)
            emit StatusChanged(data.Status);
*/
/*}*/

/*/***/
/* * Create a clone of this object, a new instance ID must be specified.*/
/* * Do not use this function directly to create new instances, the*/
/* * UAVObjectManager should be used instead.*/
/* */
/*UAVDataObject *TakeOffLocation::clone(unsigned int instID)*/
/*{*/
/*    TakeOffLocation *obj = new TakeOffLocation();*/
/*    obj->initialize(instID, this->getMetaObject());*/
/*    return obj;*/
/*}*/

/*/***/
/* * Create a clone of this object only to be used to retrieve defaults*/
/* */
/*UAVDataObject *TakeOffLocation::dirtyClone()*/
/*{*/
/*    TakeOffLocation *obj = new TakeOffLocation();*/
/*    return obj;*/
/*}*/

/*/***/
/* * Static function to retrieve an instance of the object.*/
/* */
/*TakeOffLocation *TakeOffLocation::GetInstance(UAVObjectManager *objMngr, unsigned int instID)*/
/*{*/
/*    return dynamic_cast<TakeOffLocation *>(objMngr->getObject(TakeOffLocation::OBJID, instID));*/
/*}*/

/*float TakeOffLocation::getNorth() const
{
   QMutexLocker locker(mutex);
   return data.North;
}
void TakeOffLocation::setNorth(float value)
{
   mutex->lock();
   bool changed = data.North != value;
   data.North = value;
   mutex->unlock();
   if (changed) emit NorthChanged(value);
}

float TakeOffLocation::getEast() const
{
   QMutexLocker locker(mutex);
   return data.East;
}
void TakeOffLocation::setEast(float value)
{
   mutex->lock();
   bool changed = data.East != value;
   data.East = value;
   mutex->unlock();
   if (changed) emit EastChanged(value);
}

float TakeOffLocation::getDown() const
{
   QMutexLocker locker(mutex);
   return data.Down;
}
void TakeOffLocation::setDown(float value)
{
   mutex->lock();
   bool changed = data.Down != value;
   data.Down = value;
   mutex->unlock();
   if (changed) emit DownChanged(value);
}

unsigned char TakeOffLocation::getMode() const
{
   QMutexLocker locker(mutex);
   return data.Mode;
}
void TakeOffLocation::setMode(unsigned char value)
{
   mutex->lock();
   bool changed = data.Mode != value;
   data.Mode = value;
   mutex->unlock();
   if (changed) emit ModeChanged(value);
}

unsigned char TakeOffLocation::getStatus() const
{
   QMutexLocker locker(mutex);
   return data.Status;
}
void TakeOffLocation::setStatus(unsigned char value)
{
   mutex->lock();
   bool changed = data.Status != value;
   data.Status = value;
   mutex->unlock();
   if (changed) emit StatusChanged(value);
}

*/
