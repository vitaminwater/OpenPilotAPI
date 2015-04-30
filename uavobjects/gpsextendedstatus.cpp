/**
 ******************************************************************************
 *
 * @file       gpsextendedstatus.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: gpsextendedstatus.xml.
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

#include "gpsextendedstatus.h"

int GPSExtendedStatus::numInstances = 0;

/**
 * Constructor
 */
GPSExtendedStatus::GPSExtendedStatus(UAVObjManager* manager): UAVObject(manager, 0xEBB0477C, "GPSExtendedStatus", "Extended GPS status.", "Sensors", 1, 0, ACCESS_READWRITE, ACCESS_READWRITE, 0, 0, UPDATEMODE_PERIODIC, UPDATEMODE_MANUAL, 1000, 0, 0)
{

}

int GPSExtendedStatus::UAVObjSetDataField(const char *dataIn, const std::string fieldID){
	if(fieldID == "FlightTime") {
		memset( &(dataFields.FlightTime), 0, sizeof(dataFields.FlightTime));
		memcpy( &(dataFields.FlightTime), dataIn, sizeof(dataFields.FlightTime));
	} else if(fieldID == "Options") {
		memset( &(dataFields.Options), 0, sizeof(dataFields.Options));
		memcpy( &(dataFields.Options), dataIn, sizeof(dataFields.Options));
	} else if(fieldID == "Status") {
		memset( &(dataFields.Status), 0, sizeof(dataFields.Status));
		memcpy( &(dataFields.Status), dataIn, sizeof(dataFields.Status));
	} else if(fieldID == "BoardType") {
		memset( &(dataFields.BoardType), 0, sizeof(dataFields.BoardType));
		memcpy( &(dataFields.BoardType), dataIn, sizeof(dataFields.BoardType));
	} else if(fieldID == "FirmwareHash") {
		memset( &(dataFields.FirmwareHash), 0, sizeof(dataFields.FirmwareHash));
		memcpy( &(dataFields.FirmwareHash), dataIn, sizeof(dataFields.FirmwareHash));
	} else if(fieldID == "FirmwareTag") {
		memset( &(dataFields.FirmwareTag), 0, sizeof(dataFields.FirmwareTag));
		memcpy( &(dataFields.FirmwareTag), dataIn, sizeof(dataFields.FirmwareTag));
	}
	return 0;
}

int GPSExtendedStatus::UAVObjGetDataField(char *dataOut, const std::string fieldID){
	if(fieldID == "FlightTime") {
		memcpy( dataOut, &(dataFields.FlightTime), sizeof(dataFields.FlightTime));
	} else if(fieldID == "Options") {
		memcpy( dataOut, &(dataFields.Options), sizeof(dataFields.Options));
	} else if(fieldID == "Status") {
		memcpy( dataOut, &(dataFields.Status), sizeof(dataFields.Status));
	} else if(fieldID == "BoardType") {
		memcpy( dataOut, &(dataFields.BoardType), sizeof(dataFields.BoardType));
	} else if(fieldID == "FirmwareHash") {
		memcpy( dataOut, &(dataFields.FirmwareHash), sizeof(dataFields.FirmwareHash));
	} else if(fieldID == "FirmwareTag") {
		memcpy( dataOut, &(dataFields.FirmwareTag), sizeof(dataFields.FirmwareTag));
	}
	return 0;
}

int GPSExtendedStatus::UAVObjUnpack(const unsigned char *dataIn){
	memcpy(&dataFields, dataIn, NUMBYTES);
	return 0;
}

int GPSExtendedStatus::UAVObjPack(unsigned char *dataOut) {
	memcpy(dataOut, &dataFields, NUMBYTES);
	return 0;
}

unsigned short GPSExtendedStatus::UAVObjGetInstance() const {
	return instance;
}
unsigned short GPSExtendedStatus::UAVObjGetNumBytes() const {
	return sizeof(dataFields);
}
unsigned short GPSExtendedStatus::UAVObjGetNumInstances() const {
	return numInstances;
}

std::string GPSExtendedStatus::prettyPrint() {
	std::stringstream ss;
	ss << "\nPrinting object: gpsextendedstatus" << std::endl;
	ss << "\tFlightTime: " << dataFields.FlightTime << std::endl;
	ss << "\tOptions: " << dataFields.Options << std::endl;
	ss << "\tStatus: " << dataFields.Status << std::endl;
	ss << "\tBoardType: " << dataFields.BoardType << std::endl;
	ss << "\tFirmwareHash: " << dataFields.FirmwareHash << std::endl;
	ss << "\tFirmwareTag: " << dataFields.FirmwareTag << std::endl;

	return ss.str();
}

/*/***/
/* * Initialize object fields with the default values.*/
/* * If a default value is not specified the object fields*/
/* * will be initialized to zero.*/
/* */
/*void GPSExtendedStatus::setDefaultFieldValues()*/
/*{*/
/*    data.Status = 0;
*/
/*}*/

/*/***/
/* * Get the object data fields*/
/* */
/*GPSExtendedStatus::DataFields GPSExtendedStatus::getData()*/
/*{*/
/*    QMutexLocker locker(mutex);*/
/*    return data;*/
/*}*/

/*/***/
/* * Set the object data fields*/
/* */
/*void GPSExtendedStatus::setData(const DataFields& data)*/
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

/*void GPSExtendedStatus::emitNotifications()*/
/*{*/
/*            //if (data.FlightTime != oldData.FlightTime)
            emit FlightTimeChanged(data.FlightTime);
        //if (data.Options != oldData.Options)
            emit OptionsChanged(data.Options);
        //if (data.Status != oldData.Status)
            emit StatusChanged(data.Status);
*/
/*}*/

/*/***/
/* * Create a clone of this object, a new instance ID must be specified.*/
/* * Do not use this function directly to create new instances, the*/
/* * UAVObjectManager should be used instead.*/
/* */
/*UAVDataObject *GPSExtendedStatus::clone(unsigned int instID)*/
/*{*/
/*    GPSExtendedStatus *obj = new GPSExtendedStatus();*/
/*    obj->initialize(instID, this->getMetaObject());*/
/*    return obj;*/
/*}*/

/*/***/
/* * Create a clone of this object only to be used to retrieve defaults*/
/* */
/*UAVDataObject *GPSExtendedStatus::dirtyClone()*/
/*{*/
/*    GPSExtendedStatus *obj = new GPSExtendedStatus();*/
/*    return obj;*/
/*}*/

/*/***/
/* * Static function to retrieve an instance of the object.*/
/* */
/*GPSExtendedStatus *GPSExtendedStatus::GetInstance(UAVObjectManager *objMngr, unsigned int instID)*/
/*{*/
/*    return dynamic_cast<GPSExtendedStatus *>(objMngr->getObject(GPSExtendedStatus::OBJID, instID));*/
/*}*/

/*unsigned int GPSExtendedStatus::getFlightTime() const
{
   QMutexLocker locker(mutex);
   return data.FlightTime;
}
void GPSExtendedStatus::setFlightTime(unsigned int value)
{
   mutex->lock();
   bool changed = data.FlightTime != value;
   data.FlightTime = value;
   mutex->unlock();
   if (changed) emit FlightTimeChanged(value);
}

unsigned short int GPSExtendedStatus::getOptions() const
{
   QMutexLocker locker(mutex);
   return data.Options;
}
void GPSExtendedStatus::setOptions(unsigned short int value)
{
   mutex->lock();
   bool changed = data.Options != value;
   data.Options = value;
   mutex->unlock();
   if (changed) emit OptionsChanged(value);
}

unsigned char GPSExtendedStatus::getStatus() const
{
   QMutexLocker locker(mutex);
   return data.Status;
}
void GPSExtendedStatus::setStatus(unsigned char value)
{
   mutex->lock();
   bool changed = data.Status != value;
   data.Status = value;
   mutex->unlock();
   if (changed) emit StatusChanged(value);
}

unsigned char GPSExtendedStatus::getBoardType(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.BoardType[index];
}
void GPSExtendedStatus::setBoardType(unsigned int index, unsigned char value)
{
   mutex->lock();
   bool changed = data.BoardType[index] != value;
   data.BoardType[index] = value;
   mutex->unlock();
   if (changed) emit BoardTypeChanged(index,value);
}

unsigned char GPSExtendedStatus::getFirmwareHash(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.FirmwareHash[index];
}
void GPSExtendedStatus::setFirmwareHash(unsigned int index, unsigned char value)
{
   mutex->lock();
   bool changed = data.FirmwareHash[index] != value;
   data.FirmwareHash[index] = value;
   mutex->unlock();
   if (changed) emit FirmwareHashChanged(index,value);
}

unsigned char GPSExtendedStatus::getFirmwareTag(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.FirmwareTag[index];
}
void GPSExtendedStatus::setFirmwareTag(unsigned int index, unsigned char value)
{
   mutex->lock();
   bool changed = data.FirmwareTag[index] != value;
   data.FirmwareTag[index] = value;
   mutex->unlock();
   if (changed) emit FirmwareTagChanged(index,value);
}

*/
