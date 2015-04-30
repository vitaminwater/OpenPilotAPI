/**
 ******************************************************************************
 *
 * @file       radiocombridgestats.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: radiocombridgestats.xml.
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

#include "radiocombridgestats.h"

int RadioComBridgeStats::numInstances = 0;

/**
 * Constructor
 */
RadioComBridgeStats::RadioComBridgeStats(UAVObjManager* manager): UAVObject(manager, 0x2499AE58, "RadioComBridgeStats", "Maintains the telemetry statistics from the OPLM RadioComBridge.", "System", 1, 0, ACCESS_READWRITE, ACCESS_READONLY, 0, 0, UPDATEMODE_PERIODIC, UPDATEMODE_MANUAL, 5000, 0, 0)
{

}

int RadioComBridgeStats::UAVObjSetDataField(const char *dataIn, const std::string fieldID){
	if(fieldID == "TelemetryTxBytes") {
		memset( &(dataFields.TelemetryTxBytes), 0, sizeof(dataFields.TelemetryTxBytes));
		memcpy( &(dataFields.TelemetryTxBytes), dataIn, sizeof(dataFields.TelemetryTxBytes));
	} else if(fieldID == "TelemetryTxFailures") {
		memset( &(dataFields.TelemetryTxFailures), 0, sizeof(dataFields.TelemetryTxFailures));
		memcpy( &(dataFields.TelemetryTxFailures), dataIn, sizeof(dataFields.TelemetryTxFailures));
	} else if(fieldID == "TelemetryTxRetries") {
		memset( &(dataFields.TelemetryTxRetries), 0, sizeof(dataFields.TelemetryTxRetries));
		memcpy( &(dataFields.TelemetryTxRetries), dataIn, sizeof(dataFields.TelemetryTxRetries));
	} else if(fieldID == "TelemetryRxBytes") {
		memset( &(dataFields.TelemetryRxBytes), 0, sizeof(dataFields.TelemetryRxBytes));
		memcpy( &(dataFields.TelemetryRxBytes), dataIn, sizeof(dataFields.TelemetryRxBytes));
	} else if(fieldID == "TelemetryRxFailures") {
		memset( &(dataFields.TelemetryRxFailures), 0, sizeof(dataFields.TelemetryRxFailures));
		memcpy( &(dataFields.TelemetryRxFailures), dataIn, sizeof(dataFields.TelemetryRxFailures));
	} else if(fieldID == "TelemetryRxSyncErrors") {
		memset( &(dataFields.TelemetryRxSyncErrors), 0, sizeof(dataFields.TelemetryRxSyncErrors));
		memcpy( &(dataFields.TelemetryRxSyncErrors), dataIn, sizeof(dataFields.TelemetryRxSyncErrors));
	} else if(fieldID == "TelemetryRxCrcErrors") {
		memset( &(dataFields.TelemetryRxCrcErrors), 0, sizeof(dataFields.TelemetryRxCrcErrors));
		memcpy( &(dataFields.TelemetryRxCrcErrors), dataIn, sizeof(dataFields.TelemetryRxCrcErrors));
	} else if(fieldID == "RadioTxBytes") {
		memset( &(dataFields.RadioTxBytes), 0, sizeof(dataFields.RadioTxBytes));
		memcpy( &(dataFields.RadioTxBytes), dataIn, sizeof(dataFields.RadioTxBytes));
	} else if(fieldID == "RadioTxFailures") {
		memset( &(dataFields.RadioTxFailures), 0, sizeof(dataFields.RadioTxFailures));
		memcpy( &(dataFields.RadioTxFailures), dataIn, sizeof(dataFields.RadioTxFailures));
	} else if(fieldID == "RadioTxRetries") {
		memset( &(dataFields.RadioTxRetries), 0, sizeof(dataFields.RadioTxRetries));
		memcpy( &(dataFields.RadioTxRetries), dataIn, sizeof(dataFields.RadioTxRetries));
	} else if(fieldID == "RadioRxBytes") {
		memset( &(dataFields.RadioRxBytes), 0, sizeof(dataFields.RadioRxBytes));
		memcpy( &(dataFields.RadioRxBytes), dataIn, sizeof(dataFields.RadioRxBytes));
	} else if(fieldID == "RadioRxFailures") {
		memset( &(dataFields.RadioRxFailures), 0, sizeof(dataFields.RadioRxFailures));
		memcpy( &(dataFields.RadioRxFailures), dataIn, sizeof(dataFields.RadioRxFailures));
	} else if(fieldID == "RadioRxSyncErrors") {
		memset( &(dataFields.RadioRxSyncErrors), 0, sizeof(dataFields.RadioRxSyncErrors));
		memcpy( &(dataFields.RadioRxSyncErrors), dataIn, sizeof(dataFields.RadioRxSyncErrors));
	} else if(fieldID == "RadioRxCrcErrors") {
		memset( &(dataFields.RadioRxCrcErrors), 0, sizeof(dataFields.RadioRxCrcErrors));
		memcpy( &(dataFields.RadioRxCrcErrors), dataIn, sizeof(dataFields.RadioRxCrcErrors));
	}
	return 0;
}

int RadioComBridgeStats::UAVObjGetDataField(char *dataOut, const std::string fieldID){
	if(fieldID == "TelemetryTxBytes") {
		memcpy( dataOut, &(dataFields.TelemetryTxBytes), sizeof(dataFields.TelemetryTxBytes));
	} else if(fieldID == "TelemetryTxFailures") {
		memcpy( dataOut, &(dataFields.TelemetryTxFailures), sizeof(dataFields.TelemetryTxFailures));
	} else if(fieldID == "TelemetryTxRetries") {
		memcpy( dataOut, &(dataFields.TelemetryTxRetries), sizeof(dataFields.TelemetryTxRetries));
	} else if(fieldID == "TelemetryRxBytes") {
		memcpy( dataOut, &(dataFields.TelemetryRxBytes), sizeof(dataFields.TelemetryRxBytes));
	} else if(fieldID == "TelemetryRxFailures") {
		memcpy( dataOut, &(dataFields.TelemetryRxFailures), sizeof(dataFields.TelemetryRxFailures));
	} else if(fieldID == "TelemetryRxSyncErrors") {
		memcpy( dataOut, &(dataFields.TelemetryRxSyncErrors), sizeof(dataFields.TelemetryRxSyncErrors));
	} else if(fieldID == "TelemetryRxCrcErrors") {
		memcpy( dataOut, &(dataFields.TelemetryRxCrcErrors), sizeof(dataFields.TelemetryRxCrcErrors));
	} else if(fieldID == "RadioTxBytes") {
		memcpy( dataOut, &(dataFields.RadioTxBytes), sizeof(dataFields.RadioTxBytes));
	} else if(fieldID == "RadioTxFailures") {
		memcpy( dataOut, &(dataFields.RadioTxFailures), sizeof(dataFields.RadioTxFailures));
	} else if(fieldID == "RadioTxRetries") {
		memcpy( dataOut, &(dataFields.RadioTxRetries), sizeof(dataFields.RadioTxRetries));
	} else if(fieldID == "RadioRxBytes") {
		memcpy( dataOut, &(dataFields.RadioRxBytes), sizeof(dataFields.RadioRxBytes));
	} else if(fieldID == "RadioRxFailures") {
		memcpy( dataOut, &(dataFields.RadioRxFailures), sizeof(dataFields.RadioRxFailures));
	} else if(fieldID == "RadioRxSyncErrors") {
		memcpy( dataOut, &(dataFields.RadioRxSyncErrors), sizeof(dataFields.RadioRxSyncErrors));
	} else if(fieldID == "RadioRxCrcErrors") {
		memcpy( dataOut, &(dataFields.RadioRxCrcErrors), sizeof(dataFields.RadioRxCrcErrors));
	}
	return 0;
}

int RadioComBridgeStats::UAVObjUnpack(const unsigned char *dataIn){
	memcpy(&dataFields, dataIn, NUMBYTES);
	return 0;
}

int RadioComBridgeStats::UAVObjPack(unsigned char *dataOut) {
	memcpy(dataOut, &dataFields, NUMBYTES);
	return 0;
}

unsigned short RadioComBridgeStats::UAVObjGetInstance() const {
	return instance;
}
unsigned short RadioComBridgeStats::UAVObjGetNumBytes() const {
	return sizeof(dataFields);
}
unsigned short RadioComBridgeStats::UAVObjGetNumInstances() const {
	return numInstances;
}

std::string RadioComBridgeStats::prettyPrint() {
	std::stringstream ss;
	ss << "\nPrinting object: radiocombridgestats" << std::endl;
	ss << "\tTelemetryTxBytes: " << dataFields.TelemetryTxBytes << std::endl;
	ss << "\tTelemetryTxFailures: " << dataFields.TelemetryTxFailures << std::endl;
	ss << "\tTelemetryTxRetries: " << dataFields.TelemetryTxRetries << std::endl;
	ss << "\tTelemetryRxBytes: " << dataFields.TelemetryRxBytes << std::endl;
	ss << "\tTelemetryRxFailures: " << dataFields.TelemetryRxFailures << std::endl;
	ss << "\tTelemetryRxSyncErrors: " << dataFields.TelemetryRxSyncErrors << std::endl;
	ss << "\tTelemetryRxCrcErrors: " << dataFields.TelemetryRxCrcErrors << std::endl;
	ss << "\tRadioTxBytes: " << dataFields.RadioTxBytes << std::endl;
	ss << "\tRadioTxFailures: " << dataFields.RadioTxFailures << std::endl;
	ss << "\tRadioTxRetries: " << dataFields.RadioTxRetries << std::endl;
	ss << "\tRadioRxBytes: " << dataFields.RadioRxBytes << std::endl;
	ss << "\tRadioRxFailures: " << dataFields.RadioRxFailures << std::endl;
	ss << "\tRadioRxSyncErrors: " << dataFields.RadioRxSyncErrors << std::endl;
	ss << "\tRadioRxCrcErrors: " << dataFields.RadioRxCrcErrors << std::endl;

	return ss.str();
}

/*/***/
/* * Initialize object fields with the default values.*/
/* * If a default value is not specified the object fields*/
/* * will be initialized to zero.*/
/* */
/*void RadioComBridgeStats::setDefaultFieldValues()*/
/*{*/
/**/
/*}*/

/*/***/
/* * Get the object data fields*/
/* */
/*RadioComBridgeStats::DataFields RadioComBridgeStats::getData()*/
/*{*/
/*    QMutexLocker locker(mutex);*/
/*    return data;*/
/*}*/

/*/***/
/* * Set the object data fields*/
/* */
/*void RadioComBridgeStats::setData(const DataFields& data)*/
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

/*void RadioComBridgeStats::emitNotifications()*/
/*{*/
/*            //if (data.TelemetryTxBytes != oldData.TelemetryTxBytes)
            emit TelemetryTxBytesChanged(data.TelemetryTxBytes);
        //if (data.TelemetryTxFailures != oldData.TelemetryTxFailures)
            emit TelemetryTxFailuresChanged(data.TelemetryTxFailures);
        //if (data.TelemetryTxRetries != oldData.TelemetryTxRetries)
            emit TelemetryTxRetriesChanged(data.TelemetryTxRetries);
        //if (data.TelemetryRxBytes != oldData.TelemetryRxBytes)
            emit TelemetryRxBytesChanged(data.TelemetryRxBytes);
        //if (data.TelemetryRxFailures != oldData.TelemetryRxFailures)
            emit TelemetryRxFailuresChanged(data.TelemetryRxFailures);
        //if (data.TelemetryRxSyncErrors != oldData.TelemetryRxSyncErrors)
            emit TelemetryRxSyncErrorsChanged(data.TelemetryRxSyncErrors);
        //if (data.TelemetryRxCrcErrors != oldData.TelemetryRxCrcErrors)
            emit TelemetryRxCrcErrorsChanged(data.TelemetryRxCrcErrors);
        //if (data.RadioTxBytes != oldData.RadioTxBytes)
            emit RadioTxBytesChanged(data.RadioTxBytes);
        //if (data.RadioTxFailures != oldData.RadioTxFailures)
            emit RadioTxFailuresChanged(data.RadioTxFailures);
        //if (data.RadioTxRetries != oldData.RadioTxRetries)
            emit RadioTxRetriesChanged(data.RadioTxRetries);
        //if (data.RadioRxBytes != oldData.RadioRxBytes)
            emit RadioRxBytesChanged(data.RadioRxBytes);
        //if (data.RadioRxFailures != oldData.RadioRxFailures)
            emit RadioRxFailuresChanged(data.RadioRxFailures);
        //if (data.RadioRxSyncErrors != oldData.RadioRxSyncErrors)
            emit RadioRxSyncErrorsChanged(data.RadioRxSyncErrors);
        //if (data.RadioRxCrcErrors != oldData.RadioRxCrcErrors)
            emit RadioRxCrcErrorsChanged(data.RadioRxCrcErrors);
*/
/*}*/

/*/***/
/* * Create a clone of this object, a new instance ID must be specified.*/
/* * Do not use this function directly to create new instances, the*/
/* * UAVObjectManager should be used instead.*/
/* */
/*UAVDataObject *RadioComBridgeStats::clone(unsigned int instID)*/
/*{*/
/*    RadioComBridgeStats *obj = new RadioComBridgeStats();*/
/*    obj->initialize(instID, this->getMetaObject());*/
/*    return obj;*/
/*}*/

/*/***/
/* * Create a clone of this object only to be used to retrieve defaults*/
/* */
/*UAVDataObject *RadioComBridgeStats::dirtyClone()*/
/*{*/
/*    RadioComBridgeStats *obj = new RadioComBridgeStats();*/
/*    return obj;*/
/*}*/

/*/***/
/* * Static function to retrieve an instance of the object.*/
/* */
/*RadioComBridgeStats *RadioComBridgeStats::GetInstance(UAVObjectManager *objMngr, unsigned int instID)*/
/*{*/
/*    return dynamic_cast<RadioComBridgeStats *>(objMngr->getObject(RadioComBridgeStats::OBJID, instID));*/
/*}*/

/*unsigned int RadioComBridgeStats::getTelemetryTxBytes() const
{
   QMutexLocker locker(mutex);
   return data.TelemetryTxBytes;
}
void RadioComBridgeStats::setTelemetryTxBytes(unsigned int value)
{
   mutex->lock();
   bool changed = data.TelemetryTxBytes != value;
   data.TelemetryTxBytes = value;
   mutex->unlock();
   if (changed) emit TelemetryTxBytesChanged(value);
}

unsigned int RadioComBridgeStats::getTelemetryTxFailures() const
{
   QMutexLocker locker(mutex);
   return data.TelemetryTxFailures;
}
void RadioComBridgeStats::setTelemetryTxFailures(unsigned int value)
{
   mutex->lock();
   bool changed = data.TelemetryTxFailures != value;
   data.TelemetryTxFailures = value;
   mutex->unlock();
   if (changed) emit TelemetryTxFailuresChanged(value);
}

unsigned int RadioComBridgeStats::getTelemetryTxRetries() const
{
   QMutexLocker locker(mutex);
   return data.TelemetryTxRetries;
}
void RadioComBridgeStats::setTelemetryTxRetries(unsigned int value)
{
   mutex->lock();
   bool changed = data.TelemetryTxRetries != value;
   data.TelemetryTxRetries = value;
   mutex->unlock();
   if (changed) emit TelemetryTxRetriesChanged(value);
}

unsigned int RadioComBridgeStats::getTelemetryRxBytes() const
{
   QMutexLocker locker(mutex);
   return data.TelemetryRxBytes;
}
void RadioComBridgeStats::setTelemetryRxBytes(unsigned int value)
{
   mutex->lock();
   bool changed = data.TelemetryRxBytes != value;
   data.TelemetryRxBytes = value;
   mutex->unlock();
   if (changed) emit TelemetryRxBytesChanged(value);
}

unsigned int RadioComBridgeStats::getTelemetryRxFailures() const
{
   QMutexLocker locker(mutex);
   return data.TelemetryRxFailures;
}
void RadioComBridgeStats::setTelemetryRxFailures(unsigned int value)
{
   mutex->lock();
   bool changed = data.TelemetryRxFailures != value;
   data.TelemetryRxFailures = value;
   mutex->unlock();
   if (changed) emit TelemetryRxFailuresChanged(value);
}

unsigned int RadioComBridgeStats::getTelemetryRxSyncErrors() const
{
   QMutexLocker locker(mutex);
   return data.TelemetryRxSyncErrors;
}
void RadioComBridgeStats::setTelemetryRxSyncErrors(unsigned int value)
{
   mutex->lock();
   bool changed = data.TelemetryRxSyncErrors != value;
   data.TelemetryRxSyncErrors = value;
   mutex->unlock();
   if (changed) emit TelemetryRxSyncErrorsChanged(value);
}

unsigned int RadioComBridgeStats::getTelemetryRxCrcErrors() const
{
   QMutexLocker locker(mutex);
   return data.TelemetryRxCrcErrors;
}
void RadioComBridgeStats::setTelemetryRxCrcErrors(unsigned int value)
{
   mutex->lock();
   bool changed = data.TelemetryRxCrcErrors != value;
   data.TelemetryRxCrcErrors = value;
   mutex->unlock();
   if (changed) emit TelemetryRxCrcErrorsChanged(value);
}

unsigned int RadioComBridgeStats::getRadioTxBytes() const
{
   QMutexLocker locker(mutex);
   return data.RadioTxBytes;
}
void RadioComBridgeStats::setRadioTxBytes(unsigned int value)
{
   mutex->lock();
   bool changed = data.RadioTxBytes != value;
   data.RadioTxBytes = value;
   mutex->unlock();
   if (changed) emit RadioTxBytesChanged(value);
}

unsigned int RadioComBridgeStats::getRadioTxFailures() const
{
   QMutexLocker locker(mutex);
   return data.RadioTxFailures;
}
void RadioComBridgeStats::setRadioTxFailures(unsigned int value)
{
   mutex->lock();
   bool changed = data.RadioTxFailures != value;
   data.RadioTxFailures = value;
   mutex->unlock();
   if (changed) emit RadioTxFailuresChanged(value);
}

unsigned int RadioComBridgeStats::getRadioTxRetries() const
{
   QMutexLocker locker(mutex);
   return data.RadioTxRetries;
}
void RadioComBridgeStats::setRadioTxRetries(unsigned int value)
{
   mutex->lock();
   bool changed = data.RadioTxRetries != value;
   data.RadioTxRetries = value;
   mutex->unlock();
   if (changed) emit RadioTxRetriesChanged(value);
}

unsigned int RadioComBridgeStats::getRadioRxBytes() const
{
   QMutexLocker locker(mutex);
   return data.RadioRxBytes;
}
void RadioComBridgeStats::setRadioRxBytes(unsigned int value)
{
   mutex->lock();
   bool changed = data.RadioRxBytes != value;
   data.RadioRxBytes = value;
   mutex->unlock();
   if (changed) emit RadioRxBytesChanged(value);
}

unsigned int RadioComBridgeStats::getRadioRxFailures() const
{
   QMutexLocker locker(mutex);
   return data.RadioRxFailures;
}
void RadioComBridgeStats::setRadioRxFailures(unsigned int value)
{
   mutex->lock();
   bool changed = data.RadioRxFailures != value;
   data.RadioRxFailures = value;
   mutex->unlock();
   if (changed) emit RadioRxFailuresChanged(value);
}

unsigned int RadioComBridgeStats::getRadioRxSyncErrors() const
{
   QMutexLocker locker(mutex);
   return data.RadioRxSyncErrors;
}
void RadioComBridgeStats::setRadioRxSyncErrors(unsigned int value)
{
   mutex->lock();
   bool changed = data.RadioRxSyncErrors != value;
   data.RadioRxSyncErrors = value;
   mutex->unlock();
   if (changed) emit RadioRxSyncErrorsChanged(value);
}

unsigned int RadioComBridgeStats::getRadioRxCrcErrors() const
{
   QMutexLocker locker(mutex);
   return data.RadioRxCrcErrors;
}
void RadioComBridgeStats::setRadioRxCrcErrors(unsigned int value)
{
   mutex->lock();
   bool changed = data.RadioRxCrcErrors != value;
   data.RadioRxCrcErrors = value;
   mutex->unlock();
   if (changed) emit RadioRxCrcErrorsChanged(value);
}

*/
