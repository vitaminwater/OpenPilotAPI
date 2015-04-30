/**
 ******************************************************************************
 *
 * @file       pathsummary.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: pathsummary.xml.
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

#include "pathsummary.h"

int PathSummary::numInstances = 0;

/**
 * Constructor
 */
PathSummary::PathSummary(UAVObjManager* manager): UAVObject(manager, 0x1D325834, "PathSummary", "Summary of a completed path segment  Can come from any @ref PathFollower module", "Navigation", 1, 0, ACCESS_READWRITE, ACCESS_READWRITE, 0, 0, UPDATEMODE_PERIODIC, UPDATEMODE_MANUAL, 1000, 0, 0)
{

}

int PathSummary::UAVObjSetDataField(const char *dataIn, const std::string fieldID){
	if(fieldID == "brake_distance_offset") {
		memset( &(dataFields.brake_distance_offset), 0, sizeof(dataFields.brake_distance_offset));
		memcpy( &(dataFields.brake_distance_offset), dataIn, sizeof(dataFields.brake_distance_offset));
	} else if(fieldID == "time_remaining") {
		memset( &(dataFields.time_remaining), 0, sizeof(dataFields.time_remaining));
		memcpy( &(dataFields.time_remaining), dataIn, sizeof(dataFields.time_remaining));
	} else if(fieldID == "fractional_progress") {
		memset( &(dataFields.fractional_progress), 0, sizeof(dataFields.fractional_progress));
		memcpy( &(dataFields.fractional_progress), dataIn, sizeof(dataFields.fractional_progress));
	} else if(fieldID == "decelrate") {
		memset( &(dataFields.decelrate), 0, sizeof(dataFields.decelrate));
		memcpy( &(dataFields.decelrate), dataIn, sizeof(dataFields.decelrate));
	} else if(fieldID == "brakeRateActualDesiredRatio") {
		memset( &(dataFields.brakeRateActualDesiredRatio), 0, sizeof(dataFields.brakeRateActualDesiredRatio));
		memcpy( &(dataFields.brakeRateActualDesiredRatio), dataIn, sizeof(dataFields.brakeRateActualDesiredRatio));
	} else if(fieldID == "velocityIntoHold") {
		memset( &(dataFields.velocityIntoHold), 0, sizeof(dataFields.velocityIntoHold));
		memcpy( &(dataFields.velocityIntoHold), dataIn, sizeof(dataFields.velocityIntoHold));
	} else if(fieldID == "UID") {
		memset( &(dataFields.UID), 0, sizeof(dataFields.UID));
		memcpy( &(dataFields.UID), dataIn, sizeof(dataFields.UID));
	} else if(fieldID == "brake_exit_reason") {
		memset( &(dataFields.brake_exit_reason), 0, sizeof(dataFields.brake_exit_reason));
		memcpy( &(dataFields.brake_exit_reason), dataIn, sizeof(dataFields.brake_exit_reason));
	}
	return 0;
}

int PathSummary::UAVObjGetDataField(char *dataOut, const std::string fieldID){
	if(fieldID == "brake_distance_offset") {
		memcpy( dataOut, &(dataFields.brake_distance_offset), sizeof(dataFields.brake_distance_offset));
	} else if(fieldID == "time_remaining") {
		memcpy( dataOut, &(dataFields.time_remaining), sizeof(dataFields.time_remaining));
	} else if(fieldID == "fractional_progress") {
		memcpy( dataOut, &(dataFields.fractional_progress), sizeof(dataFields.fractional_progress));
	} else if(fieldID == "decelrate") {
		memcpy( dataOut, &(dataFields.decelrate), sizeof(dataFields.decelrate));
	} else if(fieldID == "brakeRateActualDesiredRatio") {
		memcpy( dataOut, &(dataFields.brakeRateActualDesiredRatio), sizeof(dataFields.brakeRateActualDesiredRatio));
	} else if(fieldID == "velocityIntoHold") {
		memcpy( dataOut, &(dataFields.velocityIntoHold), sizeof(dataFields.velocityIntoHold));
	} else if(fieldID == "UID") {
		memcpy( dataOut, &(dataFields.UID), sizeof(dataFields.UID));
	} else if(fieldID == "brake_exit_reason") {
		memcpy( dataOut, &(dataFields.brake_exit_reason), sizeof(dataFields.brake_exit_reason));
	}
	return 0;
}

int PathSummary::UAVObjUnpack(const unsigned char *dataIn){
	memcpy(&dataFields, dataIn, NUMBYTES);
	return 0;
}

int PathSummary::UAVObjPack(unsigned char *dataOut) {
	memcpy(dataOut, &dataFields, NUMBYTES);
	return 0;
}

unsigned short PathSummary::UAVObjGetInstance() const {
	return instance;
}
unsigned short PathSummary::UAVObjGetNumBytes() const {
	return sizeof(dataFields);
}
unsigned short PathSummary::UAVObjGetNumInstances() const {
	return numInstances;
}

std::string PathSummary::prettyPrint() {
	std::stringstream ss;
	ss << "\nPrinting object: pathsummary" << std::endl;
	ss << "\tbrake_distance_offset: " << dataFields.brake_distance_offset << std::endl;
	ss << "\ttime_remaining: " << dataFields.time_remaining << std::endl;
	ss << "\tfractional_progress: " << dataFields.fractional_progress << std::endl;
	ss << "\tdecelrate: " << dataFields.decelrate << std::endl;
	ss << "\tbrakeRateActualDesiredRatio: " << dataFields.brakeRateActualDesiredRatio << std::endl;
	ss << "\tvelocityIntoHold: " << dataFields.velocityIntoHold << std::endl;
	ss << "\tUID: " << dataFields.UID << std::endl;
	ss << "\tbrake_exit_reason: " << dataFields.brake_exit_reason << std::endl;

	return ss.str();
}

/*/***/
/* * Initialize object fields with the default values.*/
/* * If a default value is not specified the object fields*/
/* * will be initialized to zero.*/
/* */
/*void PathSummary::setDefaultFieldValues()*/
/*{*/
/**/
/*}*/

/*/***/
/* * Get the object data fields*/
/* */
/*PathSummary::DataFields PathSummary::getData()*/
/*{*/
/*    QMutexLocker locker(mutex);*/
/*    return data;*/
/*}*/

/*/***/
/* * Set the object data fields*/
/* */
/*void PathSummary::setData(const DataFields& data)*/
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

/*void PathSummary::emitNotifications()*/
/*{*/
/*            //if (data.brake_distance_offset != oldData.brake_distance_offset)
            emit brake_distance_offsetChanged(data.brake_distance_offset);
        //if (data.time_remaining != oldData.time_remaining)
            emit time_remainingChanged(data.time_remaining);
        //if (data.fractional_progress != oldData.fractional_progress)
            emit fractional_progressChanged(data.fractional_progress);
        //if (data.decelrate != oldData.decelrate)
            emit decelrateChanged(data.decelrate);
        //if (data.brakeRateActualDesiredRatio != oldData.brakeRateActualDesiredRatio)
            emit brakeRateActualDesiredRatioChanged(data.brakeRateActualDesiredRatio);
        //if (data.velocityIntoHold != oldData.velocityIntoHold)
            emit velocityIntoHoldChanged(data.velocityIntoHold);
        //if (data.UID != oldData.UID)
            emit UIDChanged(data.UID);
        //if (data.brake_exit_reason != oldData.brake_exit_reason)
            emit brake_exit_reasonChanged(data.brake_exit_reason);
*/
/*}*/

/*/***/
/* * Create a clone of this object, a new instance ID must be specified.*/
/* * Do not use this function directly to create new instances, the*/
/* * UAVObjectManager should be used instead.*/
/* */
/*UAVDataObject *PathSummary::clone(unsigned int instID)*/
/*{*/
/*    PathSummary *obj = new PathSummary();*/
/*    obj->initialize(instID, this->getMetaObject());*/
/*    return obj;*/
/*}*/

/*/***/
/* * Create a clone of this object only to be used to retrieve defaults*/
/* */
/*UAVDataObject *PathSummary::dirtyClone()*/
/*{*/
/*    PathSummary *obj = new PathSummary();*/
/*    return obj;*/
/*}*/

/*/***/
/* * Static function to retrieve an instance of the object.*/
/* */
/*PathSummary *PathSummary::GetInstance(UAVObjectManager *objMngr, unsigned int instID)*/
/*{*/
/*    return dynamic_cast<PathSummary *>(objMngr->getObject(PathSummary::OBJID, instID));*/
/*}*/

/*float PathSummary::getbrake_distance_offset() const
{
   QMutexLocker locker(mutex);
   return data.brake_distance_offset;
}
void PathSummary::setbrake_distance_offset(float value)
{
   mutex->lock();
   bool changed = data.brake_distance_offset != value;
   data.brake_distance_offset = value;
   mutex->unlock();
   if (changed) emit brake_distance_offsetChanged(value);
}

float PathSummary::gettime_remaining() const
{
   QMutexLocker locker(mutex);
   return data.time_remaining;
}
void PathSummary::settime_remaining(float value)
{
   mutex->lock();
   bool changed = data.time_remaining != value;
   data.time_remaining = value;
   mutex->unlock();
   if (changed) emit time_remainingChanged(value);
}

float PathSummary::getfractional_progress() const
{
   QMutexLocker locker(mutex);
   return data.fractional_progress;
}
void PathSummary::setfractional_progress(float value)
{
   mutex->lock();
   bool changed = data.fractional_progress != value;
   data.fractional_progress = value;
   mutex->unlock();
   if (changed) emit fractional_progressChanged(value);
}

float PathSummary::getdecelrate() const
{
   QMutexLocker locker(mutex);
   return data.decelrate;
}
void PathSummary::setdecelrate(float value)
{
   mutex->lock();
   bool changed = data.decelrate != value;
   data.decelrate = value;
   mutex->unlock();
   if (changed) emit decelrateChanged(value);
}

float PathSummary::getbrakeRateActualDesiredRatio() const
{
   QMutexLocker locker(mutex);
   return data.brakeRateActualDesiredRatio;
}
void PathSummary::setbrakeRateActualDesiredRatio(float value)
{
   mutex->lock();
   bool changed = data.brakeRateActualDesiredRatio != value;
   data.brakeRateActualDesiredRatio = value;
   mutex->unlock();
   if (changed) emit brakeRateActualDesiredRatioChanged(value);
}

float PathSummary::getvelocityIntoHold() const
{
   QMutexLocker locker(mutex);
   return data.velocityIntoHold;
}
void PathSummary::setvelocityIntoHold(float value)
{
   mutex->lock();
   bool changed = data.velocityIntoHold != value;
   data.velocityIntoHold = value;
   mutex->unlock();
   if (changed) emit velocityIntoHoldChanged(value);
}

short int PathSummary::getUID() const
{
   QMutexLocker locker(mutex);
   return data.UID;
}
void PathSummary::setUID(short int value)
{
   mutex->lock();
   bool changed = data.UID != value;
   data.UID = value;
   mutex->unlock();
   if (changed) emit UIDChanged(value);
}

unsigned char PathSummary::getbrake_exit_reason() const
{
   QMutexLocker locker(mutex);
   return data.brake_exit_reason;
}
void PathSummary::setbrake_exit_reason(unsigned char value)
{
   mutex->lock();
   bool changed = data.brake_exit_reason != value;
   data.brake_exit_reason = value;
   mutex->unlock();
   if (changed) emit brake_exit_reasonChanged(value);
}

*/
