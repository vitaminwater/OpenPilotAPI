/**
 ******************************************************************************
 *
 * @file       debuglogentry.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: debuglogentry.xml.
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

#include "debuglogentry.h"

int DebugLogEntry::numInstances = 0;

/**
 * Constructor
 */
DebugLogEntry::DebugLogEntry(UAVObjManager* manager): UAVObject(manager, 0x233CDCC0, "DebugLogEntry", "Log Entry in Flash", "System", 1, 0, ACCESS_READWRITE, ACCESS_READWRITE, 0, 0, UPDATEMODE_MANUAL, UPDATEMODE_MANUAL, 0, 0, 0)
{

}

int DebugLogEntry::UAVObjSetDataField(const char *dataIn, const std::string fieldID){
	if(fieldID == "FlightTime") {
		memset( &(dataFields.FlightTime), 0, sizeof(dataFields.FlightTime));
		memcpy( &(dataFields.FlightTime), dataIn, sizeof(dataFields.FlightTime));
	} else if(fieldID == "ObjectID") {
		memset( &(dataFields.ObjectID), 0, sizeof(dataFields.ObjectID));
		memcpy( &(dataFields.ObjectID), dataIn, sizeof(dataFields.ObjectID));
	} else if(fieldID == "Flight") {
		memset( &(dataFields.Flight), 0, sizeof(dataFields.Flight));
		memcpy( &(dataFields.Flight), dataIn, sizeof(dataFields.Flight));
	} else if(fieldID == "Entry") {
		memset( &(dataFields.Entry), 0, sizeof(dataFields.Entry));
		memcpy( &(dataFields.Entry), dataIn, sizeof(dataFields.Entry));
	} else if(fieldID == "InstanceID") {
		memset( &(dataFields.InstanceID), 0, sizeof(dataFields.InstanceID));
		memcpy( &(dataFields.InstanceID), dataIn, sizeof(dataFields.InstanceID));
	} else if(fieldID == "Size") {
		memset( &(dataFields.Size), 0, sizeof(dataFields.Size));
		memcpy( &(dataFields.Size), dataIn, sizeof(dataFields.Size));
	} else if(fieldID == "Type") {
		memset( &(dataFields.Type), 0, sizeof(dataFields.Type));
		memcpy( &(dataFields.Type), dataIn, sizeof(dataFields.Type));
	} else if(fieldID == "Data") {
		memset( &(dataFields.Data), 0, sizeof(dataFields.Data));
		memcpy( &(dataFields.Data), dataIn, sizeof(dataFields.Data));
	}
	return 0;
}

int DebugLogEntry::UAVObjGetDataField(char *dataOut, const std::string fieldID){
	if(fieldID == "FlightTime") {
		memcpy( dataOut, &(dataFields.FlightTime), sizeof(dataFields.FlightTime));
	} else if(fieldID == "ObjectID") {
		memcpy( dataOut, &(dataFields.ObjectID), sizeof(dataFields.ObjectID));
	} else if(fieldID == "Flight") {
		memcpy( dataOut, &(dataFields.Flight), sizeof(dataFields.Flight));
	} else if(fieldID == "Entry") {
		memcpy( dataOut, &(dataFields.Entry), sizeof(dataFields.Entry));
	} else if(fieldID == "InstanceID") {
		memcpy( dataOut, &(dataFields.InstanceID), sizeof(dataFields.InstanceID));
	} else if(fieldID == "Size") {
		memcpy( dataOut, &(dataFields.Size), sizeof(dataFields.Size));
	} else if(fieldID == "Type") {
		memcpy( dataOut, &(dataFields.Type), sizeof(dataFields.Type));
	} else if(fieldID == "Data") {
		memcpy( dataOut, &(dataFields.Data), sizeof(dataFields.Data));
	}
	return 0;
}

int DebugLogEntry::UAVObjUnpack(const unsigned char *dataIn){
	memcpy(&dataFields, dataIn, NUMBYTES);
	return 0;
}

int DebugLogEntry::UAVObjPack(unsigned char *dataOut) {
	memcpy(dataOut, &dataFields, NUMBYTES);
	return 0;
}

unsigned short DebugLogEntry::UAVObjGetInstance() const {
	return instance;
}
unsigned short DebugLogEntry::UAVObjGetNumBytes() const {
	return sizeof(dataFields);
}
unsigned short DebugLogEntry::UAVObjGetNumInstances() const {
	return numInstances;
}

std::string DebugLogEntry::prettyPrint() {
	std::stringstream ss;
	ss << "\nPrinting object: debuglogentry" << std::endl;
	ss << "\tFlightTime: " << dataFields.FlightTime << std::endl;
	ss << "\tObjectID: " << dataFields.ObjectID << std::endl;
	ss << "\tFlight: " << dataFields.Flight << std::endl;
	ss << "\tEntry: " << dataFields.Entry << std::endl;
	ss << "\tInstanceID: " << dataFields.InstanceID << std::endl;
	ss << "\tSize: " << dataFields.Size << std::endl;
	ss << "\tType: " << dataFields.Type << std::endl;
	ss << "\tData: " << dataFields.Data << std::endl;

	return ss.str();
}

/*/***/
/* * Initialize object fields with the default values.*/
/* * If a default value is not specified the object fields*/
/* * will be initialized to zero.*/
/* */
/*void DebugLogEntry::setDefaultFieldValues()*/
/*{*/
/**/
/*}*/

/*/***/
/* * Get the object data fields*/
/* */
/*DebugLogEntry::DataFields DebugLogEntry::getData()*/
/*{*/
/*    QMutexLocker locker(mutex);*/
/*    return data;*/
/*}*/

/*/***/
/* * Set the object data fields*/
/* */
/*void DebugLogEntry::setData(const DataFields& data)*/
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

/*void DebugLogEntry::emitNotifications()*/
/*{*/
/*            //if (data.FlightTime != oldData.FlightTime)
            emit FlightTimeChanged(data.FlightTime);
        //if (data.ObjectID != oldData.ObjectID)
            emit ObjectIDChanged(data.ObjectID);
        //if (data.Flight != oldData.Flight)
            emit FlightChanged(data.Flight);
        //if (data.Entry != oldData.Entry)
            emit EntryChanged(data.Entry);
        //if (data.InstanceID != oldData.InstanceID)
            emit InstanceIDChanged(data.InstanceID);
        //if (data.Size != oldData.Size)
            emit SizeChanged(data.Size);
        //if (data.Type != oldData.Type)
            emit TypeChanged(data.Type);
*/
/*}*/

/*/***/
/* * Create a clone of this object, a new instance ID must be specified.*/
/* * Do not use this function directly to create new instances, the*/
/* * UAVObjectManager should be used instead.*/
/* */
/*UAVDataObject *DebugLogEntry::clone(unsigned int instID)*/
/*{*/
/*    DebugLogEntry *obj = new DebugLogEntry();*/
/*    obj->initialize(instID, this->getMetaObject());*/
/*    return obj;*/
/*}*/

/*/***/
/* * Create a clone of this object only to be used to retrieve defaults*/
/* */
/*UAVDataObject *DebugLogEntry::dirtyClone()*/
/*{*/
/*    DebugLogEntry *obj = new DebugLogEntry();*/
/*    return obj;*/
/*}*/

/*/***/
/* * Static function to retrieve an instance of the object.*/
/* */
/*DebugLogEntry *DebugLogEntry::GetInstance(UAVObjectManager *objMngr, unsigned int instID)*/
/*{*/
/*    return dynamic_cast<DebugLogEntry *>(objMngr->getObject(DebugLogEntry::OBJID, instID));*/
/*}*/

/*unsigned int DebugLogEntry::getFlightTime() const
{
   QMutexLocker locker(mutex);
   return data.FlightTime;
}
void DebugLogEntry::setFlightTime(unsigned int value)
{
   mutex->lock();
   bool changed = data.FlightTime != value;
   data.FlightTime = value;
   mutex->unlock();
   if (changed) emit FlightTimeChanged(value);
}

unsigned int DebugLogEntry::getObjectID() const
{
   QMutexLocker locker(mutex);
   return data.ObjectID;
}
void DebugLogEntry::setObjectID(unsigned int value)
{
   mutex->lock();
   bool changed = data.ObjectID != value;
   data.ObjectID = value;
   mutex->unlock();
   if (changed) emit ObjectIDChanged(value);
}

unsigned short int DebugLogEntry::getFlight() const
{
   QMutexLocker locker(mutex);
   return data.Flight;
}
void DebugLogEntry::setFlight(unsigned short int value)
{
   mutex->lock();
   bool changed = data.Flight != value;
   data.Flight = value;
   mutex->unlock();
   if (changed) emit FlightChanged(value);
}

unsigned short int DebugLogEntry::getEntry() const
{
   QMutexLocker locker(mutex);
   return data.Entry;
}
void DebugLogEntry::setEntry(unsigned short int value)
{
   mutex->lock();
   bool changed = data.Entry != value;
   data.Entry = value;
   mutex->unlock();
   if (changed) emit EntryChanged(value);
}

unsigned short int DebugLogEntry::getInstanceID() const
{
   QMutexLocker locker(mutex);
   return data.InstanceID;
}
void DebugLogEntry::setInstanceID(unsigned short int value)
{
   mutex->lock();
   bool changed = data.InstanceID != value;
   data.InstanceID = value;
   mutex->unlock();
   if (changed) emit InstanceIDChanged(value);
}

unsigned short int DebugLogEntry::getSize() const
{
   QMutexLocker locker(mutex);
   return data.Size;
}
void DebugLogEntry::setSize(unsigned short int value)
{
   mutex->lock();
   bool changed = data.Size != value;
   data.Size = value;
   mutex->unlock();
   if (changed) emit SizeChanged(value);
}

unsigned char DebugLogEntry::getType() const
{
   QMutexLocker locker(mutex);
   return data.Type;
}
void DebugLogEntry::setType(unsigned char value)
{
   mutex->lock();
   bool changed = data.Type != value;
   data.Type = value;
   mutex->unlock();
   if (changed) emit TypeChanged(value);
}

unsigned char DebugLogEntry::getData(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.Data[index];
}
void DebugLogEntry::setData(unsigned int index, unsigned char value)
{
   mutex->lock();
   bool changed = data.Data[index] != value;
   data.Data[index] = value;
   mutex->unlock();
   if (changed) emit DataChanged(index,value);
}

*/
