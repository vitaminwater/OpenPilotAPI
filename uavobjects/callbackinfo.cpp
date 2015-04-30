/**
 ******************************************************************************
 *
 * @file       callbackinfo.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: callbackinfo.xml.
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

#include "callbackinfo.h"

int CallbackInfo::numInstances = 0;

/**
 * Constructor
 */
CallbackInfo::CallbackInfo(UAVObjManager* manager): UAVObject(manager, 0xB984C78C, "CallbackInfo", "Task information", "System", 1, 0, ACCESS_READWRITE, ACCESS_READONLY, 0, 0, UPDATEMODE_PERIODIC, UPDATEMODE_ONCHANGE, 10000, 0, 0)
{

}

int CallbackInfo::UAVObjSetDataField(const char *dataIn, const std::string fieldID){
	if(fieldID == "RunningTime") {
		memset( &(dataFields.RunningTime), 0, sizeof(dataFields.RunningTime));
		memcpy( &(dataFields.RunningTime), dataIn, sizeof(dataFields.RunningTime));
	} else if(fieldID == "StackRemaining") {
		memset( &(dataFields.StackRemaining), 0, sizeof(dataFields.StackRemaining));
		memcpy( &(dataFields.StackRemaining), dataIn, sizeof(dataFields.StackRemaining));
	} else if(fieldID == "Running") {
		memset( &(dataFields.Running), 0, sizeof(dataFields.Running));
		memcpy( &(dataFields.Running), dataIn, sizeof(dataFields.Running));
	}
	return 0;
}

int CallbackInfo::UAVObjGetDataField(char *dataOut, const std::string fieldID){
	if(fieldID == "RunningTime") {
		memcpy( dataOut, &(dataFields.RunningTime), sizeof(dataFields.RunningTime));
	} else if(fieldID == "StackRemaining") {
		memcpy( dataOut, &(dataFields.StackRemaining), sizeof(dataFields.StackRemaining));
	} else if(fieldID == "Running") {
		memcpy( dataOut, &(dataFields.Running), sizeof(dataFields.Running));
	}
	return 0;
}

int CallbackInfo::UAVObjUnpack(const unsigned char *dataIn){
	memcpy(&dataFields, dataIn, NUMBYTES);
	return 0;
}

int CallbackInfo::UAVObjPack(unsigned char *dataOut) {
	memcpy(dataOut, &dataFields, NUMBYTES);
	return 0;
}

unsigned short CallbackInfo::UAVObjGetInstance() const {
	return instance;
}
unsigned short CallbackInfo::UAVObjGetNumBytes() const {
	return sizeof(dataFields);
}
unsigned short CallbackInfo::UAVObjGetNumInstances() const {
	return numInstances;
}

std::string CallbackInfo::prettyPrint() {
	std::stringstream ss;
	ss << "\nPrinting object: callbackinfo" << std::endl;
	ss << "\tRunningTime: " << dataFields.RunningTime << std::endl;
	ss << "\tStackRemaining: " << dataFields.StackRemaining << std::endl;
	ss << "\tRunning: " << dataFields.Running << std::endl;

	return ss.str();
}

/*/***/
/* * Initialize object fields with the default values.*/
/* * If a default value is not specified the object fields*/
/* * will be initialized to zero.*/
/* */
/*void CallbackInfo::setDefaultFieldValues()*/
/*{*/
/**/
/*}*/

/*/***/
/* * Get the object data fields*/
/* */
/*CallbackInfo::DataFields CallbackInfo::getData()*/
/*{*/
/*    QMutexLocker locker(mutex);*/
/*    return data;*/
/*}*/

/*/***/
/* * Set the object data fields*/
/* */
/*void CallbackInfo::setData(const DataFields& data)*/
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

/*void CallbackInfo::emitNotifications()*/
/*{*/
/*    */
/*}*/

/*/***/
/* * Create a clone of this object, a new instance ID must be specified.*/
/* * Do not use this function directly to create new instances, the*/
/* * UAVObjectManager should be used instead.*/
/* */
/*UAVDataObject *CallbackInfo::clone(unsigned int instID)*/
/*{*/
/*    CallbackInfo *obj = new CallbackInfo();*/
/*    obj->initialize(instID, this->getMetaObject());*/
/*    return obj;*/
/*}*/

/*/***/
/* * Create a clone of this object only to be used to retrieve defaults*/
/* */
/*UAVDataObject *CallbackInfo::dirtyClone()*/
/*{*/
/*    CallbackInfo *obj = new CallbackInfo();*/
/*    return obj;*/
/*}*/

/*/***/
/* * Static function to retrieve an instance of the object.*/
/* */
/*CallbackInfo *CallbackInfo::GetInstance(UAVObjectManager *objMngr, unsigned int instID)*/
/*{*/
/*    return dynamic_cast<CallbackInfo *>(objMngr->getObject(CallbackInfo::OBJID, instID));*/
/*}*/

/*unsigned int CallbackInfo::getRunningTime(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.RunningTime[index];
}
void CallbackInfo::setRunningTime(unsigned int index, unsigned int value)
{
   mutex->lock();
   bool changed = data.RunningTime[index] != value;
   data.RunningTime[index] = value;
   mutex->unlock();
   if (changed) emit RunningTimeChanged(index,value);
}

short int CallbackInfo::getStackRemaining(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.StackRemaining[index];
}
void CallbackInfo::setStackRemaining(unsigned int index, short int value)
{
   mutex->lock();
   bool changed = data.StackRemaining[index] != value;
   data.StackRemaining[index] = value;
   mutex->unlock();
   if (changed) emit StackRemainingChanged(index,value);
}

unsigned char CallbackInfo::getRunning(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.Running[index];
}
void CallbackInfo::setRunning(unsigned int index, unsigned char value)
{
   mutex->lock();
   bool changed = data.Running[index] != value;
   data.Running[index] = value;
   mutex->unlock();
   if (changed) emit RunningChanged(index,value);
}

*/
