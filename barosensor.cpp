/**
 ******************************************************************************
 *
 * @file       barosensor.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: barosensor.xml.
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

#include "barosensor.h"

int BaroSensor::numInstances = 0;

/**
 * Constructor
 */
BaroSensor::BaroSensor(UAVObjManager* manager): UAVObject(manager, 0x48120EA6, "BaroSensor", "The raw data from the barometric sensor with pressure, temperature and altitude estimate.", "Sensors", 1, 0, ACCESS_READWRITE, ACCESS_READWRITE, 0, 0, UPDATEMODE_PERIODIC, UPDATEMODE_MANUAL, 1000, 0, 0)
{

}

int BaroSensor::UAVObjSetDataField(const char *dataIn, const std::string fieldID){
	if(fieldID == "Altitude") {
		memset( &(dataFields.Altitude), 0, sizeof(dataFields.Altitude));
		memcpy( &(dataFields.Altitude), dataIn, sizeof(dataFields.Altitude));
	} else if(fieldID == "Temperature") {
		memset( &(dataFields.Temperature), 0, sizeof(dataFields.Temperature));
		memcpy( &(dataFields.Temperature), dataIn, sizeof(dataFields.Temperature));
	} else if(fieldID == "Pressure") {
		memset( &(dataFields.Pressure), 0, sizeof(dataFields.Pressure));
		memcpy( &(dataFields.Pressure), dataIn, sizeof(dataFields.Pressure));
	}
	return 0;
}

int BaroSensor::UAVObjGetDataField(char *dataOut, const std::string fieldID){
	if(fieldID == "Altitude") {
		memcpy( dataOut, &(dataFields.Altitude), sizeof(dataFields.Altitude));
	} else if(fieldID == "Temperature") {
		memcpy( dataOut, &(dataFields.Temperature), sizeof(dataFields.Temperature));
	} else if(fieldID == "Pressure") {
		memcpy( dataOut, &(dataFields.Pressure), sizeof(dataFields.Pressure));
	}
	return 0;
}

int BaroSensor::UAVObjUnpack(const unsigned char *dataIn){
	memcpy(&dataFields, dataIn, NUMBYTES);
	return 0;
}

int BaroSensor::UAVObjPack(unsigned char *dataOut) {
	memcpy(dataOut, &dataFields, NUMBYTES);
	return 0;
}

unsigned short BaroSensor::UAVObjGetInstance() const {
	return instance;
}
unsigned short BaroSensor::UAVObjGetNumBytes() const {
	return sizeof(dataFields);
}
unsigned short BaroSensor::UAVObjGetNumInstances() const {
	return numInstances;
}

std::string BaroSensor::prettyPrint() {
	std::stringstream ss;
	ss << "\nPrinting object: barosensor" << std::endl;
	ss << "\tAltitude: " << dataFields.Altitude << std::endl;
	ss << "\tTemperature: " << dataFields.Temperature << std::endl;
	ss << "\tPressure: " << dataFields.Pressure << std::endl;

	return ss.str();
}

/*/***/
/* * Initialize object fields with the default values.*/
/* * If a default value is not specified the object fields*/
/* * will be initialized to zero.*/
/* */
/*void BaroSensor::setDefaultFieldValues()*/
/*{*/
/**/
/*}*/

/*/***/
/* * Get the object data fields*/
/* */
/*BaroSensor::DataFields BaroSensor::getData()*/
/*{*/
/*    QMutexLocker locker(mutex);*/
/*    return data;*/
/*}*/

/*/***/
/* * Set the object data fields*/
/* */
/*void BaroSensor::setData(const DataFields& data)*/
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

/*void BaroSensor::emitNotifications()*/
/*{*/
/*            //if (data.Altitude != oldData.Altitude)
            emit AltitudeChanged(data.Altitude);
        //if (data.Temperature != oldData.Temperature)
            emit TemperatureChanged(data.Temperature);
        //if (data.Pressure != oldData.Pressure)
            emit PressureChanged(data.Pressure);
*/
/*}*/

/*/***/
/* * Create a clone of this object, a new instance ID must be specified.*/
/* * Do not use this function directly to create new instances, the*/
/* * UAVObjectManager should be used instead.*/
/* */
/*UAVDataObject *BaroSensor::clone(unsigned int instID)*/
/*{*/
/*    BaroSensor *obj = new BaroSensor();*/
/*    obj->initialize(instID, this->getMetaObject());*/
/*    return obj;*/
/*}*/

/*/***/
/* * Create a clone of this object only to be used to retrieve defaults*/
/* */
/*UAVDataObject *BaroSensor::dirtyClone()*/
/*{*/
/*    BaroSensor *obj = new BaroSensor();*/
/*    return obj;*/
/*}*/

/*/***/
/* * Static function to retrieve an instance of the object.*/
/* */
/*BaroSensor *BaroSensor::GetInstance(UAVObjectManager *objMngr, unsigned int instID)*/
/*{*/
/*    return dynamic_cast<BaroSensor *>(objMngr->getObject(BaroSensor::OBJID, instID));*/
/*}*/

/*float BaroSensor::getAltitude() const
{
   QMutexLocker locker(mutex);
   return data.Altitude;
}
void BaroSensor::setAltitude(float value)
{
   mutex->lock();
   bool changed = data.Altitude != value;
   data.Altitude = value;
   mutex->unlock();
   if (changed) emit AltitudeChanged(value);
}

float BaroSensor::getTemperature() const
{
   QMutexLocker locker(mutex);
   return data.Temperature;
}
void BaroSensor::setTemperature(float value)
{
   mutex->lock();
   bool changed = data.Temperature != value;
   data.Temperature = value;
   mutex->unlock();
   if (changed) emit TemperatureChanged(value);
}

float BaroSensor::getPressure() const
{
   QMutexLocker locker(mutex);
   return data.Pressure;
}
void BaroSensor::setPressure(float value)
{
   mutex->lock();
   bool changed = data.Pressure != value;
   data.Pressure = value;
   mutex->unlock();
   if (changed) emit PressureChanged(value);
}

*/
