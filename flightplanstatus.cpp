/**
 ******************************************************************************
 *
 * @file       flightplanstatus.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: flightplanstatus.xml.
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

#include "flightplanstatus.h"

int FlightPlanStatus::numInstances = 0;

/**
 * Constructor
 */
FlightPlanStatus::FlightPlanStatus(UAVObjManager* manager): UAVObject(manager, 0x2206EE46, "FlightPlanStatus", "Status of the flight plan script", "Navigation", 1, 0, ACCESS_READWRITE, ACCESS_READWRITE, 0, 0, UPDATEMODE_PERIODIC, UPDATEMODE_MANUAL, 2000, 0, 0)
{

}

int FlightPlanStatus::UAVObjSetDataField(const char *dataIn, const std::string fieldID){
	if(fieldID == "ErrorFileID") {
		memset( &(dataFields.ErrorFileID), 0, sizeof(dataFields.ErrorFileID));
		memcpy( &(dataFields.ErrorFileID), dataIn, sizeof(dataFields.ErrorFileID));
	} else if(fieldID == "ErrorLineNum") {
		memset( &(dataFields.ErrorLineNum), 0, sizeof(dataFields.ErrorLineNum));
		memcpy( &(dataFields.ErrorLineNum), dataIn, sizeof(dataFields.ErrorLineNum));
	} else if(fieldID == "Debug") {
		memset( &(dataFields.Debug), 0, sizeof(dataFields.Debug));
		memcpy( &(dataFields.Debug), dataIn, sizeof(dataFields.Debug));
	} else if(fieldID == "Status") {
		memset( &(dataFields.Status), 0, sizeof(dataFields.Status));
		memcpy( &(dataFields.Status), dataIn, sizeof(dataFields.Status));
	} else if(fieldID == "ErrorType") {
		memset( &(dataFields.ErrorType), 0, sizeof(dataFields.ErrorType));
		memcpy( &(dataFields.ErrorType), dataIn, sizeof(dataFields.ErrorType));
	}
	return 0;
}

int FlightPlanStatus::UAVObjGetDataField(char *dataOut, const std::string fieldID){
	if(fieldID == "ErrorFileID") {
		memcpy( dataOut, &(dataFields.ErrorFileID), sizeof(dataFields.ErrorFileID));
	} else if(fieldID == "ErrorLineNum") {
		memcpy( dataOut, &(dataFields.ErrorLineNum), sizeof(dataFields.ErrorLineNum));
	} else if(fieldID == "Debug") {
		memcpy( dataOut, &(dataFields.Debug), sizeof(dataFields.Debug));
	} else if(fieldID == "Status") {
		memcpy( dataOut, &(dataFields.Status), sizeof(dataFields.Status));
	} else if(fieldID == "ErrorType") {
		memcpy( dataOut, &(dataFields.ErrorType), sizeof(dataFields.ErrorType));
	}
	return 0;
}

int FlightPlanStatus::UAVObjUnpack(const unsigned char *dataIn){
	memcpy(&dataFields, dataIn, NUMBYTES);
	return 0;
}

int FlightPlanStatus::UAVObjPack(unsigned char *dataOut) {
	memcpy(dataOut, &dataFields, NUMBYTES);
	return 0;
}

unsigned short FlightPlanStatus::UAVObjGetInstance() const {
	return instance;
}
unsigned short FlightPlanStatus::UAVObjGetNumBytes() const {
	return sizeof(dataFields);
}
unsigned short FlightPlanStatus::UAVObjGetNumInstances() const {
	return numInstances;
}

std::string FlightPlanStatus::prettyPrint() {
	std::stringstream ss;
	ss << "\nPrinting object: flightplanstatus" << std::endl;
	ss << "\tErrorFileID: " << dataFields.ErrorFileID << std::endl;
	ss << "\tErrorLineNum: " << dataFields.ErrorLineNum << std::endl;
	ss << "\tDebug: " << dataFields.Debug << std::endl;
	ss << "\tStatus: " << dataFields.Status << std::endl;
	ss << "\tErrorType: " << dataFields.ErrorType << std::endl;

	return ss.str();
}

/*/***/
/* * Initialize object fields with the default values.*/
/* * If a default value is not specified the object fields*/
/* * will be initialized to zero.*/
/* */
/*void FlightPlanStatus::setDefaultFieldValues()*/
/*{*/
/*    data.Debug[0] = 0;
    data.Debug[1] = 0;
    data.Status = 0;
    data.ErrorType = 0;
*/
/*}*/

/*/***/
/* * Get the object data fields*/
/* */
/*FlightPlanStatus::DataFields FlightPlanStatus::getData()*/
/*{*/
/*    QMutexLocker locker(mutex);*/
/*    return data;*/
/*}*/

/*/***/
/* * Set the object data fields*/
/* */
/*void FlightPlanStatus::setData(const DataFields& data)*/
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

/*void FlightPlanStatus::emitNotifications()*/
/*{*/
/*            //if (data.ErrorFileID != oldData.ErrorFileID)
            emit ErrorFileIDChanged(data.ErrorFileID);
        //if (data.ErrorLineNum != oldData.ErrorLineNum)
            emit ErrorLineNumChanged(data.ErrorLineNum);
        //if (data.Status != oldData.Status)
            emit StatusChanged(data.Status);
        //if (data.ErrorType != oldData.ErrorType)
            emit ErrorTypeChanged(data.ErrorType);
*/
/*}*/

/*/***/
/* * Create a clone of this object, a new instance ID must be specified.*/
/* * Do not use this function directly to create new instances, the*/
/* * UAVObjectManager should be used instead.*/
/* */
/*UAVDataObject *FlightPlanStatus::clone(unsigned int instID)*/
/*{*/
/*    FlightPlanStatus *obj = new FlightPlanStatus();*/
/*    obj->initialize(instID, this->getMetaObject());*/
/*    return obj;*/
/*}*/

/*/***/
/* * Create a clone of this object only to be used to retrieve defaults*/
/* */
/*UAVDataObject *FlightPlanStatus::dirtyClone()*/
/*{*/
/*    FlightPlanStatus *obj = new FlightPlanStatus();*/
/*    return obj;*/
/*}*/

/*/***/
/* * Static function to retrieve an instance of the object.*/
/* */
/*FlightPlanStatus *FlightPlanStatus::GetInstance(UAVObjectManager *objMngr, unsigned int instID)*/
/*{*/
/*    return dynamic_cast<FlightPlanStatus *>(objMngr->getObject(FlightPlanStatus::OBJID, instID));*/
/*}*/

/*unsigned int FlightPlanStatus::getErrorFileID() const
{
   QMutexLocker locker(mutex);
   return data.ErrorFileID;
}
void FlightPlanStatus::setErrorFileID(unsigned int value)
{
   mutex->lock();
   bool changed = data.ErrorFileID != value;
   data.ErrorFileID = value;
   mutex->unlock();
   if (changed) emit ErrorFileIDChanged(value);
}

unsigned int FlightPlanStatus::getErrorLineNum() const
{
   QMutexLocker locker(mutex);
   return data.ErrorLineNum;
}
void FlightPlanStatus::setErrorLineNum(unsigned int value)
{
   mutex->lock();
   bool changed = data.ErrorLineNum != value;
   data.ErrorLineNum = value;
   mutex->unlock();
   if (changed) emit ErrorLineNumChanged(value);
}

float FlightPlanStatus::getDebug(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.Debug[index];
}
void FlightPlanStatus::setDebug(unsigned int index, float value)
{
   mutex->lock();
   bool changed = data.Debug[index] != value;
   data.Debug[index] = value;
   mutex->unlock();
   if (changed) emit DebugChanged(index,value);
}

unsigned char FlightPlanStatus::getStatus() const
{
   QMutexLocker locker(mutex);
   return data.Status;
}
void FlightPlanStatus::setStatus(unsigned char value)
{
   mutex->lock();
   bool changed = data.Status != value;
   data.Status = value;
   mutex->unlock();
   if (changed) emit StatusChanged(value);
}

unsigned char FlightPlanStatus::getErrorType() const
{
   QMutexLocker locker(mutex);
   return data.ErrorType;
}
void FlightPlanStatus::setErrorType(unsigned char value)
{
   mutex->lock();
   bool changed = data.ErrorType != value;
   data.ErrorType = value;
   mutex->unlock();
   if (changed) emit ErrorTypeChanged(value);
}

*/
