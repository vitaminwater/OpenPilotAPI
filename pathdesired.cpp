/**
 ******************************************************************************
 *
 * @file       pathdesired.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: pathdesired.xml.
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

#include "pathdesired.h"

int PathDesired::numInstances = 0;

/**
 * Constructor
 */
PathDesired::PathDesired(UAVObjManager* manager): UAVObject(manager, 0x32DDD952, "PathDesired", "The endpoint or path the craft is trying to achieve.  Can come from @ref ManualControl or @ref PathPlanner ", "Navigation", 1, 0, ACCESS_READWRITE, ACCESS_READWRITE, 0, 0, UPDATEMODE_PERIODIC, UPDATEMODE_MANUAL, 1000, 0, 0)
{

}

int PathDesired::UAVObjSetDataField(const char *dataIn, const std::string fieldID){
	if(fieldID == "Start") {
		memset( &(dataFields.Start), 0, sizeof(dataFields.Start));
		memcpy( &(dataFields.Start), dataIn, sizeof(dataFields.Start));
	} else if(fieldID == "End") {
		memset( &(dataFields.End), 0, sizeof(dataFields.End));
		memcpy( &(dataFields.End), dataIn, sizeof(dataFields.End));
	} else if(fieldID == "StartingVelocity") {
		memset( &(dataFields.StartingVelocity), 0, sizeof(dataFields.StartingVelocity));
		memcpy( &(dataFields.StartingVelocity), dataIn, sizeof(dataFields.StartingVelocity));
	} else if(fieldID == "EndingVelocity") {
		memset( &(dataFields.EndingVelocity), 0, sizeof(dataFields.EndingVelocity));
		memcpy( &(dataFields.EndingVelocity), dataIn, sizeof(dataFields.EndingVelocity));
	} else if(fieldID == "ModeParameters") {
		memset( &(dataFields.ModeParameters), 0, sizeof(dataFields.ModeParameters));
		memcpy( &(dataFields.ModeParameters), dataIn, sizeof(dataFields.ModeParameters));
	} else if(fieldID == "UID") {
		memset( &(dataFields.UID), 0, sizeof(dataFields.UID));
		memcpy( &(dataFields.UID), dataIn, sizeof(dataFields.UID));
	} else if(fieldID == "Mode") {
		memset( &(dataFields.Mode), 0, sizeof(dataFields.Mode));
		memcpy( &(dataFields.Mode), dataIn, sizeof(dataFields.Mode));
	}
	return 0;
}

int PathDesired::UAVObjGetDataField(char *dataOut, const std::string fieldID){
	if(fieldID == "Start") {
		memcpy( dataOut, &(dataFields.Start), sizeof(dataFields.Start));
	} else if(fieldID == "End") {
		memcpy( dataOut, &(dataFields.End), sizeof(dataFields.End));
	} else if(fieldID == "StartingVelocity") {
		memcpy( dataOut, &(dataFields.StartingVelocity), sizeof(dataFields.StartingVelocity));
	} else if(fieldID == "EndingVelocity") {
		memcpy( dataOut, &(dataFields.EndingVelocity), sizeof(dataFields.EndingVelocity));
	} else if(fieldID == "ModeParameters") {
		memcpy( dataOut, &(dataFields.ModeParameters), sizeof(dataFields.ModeParameters));
	} else if(fieldID == "UID") {
		memcpy( dataOut, &(dataFields.UID), sizeof(dataFields.UID));
	} else if(fieldID == "Mode") {
		memcpy( dataOut, &(dataFields.Mode), sizeof(dataFields.Mode));
	}
	return 0;
}

int PathDesired::UAVObjUnpack(const unsigned char *dataIn){
	memcpy(&dataFields, dataIn, NUMBYTES);
	return 0;
}

int PathDesired::UAVObjPack(unsigned char *dataOut) {
	memcpy(dataOut, &dataFields, NUMBYTES);
	return 0;
}

unsigned short PathDesired::UAVObjGetInstance() const {
	return instance;
}
unsigned short PathDesired::UAVObjGetNumBytes() const {
	return sizeof(dataFields);
}
unsigned short PathDesired::UAVObjGetNumInstances() const {
	return numInstances;
}

std::string PathDesired::prettyPrint() {
	std::stringstream ss;
	ss << "\nPrinting object: pathdesired" << std::endl;
	ss << "\tStart: " << dataFields.Start << std::endl;
	ss << "\tEnd: " << dataFields.End << std::endl;
	ss << "\tStartingVelocity: " << dataFields.StartingVelocity << std::endl;
	ss << "\tEndingVelocity: " << dataFields.EndingVelocity << std::endl;
	ss << "\tModeParameters: " << dataFields.ModeParameters << std::endl;
	ss << "\tUID: " << dataFields.UID << std::endl;
	ss << "\tMode: " << dataFields.Mode << std::endl;

	return ss.str();
}

/*/***/
/* * Initialize object fields with the default values.*/
/* * If a default value is not specified the object fields*/
/* * will be initialized to zero.*/
/* */
/*void PathDesired::setDefaultFieldValues()*/
/*{*/
/**/
/*}*/

/*/***/
/* * Get the object data fields*/
/* */
/*PathDesired::DataFields PathDesired::getData()*/
/*{*/
/*    QMutexLocker locker(mutex);*/
/*    return data;*/
/*}*/

/*/***/
/* * Set the object data fields*/
/* */
/*void PathDesired::setData(const DataFields& data)*/
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

/*void PathDesired::emitNotifications()*/
/*{*/
/*            //if (data.StartingVelocity != oldData.StartingVelocity)
            emit StartingVelocityChanged(data.StartingVelocity);
        //if (data.EndingVelocity != oldData.EndingVelocity)
            emit EndingVelocityChanged(data.EndingVelocity);
        //if (data.UID != oldData.UID)
            emit UIDChanged(data.UID);
        //if (data.Mode != oldData.Mode)
            emit ModeChanged(data.Mode);
*/
/*}*/

/*/***/
/* * Create a clone of this object, a new instance ID must be specified.*/
/* * Do not use this function directly to create new instances, the*/
/* * UAVObjectManager should be used instead.*/
/* */
/*UAVDataObject *PathDesired::clone(unsigned int instID)*/
/*{*/
/*    PathDesired *obj = new PathDesired();*/
/*    obj->initialize(instID, this->getMetaObject());*/
/*    return obj;*/
/*}*/

/*/***/
/* * Create a clone of this object only to be used to retrieve defaults*/
/* */
/*UAVDataObject *PathDesired::dirtyClone()*/
/*{*/
/*    PathDesired *obj = new PathDesired();*/
/*    return obj;*/
/*}*/

/*/***/
/* * Static function to retrieve an instance of the object.*/
/* */
/*PathDesired *PathDesired::GetInstance(UAVObjectManager *objMngr, unsigned int instID)*/
/*{*/
/*    return dynamic_cast<PathDesired *>(objMngr->getObject(PathDesired::OBJID, instID));*/
/*}*/

/*float PathDesired::getStart(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.Start[index];
}
void PathDesired::setStart(unsigned int index, float value)
{
   mutex->lock();
   bool changed = data.Start[index] != value;
   data.Start[index] = value;
   mutex->unlock();
   if (changed) emit StartChanged(index,value);
}

float PathDesired::getEnd(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.End[index];
}
void PathDesired::setEnd(unsigned int index, float value)
{
   mutex->lock();
   bool changed = data.End[index] != value;
   data.End[index] = value;
   mutex->unlock();
   if (changed) emit EndChanged(index,value);
}

float PathDesired::getStartingVelocity() const
{
   QMutexLocker locker(mutex);
   return data.StartingVelocity;
}
void PathDesired::setStartingVelocity(float value)
{
   mutex->lock();
   bool changed = data.StartingVelocity != value;
   data.StartingVelocity = value;
   mutex->unlock();
   if (changed) emit StartingVelocityChanged(value);
}

float PathDesired::getEndingVelocity() const
{
   QMutexLocker locker(mutex);
   return data.EndingVelocity;
}
void PathDesired::setEndingVelocity(float value)
{
   mutex->lock();
   bool changed = data.EndingVelocity != value;
   data.EndingVelocity = value;
   mutex->unlock();
   if (changed) emit EndingVelocityChanged(value);
}

float PathDesired::getModeParameters(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.ModeParameters[index];
}
void PathDesired::setModeParameters(unsigned int index, float value)
{
   mutex->lock();
   bool changed = data.ModeParameters[index] != value;
   data.ModeParameters[index] = value;
   mutex->unlock();
   if (changed) emit ModeParametersChanged(index,value);
}

short int PathDesired::getUID() const
{
   QMutexLocker locker(mutex);
   return data.UID;
}
void PathDesired::setUID(short int value)
{
   mutex->lock();
   bool changed = data.UID != value;
   data.UID = value;
   mutex->unlock();
   if (changed) emit UIDChanged(value);
}

unsigned char PathDesired::getMode() const
{
   QMutexLocker locker(mutex);
   return data.Mode;
}
void PathDesired::setMode(unsigned char value)
{
   mutex->lock();
   bool changed = data.Mode != value;
   data.Mode = value;
   mutex->unlock();
   if (changed) emit ModeChanged(value);
}

*/
