/**
 ******************************************************************************
 *
 * @file       fixedwingpathfollowerstatus.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: fixedwingpathfollowerstatus.xml.
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

#include "fixedwingpathfollowerstatus.h"

int FixedWingPathFollowerStatus::numInstances = 0;

/**
 * Constructor
 */
FixedWingPathFollowerStatus::FixedWingPathFollowerStatus(UAVObjManager* manager): UAVObject(manager, 0x35ED0888, "FixedWingPathFollowerStatus", "Object Storing Debugging Information on PID internals", "Control", 1, 0, ACCESS_READWRITE, ACCESS_READWRITE, 0, 0, UPDATEMODE_PERIODIC, UPDATEMODE_MANUAL, 500, 0, 0)
{

}

int FixedWingPathFollowerStatus::UAVObjSetDataField(const char *dataIn, const std::string fieldID){
	if(fieldID == "Error") {
		memset( &(dataFields.Error), 0, sizeof(dataFields.Error));
		memcpy( &(dataFields.Error), dataIn, sizeof(dataFields.Error));
	} else if(fieldID == "ErrorInt") {
		memset( &(dataFields.ErrorInt), 0, sizeof(dataFields.ErrorInt));
		memcpy( &(dataFields.ErrorInt), dataIn, sizeof(dataFields.ErrorInt));
	} else if(fieldID == "Command") {
		memset( &(dataFields.Command), 0, sizeof(dataFields.Command));
		memcpy( &(dataFields.Command), dataIn, sizeof(dataFields.Command));
	} else if(fieldID == "Errors") {
		memset( &(dataFields.Errors), 0, sizeof(dataFields.Errors));
		memcpy( &(dataFields.Errors), dataIn, sizeof(dataFields.Errors));
	}
	return 0;
}

int FixedWingPathFollowerStatus::UAVObjGetDataField(char *dataOut, const std::string fieldID){
	if(fieldID == "Error") {
		memcpy( dataOut, &(dataFields.Error), sizeof(dataFields.Error));
	} else if(fieldID == "ErrorInt") {
		memcpy( dataOut, &(dataFields.ErrorInt), sizeof(dataFields.ErrorInt));
	} else if(fieldID == "Command") {
		memcpy( dataOut, &(dataFields.Command), sizeof(dataFields.Command));
	} else if(fieldID == "Errors") {
		memcpy( dataOut, &(dataFields.Errors), sizeof(dataFields.Errors));
	}
	return 0;
}

int FixedWingPathFollowerStatus::UAVObjUnpack(const unsigned char *dataIn){
	memcpy(&dataFields, dataIn, NUMBYTES);
	return 0;
}

int FixedWingPathFollowerStatus::UAVObjPack(unsigned char *dataOut) {
	memcpy(dataOut, &dataFields, NUMBYTES);
	return 0;
}

unsigned short FixedWingPathFollowerStatus::UAVObjGetInstance() const {
	return instance;
}
unsigned short FixedWingPathFollowerStatus::UAVObjGetNumBytes() const {
	return sizeof(dataFields);
}
unsigned short FixedWingPathFollowerStatus::UAVObjGetNumInstances() const {
	return numInstances;
}

std::string FixedWingPathFollowerStatus::prettyPrint() {
	std::stringstream ss;
	ss << "\nPrinting object: fixedwingpathfollowerstatus" << std::endl;
	ss << "\tError: " << dataFields.Error << std::endl;
	ss << "\tErrorInt: " << dataFields.ErrorInt << std::endl;
	ss << "\tCommand: " << dataFields.Command << std::endl;
	ss << "\tErrors: " << dataFields.Errors << std::endl;

	return ss.str();
}

/*/***/
/* * Initialize object fields with the default values.*/
/* * If a default value is not specified the object fields*/
/* * will be initialized to zero.*/
/* */
/*void FixedWingPathFollowerStatus::setDefaultFieldValues()*/
/*{*/
/**/
/*}*/

/*/***/
/* * Get the object data fields*/
/* */
/*FixedWingPathFollowerStatus::DataFields FixedWingPathFollowerStatus::getData()*/
/*{*/
/*    QMutexLocker locker(mutex);*/
/*    return data;*/
/*}*/

/*/***/
/* * Set the object data fields*/
/* */
/*void FixedWingPathFollowerStatus::setData(const DataFields& data)*/
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

/*void FixedWingPathFollowerStatus::emitNotifications()*/
/*{*/
/*    */
/*}*/

/*/***/
/* * Create a clone of this object, a new instance ID must be specified.*/
/* * Do not use this function directly to create new instances, the*/
/* * UAVObjectManager should be used instead.*/
/* */
/*UAVDataObject *FixedWingPathFollowerStatus::clone(unsigned int instID)*/
/*{*/
/*    FixedWingPathFollowerStatus *obj = new FixedWingPathFollowerStatus();*/
/*    obj->initialize(instID, this->getMetaObject());*/
/*    return obj;*/
/*}*/

/*/***/
/* * Create a clone of this object only to be used to retrieve defaults*/
/* */
/*UAVDataObject *FixedWingPathFollowerStatus::dirtyClone()*/
/*{*/
/*    FixedWingPathFollowerStatus *obj = new FixedWingPathFollowerStatus();*/
/*    return obj;*/
/*}*/

/*/***/
/* * Static function to retrieve an instance of the object.*/
/* */
/*FixedWingPathFollowerStatus *FixedWingPathFollowerStatus::GetInstance(UAVObjectManager *objMngr, unsigned int instID)*/
/*{*/
/*    return dynamic_cast<FixedWingPathFollowerStatus *>(objMngr->getObject(FixedWingPathFollowerStatus::OBJID, instID));*/
/*}*/

/*float FixedWingPathFollowerStatus::getError(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.Error[index];
}
void FixedWingPathFollowerStatus::setError(unsigned int index, float value)
{
   mutex->lock();
   bool changed = data.Error[index] != value;
   data.Error[index] = value;
   mutex->unlock();
   if (changed) emit ErrorChanged(index,value);
}

float FixedWingPathFollowerStatus::getErrorInt(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.ErrorInt[index];
}
void FixedWingPathFollowerStatus::setErrorInt(unsigned int index, float value)
{
   mutex->lock();
   bool changed = data.ErrorInt[index] != value;
   data.ErrorInt[index] = value;
   mutex->unlock();
   if (changed) emit ErrorIntChanged(index,value);
}

float FixedWingPathFollowerStatus::getCommand(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.Command[index];
}
void FixedWingPathFollowerStatus::setCommand(unsigned int index, float value)
{
   mutex->lock();
   bool changed = data.Command[index] != value;
   data.Command[index] = value;
   mutex->unlock();
   if (changed) emit CommandChanged(index,value);
}

unsigned char FixedWingPathFollowerStatus::getErrors(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.Errors[index];
}
void FixedWingPathFollowerStatus::setErrors(unsigned int index, unsigned char value)
{
   mutex->lock();
   bool changed = data.Errors[index] != value;
   data.Errors[index] = value;
   mutex->unlock();
   if (changed) emit ErrorsChanged(index,value);
}

*/
