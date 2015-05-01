/**
 ******************************************************************************
 *
 * @file       systemalarms.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: systemalarms.xml.
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

#include "systemalarms.h"

int SystemAlarms::numInstances = 0;

/**
 * Constructor
 */
SystemAlarms::SystemAlarms(UAVObjManager* manager): UAVObject(manager, 0x6B7639EC, "SystemAlarms", "Alarms from OpenPilot to indicate failure conditions or warnings.  Set by various modules.  Some modules may have a module defined Status and Substatus fields that details its condition.", "System", 1, 0, ACCESS_READWRITE, ACCESS_READWRITE, 0, 0, UPDATEMODE_PERIODIC, UPDATEMODE_MANUAL, 1000, 0, 0)
{

}

int SystemAlarms::UAVObjSetDataField(const char *dataIn, const std::string fieldID){
	if(fieldID == "Alarm") {
		memset( &(dataFields.Alarm), 0, sizeof(dataFields.Alarm));
		memcpy( &(dataFields.Alarm), dataIn, sizeof(dataFields.Alarm));
	} else if(fieldID == "ExtendedAlarmStatus") {
		memset( &(dataFields.ExtendedAlarmStatus), 0, sizeof(dataFields.ExtendedAlarmStatus));
		memcpy( &(dataFields.ExtendedAlarmStatus), dataIn, sizeof(dataFields.ExtendedAlarmStatus));
	} else if(fieldID == "ExtendedAlarmSubStatus") {
		memset( &(dataFields.ExtendedAlarmSubStatus), 0, sizeof(dataFields.ExtendedAlarmSubStatus));
		memcpy( &(dataFields.ExtendedAlarmSubStatus), dataIn, sizeof(dataFields.ExtendedAlarmSubStatus));
	}
	return 0;
}

int SystemAlarms::UAVObjGetDataField(char *dataOut, const std::string fieldID){
	if(fieldID == "Alarm") {
		memcpy( dataOut, &(dataFields.Alarm), sizeof(dataFields.Alarm));
	} else if(fieldID == "ExtendedAlarmStatus") {
		memcpy( dataOut, &(dataFields.ExtendedAlarmStatus), sizeof(dataFields.ExtendedAlarmStatus));
	} else if(fieldID == "ExtendedAlarmSubStatus") {
		memcpy( dataOut, &(dataFields.ExtendedAlarmSubStatus), sizeof(dataFields.ExtendedAlarmSubStatus));
	}
	return 0;
}

int SystemAlarms::UAVObjUnpack(const unsigned char *dataIn){
	memcpy(&dataFields, dataIn, NUMBYTES);
	return 0;
}

int SystemAlarms::UAVObjPack(unsigned char *dataOut) {
	memcpy(dataOut, &dataFields, NUMBYTES);
	return 0;
}

unsigned short SystemAlarms::UAVObjGetInstance() const {
	return instance;
}
unsigned short SystemAlarms::UAVObjGetNumBytes() const {
	return sizeof(dataFields);
}
unsigned short SystemAlarms::UAVObjGetNumInstances() const {
	return numInstances;
}

std::string SystemAlarms::prettyPrint() {
	std::stringstream ss;
	ss << "\nPrinting object: systemalarms" << std::endl;
	ss << "\tAlarm: " << dataFields.Alarm << std::endl;
	ss << "\tExtendedAlarmStatus: " << dataFields.ExtendedAlarmStatus << std::endl;
	ss << "\tExtendedAlarmSubStatus: " << dataFields.ExtendedAlarmSubStatus << std::endl;

	return ss.str();
}

/*/***/
/* * Initialize object fields with the default values.*/
/* * If a default value is not specified the object fields*/
/* * will be initialized to zero.*/
/* */
/*void SystemAlarms::setDefaultFieldValues()*/
/*{*/
/*    data.Alarm[0] = 0;
    data.Alarm[1] = 0;
    data.Alarm[2] = 0;
    data.Alarm[3] = 0;
    data.Alarm[4] = 0;
    data.Alarm[5] = 0;
    data.Alarm[6] = 0;
    data.Alarm[7] = 0;
    data.Alarm[8] = 0;
    data.Alarm[9] = 0;
    data.Alarm[10] = 0;
    data.Alarm[11] = 0;
    data.Alarm[12] = 0;
    data.Alarm[13] = 0;
    data.Alarm[14] = 0;
    data.Alarm[15] = 0;
    data.Alarm[16] = 0;
    data.Alarm[17] = 0;
    data.Alarm[18] = 0;
    data.Alarm[19] = 0;
    data.Alarm[20] = 0;
    data.ExtendedAlarmStatus[0] = 0;
    data.ExtendedAlarmStatus[1] = 0;
    data.ExtendedAlarmSubStatus[0] = 0;
    data.ExtendedAlarmSubStatus[1] = 0;
*/
/*}*/

/*/***/
/* * Get the object data fields*/
/* */
/*SystemAlarms::DataFields SystemAlarms::getData()*/
/*{*/
/*    QMutexLocker locker(mutex);*/
/*    return data;*/
/*}*/

/*/***/
/* * Set the object data fields*/
/* */
/*void SystemAlarms::setData(const DataFields& data)*/
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

/*void SystemAlarms::emitNotifications()*/
/*{*/
/*    */
/*}*/

/*/***/
/* * Create a clone of this object, a new instance ID must be specified.*/
/* * Do not use this function directly to create new instances, the*/
/* * UAVObjectManager should be used instead.*/
/* */
/*UAVDataObject *SystemAlarms::clone(unsigned int instID)*/
/*{*/
/*    SystemAlarms *obj = new SystemAlarms();*/
/*    obj->initialize(instID, this->getMetaObject());*/
/*    return obj;*/
/*}*/

/*/***/
/* * Create a clone of this object only to be used to retrieve defaults*/
/* */
/*UAVDataObject *SystemAlarms::dirtyClone()*/
/*{*/
/*    SystemAlarms *obj = new SystemAlarms();*/
/*    return obj;*/
/*}*/

/*/***/
/* * Static function to retrieve an instance of the object.*/
/* */
/*SystemAlarms *SystemAlarms::GetInstance(UAVObjectManager *objMngr, unsigned int instID)*/
/*{*/
/*    return dynamic_cast<SystemAlarms *>(objMngr->getObject(SystemAlarms::OBJID, instID));*/
/*}*/

/*unsigned char SystemAlarms::getAlarm(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.Alarm[index];
}
void SystemAlarms::setAlarm(unsigned int index, unsigned char value)
{
   mutex->lock();
   bool changed = data.Alarm[index] != value;
   data.Alarm[index] = value;
   mutex->unlock();
   if (changed) emit AlarmChanged(index,value);
}

unsigned char SystemAlarms::getExtendedAlarmStatus(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.ExtendedAlarmStatus[index];
}
void SystemAlarms::setExtendedAlarmStatus(unsigned int index, unsigned char value)
{
   mutex->lock();
   bool changed = data.ExtendedAlarmStatus[index] != value;
   data.ExtendedAlarmStatus[index] = value;
   mutex->unlock();
   if (changed) emit ExtendedAlarmStatusChanged(index,value);
}

unsigned char SystemAlarms::getExtendedAlarmSubStatus(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.ExtendedAlarmSubStatus[index];
}
void SystemAlarms::setExtendedAlarmSubStatus(unsigned int index, unsigned char value)
{
   mutex->lock();
   bool changed = data.ExtendedAlarmSubStatus[index] != value;
   data.ExtendedAlarmSubStatus[index] = value;
   mutex->unlock();
   if (changed) emit ExtendedAlarmSubStatusChanged(index,value);
}

*/
