/**
 ******************************************************************************
 *
 * @file       gcstelemetrystats.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: gcstelemetrystats.xml.
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

#include "gcstelemetrystats.h"

int GCSTelemetryStats::numInstances = 0;

/**
 * Constructor
 */
GCSTelemetryStats::GCSTelemetryStats(UAVObjManager* manager): UAVObject(manager, 0xCAD1DC0A, "GCSTelemetryStats", "The telemetry statistics from the ground computer", "System", 1, 0, ACCESS_READWRITE, ACCESS_READWRITE, 0, 0, UPDATEMODE_MANUAL, UPDATEMODE_PERIODIC, 0, 5000, 0)
{

}

int GCSTelemetryStats::UAVObjSetDataField(const char *dataIn, const std::string fieldID){
	if(fieldID == "TxDataRate") {
		memset( &(dataFields.TxDataRate), 0, sizeof(dataFields.TxDataRate));
		memcpy( &(dataFields.TxDataRate), dataIn, sizeof(dataFields.TxDataRate));
	} else if(fieldID == "TxBytes") {
		memset( &(dataFields.TxBytes), 0, sizeof(dataFields.TxBytes));
		memcpy( &(dataFields.TxBytes), dataIn, sizeof(dataFields.TxBytes));
	} else if(fieldID == "TxFailures") {
		memset( &(dataFields.TxFailures), 0, sizeof(dataFields.TxFailures));
		memcpy( &(dataFields.TxFailures), dataIn, sizeof(dataFields.TxFailures));
	} else if(fieldID == "TxRetries") {
		memset( &(dataFields.TxRetries), 0, sizeof(dataFields.TxRetries));
		memcpy( &(dataFields.TxRetries), dataIn, sizeof(dataFields.TxRetries));
	} else if(fieldID == "RxDataRate") {
		memset( &(dataFields.RxDataRate), 0, sizeof(dataFields.RxDataRate));
		memcpy( &(dataFields.RxDataRate), dataIn, sizeof(dataFields.RxDataRate));
	} else if(fieldID == "RxBytes") {
		memset( &(dataFields.RxBytes), 0, sizeof(dataFields.RxBytes));
		memcpy( &(dataFields.RxBytes), dataIn, sizeof(dataFields.RxBytes));
	} else if(fieldID == "RxFailures") {
		memset( &(dataFields.RxFailures), 0, sizeof(dataFields.RxFailures));
		memcpy( &(dataFields.RxFailures), dataIn, sizeof(dataFields.RxFailures));
	} else if(fieldID == "RxSyncErrors") {
		memset( &(dataFields.RxSyncErrors), 0, sizeof(dataFields.RxSyncErrors));
		memcpy( &(dataFields.RxSyncErrors), dataIn, sizeof(dataFields.RxSyncErrors));
	} else if(fieldID == "RxCrcErrors") {
		memset( &(dataFields.RxCrcErrors), 0, sizeof(dataFields.RxCrcErrors));
		memcpy( &(dataFields.RxCrcErrors), dataIn, sizeof(dataFields.RxCrcErrors));
	} else if(fieldID == "Status") {
		memset( &(dataFields.Status), 0, sizeof(dataFields.Status));
		memcpy( &(dataFields.Status), dataIn, sizeof(dataFields.Status));
	}
	return 0;
}

int GCSTelemetryStats::UAVObjGetDataField(char *dataOut, const std::string fieldID){
	if(fieldID == "TxDataRate") {
		memcpy( dataOut, &(dataFields.TxDataRate), sizeof(dataFields.TxDataRate));
	} else if(fieldID == "TxBytes") {
		memcpy( dataOut, &(dataFields.TxBytes), sizeof(dataFields.TxBytes));
	} else if(fieldID == "TxFailures") {
		memcpy( dataOut, &(dataFields.TxFailures), sizeof(dataFields.TxFailures));
	} else if(fieldID == "TxRetries") {
		memcpy( dataOut, &(dataFields.TxRetries), sizeof(dataFields.TxRetries));
	} else if(fieldID == "RxDataRate") {
		memcpy( dataOut, &(dataFields.RxDataRate), sizeof(dataFields.RxDataRate));
	} else if(fieldID == "RxBytes") {
		memcpy( dataOut, &(dataFields.RxBytes), sizeof(dataFields.RxBytes));
	} else if(fieldID == "RxFailures") {
		memcpy( dataOut, &(dataFields.RxFailures), sizeof(dataFields.RxFailures));
	} else if(fieldID == "RxSyncErrors") {
		memcpy( dataOut, &(dataFields.RxSyncErrors), sizeof(dataFields.RxSyncErrors));
	} else if(fieldID == "RxCrcErrors") {
		memcpy( dataOut, &(dataFields.RxCrcErrors), sizeof(dataFields.RxCrcErrors));
	} else if(fieldID == "Status") {
		memcpy( dataOut, &(dataFields.Status), sizeof(dataFields.Status));
	}
	return 0;
}

int GCSTelemetryStats::UAVObjUnpack(const unsigned char *dataIn){
	memcpy(&dataFields, dataIn, NUMBYTES);
	return 0;
}

int GCSTelemetryStats::UAVObjPack(unsigned char *dataOut) {
	memcpy(dataOut, &dataFields, NUMBYTES);
	return 0;
}

unsigned short GCSTelemetryStats::UAVObjGetInstance() const {
	return instance;
}
unsigned short GCSTelemetryStats::UAVObjGetNumBytes() const {
	return sizeof(dataFields);
}
unsigned short GCSTelemetryStats::UAVObjGetNumInstances() const {
	return numInstances;
}

std::string GCSTelemetryStats::prettyPrint() {
	std::stringstream ss;
	ss << "\nPrinting object: gcstelemetrystats" << std::endl;
	ss << "\tTxDataRate: " << dataFields.TxDataRate << std::endl;
	ss << "\tTxBytes: " << dataFields.TxBytes << std::endl;
	ss << "\tTxFailures: " << dataFields.TxFailures << std::endl;
	ss << "\tTxRetries: " << dataFields.TxRetries << std::endl;
	ss << "\tRxDataRate: " << dataFields.RxDataRate << std::endl;
	ss << "\tRxBytes: " << dataFields.RxBytes << std::endl;
	ss << "\tRxFailures: " << dataFields.RxFailures << std::endl;
	ss << "\tRxSyncErrors: " << dataFields.RxSyncErrors << std::endl;
	ss << "\tRxCrcErrors: " << dataFields.RxCrcErrors << std::endl;
	ss << "\tStatus: " << dataFields.Status << std::endl;

	return ss.str();
}

/*/***/
/* * Initialize object fields with the default values.*/
/* * If a default value is not specified the object fields*/
/* * will be initialized to zero.*/
/* */
/*void GCSTelemetryStats::setDefaultFieldValues()*/
/*{*/
/**/
/*}*/

/*/***/
/* * Get the object data fields*/
/* */
/*GCSTelemetryStats::DataFields GCSTelemetryStats::getData()*/
/*{*/
/*    QMutexLocker locker(mutex);*/
/*    return data;*/
/*}*/

/*/***/
/* * Set the object data fields*/
/* */
/*void GCSTelemetryStats::setData(const DataFields& data)*/
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

/*void GCSTelemetryStats::emitNotifications()*/
/*{*/
/*            //if (data.TxDataRate != oldData.TxDataRate)
            emit TxDataRateChanged(data.TxDataRate);
        //if (data.TxBytes != oldData.TxBytes)
            emit TxBytesChanged(data.TxBytes);
        //if (data.TxFailures != oldData.TxFailures)
            emit TxFailuresChanged(data.TxFailures);
        //if (data.TxRetries != oldData.TxRetries)
            emit TxRetriesChanged(data.TxRetries);
        //if (data.RxDataRate != oldData.RxDataRate)
            emit RxDataRateChanged(data.RxDataRate);
        //if (data.RxBytes != oldData.RxBytes)
            emit RxBytesChanged(data.RxBytes);
        //if (data.RxFailures != oldData.RxFailures)
            emit RxFailuresChanged(data.RxFailures);
        //if (data.RxSyncErrors != oldData.RxSyncErrors)
            emit RxSyncErrorsChanged(data.RxSyncErrors);
        //if (data.RxCrcErrors != oldData.RxCrcErrors)
            emit RxCrcErrorsChanged(data.RxCrcErrors);
        //if (data.Status != oldData.Status)
            emit StatusChanged(data.Status);
*/
/*}*/

/*/***/
/* * Create a clone of this object, a new instance ID must be specified.*/
/* * Do not use this function directly to create new instances, the*/
/* * UAVObjectManager should be used instead.*/
/* */
/*UAVDataObject *GCSTelemetryStats::clone(unsigned int instID)*/
/*{*/
/*    GCSTelemetryStats *obj = new GCSTelemetryStats();*/
/*    obj->initialize(instID, this->getMetaObject());*/
/*    return obj;*/
/*}*/

/*/***/
/* * Create a clone of this object only to be used to retrieve defaults*/
/* */
/*UAVDataObject *GCSTelemetryStats::dirtyClone()*/
/*{*/
/*    GCSTelemetryStats *obj = new GCSTelemetryStats();*/
/*    return obj;*/
/*}*/

/*/***/
/* * Static function to retrieve an instance of the object.*/
/* */
/*GCSTelemetryStats *GCSTelemetryStats::GetInstance(UAVObjectManager *objMngr, unsigned int instID)*/
/*{*/
/*    return dynamic_cast<GCSTelemetryStats *>(objMngr->getObject(GCSTelemetryStats::OBJID, instID));*/
/*}*/

/*float GCSTelemetryStats::getTxDataRate() const
{
   QMutexLocker locker(mutex);
   return data.TxDataRate;
}
void GCSTelemetryStats::setTxDataRate(float value)
{
   mutex->lock();
   bool changed = data.TxDataRate != value;
   data.TxDataRate = value;
   mutex->unlock();
   if (changed) emit TxDataRateChanged(value);
}

unsigned int GCSTelemetryStats::getTxBytes() const
{
   QMutexLocker locker(mutex);
   return data.TxBytes;
}
void GCSTelemetryStats::setTxBytes(unsigned int value)
{
   mutex->lock();
   bool changed = data.TxBytes != value;
   data.TxBytes = value;
   mutex->unlock();
   if (changed) emit TxBytesChanged(value);
}

unsigned int GCSTelemetryStats::getTxFailures() const
{
   QMutexLocker locker(mutex);
   return data.TxFailures;
}
void GCSTelemetryStats::setTxFailures(unsigned int value)
{
   mutex->lock();
   bool changed = data.TxFailures != value;
   data.TxFailures = value;
   mutex->unlock();
   if (changed) emit TxFailuresChanged(value);
}

unsigned int GCSTelemetryStats::getTxRetries() const
{
   QMutexLocker locker(mutex);
   return data.TxRetries;
}
void GCSTelemetryStats::setTxRetries(unsigned int value)
{
   mutex->lock();
   bool changed = data.TxRetries != value;
   data.TxRetries = value;
   mutex->unlock();
   if (changed) emit TxRetriesChanged(value);
}

float GCSTelemetryStats::getRxDataRate() const
{
   QMutexLocker locker(mutex);
   return data.RxDataRate;
}
void GCSTelemetryStats::setRxDataRate(float value)
{
   mutex->lock();
   bool changed = data.RxDataRate != value;
   data.RxDataRate = value;
   mutex->unlock();
   if (changed) emit RxDataRateChanged(value);
}

unsigned int GCSTelemetryStats::getRxBytes() const
{
   QMutexLocker locker(mutex);
   return data.RxBytes;
}
void GCSTelemetryStats::setRxBytes(unsigned int value)
{
   mutex->lock();
   bool changed = data.RxBytes != value;
   data.RxBytes = value;
   mutex->unlock();
   if (changed) emit RxBytesChanged(value);
}

unsigned int GCSTelemetryStats::getRxFailures() const
{
   QMutexLocker locker(mutex);
   return data.RxFailures;
}
void GCSTelemetryStats::setRxFailures(unsigned int value)
{
   mutex->lock();
   bool changed = data.RxFailures != value;
   data.RxFailures = value;
   mutex->unlock();
   if (changed) emit RxFailuresChanged(value);
}

unsigned int GCSTelemetryStats::getRxSyncErrors() const
{
   QMutexLocker locker(mutex);
   return data.RxSyncErrors;
}
void GCSTelemetryStats::setRxSyncErrors(unsigned int value)
{
   mutex->lock();
   bool changed = data.RxSyncErrors != value;
   data.RxSyncErrors = value;
   mutex->unlock();
   if (changed) emit RxSyncErrorsChanged(value);
}

unsigned int GCSTelemetryStats::getRxCrcErrors() const
{
   QMutexLocker locker(mutex);
   return data.RxCrcErrors;
}
void GCSTelemetryStats::setRxCrcErrors(unsigned int value)
{
   mutex->lock();
   bool changed = data.RxCrcErrors != value;
   data.RxCrcErrors = value;
   mutex->unlock();
   if (changed) emit RxCrcErrorsChanged(value);
}

unsigned char GCSTelemetryStats::getStatus() const
{
   QMutexLocker locker(mutex);
   return data.Status;
}
void GCSTelemetryStats::setStatus(unsigned char value)
{
   mutex->lock();
   bool changed = data.Status != value;
   data.Status = value;
   mutex->unlock();
   if (changed) emit StatusChanged(value);
}

*/
