/**
 ******************************************************************************
 *
 * @file       velocitydesired.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: velocitydesired.xml.
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

#include "velocitydesired.h"

int VelocityDesired::numInstances = 0;

/**
 * Constructor
 */
VelocityDesired::VelocityDesired(UAVObjManager* manager): UAVObject(manager, 0x9E946992, "VelocityDesired", "Used within @ref GuidanceModule to communicate between the task computing the desired velocity and the PID loop to achieve it (running at different rates).", "Control", 1, 0, ACCESS_READWRITE, ACCESS_READWRITE, 0, 0, UPDATEMODE_PERIODIC, UPDATEMODE_MANUAL, 1000, 0, 0)
{

}

int VelocityDesired::UAVObjSetDataField(const char *dataIn, const std::string fieldID){
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

int VelocityDesired::UAVObjGetDataField(char *dataOut, const std::string fieldID){
	if(fieldID == "North") {
		memcpy( dataOut, &(dataFields.North), sizeof(dataFields.North));
	} else if(fieldID == "East") {
		memcpy( dataOut, &(dataFields.East), sizeof(dataFields.East));
	} else if(fieldID == "Down") {
		memcpy( dataOut, &(dataFields.Down), sizeof(dataFields.Down));
	}
	return 0;
}

int VelocityDesired::UAVObjUnpack(const unsigned char *dataIn){
	memcpy(&dataFields, dataIn, NUMBYTES);
	return 0;
}

int VelocityDesired::UAVObjPack(unsigned char *dataOut) {
	memcpy(dataOut, &dataFields, NUMBYTES);
	return 0;
}

unsigned short VelocityDesired::UAVObjGetInstance() const {
	return instance;
}
unsigned short VelocityDesired::UAVObjGetNumBytes() const {
	return sizeof(dataFields);
}
unsigned short VelocityDesired::UAVObjGetNumInstances() const {
	return numInstances;
}

std::string VelocityDesired::prettyPrint() {
	std::stringstream ss;
	ss << "\nPrinting object: velocitydesired" << std::endl;
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
/*void VelocityDesired::setDefaultFieldValues()*/
/*{*/
/**/
/*}*/

/*/***/
/* * Get the object data fields*/
/* */
/*VelocityDesired::DataFields VelocityDesired::getData()*/
/*{*/
/*    QMutexLocker locker(mutex);*/
/*    return data;*/
/*}*/

/*/***/
/* * Set the object data fields*/
/* */
/*void VelocityDesired::setData(const DataFields& data)*/
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

/*void VelocityDesired::emitNotifications()*/
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
/*UAVDataObject *VelocityDesired::clone(unsigned int instID)*/
/*{*/
/*    VelocityDesired *obj = new VelocityDesired();*/
/*    obj->initialize(instID, this->getMetaObject());*/
/*    return obj;*/
/*}*/

/*/***/
/* * Create a clone of this object only to be used to retrieve defaults*/
/* */
/*UAVDataObject *VelocityDesired::dirtyClone()*/
/*{*/
/*    VelocityDesired *obj = new VelocityDesired();*/
/*    return obj;*/
/*}*/

/*/***/
/* * Static function to retrieve an instance of the object.*/
/* */
/*VelocityDesired *VelocityDesired::GetInstance(UAVObjectManager *objMngr, unsigned int instID)*/
/*{*/
/*    return dynamic_cast<VelocityDesired *>(objMngr->getObject(VelocityDesired::OBJID, instID));*/
/*}*/

/*float VelocityDesired::getNorth() const
{
   QMutexLocker locker(mutex);
   return data.North;
}
void VelocityDesired::setNorth(float value)
{
   mutex->lock();
   bool changed = data.North != value;
   data.North = value;
   mutex->unlock();
   if (changed) emit NorthChanged(value);
}

float VelocityDesired::getEast() const
{
   QMutexLocker locker(mutex);
   return data.East;
}
void VelocityDesired::setEast(float value)
{
   mutex->lock();
   bool changed = data.East != value;
   data.East = value;
   mutex->unlock();
   if (changed) emit EastChanged(value);
}

float VelocityDesired::getDown() const
{
   QMutexLocker locker(mutex);
   return data.Down;
}
void VelocityDesired::setDown(float value)
{
   mutex->lock();
   bool changed = data.Down != value;
   data.Down = value;
   mutex->unlock();
   if (changed) emit DownChanged(value);
}

*/
