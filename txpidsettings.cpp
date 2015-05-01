/**
 ******************************************************************************
 *
 * @file       txpidsettings.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: txpidsettings.xml.
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

#include "txpidsettings.h"

int TxPIDSettings::numInstances = 0;

/**
 * Constructor
 */
TxPIDSettings::TxPIDSettings(UAVObjManager* manager): UAVObject(manager, 0x857B51F2, "TxPIDSettings", "Settings used by @ref TxPID optional module to tune PID settings using R/C transmitter", "Control", 1, 1, ACCESS_READWRITE, ACCESS_READWRITE, 1, 1, UPDATEMODE_ONCHANGE, UPDATEMODE_ONCHANGE, 0, 0, 0)
{

}

int TxPIDSettings::UAVObjSetDataField(const char *dataIn, const std::string fieldID){
	if(fieldID == "ThrottleRange") {
		memset( &(dataFields.ThrottleRange), 0, sizeof(dataFields.ThrottleRange));
		memcpy( &(dataFields.ThrottleRange), dataIn, sizeof(dataFields.ThrottleRange));
	} else if(fieldID == "MinPID") {
		memset( &(dataFields.MinPID), 0, sizeof(dataFields.MinPID));
		memcpy( &(dataFields.MinPID), dataIn, sizeof(dataFields.MinPID));
	} else if(fieldID == "MaxPID") {
		memset( &(dataFields.MaxPID), 0, sizeof(dataFields.MaxPID));
		memcpy( &(dataFields.MaxPID), dataIn, sizeof(dataFields.MaxPID));
	} else if(fieldID == "UpdateMode") {
		memset( &(dataFields.UpdateMode), 0, sizeof(dataFields.UpdateMode));
		memcpy( &(dataFields.UpdateMode), dataIn, sizeof(dataFields.UpdateMode));
	} else if(fieldID == "BankNumber") {
		memset( &(dataFields.BankNumber), 0, sizeof(dataFields.BankNumber));
		memcpy( &(dataFields.BankNumber), dataIn, sizeof(dataFields.BankNumber));
	} else if(fieldID == "Inputs") {
		memset( &(dataFields.Inputs), 0, sizeof(dataFields.Inputs));
		memcpy( &(dataFields.Inputs), dataIn, sizeof(dataFields.Inputs));
	} else if(fieldID == "PIDs") {
		memset( &(dataFields.PIDs), 0, sizeof(dataFields.PIDs));
		memcpy( &(dataFields.PIDs), dataIn, sizeof(dataFields.PIDs));
	}
	return 0;
}

int TxPIDSettings::UAVObjGetDataField(char *dataOut, const std::string fieldID){
	if(fieldID == "ThrottleRange") {
		memcpy( dataOut, &(dataFields.ThrottleRange), sizeof(dataFields.ThrottleRange));
	} else if(fieldID == "MinPID") {
		memcpy( dataOut, &(dataFields.MinPID), sizeof(dataFields.MinPID));
	} else if(fieldID == "MaxPID") {
		memcpy( dataOut, &(dataFields.MaxPID), sizeof(dataFields.MaxPID));
	} else if(fieldID == "UpdateMode") {
		memcpy( dataOut, &(dataFields.UpdateMode), sizeof(dataFields.UpdateMode));
	} else if(fieldID == "BankNumber") {
		memcpy( dataOut, &(dataFields.BankNumber), sizeof(dataFields.BankNumber));
	} else if(fieldID == "Inputs") {
		memcpy( dataOut, &(dataFields.Inputs), sizeof(dataFields.Inputs));
	} else if(fieldID == "PIDs") {
		memcpy( dataOut, &(dataFields.PIDs), sizeof(dataFields.PIDs));
	}
	return 0;
}

int TxPIDSettings::UAVObjUnpack(const unsigned char *dataIn){
	memcpy(&dataFields, dataIn, NUMBYTES);
	return 0;
}

int TxPIDSettings::UAVObjPack(unsigned char *dataOut) {
	memcpy(dataOut, &dataFields, NUMBYTES);
	return 0;
}

unsigned short TxPIDSettings::UAVObjGetInstance() const {
	return instance;
}
unsigned short TxPIDSettings::UAVObjGetNumBytes() const {
	return sizeof(dataFields);
}
unsigned short TxPIDSettings::UAVObjGetNumInstances() const {
	return numInstances;
}

std::string TxPIDSettings::prettyPrint() {
	std::stringstream ss;
	ss << "\nPrinting object: txpidsettings" << std::endl;
	ss << "\tThrottleRange: " << dataFields.ThrottleRange << std::endl;
	ss << "\tMinPID: " << dataFields.MinPID << std::endl;
	ss << "\tMaxPID: " << dataFields.MaxPID << std::endl;
	ss << "\tUpdateMode: " << dataFields.UpdateMode << std::endl;
	ss << "\tBankNumber: " << dataFields.BankNumber << std::endl;
	ss << "\tInputs: " << dataFields.Inputs << std::endl;
	ss << "\tPIDs: " << dataFields.PIDs << std::endl;

	return ss.str();
}

/*/***/
/* * Initialize object fields with the default values.*/
/* * If a default value is not specified the object fields*/
/* * will be initialized to zero.*/
/* */
/*void TxPIDSettings::setDefaultFieldValues()*/
/*{*/
/*    data.ThrottleRange[0] = 0.2;
    data.ThrottleRange[1] = 0.8;
    data.MinPID[0] = 0;
    data.MinPID[1] = 0;
    data.MinPID[2] = 0;
    data.MaxPID[0] = 0;
    data.MaxPID[1] = 0;
    data.MaxPID[2] = 0;
    data.UpdateMode = 1;
    data.BankNumber = 0;
    data.Inputs[0] = 0;
    data.Inputs[1] = 1;
    data.Inputs[2] = 2;
    data.PIDs[0] = 0;
    data.PIDs[1] = 0;
    data.PIDs[2] = 0;
*/
/*}*/

/*/***/
/* * Get the object data fields*/
/* */
/*TxPIDSettings::DataFields TxPIDSettings::getData()*/
/*{*/
/*    QMutexLocker locker(mutex);*/
/*    return data;*/
/*}*/

/*/***/
/* * Set the object data fields*/
/* */
/*void TxPIDSettings::setData(const DataFields& data)*/
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

/*void TxPIDSettings::emitNotifications()*/
/*{*/
/*            //if (data.UpdateMode != oldData.UpdateMode)
            emit UpdateModeChanged(data.UpdateMode);
        //if (data.BankNumber != oldData.BankNumber)
            emit BankNumberChanged(data.BankNumber);
*/
/*}*/

/*/***/
/* * Create a clone of this object, a new instance ID must be specified.*/
/* * Do not use this function directly to create new instances, the*/
/* * UAVObjectManager should be used instead.*/
/* */
/*UAVDataObject *TxPIDSettings::clone(unsigned int instID)*/
/*{*/
/*    TxPIDSettings *obj = new TxPIDSettings();*/
/*    obj->initialize(instID, this->getMetaObject());*/
/*    return obj;*/
/*}*/

/*/***/
/* * Create a clone of this object only to be used to retrieve defaults*/
/* */
/*UAVDataObject *TxPIDSettings::dirtyClone()*/
/*{*/
/*    TxPIDSettings *obj = new TxPIDSettings();*/
/*    return obj;*/
/*}*/

/*/***/
/* * Static function to retrieve an instance of the object.*/
/* */
/*TxPIDSettings *TxPIDSettings::GetInstance(UAVObjectManager *objMngr, unsigned int instID)*/
/*{*/
/*    return dynamic_cast<TxPIDSettings *>(objMngr->getObject(TxPIDSettings::OBJID, instID));*/
/*}*/

/*float TxPIDSettings::getThrottleRange(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.ThrottleRange[index];
}
void TxPIDSettings::setThrottleRange(unsigned int index, float value)
{
   mutex->lock();
   bool changed = data.ThrottleRange[index] != value;
   data.ThrottleRange[index] = value;
   mutex->unlock();
   if (changed) emit ThrottleRangeChanged(index,value);
}

float TxPIDSettings::getMinPID(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.MinPID[index];
}
void TxPIDSettings::setMinPID(unsigned int index, float value)
{
   mutex->lock();
   bool changed = data.MinPID[index] != value;
   data.MinPID[index] = value;
   mutex->unlock();
   if (changed) emit MinPIDChanged(index,value);
}

float TxPIDSettings::getMaxPID(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.MaxPID[index];
}
void TxPIDSettings::setMaxPID(unsigned int index, float value)
{
   mutex->lock();
   bool changed = data.MaxPID[index] != value;
   data.MaxPID[index] = value;
   mutex->unlock();
   if (changed) emit MaxPIDChanged(index,value);
}

unsigned char TxPIDSettings::getUpdateMode() const
{
   QMutexLocker locker(mutex);
   return data.UpdateMode;
}
void TxPIDSettings::setUpdateMode(unsigned char value)
{
   mutex->lock();
   bool changed = data.UpdateMode != value;
   data.UpdateMode = value;
   mutex->unlock();
   if (changed) emit UpdateModeChanged(value);
}

unsigned char TxPIDSettings::getBankNumber() const
{
   QMutexLocker locker(mutex);
   return data.BankNumber;
}
void TxPIDSettings::setBankNumber(unsigned char value)
{
   mutex->lock();
   bool changed = data.BankNumber != value;
   data.BankNumber = value;
   mutex->unlock();
   if (changed) emit BankNumberChanged(value);
}

unsigned char TxPIDSettings::getInputs(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.Inputs[index];
}
void TxPIDSettings::setInputs(unsigned int index, unsigned char value)
{
   mutex->lock();
   bool changed = data.Inputs[index] != value;
   data.Inputs[index] = value;
   mutex->unlock();
   if (changed) emit InputsChanged(index,value);
}

unsigned char TxPIDSettings::getPIDs(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.PIDs[index];
}
void TxPIDSettings::setPIDs(unsigned int index, unsigned char value)
{
   mutex->lock();
   bool changed = data.PIDs[index] != value;
   data.PIDs[index] = value;
   mutex->unlock();
   if (changed) emit PIDsChanged(index,value);
}

*/
