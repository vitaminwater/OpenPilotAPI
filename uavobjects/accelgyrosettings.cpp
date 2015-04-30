/**
 ******************************************************************************
 *
 * @file       accelgyrosettings.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: accelgyrosettings.xml.
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

#include "accelgyrosettings.h"

int AccelGyroSettings::numInstances = 0;

/**
 * Constructor
 */
AccelGyroSettings::AccelGyroSettings(UAVObjManager* manager): UAVObject(manager, 0x1262B2D0, "AccelGyroSettings", "Settings for Accelerometer and Gyroscope calibration ", "Sensors", 1, 1, ACCESS_READWRITE, ACCESS_READWRITE, 1, 1, UPDATEMODE_ONCHANGE, UPDATEMODE_ONCHANGE, 0, 0, 0)
{

}

int AccelGyroSettings::UAVObjSetDataField(const char *dataIn, const std::string fieldID){
	if(fieldID == "accel_bias") {
		memset( &(dataFields.accel_bias), 0, sizeof(dataFields.accel_bias));
		memcpy( &(dataFields.accel_bias), dataIn, sizeof(dataFields.accel_bias));
	} else if(fieldID == "accel_scale") {
		memset( &(dataFields.accel_scale), 0, sizeof(dataFields.accel_scale));
		memcpy( &(dataFields.accel_scale), dataIn, sizeof(dataFields.accel_scale));
	} else if(fieldID == "accel_temp_coeff") {
		memset( &(dataFields.accel_temp_coeff), 0, sizeof(dataFields.accel_temp_coeff));
		memcpy( &(dataFields.accel_temp_coeff), dataIn, sizeof(dataFields.accel_temp_coeff));
	} else if(fieldID == "gyro_bias") {
		memset( &(dataFields.gyro_bias), 0, sizeof(dataFields.gyro_bias));
		memcpy( &(dataFields.gyro_bias), dataIn, sizeof(dataFields.gyro_bias));
	} else if(fieldID == "gyro_scale") {
		memset( &(dataFields.gyro_scale), 0, sizeof(dataFields.gyro_scale));
		memcpy( &(dataFields.gyro_scale), dataIn, sizeof(dataFields.gyro_scale));
	} else if(fieldID == "gyro_temp_coeff") {
		memset( &(dataFields.gyro_temp_coeff), 0, sizeof(dataFields.gyro_temp_coeff));
		memcpy( &(dataFields.gyro_temp_coeff), dataIn, sizeof(dataFields.gyro_temp_coeff));
	} else if(fieldID == "temp_calibrated_extent") {
		memset( &(dataFields.temp_calibrated_extent), 0, sizeof(dataFields.temp_calibrated_extent));
		memcpy( &(dataFields.temp_calibrated_extent), dataIn, sizeof(dataFields.temp_calibrated_extent));
	}
	return 0;
}

int AccelGyroSettings::UAVObjGetDataField(char *dataOut, const std::string fieldID){
	if(fieldID == "accel_bias") {
		memcpy( dataOut, &(dataFields.accel_bias), sizeof(dataFields.accel_bias));
	} else if(fieldID == "accel_scale") {
		memcpy( dataOut, &(dataFields.accel_scale), sizeof(dataFields.accel_scale));
	} else if(fieldID == "accel_temp_coeff") {
		memcpy( dataOut, &(dataFields.accel_temp_coeff), sizeof(dataFields.accel_temp_coeff));
	} else if(fieldID == "gyro_bias") {
		memcpy( dataOut, &(dataFields.gyro_bias), sizeof(dataFields.gyro_bias));
	} else if(fieldID == "gyro_scale") {
		memcpy( dataOut, &(dataFields.gyro_scale), sizeof(dataFields.gyro_scale));
	} else if(fieldID == "gyro_temp_coeff") {
		memcpy( dataOut, &(dataFields.gyro_temp_coeff), sizeof(dataFields.gyro_temp_coeff));
	} else if(fieldID == "temp_calibrated_extent") {
		memcpy( dataOut, &(dataFields.temp_calibrated_extent), sizeof(dataFields.temp_calibrated_extent));
	}
	return 0;
}

int AccelGyroSettings::UAVObjUnpack(const unsigned char *dataIn){
	memcpy(&dataFields, dataIn, NUMBYTES);
	return 0;
}

int AccelGyroSettings::UAVObjPack(unsigned char *dataOut) {
	memcpy(dataOut, &dataFields, NUMBYTES);
	return 0;
}

unsigned short AccelGyroSettings::UAVObjGetInstance() const {
	return instance;
}
unsigned short AccelGyroSettings::UAVObjGetNumBytes() const {
	return sizeof(dataFields);
}
unsigned short AccelGyroSettings::UAVObjGetNumInstances() const {
	return numInstances;
}

std::string AccelGyroSettings::prettyPrint() {
	std::stringstream ss;
	ss << "\nPrinting object: accelgyrosettings" << std::endl;
	ss << "\taccel_bias: " << dataFields.accel_bias << std::endl;
	ss << "\taccel_scale: " << dataFields.accel_scale << std::endl;
	ss << "\taccel_temp_coeff: " << dataFields.accel_temp_coeff << std::endl;
	ss << "\tgyro_bias: " << dataFields.gyro_bias << std::endl;
	ss << "\tgyro_scale: " << dataFields.gyro_scale << std::endl;
	ss << "\tgyro_temp_coeff: " << dataFields.gyro_temp_coeff << std::endl;
	ss << "\ttemp_calibrated_extent: " << dataFields.temp_calibrated_extent << std::endl;

	return ss.str();
}

/*/***/
/* * Initialize object fields with the default values.*/
/* * If a default value is not specified the object fields*/
/* * will be initialized to zero.*/
/* */
/*void AccelGyroSettings::setDefaultFieldValues()*/
/*{*/
/*    data.accel_bias[0] = 0;
    data.accel_bias[1] = 0;
    data.accel_bias[2] = 0;
    data.accel_scale[0] = 1;
    data.accel_scale[1] = 1;
    data.accel_scale[2] = 1;
    data.accel_temp_coeff[0] = 0;
    data.accel_temp_coeff[1] = 0;
    data.accel_temp_coeff[2] = 0;
    data.gyro_bias[0] = 0;
    data.gyro_bias[1] = 0;
    data.gyro_bias[2] = 0;
    data.gyro_scale[0] = 1;
    data.gyro_scale[1] = 1;
    data.gyro_scale[2] = 1;
    data.gyro_temp_coeff[0] = 0;
    data.gyro_temp_coeff[1] = 0;
    data.gyro_temp_coeff[2] = 0;
    data.gyro_temp_coeff[3] = 0;
    data.gyro_temp_coeff[4] = 0;
    data.gyro_temp_coeff[5] = 0;
    data.temp_calibrated_extent[0] = 0;
    data.temp_calibrated_extent[1] = 0;
*/
/*}*/

/*/***/
/* * Get the object data fields*/
/* */
/*AccelGyroSettings::DataFields AccelGyroSettings::getData()*/
/*{*/
/*    QMutexLocker locker(mutex);*/
/*    return data;*/
/*}*/

/*/***/
/* * Set the object data fields*/
/* */
/*void AccelGyroSettings::setData(const DataFields& data)*/
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

/*void AccelGyroSettings::emitNotifications()*/
/*{*/
/*    */
/*}*/

/*/***/
/* * Create a clone of this object, a new instance ID must be specified.*/
/* * Do not use this function directly to create new instances, the*/
/* * UAVObjectManager should be used instead.*/
/* */
/*UAVDataObject *AccelGyroSettings::clone(unsigned int instID)*/
/*{*/
/*    AccelGyroSettings *obj = new AccelGyroSettings();*/
/*    obj->initialize(instID, this->getMetaObject());*/
/*    return obj;*/
/*}*/

/*/***/
/* * Create a clone of this object only to be used to retrieve defaults*/
/* */
/*UAVDataObject *AccelGyroSettings::dirtyClone()*/
/*{*/
/*    AccelGyroSettings *obj = new AccelGyroSettings();*/
/*    return obj;*/
/*}*/

/*/***/
/* * Static function to retrieve an instance of the object.*/
/* */
/*AccelGyroSettings *AccelGyroSettings::GetInstance(UAVObjectManager *objMngr, unsigned int instID)*/
/*{*/
/*    return dynamic_cast<AccelGyroSettings *>(objMngr->getObject(AccelGyroSettings::OBJID, instID));*/
/*}*/

/*float AccelGyroSettings::getaccel_bias(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.accel_bias[index];
}
void AccelGyroSettings::setaccel_bias(unsigned int index, float value)
{
   mutex->lock();
   bool changed = data.accel_bias[index] != value;
   data.accel_bias[index] = value;
   mutex->unlock();
   if (changed) emit accel_biasChanged(index,value);
}

float AccelGyroSettings::getaccel_scale(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.accel_scale[index];
}
void AccelGyroSettings::setaccel_scale(unsigned int index, float value)
{
   mutex->lock();
   bool changed = data.accel_scale[index] != value;
   data.accel_scale[index] = value;
   mutex->unlock();
   if (changed) emit accel_scaleChanged(index,value);
}

float AccelGyroSettings::getaccel_temp_coeff(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.accel_temp_coeff[index];
}
void AccelGyroSettings::setaccel_temp_coeff(unsigned int index, float value)
{
   mutex->lock();
   bool changed = data.accel_temp_coeff[index] != value;
   data.accel_temp_coeff[index] = value;
   mutex->unlock();
   if (changed) emit accel_temp_coeffChanged(index,value);
}

float AccelGyroSettings::getgyro_bias(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.gyro_bias[index];
}
void AccelGyroSettings::setgyro_bias(unsigned int index, float value)
{
   mutex->lock();
   bool changed = data.gyro_bias[index] != value;
   data.gyro_bias[index] = value;
   mutex->unlock();
   if (changed) emit gyro_biasChanged(index,value);
}

float AccelGyroSettings::getgyro_scale(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.gyro_scale[index];
}
void AccelGyroSettings::setgyro_scale(unsigned int index, float value)
{
   mutex->lock();
   bool changed = data.gyro_scale[index] != value;
   data.gyro_scale[index] = value;
   mutex->unlock();
   if (changed) emit gyro_scaleChanged(index,value);
}

float AccelGyroSettings::getgyro_temp_coeff(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.gyro_temp_coeff[index];
}
void AccelGyroSettings::setgyro_temp_coeff(unsigned int index, float value)
{
   mutex->lock();
   bool changed = data.gyro_temp_coeff[index] != value;
   data.gyro_temp_coeff[index] = value;
   mutex->unlock();
   if (changed) emit gyro_temp_coeffChanged(index,value);
}

float AccelGyroSettings::gettemp_calibrated_extent(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.temp_calibrated_extent[index];
}
void AccelGyroSettings::settemp_calibrated_extent(unsigned int index, float value)
{
   mutex->lock();
   bool changed = data.temp_calibrated_extent[index] != value;
   data.temp_calibrated_extent[index] = value;
   mutex->unlock();
   if (changed) emit temp_calibrated_extentChanged(index,value);
}

*/
