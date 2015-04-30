/**
 ******************************************************************************
 *
 * @file       airspeedsensor.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: airspeedsensor.xml.
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

#include "airspeedsensor.h"

int AirspeedSensor::numInstances = 0;

/**
 * Constructor
 */
AirspeedSensor::AirspeedSensor(UAVObjManager* manager): UAVObject(manager, 0x438D5F9A, "AirspeedSensor", "The raw data from the dynamic pressure sensor with pressure, temperature and airspeed.", "Sensors", 1, 0, ACCESS_READWRITE, ACCESS_READWRITE, 0, 0, UPDATEMODE_PERIODIC, UPDATEMODE_MANUAL, 1000, 0, 0)
{

}

int AirspeedSensor::UAVObjSetDataField(const char *dataIn, const std::string fieldID){
	if(fieldID == "DifferentialPressure") {
		memset( &(dataFields.DifferentialPressure), 0, sizeof(dataFields.DifferentialPressure));
		memcpy( &(dataFields.DifferentialPressure), dataIn, sizeof(dataFields.DifferentialPressure));
	} else if(fieldID == "Temperature") {
		memset( &(dataFields.Temperature), 0, sizeof(dataFields.Temperature));
		memcpy( &(dataFields.Temperature), dataIn, sizeof(dataFields.Temperature));
	} else if(fieldID == "CalibratedAirspeed") {
		memset( &(dataFields.CalibratedAirspeed), 0, sizeof(dataFields.CalibratedAirspeed));
		memcpy( &(dataFields.CalibratedAirspeed), dataIn, sizeof(dataFields.CalibratedAirspeed));
	} else if(fieldID == "TrueAirspeed") {
		memset( &(dataFields.TrueAirspeed), 0, sizeof(dataFields.TrueAirspeed));
		memcpy( &(dataFields.TrueAirspeed), dataIn, sizeof(dataFields.TrueAirspeed));
	} else if(fieldID == "SensorValue") {
		memset( &(dataFields.SensorValue), 0, sizeof(dataFields.SensorValue));
		memcpy( &(dataFields.SensorValue), dataIn, sizeof(dataFields.SensorValue));
	} else if(fieldID == "SensorValueTemperature") {
		memset( &(dataFields.SensorValueTemperature), 0, sizeof(dataFields.SensorValueTemperature));
		memcpy( &(dataFields.SensorValueTemperature), dataIn, sizeof(dataFields.SensorValueTemperature));
	} else if(fieldID == "SensorConnected") {
		memset( &(dataFields.SensorConnected), 0, sizeof(dataFields.SensorConnected));
		memcpy( &(dataFields.SensorConnected), dataIn, sizeof(dataFields.SensorConnected));
	}
	return 0;
}

int AirspeedSensor::UAVObjGetDataField(char *dataOut, const std::string fieldID){
	if(fieldID == "DifferentialPressure") {
		memcpy( dataOut, &(dataFields.DifferentialPressure), sizeof(dataFields.DifferentialPressure));
	} else if(fieldID == "Temperature") {
		memcpy( dataOut, &(dataFields.Temperature), sizeof(dataFields.Temperature));
	} else if(fieldID == "CalibratedAirspeed") {
		memcpy( dataOut, &(dataFields.CalibratedAirspeed), sizeof(dataFields.CalibratedAirspeed));
	} else if(fieldID == "TrueAirspeed") {
		memcpy( dataOut, &(dataFields.TrueAirspeed), sizeof(dataFields.TrueAirspeed));
	} else if(fieldID == "SensorValue") {
		memcpy( dataOut, &(dataFields.SensorValue), sizeof(dataFields.SensorValue));
	} else if(fieldID == "SensorValueTemperature") {
		memcpy( dataOut, &(dataFields.SensorValueTemperature), sizeof(dataFields.SensorValueTemperature));
	} else if(fieldID == "SensorConnected") {
		memcpy( dataOut, &(dataFields.SensorConnected), sizeof(dataFields.SensorConnected));
	}
	return 0;
}

int AirspeedSensor::UAVObjUnpack(const unsigned char *dataIn){
	memcpy(&dataFields, dataIn, NUMBYTES);
	return 0;
}

int AirspeedSensor::UAVObjPack(unsigned char *dataOut) {
	memcpy(dataOut, &dataFields, NUMBYTES);
	return 0;
}

unsigned short AirspeedSensor::UAVObjGetInstance() const {
	return instance;
}
unsigned short AirspeedSensor::UAVObjGetNumBytes() const {
	return sizeof(dataFields);
}
unsigned short AirspeedSensor::UAVObjGetNumInstances() const {
	return numInstances;
}

std::string AirspeedSensor::prettyPrint() {
	std::stringstream ss;
	ss << "\nPrinting object: airspeedsensor" << std::endl;
	ss << "\tDifferentialPressure: " << dataFields.DifferentialPressure << std::endl;
	ss << "\tTemperature: " << dataFields.Temperature << std::endl;
	ss << "\tCalibratedAirspeed: " << dataFields.CalibratedAirspeed << std::endl;
	ss << "\tTrueAirspeed: " << dataFields.TrueAirspeed << std::endl;
	ss << "\tSensorValue: " << dataFields.SensorValue << std::endl;
	ss << "\tSensorValueTemperature: " << dataFields.SensorValueTemperature << std::endl;
	ss << "\tSensorConnected: " << dataFields.SensorConnected << std::endl;

	return ss.str();
}

/*/***/
/* * Initialize object fields with the default values.*/
/* * If a default value is not specified the object fields*/
/* * will be initialized to zero.*/
/* */
/*void AirspeedSensor::setDefaultFieldValues()*/
/*{*/
/*    data.TrueAirspeed = -1;
*/
/*}*/

/*/***/
/* * Get the object data fields*/
/* */
/*AirspeedSensor::DataFields AirspeedSensor::getData()*/
/*{*/
/*    QMutexLocker locker(mutex);*/
/*    return data;*/
/*}*/

/*/***/
/* * Set the object data fields*/
/* */
/*void AirspeedSensor::setData(const DataFields& data)*/
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

/*void AirspeedSensor::emitNotifications()*/
/*{*/
/*            //if (data.DifferentialPressure != oldData.DifferentialPressure)
            emit DifferentialPressureChanged(data.DifferentialPressure);
        //if (data.Temperature != oldData.Temperature)
            emit TemperatureChanged(data.Temperature);
        //if (data.CalibratedAirspeed != oldData.CalibratedAirspeed)
            emit CalibratedAirspeedChanged(data.CalibratedAirspeed);
        //if (data.TrueAirspeed != oldData.TrueAirspeed)
            emit TrueAirspeedChanged(data.TrueAirspeed);
        //if (data.SensorValue != oldData.SensorValue)
            emit SensorValueChanged(data.SensorValue);
        //if (data.SensorValueTemperature != oldData.SensorValueTemperature)
            emit SensorValueTemperatureChanged(data.SensorValueTemperature);
        //if (data.SensorConnected != oldData.SensorConnected)
            emit SensorConnectedChanged(data.SensorConnected);
*/
/*}*/

/*/***/
/* * Create a clone of this object, a new instance ID must be specified.*/
/* * Do not use this function directly to create new instances, the*/
/* * UAVObjectManager should be used instead.*/
/* */
/*UAVDataObject *AirspeedSensor::clone(unsigned int instID)*/
/*{*/
/*    AirspeedSensor *obj = new AirspeedSensor();*/
/*    obj->initialize(instID, this->getMetaObject());*/
/*    return obj;*/
/*}*/

/*/***/
/* * Create a clone of this object only to be used to retrieve defaults*/
/* */
/*UAVDataObject *AirspeedSensor::dirtyClone()*/
/*{*/
/*    AirspeedSensor *obj = new AirspeedSensor();*/
/*    return obj;*/
/*}*/

/*/***/
/* * Static function to retrieve an instance of the object.*/
/* */
/*AirspeedSensor *AirspeedSensor::GetInstance(UAVObjectManager *objMngr, unsigned int instID)*/
/*{*/
/*    return dynamic_cast<AirspeedSensor *>(objMngr->getObject(AirspeedSensor::OBJID, instID));*/
/*}*/

/*float AirspeedSensor::getDifferentialPressure() const
{
   QMutexLocker locker(mutex);
   return data.DifferentialPressure;
}
void AirspeedSensor::setDifferentialPressure(float value)
{
   mutex->lock();
   bool changed = data.DifferentialPressure != value;
   data.DifferentialPressure = value;
   mutex->unlock();
   if (changed) emit DifferentialPressureChanged(value);
}

float AirspeedSensor::getTemperature() const
{
   QMutexLocker locker(mutex);
   return data.Temperature;
}
void AirspeedSensor::setTemperature(float value)
{
   mutex->lock();
   bool changed = data.Temperature != value;
   data.Temperature = value;
   mutex->unlock();
   if (changed) emit TemperatureChanged(value);
}

float AirspeedSensor::getCalibratedAirspeed() const
{
   QMutexLocker locker(mutex);
   return data.CalibratedAirspeed;
}
void AirspeedSensor::setCalibratedAirspeed(float value)
{
   mutex->lock();
   bool changed = data.CalibratedAirspeed != value;
   data.CalibratedAirspeed = value;
   mutex->unlock();
   if (changed) emit CalibratedAirspeedChanged(value);
}

float AirspeedSensor::getTrueAirspeed() const
{
   QMutexLocker locker(mutex);
   return data.TrueAirspeed;
}
void AirspeedSensor::setTrueAirspeed(float value)
{
   mutex->lock();
   bool changed = data.TrueAirspeed != value;
   data.TrueAirspeed = value;
   mutex->unlock();
   if (changed) emit TrueAirspeedChanged(value);
}

unsigned short int AirspeedSensor::getSensorValue() const
{
   QMutexLocker locker(mutex);
   return data.SensorValue;
}
void AirspeedSensor::setSensorValue(unsigned short int value)
{
   mutex->lock();
   bool changed = data.SensorValue != value;
   data.SensorValue = value;
   mutex->unlock();
   if (changed) emit SensorValueChanged(value);
}

unsigned short int AirspeedSensor::getSensorValueTemperature() const
{
   QMutexLocker locker(mutex);
   return data.SensorValueTemperature;
}
void AirspeedSensor::setSensorValueTemperature(unsigned short int value)
{
   mutex->lock();
   bool changed = data.SensorValueTemperature != value;
   data.SensorValueTemperature = value;
   mutex->unlock();
   if (changed) emit SensorValueTemperatureChanged(value);
}

unsigned char AirspeedSensor::getSensorConnected() const
{
   QMutexLocker locker(mutex);
   return data.SensorConnected;
}
void AirspeedSensor::setSensorConnected(unsigned char value)
{
   mutex->lock();
   bool changed = data.SensorConnected != value;
   data.SensorConnected = value;
   mutex->unlock();
   if (changed) emit SensorConnectedChanged(value);
}

*/
