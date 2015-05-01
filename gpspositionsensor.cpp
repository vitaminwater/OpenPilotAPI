/**
 ******************************************************************************
 *
 * @file       gpspositionsensor.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: gpspositionsensor.xml.
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

#include "gpspositionsensor.h"

int GPSPositionSensor::numInstances = 0;

/**
 * Constructor
 */
GPSPositionSensor::GPSPositionSensor(UAVObjManager* manager): UAVObject(manager, 0x7D26A6E6, "GPSPositionSensor", "Raw GPS data from @ref GPSModule.", "Sensors", 1, 0, ACCESS_READWRITE, ACCESS_READWRITE, 0, 0, UPDATEMODE_PERIODIC, UPDATEMODE_MANUAL, 1000, 0, 0)
{

}

int GPSPositionSensor::UAVObjSetDataField(const char *dataIn, const std::string fieldID){
	if(fieldID == "Latitude") {
		memset( &(dataFields.Latitude), 0, sizeof(dataFields.Latitude));
		memcpy( &(dataFields.Latitude), dataIn, sizeof(dataFields.Latitude));
	} else if(fieldID == "Longitude") {
		memset( &(dataFields.Longitude), 0, sizeof(dataFields.Longitude));
		memcpy( &(dataFields.Longitude), dataIn, sizeof(dataFields.Longitude));
	} else if(fieldID == "Altitude") {
		memset( &(dataFields.Altitude), 0, sizeof(dataFields.Altitude));
		memcpy( &(dataFields.Altitude), dataIn, sizeof(dataFields.Altitude));
	} else if(fieldID == "GeoidSeparation") {
		memset( &(dataFields.GeoidSeparation), 0, sizeof(dataFields.GeoidSeparation));
		memcpy( &(dataFields.GeoidSeparation), dataIn, sizeof(dataFields.GeoidSeparation));
	} else if(fieldID == "Heading") {
		memset( &(dataFields.Heading), 0, sizeof(dataFields.Heading));
		memcpy( &(dataFields.Heading), dataIn, sizeof(dataFields.Heading));
	} else if(fieldID == "Groundspeed") {
		memset( &(dataFields.Groundspeed), 0, sizeof(dataFields.Groundspeed));
		memcpy( &(dataFields.Groundspeed), dataIn, sizeof(dataFields.Groundspeed));
	} else if(fieldID == "PDOP") {
		memset( &(dataFields.PDOP), 0, sizeof(dataFields.PDOP));
		memcpy( &(dataFields.PDOP), dataIn, sizeof(dataFields.PDOP));
	} else if(fieldID == "HDOP") {
		memset( &(dataFields.HDOP), 0, sizeof(dataFields.HDOP));
		memcpy( &(dataFields.HDOP), dataIn, sizeof(dataFields.HDOP));
	} else if(fieldID == "VDOP") {
		memset( &(dataFields.VDOP), 0, sizeof(dataFields.VDOP));
		memcpy( &(dataFields.VDOP), dataIn, sizeof(dataFields.VDOP));
	} else if(fieldID == "Status") {
		memset( &(dataFields.Status), 0, sizeof(dataFields.Status));
		memcpy( &(dataFields.Status), dataIn, sizeof(dataFields.Status));
	} else if(fieldID == "Satellites") {
		memset( &(dataFields.Satellites), 0, sizeof(dataFields.Satellites));
		memcpy( &(dataFields.Satellites), dataIn, sizeof(dataFields.Satellites));
	} else if(fieldID == "SensorType") {
		memset( &(dataFields.SensorType), 0, sizeof(dataFields.SensorType));
		memcpy( &(dataFields.SensorType), dataIn, sizeof(dataFields.SensorType));
	} else if(fieldID == "AutoConfigStatus") {
		memset( &(dataFields.AutoConfigStatus), 0, sizeof(dataFields.AutoConfigStatus));
		memcpy( &(dataFields.AutoConfigStatus), dataIn, sizeof(dataFields.AutoConfigStatus));
	}
	return 0;
}

int GPSPositionSensor::UAVObjGetDataField(char *dataOut, const std::string fieldID){
	if(fieldID == "Latitude") {
		memcpy( dataOut, &(dataFields.Latitude), sizeof(dataFields.Latitude));
	} else if(fieldID == "Longitude") {
		memcpy( dataOut, &(dataFields.Longitude), sizeof(dataFields.Longitude));
	} else if(fieldID == "Altitude") {
		memcpy( dataOut, &(dataFields.Altitude), sizeof(dataFields.Altitude));
	} else if(fieldID == "GeoidSeparation") {
		memcpy( dataOut, &(dataFields.GeoidSeparation), sizeof(dataFields.GeoidSeparation));
	} else if(fieldID == "Heading") {
		memcpy( dataOut, &(dataFields.Heading), sizeof(dataFields.Heading));
	} else if(fieldID == "Groundspeed") {
		memcpy( dataOut, &(dataFields.Groundspeed), sizeof(dataFields.Groundspeed));
	} else if(fieldID == "PDOP") {
		memcpy( dataOut, &(dataFields.PDOP), sizeof(dataFields.PDOP));
	} else if(fieldID == "HDOP") {
		memcpy( dataOut, &(dataFields.HDOP), sizeof(dataFields.HDOP));
	} else if(fieldID == "VDOP") {
		memcpy( dataOut, &(dataFields.VDOP), sizeof(dataFields.VDOP));
	} else if(fieldID == "Status") {
		memcpy( dataOut, &(dataFields.Status), sizeof(dataFields.Status));
	} else if(fieldID == "Satellites") {
		memcpy( dataOut, &(dataFields.Satellites), sizeof(dataFields.Satellites));
	} else if(fieldID == "SensorType") {
		memcpy( dataOut, &(dataFields.SensorType), sizeof(dataFields.SensorType));
	} else if(fieldID == "AutoConfigStatus") {
		memcpy( dataOut, &(dataFields.AutoConfigStatus), sizeof(dataFields.AutoConfigStatus));
	}
	return 0;
}

int GPSPositionSensor::UAVObjUnpack(const unsigned char *dataIn){
	memcpy(&dataFields, dataIn, NUMBYTES);
	return 0;
}

int GPSPositionSensor::UAVObjPack(unsigned char *dataOut) {
	memcpy(dataOut, &dataFields, NUMBYTES);
	return 0;
}

unsigned short GPSPositionSensor::UAVObjGetInstance() const {
	return instance;
}
unsigned short GPSPositionSensor::UAVObjGetNumBytes() const {
	return sizeof(dataFields);
}
unsigned short GPSPositionSensor::UAVObjGetNumInstances() const {
	return numInstances;
}

std::string GPSPositionSensor::prettyPrint() {
	std::stringstream ss;
	ss << "\nPrinting object: gpspositionsensor" << std::endl;
	ss << "\tLatitude: " << dataFields.Latitude << std::endl;
	ss << "\tLongitude: " << dataFields.Longitude << std::endl;
	ss << "\tAltitude: " << dataFields.Altitude << std::endl;
	ss << "\tGeoidSeparation: " << dataFields.GeoidSeparation << std::endl;
	ss << "\tHeading: " << dataFields.Heading << std::endl;
	ss << "\tGroundspeed: " << dataFields.Groundspeed << std::endl;
	ss << "\tPDOP: " << dataFields.PDOP << std::endl;
	ss << "\tHDOP: " << dataFields.HDOP << std::endl;
	ss << "\tVDOP: " << dataFields.VDOP << std::endl;
	ss << "\tStatus: " << dataFields.Status << std::endl;
	ss << "\tSatellites: " << dataFields.Satellites << std::endl;
	ss << "\tSensorType: " << dataFields.SensorType << std::endl;
	ss << "\tAutoConfigStatus: " << dataFields.AutoConfigStatus << std::endl;

	return ss.str();
}

/*/***/
/* * Initialize object fields with the default values.*/
/* * If a default value is not specified the object fields*/
/* * will be initialized to zero.*/
/* */
/*void GPSPositionSensor::setDefaultFieldValues()*/
/*{*/
/*    data.SensorType = 0;
    data.AutoConfigStatus = 0;
*/
/*}*/

/*/***/
/* * Get the object data fields*/
/* */
/*GPSPositionSensor::DataFields GPSPositionSensor::getData()*/
/*{*/
/*    QMutexLocker locker(mutex);*/
/*    return data;*/
/*}*/

/*/***/
/* * Set the object data fields*/
/* */
/*void GPSPositionSensor::setData(const DataFields& data)*/
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

/*void GPSPositionSensor::emitNotifications()*/
/*{*/
/*            //if (data.Latitude != oldData.Latitude)
            emit LatitudeChanged(data.Latitude);
        //if (data.Longitude != oldData.Longitude)
            emit LongitudeChanged(data.Longitude);
        //if (data.Altitude != oldData.Altitude)
            emit AltitudeChanged(data.Altitude);
        //if (data.GeoidSeparation != oldData.GeoidSeparation)
            emit GeoidSeparationChanged(data.GeoidSeparation);
        //if (data.Heading != oldData.Heading)
            emit HeadingChanged(data.Heading);
        //if (data.Groundspeed != oldData.Groundspeed)
            emit GroundspeedChanged(data.Groundspeed);
        //if (data.PDOP != oldData.PDOP)
            emit PDOPChanged(data.PDOP);
        //if (data.HDOP != oldData.HDOP)
            emit HDOPChanged(data.HDOP);
        //if (data.VDOP != oldData.VDOP)
            emit VDOPChanged(data.VDOP);
        //if (data.Status != oldData.Status)
            emit StatusChanged(data.Status);
        //if (data.Satellites != oldData.Satellites)
            emit SatellitesChanged(data.Satellites);
        //if (data.SensorType != oldData.SensorType)
            emit SensorTypeChanged(data.SensorType);
        //if (data.AutoConfigStatus != oldData.AutoConfigStatus)
            emit AutoConfigStatusChanged(data.AutoConfigStatus);
*/
/*}*/

/*/***/
/* * Create a clone of this object, a new instance ID must be specified.*/
/* * Do not use this function directly to create new instances, the*/
/* * UAVObjectManager should be used instead.*/
/* */
/*UAVDataObject *GPSPositionSensor::clone(unsigned int instID)*/
/*{*/
/*    GPSPositionSensor *obj = new GPSPositionSensor();*/
/*    obj->initialize(instID, this->getMetaObject());*/
/*    return obj;*/
/*}*/

/*/***/
/* * Create a clone of this object only to be used to retrieve defaults*/
/* */
/*UAVDataObject *GPSPositionSensor::dirtyClone()*/
/*{*/
/*    GPSPositionSensor *obj = new GPSPositionSensor();*/
/*    return obj;*/
/*}*/

/*/***/
/* * Static function to retrieve an instance of the object.*/
/* */
/*GPSPositionSensor *GPSPositionSensor::GetInstance(UAVObjectManager *objMngr, unsigned int instID)*/
/*{*/
/*    return dynamic_cast<GPSPositionSensor *>(objMngr->getObject(GPSPositionSensor::OBJID, instID));*/
/*}*/

/*int GPSPositionSensor::getLatitude() const
{
   QMutexLocker locker(mutex);
   return data.Latitude;
}
void GPSPositionSensor::setLatitude(int value)
{
   mutex->lock();
   bool changed = data.Latitude != value;
   data.Latitude = value;
   mutex->unlock();
   if (changed) emit LatitudeChanged(value);
}

int GPSPositionSensor::getLongitude() const
{
   QMutexLocker locker(mutex);
   return data.Longitude;
}
void GPSPositionSensor::setLongitude(int value)
{
   mutex->lock();
   bool changed = data.Longitude != value;
   data.Longitude = value;
   mutex->unlock();
   if (changed) emit LongitudeChanged(value);
}

float GPSPositionSensor::getAltitude() const
{
   QMutexLocker locker(mutex);
   return data.Altitude;
}
void GPSPositionSensor::setAltitude(float value)
{
   mutex->lock();
   bool changed = data.Altitude != value;
   data.Altitude = value;
   mutex->unlock();
   if (changed) emit AltitudeChanged(value);
}

float GPSPositionSensor::getGeoidSeparation() const
{
   QMutexLocker locker(mutex);
   return data.GeoidSeparation;
}
void GPSPositionSensor::setGeoidSeparation(float value)
{
   mutex->lock();
   bool changed = data.GeoidSeparation != value;
   data.GeoidSeparation = value;
   mutex->unlock();
   if (changed) emit GeoidSeparationChanged(value);
}

float GPSPositionSensor::getHeading() const
{
   QMutexLocker locker(mutex);
   return data.Heading;
}
void GPSPositionSensor::setHeading(float value)
{
   mutex->lock();
   bool changed = data.Heading != value;
   data.Heading = value;
   mutex->unlock();
   if (changed) emit HeadingChanged(value);
}

float GPSPositionSensor::getGroundspeed() const
{
   QMutexLocker locker(mutex);
   return data.Groundspeed;
}
void GPSPositionSensor::setGroundspeed(float value)
{
   mutex->lock();
   bool changed = data.Groundspeed != value;
   data.Groundspeed = value;
   mutex->unlock();
   if (changed) emit GroundspeedChanged(value);
}

float GPSPositionSensor::getPDOP() const
{
   QMutexLocker locker(mutex);
   return data.PDOP;
}
void GPSPositionSensor::setPDOP(float value)
{
   mutex->lock();
   bool changed = data.PDOP != value;
   data.PDOP = value;
   mutex->unlock();
   if (changed) emit PDOPChanged(value);
}

float GPSPositionSensor::getHDOP() const
{
   QMutexLocker locker(mutex);
   return data.HDOP;
}
void GPSPositionSensor::setHDOP(float value)
{
   mutex->lock();
   bool changed = data.HDOP != value;
   data.HDOP = value;
   mutex->unlock();
   if (changed) emit HDOPChanged(value);
}

float GPSPositionSensor::getVDOP() const
{
   QMutexLocker locker(mutex);
   return data.VDOP;
}
void GPSPositionSensor::setVDOP(float value)
{
   mutex->lock();
   bool changed = data.VDOP != value;
   data.VDOP = value;
   mutex->unlock();
   if (changed) emit VDOPChanged(value);
}

unsigned char GPSPositionSensor::getStatus() const
{
   QMutexLocker locker(mutex);
   return data.Status;
}
void GPSPositionSensor::setStatus(unsigned char value)
{
   mutex->lock();
   bool changed = data.Status != value;
   data.Status = value;
   mutex->unlock();
   if (changed) emit StatusChanged(value);
}

char GPSPositionSensor::getSatellites() const
{
   QMutexLocker locker(mutex);
   return data.Satellites;
}
void GPSPositionSensor::setSatellites(char value)
{
   mutex->lock();
   bool changed = data.Satellites != value;
   data.Satellites = value;
   mutex->unlock();
   if (changed) emit SatellitesChanged(value);
}

unsigned char GPSPositionSensor::getSensorType() const
{
   QMutexLocker locker(mutex);
   return data.SensorType;
}
void GPSPositionSensor::setSensorType(unsigned char value)
{
   mutex->lock();
   bool changed = data.SensorType != value;
   data.SensorType = value;
   mutex->unlock();
   if (changed) emit SensorTypeChanged(value);
}

unsigned char GPSPositionSensor::getAutoConfigStatus() const
{
   QMutexLocker locker(mutex);
   return data.AutoConfigStatus;
}
void GPSPositionSensor::setAutoConfigStatus(unsigned char value)
{
   mutex->lock();
   bool changed = data.AutoConfigStatus != value;
   data.AutoConfigStatus = value;
   mutex->unlock();
   if (changed) emit AutoConfigStatusChanged(value);
}

*/
