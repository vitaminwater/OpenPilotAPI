/**
 ******************************************************************************
 *
 * @file       airspeedsettings.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: airspeedsettings.xml.
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

#include "airspeedsettings.h"

int AirspeedSettings::numInstances = 0;

/**
 * Constructor
 */
AirspeedSettings::AirspeedSettings(UAVObjManager* manager): UAVObject(manager, 0x69F4AD7A, "AirspeedSettings", "Settings for the @ref BaroAirspeed module used on CopterControl or Revolution", "Sensors", 1, 1, ACCESS_READWRITE, ACCESS_READWRITE, 1, 1, UPDATEMODE_ONCHANGE, UPDATEMODE_ONCHANGE, 0, 0, 0)
{

}

int AirspeedSettings::UAVObjSetDataField(const char *dataIn, const std::string fieldID){
	if(fieldID == "Scale") {
		memset( &(dataFields.Scale), 0, sizeof(dataFields.Scale));
		memcpy( &(dataFields.Scale), dataIn, sizeof(dataFields.Scale));
	} else if(fieldID == "IMUBasedEstimationLowPassPeriod1") {
		memset( &(dataFields.IMUBasedEstimationLowPassPeriod1), 0, sizeof(dataFields.IMUBasedEstimationLowPassPeriod1));
		memcpy( &(dataFields.IMUBasedEstimationLowPassPeriod1), dataIn, sizeof(dataFields.IMUBasedEstimationLowPassPeriod1));
	} else if(fieldID == "IMUBasedEstimationLowPassPeriod2") {
		memset( &(dataFields.IMUBasedEstimationLowPassPeriod2), 0, sizeof(dataFields.IMUBasedEstimationLowPassPeriod2));
		memcpy( &(dataFields.IMUBasedEstimationLowPassPeriod2), dataIn, sizeof(dataFields.IMUBasedEstimationLowPassPeriod2));
	} else if(fieldID == "ZeroPoint") {
		memset( &(dataFields.ZeroPoint), 0, sizeof(dataFields.ZeroPoint));
		memcpy( &(dataFields.ZeroPoint), dataIn, sizeof(dataFields.ZeroPoint));
	} else if(fieldID == "SamplePeriod") {
		memset( &(dataFields.SamplePeriod), 0, sizeof(dataFields.SamplePeriod));
		memcpy( &(dataFields.SamplePeriod), dataIn, sizeof(dataFields.SamplePeriod));
	} else if(fieldID == "AirspeedSensorType") {
		memset( &(dataFields.AirspeedSensorType), 0, sizeof(dataFields.AirspeedSensorType));
		memcpy( &(dataFields.AirspeedSensorType), dataIn, sizeof(dataFields.AirspeedSensorType));
	}
	return 0;
}

int AirspeedSettings::UAVObjGetDataField(char *dataOut, const std::string fieldID){
	if(fieldID == "Scale") {
		memcpy( dataOut, &(dataFields.Scale), sizeof(dataFields.Scale));
	} else if(fieldID == "IMUBasedEstimationLowPassPeriod1") {
		memcpy( dataOut, &(dataFields.IMUBasedEstimationLowPassPeriod1), sizeof(dataFields.IMUBasedEstimationLowPassPeriod1));
	} else if(fieldID == "IMUBasedEstimationLowPassPeriod2") {
		memcpy( dataOut, &(dataFields.IMUBasedEstimationLowPassPeriod2), sizeof(dataFields.IMUBasedEstimationLowPassPeriod2));
	} else if(fieldID == "ZeroPoint") {
		memcpy( dataOut, &(dataFields.ZeroPoint), sizeof(dataFields.ZeroPoint));
	} else if(fieldID == "SamplePeriod") {
		memcpy( dataOut, &(dataFields.SamplePeriod), sizeof(dataFields.SamplePeriod));
	} else if(fieldID == "AirspeedSensorType") {
		memcpy( dataOut, &(dataFields.AirspeedSensorType), sizeof(dataFields.AirspeedSensorType));
	}
	return 0;
}

int AirspeedSettings::UAVObjUnpack(const unsigned char *dataIn){
	memcpy(&dataFields, dataIn, NUMBYTES);
	return 0;
}

int AirspeedSettings::UAVObjPack(unsigned char *dataOut) {
	memcpy(dataOut, &dataFields, NUMBYTES);
	return 0;
}

unsigned short AirspeedSettings::UAVObjGetInstance() const {
	return instance;
}
unsigned short AirspeedSettings::UAVObjGetNumBytes() const {
	return sizeof(dataFields);
}
unsigned short AirspeedSettings::UAVObjGetNumInstances() const {
	return numInstances;
}

std::string AirspeedSettings::prettyPrint() {
	std::stringstream ss;
	ss << "\nPrinting object: airspeedsettings" << std::endl;
	ss << "\tScale: " << dataFields.Scale << std::endl;
	ss << "\tIMUBasedEstimationLowPassPeriod1: " << dataFields.IMUBasedEstimationLowPassPeriod1 << std::endl;
	ss << "\tIMUBasedEstimationLowPassPeriod2: " << dataFields.IMUBasedEstimationLowPassPeriod2 << std::endl;
	ss << "\tZeroPoint: " << dataFields.ZeroPoint << std::endl;
	ss << "\tSamplePeriod: " << dataFields.SamplePeriod << std::endl;
	ss << "\tAirspeedSensorType: " << dataFields.AirspeedSensorType << std::endl;

	return ss.str();
}

/*/***/
/* * Initialize object fields with the default values.*/
/* * If a default value is not specified the object fields*/
/* * will be initialized to zero.*/
/* */
/*void AirspeedSettings::setDefaultFieldValues()*/
/*{*/
/*    data.Scale = 1;
    data.IMUBasedEstimationLowPassPeriod1 = 0.5;
    data.IMUBasedEstimationLowPassPeriod2 = 10;
    data.ZeroPoint = 0;
    data.SamplePeriod = 100;
    data.AirspeedSensorType = 5;
*/
/*}*/

/*/***/
/* * Get the object data fields*/
/* */
/*AirspeedSettings::DataFields AirspeedSettings::getData()*/
/*{*/
/*    QMutexLocker locker(mutex);*/
/*    return data;*/
/*}*/

/*/***/
/* * Set the object data fields*/
/* */
/*void AirspeedSettings::setData(const DataFields& data)*/
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

/*void AirspeedSettings::emitNotifications()*/
/*{*/
/*            //if (data.Scale != oldData.Scale)
            emit ScaleChanged(data.Scale);
        //if (data.IMUBasedEstimationLowPassPeriod1 != oldData.IMUBasedEstimationLowPassPeriod1)
            emit IMUBasedEstimationLowPassPeriod1Changed(data.IMUBasedEstimationLowPassPeriod1);
        //if (data.IMUBasedEstimationLowPassPeriod2 != oldData.IMUBasedEstimationLowPassPeriod2)
            emit IMUBasedEstimationLowPassPeriod2Changed(data.IMUBasedEstimationLowPassPeriod2);
        //if (data.ZeroPoint != oldData.ZeroPoint)
            emit ZeroPointChanged(data.ZeroPoint);
        //if (data.SamplePeriod != oldData.SamplePeriod)
            emit SamplePeriodChanged(data.SamplePeriod);
        //if (data.AirspeedSensorType != oldData.AirspeedSensorType)
            emit AirspeedSensorTypeChanged(data.AirspeedSensorType);
*/
/*}*/

/*/***/
/* * Create a clone of this object, a new instance ID must be specified.*/
/* * Do not use this function directly to create new instances, the*/
/* * UAVObjectManager should be used instead.*/
/* */
/*UAVDataObject *AirspeedSettings::clone(unsigned int instID)*/
/*{*/
/*    AirspeedSettings *obj = new AirspeedSettings();*/
/*    obj->initialize(instID, this->getMetaObject());*/
/*    return obj;*/
/*}*/

/*/***/
/* * Create a clone of this object only to be used to retrieve defaults*/
/* */
/*UAVDataObject *AirspeedSettings::dirtyClone()*/
/*{*/
/*    AirspeedSettings *obj = new AirspeedSettings();*/
/*    return obj;*/
/*}*/

/*/***/
/* * Static function to retrieve an instance of the object.*/
/* */
/*AirspeedSettings *AirspeedSettings::GetInstance(UAVObjectManager *objMngr, unsigned int instID)*/
/*{*/
/*    return dynamic_cast<AirspeedSettings *>(objMngr->getObject(AirspeedSettings::OBJID, instID));*/
/*}*/

/*float AirspeedSettings::getScale() const
{
   QMutexLocker locker(mutex);
   return data.Scale;
}
void AirspeedSettings::setScale(float value)
{
   mutex->lock();
   bool changed = data.Scale != value;
   data.Scale = value;
   mutex->unlock();
   if (changed) emit ScaleChanged(value);
}

float AirspeedSettings::getIMUBasedEstimationLowPassPeriod1() const
{
   QMutexLocker locker(mutex);
   return data.IMUBasedEstimationLowPassPeriod1;
}
void AirspeedSettings::setIMUBasedEstimationLowPassPeriod1(float value)
{
   mutex->lock();
   bool changed = data.IMUBasedEstimationLowPassPeriod1 != value;
   data.IMUBasedEstimationLowPassPeriod1 = value;
   mutex->unlock();
   if (changed) emit IMUBasedEstimationLowPassPeriod1Changed(value);
}

float AirspeedSettings::getIMUBasedEstimationLowPassPeriod2() const
{
   QMutexLocker locker(mutex);
   return data.IMUBasedEstimationLowPassPeriod2;
}
void AirspeedSettings::setIMUBasedEstimationLowPassPeriod2(float value)
{
   mutex->lock();
   bool changed = data.IMUBasedEstimationLowPassPeriod2 != value;
   data.IMUBasedEstimationLowPassPeriod2 = value;
   mutex->unlock();
   if (changed) emit IMUBasedEstimationLowPassPeriod2Changed(value);
}

unsigned short int AirspeedSettings::getZeroPoint() const
{
   QMutexLocker locker(mutex);
   return data.ZeroPoint;
}
void AirspeedSettings::setZeroPoint(unsigned short int value)
{
   mutex->lock();
   bool changed = data.ZeroPoint != value;
   data.ZeroPoint = value;
   mutex->unlock();
   if (changed) emit ZeroPointChanged(value);
}

unsigned char AirspeedSettings::getSamplePeriod() const
{
   QMutexLocker locker(mutex);
   return data.SamplePeriod;
}
void AirspeedSettings::setSamplePeriod(unsigned char value)
{
   mutex->lock();
   bool changed = data.SamplePeriod != value;
   data.SamplePeriod = value;
   mutex->unlock();
   if (changed) emit SamplePeriodChanged(value);
}

unsigned char AirspeedSettings::getAirspeedSensorType() const
{
   QMutexLocker locker(mutex);
   return data.AirspeedSensorType;
}
void AirspeedSettings::setAirspeedSensorType(unsigned char value)
{
   mutex->lock();
   bool changed = data.AirspeedSensorType != value;
   data.AirspeedSensorType = value;
   mutex->unlock();
   if (changed) emit AirspeedSensorTypeChanged(value);
}

*/
