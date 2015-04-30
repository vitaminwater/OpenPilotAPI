/**
 ******************************************************************************
 *
 * @file       poilocation.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: poilocation.xml.
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

#include "poilocation.h"

int PoiLocation::numInstances = 0;

/**
 * Constructor
 */
PoiLocation::PoiLocation(UAVObjManager* manager): UAVObject(manager, 0x17E829B8, "PoiLocation", "Contains the current Point of interest relative to @ref HomeLocation", "Control", 1, 0, ACCESS_READWRITE, ACCESS_READWRITE, 0, 0, UPDATEMODE_PERIODIC, UPDATEMODE_MANUAL, 1000, 0, 0)
{

}

int PoiLocation::UAVObjSetDataField(const char *dataIn, const std::string fieldID){
	if(fieldID == "North") {
		memset( &(dataFields.North), 0, sizeof(dataFields.North));
		memcpy( &(dataFields.North), dataIn, sizeof(dataFields.North));
	} else if(fieldID == "East") {
		memset( &(dataFields.East), 0, sizeof(dataFields.East));
		memcpy( &(dataFields.East), dataIn, sizeof(dataFields.East));
	} else if(fieldID == "Down") {
		memset( &(dataFields.Down), 0, sizeof(dataFields.Down));
		memcpy( &(dataFields.Down), dataIn, sizeof(dataFields.Down));
	}
	return 0;
}

int PoiLocation::UAVObjGetDataField(char *dataOut, const std::string fieldID){
	if(fieldID == "North") {
		memcpy( dataOut, &(dataFields.North), sizeof(dataFields.North));
	} else if(fieldID == "East") {
		memcpy( dataOut, &(dataFields.East), sizeof(dataFields.East));
	} else if(fieldID == "Down") {
		memcpy( dataOut, &(dataFields.Down), sizeof(dataFields.Down));
	}
	return 0;
}

int PoiLocation::UAVObjUnpack(const unsigned char *dataIn){
	memcpy(&dataFields, dataIn, NUMBYTES);
	return 0;
}

int PoiLocation::UAVObjPack(unsigned char *dataOut) {
	memcpy(dataOut, &dataFields, NUMBYTES);
	return 0;
}

unsigned short PoiLocation::UAVObjGetInstance() const {
	return instance;
}
unsigned short PoiLocation::UAVObjGetNumBytes() const {
	return sizeof(dataFields);
}
unsigned short PoiLocation::UAVObjGetNumInstances() const {
	return numInstances;
}

std::string PoiLocation::prettyPrint() {
	std::stringstream ss;
	ss << "\nPrinting object: poilocation" << std::endl;
	ss << "\tNorth: " << dataFields.North << std::endl;
	ss << "\tEast: " << dataFields.East << std::endl;
	ss << "\tDown: " << dataFields.Down << std::endl;

	return ss.str();
}

/*/***/
/* * Initialize object fields with the default values.*/
/* * If a default value is not specified the object fields*/
/* * will be initialized to zero.*/
/* */
/*void PoiLocation::setDefaultFieldValues()*/
/*{*/
/**/
/*}*/

/*/***/
/* * Get the object data fields*/
/* */
/*PoiLocation::DataFields PoiLocation::getData()*/
/*{*/
/*    QMutexLocker locker(mutex);*/
/*    return data;*/
/*}*/

/*/***/
/* * Set the object data fields*/
/* */
/*void PoiLocation::setData(const DataFields& data)*/
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

/*void PoiLocation::emitNotifications()*/
/*{*/
/*            //if (data.North != oldData.North)
            emit NorthChanged(data.North);
        //if (data.East != oldData.East)
            emit EastChanged(data.East);
        //if (data.Down != oldData.Down)
            emit DownChanged(data.Down);
*/
/*}*/

/*/***/
/* * Create a clone of this object, a new instance ID must be specified.*/
/* * Do not use this function directly to create new instances, the*/
/* * UAVObjectManager should be used instead.*/
/* */
/*UAVDataObject *PoiLocation::clone(unsigned int instID)*/
/*{*/
/*    PoiLocation *obj = new PoiLocation();*/
/*    obj->initialize(instID, this->getMetaObject());*/
/*    return obj;*/
/*}*/

/*/***/
/* * Create a clone of this object only to be used to retrieve defaults*/
/* */
/*UAVDataObject *PoiLocation::dirtyClone()*/
/*{*/
/*    PoiLocation *obj = new PoiLocation();*/
/*    return obj;*/
/*}*/

/*/***/
/* * Static function to retrieve an instance of the object.*/
/* */
/*PoiLocation *PoiLocation::GetInstance(UAVObjectManager *objMngr, unsigned int instID)*/
/*{*/
/*    return dynamic_cast<PoiLocation *>(objMngr->getObject(PoiLocation::OBJID, instID));*/
/*}*/

/*float PoiLocation::getNorth() const
{
   QMutexLocker locker(mutex);
   return data.North;
}
void PoiLocation::setNorth(float value)
{
   mutex->lock();
   bool changed = data.North != value;
   data.North = value;
   mutex->unlock();
   if (changed) emit NorthChanged(value);
}

float PoiLocation::getEast() const
{
   QMutexLocker locker(mutex);
   return data.East;
}
void PoiLocation::setEast(float value)
{
   mutex->lock();
   bool changed = data.East != value;
   data.East = value;
   mutex->unlock();
   if (changed) emit EastChanged(value);
}

float PoiLocation::getDown() const
{
   QMutexLocker locker(mutex);
   return data.Down;
}
void PoiLocation::setDown(float value)
{
   mutex->lock();
   bool changed = data.Down != value;
   data.Down = value;
   mutex->unlock();
   if (changed) emit DownChanged(value);
}

*/
