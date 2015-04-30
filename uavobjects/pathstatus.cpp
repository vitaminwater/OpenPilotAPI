/**
 ******************************************************************************
 *
 * @file       pathstatus.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: pathstatus.xml.
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

#include "pathstatus.h"

int PathStatus::numInstances = 0;

/**
 * Constructor
 */
PathStatus::PathStatus(UAVObjManager* manager): UAVObject(manager, 0x65C06EB0, "PathStatus", "Status of the current path mode  Can come from any @ref PathFollower module", "Navigation", 1, 0, ACCESS_READWRITE, ACCESS_READWRITE, 0, 0, UPDATEMODE_PERIODIC, UPDATEMODE_MANUAL, 1000, 0, 0)
{

}

int PathStatus::UAVObjSetDataField(const char *dataIn, const std::string fieldID){
	if(fieldID == "fractional_progress") {
		memset( &(dataFields.fractional_progress), 0, sizeof(dataFields.fractional_progress));
		memcpy( &(dataFields.fractional_progress), dataIn, sizeof(dataFields.fractional_progress));
	} else if(fieldID == "error") {
		memset( &(dataFields.error), 0, sizeof(dataFields.error));
		memcpy( &(dataFields.error), dataIn, sizeof(dataFields.error));
	} else if(fieldID == "path_direction_north") {
		memset( &(dataFields.path_direction_north), 0, sizeof(dataFields.path_direction_north));
		memcpy( &(dataFields.path_direction_north), dataIn, sizeof(dataFields.path_direction_north));
	} else if(fieldID == "path_direction_east") {
		memset( &(dataFields.path_direction_east), 0, sizeof(dataFields.path_direction_east));
		memcpy( &(dataFields.path_direction_east), dataIn, sizeof(dataFields.path_direction_east));
	} else if(fieldID == "path_direction_down") {
		memset( &(dataFields.path_direction_down), 0, sizeof(dataFields.path_direction_down));
		memcpy( &(dataFields.path_direction_down), dataIn, sizeof(dataFields.path_direction_down));
	} else if(fieldID == "correction_direction_north") {
		memset( &(dataFields.correction_direction_north), 0, sizeof(dataFields.correction_direction_north));
		memcpy( &(dataFields.correction_direction_north), dataIn, sizeof(dataFields.correction_direction_north));
	} else if(fieldID == "correction_direction_east") {
		memset( &(dataFields.correction_direction_east), 0, sizeof(dataFields.correction_direction_east));
		memcpy( &(dataFields.correction_direction_east), dataIn, sizeof(dataFields.correction_direction_east));
	} else if(fieldID == "correction_direction_down") {
		memset( &(dataFields.correction_direction_down), 0, sizeof(dataFields.correction_direction_down));
		memcpy( &(dataFields.correction_direction_down), dataIn, sizeof(dataFields.correction_direction_down));
	} else if(fieldID == "path_time") {
		memset( &(dataFields.path_time), 0, sizeof(dataFields.path_time));
		memcpy( &(dataFields.path_time), dataIn, sizeof(dataFields.path_time));
	} else if(fieldID == "UID") {
		memset( &(dataFields.UID), 0, sizeof(dataFields.UID));
		memcpy( &(dataFields.UID), dataIn, sizeof(dataFields.UID));
	} else if(fieldID == "Status") {
		memset( &(dataFields.Status), 0, sizeof(dataFields.Status));
		memcpy( &(dataFields.Status), dataIn, sizeof(dataFields.Status));
	}
	return 0;
}

int PathStatus::UAVObjGetDataField(char *dataOut, const std::string fieldID){
	if(fieldID == "fractional_progress") {
		memcpy( dataOut, &(dataFields.fractional_progress), sizeof(dataFields.fractional_progress));
	} else if(fieldID == "error") {
		memcpy( dataOut, &(dataFields.error), sizeof(dataFields.error));
	} else if(fieldID == "path_direction_north") {
		memcpy( dataOut, &(dataFields.path_direction_north), sizeof(dataFields.path_direction_north));
	} else if(fieldID == "path_direction_east") {
		memcpy( dataOut, &(dataFields.path_direction_east), sizeof(dataFields.path_direction_east));
	} else if(fieldID == "path_direction_down") {
		memcpy( dataOut, &(dataFields.path_direction_down), sizeof(dataFields.path_direction_down));
	} else if(fieldID == "correction_direction_north") {
		memcpy( dataOut, &(dataFields.correction_direction_north), sizeof(dataFields.correction_direction_north));
	} else if(fieldID == "correction_direction_east") {
		memcpy( dataOut, &(dataFields.correction_direction_east), sizeof(dataFields.correction_direction_east));
	} else if(fieldID == "correction_direction_down") {
		memcpy( dataOut, &(dataFields.correction_direction_down), sizeof(dataFields.correction_direction_down));
	} else if(fieldID == "path_time") {
		memcpy( dataOut, &(dataFields.path_time), sizeof(dataFields.path_time));
	} else if(fieldID == "UID") {
		memcpy( dataOut, &(dataFields.UID), sizeof(dataFields.UID));
	} else if(fieldID == "Status") {
		memcpy( dataOut, &(dataFields.Status), sizeof(dataFields.Status));
	}
	return 0;
}

int PathStatus::UAVObjUnpack(const unsigned char *dataIn){
	memcpy(&dataFields, dataIn, NUMBYTES);
	return 0;
}

int PathStatus::UAVObjPack(unsigned char *dataOut) {
	memcpy(dataOut, &dataFields, NUMBYTES);
	return 0;
}

unsigned short PathStatus::UAVObjGetInstance() const {
	return instance;
}
unsigned short PathStatus::UAVObjGetNumBytes() const {
	return sizeof(dataFields);
}
unsigned short PathStatus::UAVObjGetNumInstances() const {
	return numInstances;
}

std::string PathStatus::prettyPrint() {
	std::stringstream ss;
	ss << "\nPrinting object: pathstatus" << std::endl;
	ss << "\tfractional_progress: " << dataFields.fractional_progress << std::endl;
	ss << "\terror: " << dataFields.error << std::endl;
	ss << "\tpath_direction_north: " << dataFields.path_direction_north << std::endl;
	ss << "\tpath_direction_east: " << dataFields.path_direction_east << std::endl;
	ss << "\tpath_direction_down: " << dataFields.path_direction_down << std::endl;
	ss << "\tcorrection_direction_north: " << dataFields.correction_direction_north << std::endl;
	ss << "\tcorrection_direction_east: " << dataFields.correction_direction_east << std::endl;
	ss << "\tcorrection_direction_down: " << dataFields.correction_direction_down << std::endl;
	ss << "\tpath_time: " << dataFields.path_time << std::endl;
	ss << "\tUID: " << dataFields.UID << std::endl;
	ss << "\tStatus: " << dataFields.Status << std::endl;

	return ss.str();
}

/*/***/
/* * Initialize object fields with the default values.*/
/* * If a default value is not specified the object fields*/
/* * will be initialized to zero.*/
/* */
/*void PathStatus::setDefaultFieldValues()*/
/*{*/
/**/
/*}*/

/*/***/
/* * Get the object data fields*/
/* */
/*PathStatus::DataFields PathStatus::getData()*/
/*{*/
/*    QMutexLocker locker(mutex);*/
/*    return data;*/
/*}*/

/*/***/
/* * Set the object data fields*/
/* */
/*void PathStatus::setData(const DataFields& data)*/
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

/*void PathStatus::emitNotifications()*/
/*{*/
/*            //if (data.fractional_progress != oldData.fractional_progress)
            emit fractional_progressChanged(data.fractional_progress);
        //if (data.error != oldData.error)
            emit errorChanged(data.error);
        //if (data.path_direction_north != oldData.path_direction_north)
            emit path_direction_northChanged(data.path_direction_north);
        //if (data.path_direction_east != oldData.path_direction_east)
            emit path_direction_eastChanged(data.path_direction_east);
        //if (data.path_direction_down != oldData.path_direction_down)
            emit path_direction_downChanged(data.path_direction_down);
        //if (data.correction_direction_north != oldData.correction_direction_north)
            emit correction_direction_northChanged(data.correction_direction_north);
        //if (data.correction_direction_east != oldData.correction_direction_east)
            emit correction_direction_eastChanged(data.correction_direction_east);
        //if (data.correction_direction_down != oldData.correction_direction_down)
            emit correction_direction_downChanged(data.correction_direction_down);
        //if (data.path_time != oldData.path_time)
            emit path_timeChanged(data.path_time);
        //if (data.UID != oldData.UID)
            emit UIDChanged(data.UID);
        //if (data.Status != oldData.Status)
            emit StatusChanged(data.Status);
*/
/*}*/

/*/***/
/* * Create a clone of this object, a new instance ID must be specified.*/
/* * Do not use this function directly to create new instances, the*/
/* * UAVObjectManager should be used instead.*/
/* */
/*UAVDataObject *PathStatus::clone(unsigned int instID)*/
/*{*/
/*    PathStatus *obj = new PathStatus();*/
/*    obj->initialize(instID, this->getMetaObject());*/
/*    return obj;*/
/*}*/

/*/***/
/* * Create a clone of this object only to be used to retrieve defaults*/
/* */
/*UAVDataObject *PathStatus::dirtyClone()*/
/*{*/
/*    PathStatus *obj = new PathStatus();*/
/*    return obj;*/
/*}*/

/*/***/
/* * Static function to retrieve an instance of the object.*/
/* */
/*PathStatus *PathStatus::GetInstance(UAVObjectManager *objMngr, unsigned int instID)*/
/*{*/
/*    return dynamic_cast<PathStatus *>(objMngr->getObject(PathStatus::OBJID, instID));*/
/*}*/

/*float PathStatus::getfractional_progress() const
{
   QMutexLocker locker(mutex);
   return data.fractional_progress;
}
void PathStatus::setfractional_progress(float value)
{
   mutex->lock();
   bool changed = data.fractional_progress != value;
   data.fractional_progress = value;
   mutex->unlock();
   if (changed) emit fractional_progressChanged(value);
}

float PathStatus::geterror() const
{
   QMutexLocker locker(mutex);
   return data.error;
}
void PathStatus::seterror(float value)
{
   mutex->lock();
   bool changed = data.error != value;
   data.error = value;
   mutex->unlock();
   if (changed) emit errorChanged(value);
}

float PathStatus::getpath_direction_north() const
{
   QMutexLocker locker(mutex);
   return data.path_direction_north;
}
void PathStatus::setpath_direction_north(float value)
{
   mutex->lock();
   bool changed = data.path_direction_north != value;
   data.path_direction_north = value;
   mutex->unlock();
   if (changed) emit path_direction_northChanged(value);
}

float PathStatus::getpath_direction_east() const
{
   QMutexLocker locker(mutex);
   return data.path_direction_east;
}
void PathStatus::setpath_direction_east(float value)
{
   mutex->lock();
   bool changed = data.path_direction_east != value;
   data.path_direction_east = value;
   mutex->unlock();
   if (changed) emit path_direction_eastChanged(value);
}

float PathStatus::getpath_direction_down() const
{
   QMutexLocker locker(mutex);
   return data.path_direction_down;
}
void PathStatus::setpath_direction_down(float value)
{
   mutex->lock();
   bool changed = data.path_direction_down != value;
   data.path_direction_down = value;
   mutex->unlock();
   if (changed) emit path_direction_downChanged(value);
}

float PathStatus::getcorrection_direction_north() const
{
   QMutexLocker locker(mutex);
   return data.correction_direction_north;
}
void PathStatus::setcorrection_direction_north(float value)
{
   mutex->lock();
   bool changed = data.correction_direction_north != value;
   data.correction_direction_north = value;
   mutex->unlock();
   if (changed) emit correction_direction_northChanged(value);
}

float PathStatus::getcorrection_direction_east() const
{
   QMutexLocker locker(mutex);
   return data.correction_direction_east;
}
void PathStatus::setcorrection_direction_east(float value)
{
   mutex->lock();
   bool changed = data.correction_direction_east != value;
   data.correction_direction_east = value;
   mutex->unlock();
   if (changed) emit correction_direction_eastChanged(value);
}

float PathStatus::getcorrection_direction_down() const
{
   QMutexLocker locker(mutex);
   return data.correction_direction_down;
}
void PathStatus::setcorrection_direction_down(float value)
{
   mutex->lock();
   bool changed = data.correction_direction_down != value;
   data.correction_direction_down = value;
   mutex->unlock();
   if (changed) emit correction_direction_downChanged(value);
}

float PathStatus::getpath_time() const
{
   QMutexLocker locker(mutex);
   return data.path_time;
}
void PathStatus::setpath_time(float value)
{
   mutex->lock();
   bool changed = data.path_time != value;
   data.path_time = value;
   mutex->unlock();
   if (changed) emit path_timeChanged(value);
}

short int PathStatus::getUID() const
{
   QMutexLocker locker(mutex);
   return data.UID;
}
void PathStatus::setUID(short int value)
{
   mutex->lock();
   bool changed = data.UID != value;
   data.UID = value;
   mutex->unlock();
   if (changed) emit UIDChanged(value);
}

unsigned char PathStatus::getStatus() const
{
   QMutexLocker locker(mutex);
   return data.Status;
}
void PathStatus::setStatus(unsigned char value)
{
   mutex->lock();
   bool changed = data.Status != value;
   data.Status = value;
   mutex->unlock();
   if (changed) emit StatusChanged(value);
}

*/
