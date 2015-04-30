/**
 ******************************************************************************
 *
 * @file       systemstats.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: systemstats.xml.
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

#include "systemstats.h"

int SystemStats::numInstances = 0;

/**
 * Constructor
 */
SystemStats::SystemStats(UAVObjManager* manager): UAVObject(manager, 0x40BFFEFC, "SystemStats", "CPU and memory usage from OpenPilot computer. ", "System", 1, 0, ACCESS_READWRITE, ACCESS_READWRITE, 0, 0, UPDATEMODE_PERIODIC, UPDATEMODE_MANUAL, 1000, 0, 0)
{

}

int SystemStats::UAVObjSetDataField(const char *dataIn, const std::string fieldID){
	if(fieldID == "FlightTime") {
		memset( &(dataFields.FlightTime), 0, sizeof(dataFields.FlightTime));
		memcpy( &(dataFields.FlightTime), dataIn, sizeof(dataFields.FlightTime));
	} else if(fieldID == "HeapRemaining") {
		memset( &(dataFields.HeapRemaining), 0, sizeof(dataFields.HeapRemaining));
		memcpy( &(dataFields.HeapRemaining), dataIn, sizeof(dataFields.HeapRemaining));
	} else if(fieldID == "EventSystemWarningID") {
		memset( &(dataFields.EventSystemWarningID), 0, sizeof(dataFields.EventSystemWarningID));
		memcpy( &(dataFields.EventSystemWarningID), dataIn, sizeof(dataFields.EventSystemWarningID));
	} else if(fieldID == "ObjectManagerCallbackID") {
		memset( &(dataFields.ObjectManagerCallbackID), 0, sizeof(dataFields.ObjectManagerCallbackID));
		memcpy( &(dataFields.ObjectManagerCallbackID), dataIn, sizeof(dataFields.ObjectManagerCallbackID));
	} else if(fieldID == "ObjectManagerQueueID") {
		memset( &(dataFields.ObjectManagerQueueID), 0, sizeof(dataFields.ObjectManagerQueueID));
		memcpy( &(dataFields.ObjectManagerQueueID), dataIn, sizeof(dataFields.ObjectManagerQueueID));
	} else if(fieldID == "IRQStackRemaining") {
		memset( &(dataFields.IRQStackRemaining), 0, sizeof(dataFields.IRQStackRemaining));
		memcpy( &(dataFields.IRQStackRemaining), dataIn, sizeof(dataFields.IRQStackRemaining));
	} else if(fieldID == "SystemModStackRemaining") {
		memset( &(dataFields.SystemModStackRemaining), 0, sizeof(dataFields.SystemModStackRemaining));
		memcpy( &(dataFields.SystemModStackRemaining), dataIn, sizeof(dataFields.SystemModStackRemaining));
	} else if(fieldID == "SysSlotsFree") {
		memset( &(dataFields.SysSlotsFree), 0, sizeof(dataFields.SysSlotsFree));
		memcpy( &(dataFields.SysSlotsFree), dataIn, sizeof(dataFields.SysSlotsFree));
	} else if(fieldID == "SysSlotsActive") {
		memset( &(dataFields.SysSlotsActive), 0, sizeof(dataFields.SysSlotsActive));
		memcpy( &(dataFields.SysSlotsActive), dataIn, sizeof(dataFields.SysSlotsActive));
	} else if(fieldID == "UsrSlotsFree") {
		memset( &(dataFields.UsrSlotsFree), 0, sizeof(dataFields.UsrSlotsFree));
		memcpy( &(dataFields.UsrSlotsFree), dataIn, sizeof(dataFields.UsrSlotsFree));
	} else if(fieldID == "UsrSlotsActive") {
		memset( &(dataFields.UsrSlotsActive), 0, sizeof(dataFields.UsrSlotsActive));
		memcpy( &(dataFields.UsrSlotsActive), dataIn, sizeof(dataFields.UsrSlotsActive));
	} else if(fieldID == "CPULoad") {
		memset( &(dataFields.CPULoad), 0, sizeof(dataFields.CPULoad));
		memcpy( &(dataFields.CPULoad), dataIn, sizeof(dataFields.CPULoad));
	} else if(fieldID == "CPUTemp") {
		memset( &(dataFields.CPUTemp), 0, sizeof(dataFields.CPUTemp));
		memcpy( &(dataFields.CPUTemp), dataIn, sizeof(dataFields.CPUTemp));
	}
	return 0;
}

int SystemStats::UAVObjGetDataField(char *dataOut, const std::string fieldID){
	if(fieldID == "FlightTime") {
		memcpy( dataOut, &(dataFields.FlightTime), sizeof(dataFields.FlightTime));
	} else if(fieldID == "HeapRemaining") {
		memcpy( dataOut, &(dataFields.HeapRemaining), sizeof(dataFields.HeapRemaining));
	} else if(fieldID == "EventSystemWarningID") {
		memcpy( dataOut, &(dataFields.EventSystemWarningID), sizeof(dataFields.EventSystemWarningID));
	} else if(fieldID == "ObjectManagerCallbackID") {
		memcpy( dataOut, &(dataFields.ObjectManagerCallbackID), sizeof(dataFields.ObjectManagerCallbackID));
	} else if(fieldID == "ObjectManagerQueueID") {
		memcpy( dataOut, &(dataFields.ObjectManagerQueueID), sizeof(dataFields.ObjectManagerQueueID));
	} else if(fieldID == "IRQStackRemaining") {
		memcpy( dataOut, &(dataFields.IRQStackRemaining), sizeof(dataFields.IRQStackRemaining));
	} else if(fieldID == "SystemModStackRemaining") {
		memcpy( dataOut, &(dataFields.SystemModStackRemaining), sizeof(dataFields.SystemModStackRemaining));
	} else if(fieldID == "SysSlotsFree") {
		memcpy( dataOut, &(dataFields.SysSlotsFree), sizeof(dataFields.SysSlotsFree));
	} else if(fieldID == "SysSlotsActive") {
		memcpy( dataOut, &(dataFields.SysSlotsActive), sizeof(dataFields.SysSlotsActive));
	} else if(fieldID == "UsrSlotsFree") {
		memcpy( dataOut, &(dataFields.UsrSlotsFree), sizeof(dataFields.UsrSlotsFree));
	} else if(fieldID == "UsrSlotsActive") {
		memcpy( dataOut, &(dataFields.UsrSlotsActive), sizeof(dataFields.UsrSlotsActive));
	} else if(fieldID == "CPULoad") {
		memcpy( dataOut, &(dataFields.CPULoad), sizeof(dataFields.CPULoad));
	} else if(fieldID == "CPUTemp") {
		memcpy( dataOut, &(dataFields.CPUTemp), sizeof(dataFields.CPUTemp));
	}
	return 0;
}

int SystemStats::UAVObjUnpack(const unsigned char *dataIn){
	memcpy(&dataFields, dataIn, NUMBYTES);
	return 0;
}

int SystemStats::UAVObjPack(unsigned char *dataOut) {
	memcpy(dataOut, &dataFields, NUMBYTES);
	return 0;
}

unsigned short SystemStats::UAVObjGetInstance() const {
	return instance;
}
unsigned short SystemStats::UAVObjGetNumBytes() const {
	return sizeof(dataFields);
}
unsigned short SystemStats::UAVObjGetNumInstances() const {
	return numInstances;
}

std::string SystemStats::prettyPrint() {
	std::stringstream ss;
	ss << "\nPrinting object: systemstats" << std::endl;
	ss << "\tFlightTime: " << dataFields.FlightTime << std::endl;
	ss << "\tHeapRemaining: " << dataFields.HeapRemaining << std::endl;
	ss << "\tEventSystemWarningID: " << dataFields.EventSystemWarningID << std::endl;
	ss << "\tObjectManagerCallbackID: " << dataFields.ObjectManagerCallbackID << std::endl;
	ss << "\tObjectManagerQueueID: " << dataFields.ObjectManagerQueueID << std::endl;
	ss << "\tIRQStackRemaining: " << dataFields.IRQStackRemaining << std::endl;
	ss << "\tSystemModStackRemaining: " << dataFields.SystemModStackRemaining << std::endl;
	ss << "\tSysSlotsFree: " << dataFields.SysSlotsFree << std::endl;
	ss << "\tSysSlotsActive: " << dataFields.SysSlotsActive << std::endl;
	ss << "\tUsrSlotsFree: " << dataFields.UsrSlotsFree << std::endl;
	ss << "\tUsrSlotsActive: " << dataFields.UsrSlotsActive << std::endl;
	ss << "\tCPULoad: " << dataFields.CPULoad << std::endl;
	ss << "\tCPUTemp: " << dataFields.CPUTemp << std::endl;

	return ss.str();
}

/*/***/
/* * Initialize object fields with the default values.*/
/* * If a default value is not specified the object fields*/
/* * will be initialized to zero.*/
/* */
/*void SystemStats::setDefaultFieldValues()*/
/*{*/
/**/
/*}*/

/*/***/
/* * Get the object data fields*/
/* */
/*SystemStats::DataFields SystemStats::getData()*/
/*{*/
/*    QMutexLocker locker(mutex);*/
/*    return data;*/
/*}*/

/*/***/
/* * Set the object data fields*/
/* */
/*void SystemStats::setData(const DataFields& data)*/
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

/*void SystemStats::emitNotifications()*/
/*{*/
/*            //if (data.FlightTime != oldData.FlightTime)
            emit FlightTimeChanged(data.FlightTime);
        //if (data.HeapRemaining != oldData.HeapRemaining)
            emit HeapRemainingChanged(data.HeapRemaining);
        //if (data.EventSystemWarningID != oldData.EventSystemWarningID)
            emit EventSystemWarningIDChanged(data.EventSystemWarningID);
        //if (data.ObjectManagerCallbackID != oldData.ObjectManagerCallbackID)
            emit ObjectManagerCallbackIDChanged(data.ObjectManagerCallbackID);
        //if (data.ObjectManagerQueueID != oldData.ObjectManagerQueueID)
            emit ObjectManagerQueueIDChanged(data.ObjectManagerQueueID);
        //if (data.IRQStackRemaining != oldData.IRQStackRemaining)
            emit IRQStackRemainingChanged(data.IRQStackRemaining);
        //if (data.SystemModStackRemaining != oldData.SystemModStackRemaining)
            emit SystemModStackRemainingChanged(data.SystemModStackRemaining);
        //if (data.SysSlotsFree != oldData.SysSlotsFree)
            emit SysSlotsFreeChanged(data.SysSlotsFree);
        //if (data.SysSlotsActive != oldData.SysSlotsActive)
            emit SysSlotsActiveChanged(data.SysSlotsActive);
        //if (data.UsrSlotsFree != oldData.UsrSlotsFree)
            emit UsrSlotsFreeChanged(data.UsrSlotsFree);
        //if (data.UsrSlotsActive != oldData.UsrSlotsActive)
            emit UsrSlotsActiveChanged(data.UsrSlotsActive);
        //if (data.CPULoad != oldData.CPULoad)
            emit CPULoadChanged(data.CPULoad);
        //if (data.CPUTemp != oldData.CPUTemp)
            emit CPUTempChanged(data.CPUTemp);
*/
/*}*/

/*/***/
/* * Create a clone of this object, a new instance ID must be specified.*/
/* * Do not use this function directly to create new instances, the*/
/* * UAVObjectManager should be used instead.*/
/* */
/*UAVDataObject *SystemStats::clone(unsigned int instID)*/
/*{*/
/*    SystemStats *obj = new SystemStats();*/
/*    obj->initialize(instID, this->getMetaObject());*/
/*    return obj;*/
/*}*/

/*/***/
/* * Create a clone of this object only to be used to retrieve defaults*/
/* */
/*UAVDataObject *SystemStats::dirtyClone()*/
/*{*/
/*    SystemStats *obj = new SystemStats();*/
/*    return obj;*/
/*}*/

/*/***/
/* * Static function to retrieve an instance of the object.*/
/* */
/*SystemStats *SystemStats::GetInstance(UAVObjectManager *objMngr, unsigned int instID)*/
/*{*/
/*    return dynamic_cast<SystemStats *>(objMngr->getObject(SystemStats::OBJID, instID));*/
/*}*/

/*unsigned int SystemStats::getFlightTime() const
{
   QMutexLocker locker(mutex);
   return data.FlightTime;
}
void SystemStats::setFlightTime(unsigned int value)
{
   mutex->lock();
   bool changed = data.FlightTime != value;
   data.FlightTime = value;
   mutex->unlock();
   if (changed) emit FlightTimeChanged(value);
}

unsigned int SystemStats::getHeapRemaining() const
{
   QMutexLocker locker(mutex);
   return data.HeapRemaining;
}
void SystemStats::setHeapRemaining(unsigned int value)
{
   mutex->lock();
   bool changed = data.HeapRemaining != value;
   data.HeapRemaining = value;
   mutex->unlock();
   if (changed) emit HeapRemainingChanged(value);
}

unsigned int SystemStats::getEventSystemWarningID() const
{
   QMutexLocker locker(mutex);
   return data.EventSystemWarningID;
}
void SystemStats::setEventSystemWarningID(unsigned int value)
{
   mutex->lock();
   bool changed = data.EventSystemWarningID != value;
   data.EventSystemWarningID = value;
   mutex->unlock();
   if (changed) emit EventSystemWarningIDChanged(value);
}

unsigned int SystemStats::getObjectManagerCallbackID() const
{
   QMutexLocker locker(mutex);
   return data.ObjectManagerCallbackID;
}
void SystemStats::setObjectManagerCallbackID(unsigned int value)
{
   mutex->lock();
   bool changed = data.ObjectManagerCallbackID != value;
   data.ObjectManagerCallbackID = value;
   mutex->unlock();
   if (changed) emit ObjectManagerCallbackIDChanged(value);
}

unsigned int SystemStats::getObjectManagerQueueID() const
{
   QMutexLocker locker(mutex);
   return data.ObjectManagerQueueID;
}
void SystemStats::setObjectManagerQueueID(unsigned int value)
{
   mutex->lock();
   bool changed = data.ObjectManagerQueueID != value;
   data.ObjectManagerQueueID = value;
   mutex->unlock();
   if (changed) emit ObjectManagerQueueIDChanged(value);
}

unsigned short int SystemStats::getIRQStackRemaining() const
{
   QMutexLocker locker(mutex);
   return data.IRQStackRemaining;
}
void SystemStats::setIRQStackRemaining(unsigned short int value)
{
   mutex->lock();
   bool changed = data.IRQStackRemaining != value;
   data.IRQStackRemaining = value;
   mutex->unlock();
   if (changed) emit IRQStackRemainingChanged(value);
}

unsigned short int SystemStats::getSystemModStackRemaining() const
{
   QMutexLocker locker(mutex);
   return data.SystemModStackRemaining;
}
void SystemStats::setSystemModStackRemaining(unsigned short int value)
{
   mutex->lock();
   bool changed = data.SystemModStackRemaining != value;
   data.SystemModStackRemaining = value;
   mutex->unlock();
   if (changed) emit SystemModStackRemainingChanged(value);
}

unsigned short int SystemStats::getSysSlotsFree() const
{
   QMutexLocker locker(mutex);
   return data.SysSlotsFree;
}
void SystemStats::setSysSlotsFree(unsigned short int value)
{
   mutex->lock();
   bool changed = data.SysSlotsFree != value;
   data.SysSlotsFree = value;
   mutex->unlock();
   if (changed) emit SysSlotsFreeChanged(value);
}

unsigned short int SystemStats::getSysSlotsActive() const
{
   QMutexLocker locker(mutex);
   return data.SysSlotsActive;
}
void SystemStats::setSysSlotsActive(unsigned short int value)
{
   mutex->lock();
   bool changed = data.SysSlotsActive != value;
   data.SysSlotsActive = value;
   mutex->unlock();
   if (changed) emit SysSlotsActiveChanged(value);
}

unsigned short int SystemStats::getUsrSlotsFree() const
{
   QMutexLocker locker(mutex);
   return data.UsrSlotsFree;
}
void SystemStats::setUsrSlotsFree(unsigned short int value)
{
   mutex->lock();
   bool changed = data.UsrSlotsFree != value;
   data.UsrSlotsFree = value;
   mutex->unlock();
   if (changed) emit UsrSlotsFreeChanged(value);
}

unsigned short int SystemStats::getUsrSlotsActive() const
{
   QMutexLocker locker(mutex);
   return data.UsrSlotsActive;
}
void SystemStats::setUsrSlotsActive(unsigned short int value)
{
   mutex->lock();
   bool changed = data.UsrSlotsActive != value;
   data.UsrSlotsActive = value;
   mutex->unlock();
   if (changed) emit UsrSlotsActiveChanged(value);
}

unsigned char SystemStats::getCPULoad() const
{
   QMutexLocker locker(mutex);
   return data.CPULoad;
}
void SystemStats::setCPULoad(unsigned char value)
{
   mutex->lock();
   bool changed = data.CPULoad != value;
   data.CPULoad = value;
   mutex->unlock();
   if (changed) emit CPULoadChanged(value);
}

char SystemStats::getCPUTemp() const
{
   QMutexLocker locker(mutex);
   return data.CPUTemp;
}
void SystemStats::setCPUTemp(char value)
{
   mutex->lock();
   bool changed = data.CPUTemp != value;
   data.CPUTemp = value;
   mutex->unlock();
   if (changed) emit CPUTempChanged(value);
}

*/
