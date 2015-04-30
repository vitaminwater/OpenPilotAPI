/**
 ******************************************************************************
 *
 * @file       watchdogstatus.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: watchdogstatus.xml.
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

#include "watchdogstatus.h"

int WatchdogStatus::numInstances = 0;

/**
 * Constructor
 */
WatchdogStatus::WatchdogStatus(UAVObjManager* manager): UAVObject(manager, 0xA207FA7C, "WatchdogStatus", "For monitoring the flags in the watchdog and especially the bootup flags", "System", 1, 0, ACCESS_READWRITE, ACCESS_READWRITE, 0, 0, UPDATEMODE_PERIODIC, UPDATEMODE_MANUAL, 5000, 0, 0)
{

}

int WatchdogStatus::UAVObjSetDataField(const char *dataIn, const std::string fieldID){
	if(fieldID == "BootupFlags") {
		memset( &(dataFields.BootupFlags), 0, sizeof(dataFields.BootupFlags));
		memcpy( &(dataFields.BootupFlags), dataIn, sizeof(dataFields.BootupFlags));
	} else if(fieldID == "ActiveFlags") {
		memset( &(dataFields.ActiveFlags), 0, sizeof(dataFields.ActiveFlags));
		memcpy( &(dataFields.ActiveFlags), dataIn, sizeof(dataFields.ActiveFlags));
	}
	return 0;
}

int WatchdogStatus::UAVObjGetDataField(char *dataOut, const std::string fieldID){
	if(fieldID == "BootupFlags") {
		memcpy( dataOut, &(dataFields.BootupFlags), sizeof(dataFields.BootupFlags));
	} else if(fieldID == "ActiveFlags") {
		memcpy( dataOut, &(dataFields.ActiveFlags), sizeof(dataFields.ActiveFlags));
	}
	return 0;
}

int WatchdogStatus::UAVObjUnpack(const unsigned char *dataIn){
	memcpy(&dataFields, dataIn, NUMBYTES);
	return 0;
}

int WatchdogStatus::UAVObjPack(unsigned char *dataOut) {
	memcpy(dataOut, &dataFields, NUMBYTES);
	return 0;
}

unsigned short WatchdogStatus::UAVObjGetInstance() const {
	return instance;
}
unsigned short WatchdogStatus::UAVObjGetNumBytes() const {
	return sizeof(dataFields);
}
unsigned short WatchdogStatus::UAVObjGetNumInstances() const {
	return numInstances;
}

std::string WatchdogStatus::prettyPrint() {
	std::stringstream ss;
	ss << "\nPrinting object: watchdogstatus" << std::endl;
	ss << "\tBootupFlags: " << dataFields.BootupFlags << std::endl;
	ss << "\tActiveFlags: " << dataFields.ActiveFlags << std::endl;

	return ss.str();
}

/*/***/
/* * Initialize object fields with the default values.*/
/* * If a default value is not specified the object fields*/
/* * will be initialized to zero.*/
/* */
/*void WatchdogStatus::setDefaultFieldValues()*/
/*{*/
/**/
/*}*/

/*/***/
/* * Get the object data fields*/
/* */
/*WatchdogStatus::DataFields WatchdogStatus::getData()*/
/*{*/
/*    QMutexLocker locker(mutex);*/
/*    return data;*/
/*}*/

/*/***/
/* * Set the object data fields*/
/* */
/*void WatchdogStatus::setData(const DataFields& data)*/
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

/*void WatchdogStatus::emitNotifications()*/
/*{*/
/*            //if (data.BootupFlags != oldData.BootupFlags)
            emit BootupFlagsChanged(data.BootupFlags);
        //if (data.ActiveFlags != oldData.ActiveFlags)
            emit ActiveFlagsChanged(data.ActiveFlags);
*/
/*}*/

/*/***/
/* * Create a clone of this object, a new instance ID must be specified.*/
/* * Do not use this function directly to create new instances, the*/
/* * UAVObjectManager should be used instead.*/
/* */
/*UAVDataObject *WatchdogStatus::clone(unsigned int instID)*/
/*{*/
/*    WatchdogStatus *obj = new WatchdogStatus();*/
/*    obj->initialize(instID, this->getMetaObject());*/
/*    return obj;*/
/*}*/

/*/***/
/* * Create a clone of this object only to be used to retrieve defaults*/
/* */
/*UAVDataObject *WatchdogStatus::dirtyClone()*/
/*{*/
/*    WatchdogStatus *obj = new WatchdogStatus();*/
/*    return obj;*/
/*}*/

/*/***/
/* * Static function to retrieve an instance of the object.*/
/* */
/*WatchdogStatus *WatchdogStatus::GetInstance(UAVObjectManager *objMngr, unsigned int instID)*/
/*{*/
/*    return dynamic_cast<WatchdogStatus *>(objMngr->getObject(WatchdogStatus::OBJID, instID));*/
/*}*/

/*unsigned short int WatchdogStatus::getBootupFlags() const
{
   QMutexLocker locker(mutex);
   return data.BootupFlags;
}
void WatchdogStatus::setBootupFlags(unsigned short int value)
{
   mutex->lock();
   bool changed = data.BootupFlags != value;
   data.BootupFlags = value;
   mutex->unlock();
   if (changed) emit BootupFlagsChanged(value);
}

unsigned short int WatchdogStatus::getActiveFlags() const
{
   QMutexLocker locker(mutex);
   return data.ActiveFlags;
}
void WatchdogStatus::setActiveFlags(unsigned short int value)
{
   mutex->lock();
   bool changed = data.ActiveFlags != value;
   data.ActiveFlags = value;
   mutex->unlock();
   if (changed) emit ActiveFlagsChanged(value);
}

*/
