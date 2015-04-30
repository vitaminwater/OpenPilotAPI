/**
 ******************************************************************************
 *
 * @file       taskinfo.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: taskinfo.xml.
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

#include "taskinfo.h"

int TaskInfo::numInstances = 0;

/**
 * Constructor
 */
TaskInfo::TaskInfo(UAVObjManager* manager): UAVObject(manager, 0x7A28AFE8, "TaskInfo", "Task information", "System", 1, 0, ACCESS_READWRITE, ACCESS_READONLY, 0, 0, UPDATEMODE_PERIODIC, UPDATEMODE_ONCHANGE, 10000, 0, 0)
{

}

int TaskInfo::UAVObjSetDataField(const char *dataIn, const std::string fieldID){
	if(fieldID == "StackRemaining") {
		memset( &(dataFields.StackRemaining), 0, sizeof(dataFields.StackRemaining));
		memcpy( &(dataFields.StackRemaining), dataIn, sizeof(dataFields.StackRemaining));
	} else if(fieldID == "Running") {
		memset( &(dataFields.Running), 0, sizeof(dataFields.Running));
		memcpy( &(dataFields.Running), dataIn, sizeof(dataFields.Running));
	} else if(fieldID == "RunningTime") {
		memset( &(dataFields.RunningTime), 0, sizeof(dataFields.RunningTime));
		memcpy( &(dataFields.RunningTime), dataIn, sizeof(dataFields.RunningTime));
	}
	return 0;
}

int TaskInfo::UAVObjGetDataField(char *dataOut, const std::string fieldID){
	if(fieldID == "StackRemaining") {
		memcpy( dataOut, &(dataFields.StackRemaining), sizeof(dataFields.StackRemaining));
	} else if(fieldID == "Running") {
		memcpy( dataOut, &(dataFields.Running), sizeof(dataFields.Running));
	} else if(fieldID == "RunningTime") {
		memcpy( dataOut, &(dataFields.RunningTime), sizeof(dataFields.RunningTime));
	}
	return 0;
}

int TaskInfo::UAVObjUnpack(const unsigned char *dataIn){
	memcpy(&dataFields, dataIn, NUMBYTES);
	return 0;
}

int TaskInfo::UAVObjPack(unsigned char *dataOut) {
	memcpy(dataOut, &dataFields, NUMBYTES);
	return 0;
}

unsigned short TaskInfo::UAVObjGetInstance() const {
	return instance;
}
unsigned short TaskInfo::UAVObjGetNumBytes() const {
	return sizeof(dataFields);
}
unsigned short TaskInfo::UAVObjGetNumInstances() const {
	return numInstances;
}

std::string TaskInfo::prettyPrint() {
	std::stringstream ss;
	ss << "\nPrinting object: taskinfo" << std::endl;
	ss << "\tStackRemaining: " << dataFields.StackRemaining << std::endl;
	ss << "\tRunning: " << dataFields.Running << std::endl;
	ss << "\tRunningTime: " << dataFields.RunningTime << std::endl;

	return ss.str();
}

/*/***/
/* * Initialize object fields with the default values.*/
/* * If a default value is not specified the object fields*/
/* * will be initialized to zero.*/
/* */
/*void TaskInfo::setDefaultFieldValues()*/
/*{*/
/**/
/*}*/

/*/***/
/* * Get the object data fields*/
/* */
/*TaskInfo::DataFields TaskInfo::getData()*/
/*{*/
/*    QMutexLocker locker(mutex);*/
/*    return data;*/
/*}*/

/*/***/
/* * Set the object data fields*/
/* */
/*void TaskInfo::setData(const DataFields& data)*/
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

/*void TaskInfo::emitNotifications()*/
/*{*/
/*    */
/*}*/

/*/***/
/* * Create a clone of this object, a new instance ID must be specified.*/
/* * Do not use this function directly to create new instances, the*/
/* * UAVObjectManager should be used instead.*/
/* */
/*UAVDataObject *TaskInfo::clone(unsigned int instID)*/
/*{*/
/*    TaskInfo *obj = new TaskInfo();*/
/*    obj->initialize(instID, this->getMetaObject());*/
/*    return obj;*/
/*}*/

/*/***/
/* * Create a clone of this object only to be used to retrieve defaults*/
/* */
/*UAVDataObject *TaskInfo::dirtyClone()*/
/*{*/
/*    TaskInfo *obj = new TaskInfo();*/
/*    return obj;*/
/*}*/

/*/***/
/* * Static function to retrieve an instance of the object.*/
/* */
/*TaskInfo *TaskInfo::GetInstance(UAVObjectManager *objMngr, unsigned int instID)*/
/*{*/
/*    return dynamic_cast<TaskInfo *>(objMngr->getObject(TaskInfo::OBJID, instID));*/
/*}*/

/*unsigned short int TaskInfo::getStackRemaining(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.StackRemaining[index];
}
void TaskInfo::setStackRemaining(unsigned int index, unsigned short int value)
{
   mutex->lock();
   bool changed = data.StackRemaining[index] != value;
   data.StackRemaining[index] = value;
   mutex->unlock();
   if (changed) emit StackRemainingChanged(index,value);
}

unsigned char TaskInfo::getRunning(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.Running[index];
}
void TaskInfo::setRunning(unsigned int index, unsigned char value)
{
   mutex->lock();
   bool changed = data.Running[index] != value;
   data.Running[index] = value;
   mutex->unlock();
   if (changed) emit RunningChanged(index,value);
}

unsigned char TaskInfo::getRunningTime(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.RunningTime[index];
}
void TaskInfo::setRunningTime(unsigned int index, unsigned char value)
{
   mutex->lock();
   bool changed = data.RunningTime[index] != value;
   data.RunningTime[index] = value;
   mutex->unlock();
   if (changed) emit RunningTimeChanged(index,value);
}

*/
