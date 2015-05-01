/**
 ******************************************************************************
 *
 * @file       debuglogstatus.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: debuglogstatus.xml.
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

#include "debuglogstatus.h"

int DebugLogStatus::numInstances = 0;

/**
 * Constructor
 */
DebugLogStatus::DebugLogStatus(UAVObjManager* manager): UAVObject(manager, 0x85A4DAD6, "DebugLogStatus", "Log Status Object, contains log partition status information", "System", 1, 0, ACCESS_READWRITE, ACCESS_READWRITE, 0, 0, UPDATEMODE_PERIODIC, UPDATEMODE_MANUAL, 1000, 0, 0)
{

}

int DebugLogStatus::UAVObjSetDataField(const char *dataIn, const std::string fieldID){
	if(fieldID == "Flight") {
		memset( &(dataFields.Flight), 0, sizeof(dataFields.Flight));
		memcpy( &(dataFields.Flight), dataIn, sizeof(dataFields.Flight));
	} else if(fieldID == "Entry") {
		memset( &(dataFields.Entry), 0, sizeof(dataFields.Entry));
		memcpy( &(dataFields.Entry), dataIn, sizeof(dataFields.Entry));
	} else if(fieldID == "UsedSlots") {
		memset( &(dataFields.UsedSlots), 0, sizeof(dataFields.UsedSlots));
		memcpy( &(dataFields.UsedSlots), dataIn, sizeof(dataFields.UsedSlots));
	} else if(fieldID == "FreeSlots") {
		memset( &(dataFields.FreeSlots), 0, sizeof(dataFields.FreeSlots));
		memcpy( &(dataFields.FreeSlots), dataIn, sizeof(dataFields.FreeSlots));
	}
	return 0;
}

int DebugLogStatus::UAVObjGetDataField(char *dataOut, const std::string fieldID){
	if(fieldID == "Flight") {
		memcpy( dataOut, &(dataFields.Flight), sizeof(dataFields.Flight));
	} else if(fieldID == "Entry") {
		memcpy( dataOut, &(dataFields.Entry), sizeof(dataFields.Entry));
	} else if(fieldID == "UsedSlots") {
		memcpy( dataOut, &(dataFields.UsedSlots), sizeof(dataFields.UsedSlots));
	} else if(fieldID == "FreeSlots") {
		memcpy( dataOut, &(dataFields.FreeSlots), sizeof(dataFields.FreeSlots));
	}
	return 0;
}

int DebugLogStatus::UAVObjUnpack(const unsigned char *dataIn){
	memcpy(&dataFields, dataIn, NUMBYTES);
	return 0;
}

int DebugLogStatus::UAVObjPack(unsigned char *dataOut) {
	memcpy(dataOut, &dataFields, NUMBYTES);
	return 0;
}

unsigned short DebugLogStatus::UAVObjGetInstance() const {
	return instance;
}
unsigned short DebugLogStatus::UAVObjGetNumBytes() const {
	return sizeof(dataFields);
}
unsigned short DebugLogStatus::UAVObjGetNumInstances() const {
	return numInstances;
}

std::string DebugLogStatus::prettyPrint() {
	std::stringstream ss;
	ss << "\nPrinting object: debuglogstatus" << std::endl;
	ss << "\tFlight: " << dataFields.Flight << std::endl;
	ss << "\tEntry: " << dataFields.Entry << std::endl;
	ss << "\tUsedSlots: " << dataFields.UsedSlots << std::endl;
	ss << "\tFreeSlots: " << dataFields.FreeSlots << std::endl;

	return ss.str();
}

/*/***/
/* * Initialize object fields with the default values.*/
/* * If a default value is not specified the object fields*/
/* * will be initialized to zero.*/
/* */
/*void DebugLogStatus::setDefaultFieldValues()*/
/*{*/
/**/
/*}*/

/*/***/
/* * Get the object data fields*/
/* */
/*DebugLogStatus::DataFields DebugLogStatus::getData()*/
/*{*/
/*    QMutexLocker locker(mutex);*/
/*    return data;*/
/*}*/

/*/***/
/* * Set the object data fields*/
/* */
/*void DebugLogStatus::setData(const DataFields& data)*/
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

/*void DebugLogStatus::emitNotifications()*/
/*{*/
/*            //if (data.Flight != oldData.Flight)
            emit FlightChanged(data.Flight);
        //if (data.Entry != oldData.Entry)
            emit EntryChanged(data.Entry);
        //if (data.UsedSlots != oldData.UsedSlots)
            emit UsedSlotsChanged(data.UsedSlots);
        //if (data.FreeSlots != oldData.FreeSlots)
            emit FreeSlotsChanged(data.FreeSlots);
*/
/*}*/

/*/***/
/* * Create a clone of this object, a new instance ID must be specified.*/
/* * Do not use this function directly to create new instances, the*/
/* * UAVObjectManager should be used instead.*/
/* */
/*UAVDataObject *DebugLogStatus::clone(unsigned int instID)*/
/*{*/
/*    DebugLogStatus *obj = new DebugLogStatus();*/
/*    obj->initialize(instID, this->getMetaObject());*/
/*    return obj;*/
/*}*/

/*/***/
/* * Create a clone of this object only to be used to retrieve defaults*/
/* */
/*UAVDataObject *DebugLogStatus::dirtyClone()*/
/*{*/
/*    DebugLogStatus *obj = new DebugLogStatus();*/
/*    return obj;*/
/*}*/

/*/***/
/* * Static function to retrieve an instance of the object.*/
/* */
/*DebugLogStatus *DebugLogStatus::GetInstance(UAVObjectManager *objMngr, unsigned int instID)*/
/*{*/
/*    return dynamic_cast<DebugLogStatus *>(objMngr->getObject(DebugLogStatus::OBJID, instID));*/
/*}*/

/*unsigned short int DebugLogStatus::getFlight() const
{
   QMutexLocker locker(mutex);
   return data.Flight;
}
void DebugLogStatus::setFlight(unsigned short int value)
{
   mutex->lock();
   bool changed = data.Flight != value;
   data.Flight = value;
   mutex->unlock();
   if (changed) emit FlightChanged(value);
}

unsigned short int DebugLogStatus::getEntry() const
{
   QMutexLocker locker(mutex);
   return data.Entry;
}
void DebugLogStatus::setEntry(unsigned short int value)
{
   mutex->lock();
   bool changed = data.Entry != value;
   data.Entry = value;
   mutex->unlock();
   if (changed) emit EntryChanged(value);
}

unsigned short int DebugLogStatus::getUsedSlots() const
{
   QMutexLocker locker(mutex);
   return data.UsedSlots;
}
void DebugLogStatus::setUsedSlots(unsigned short int value)
{
   mutex->lock();
   bool changed = data.UsedSlots != value;
   data.UsedSlots = value;
   mutex->unlock();
   if (changed) emit UsedSlotsChanged(value);
}

unsigned short int DebugLogStatus::getFreeSlots() const
{
   QMutexLocker locker(mutex);
   return data.FreeSlots;
}
void DebugLogStatus::setFreeSlots(unsigned short int value)
{
   mutex->lock();
   bool changed = data.FreeSlots != value;
   data.FreeSlots = value;
   mutex->unlock();
   if (changed) emit FreeSlotsChanged(value);
}

*/
