/**
 ******************************************************************************
 *
 * @file       mpu6000settings.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: mpu6000settings.xml.
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

#include "mpu6000settings.h"

int Mpu6000Settings::numInstances = 0;

/**
 * Constructor
 */
Mpu6000Settings::Mpu6000Settings(UAVObjManager* manager): UAVObject(manager, 0xA909AE7C, "Mpu6000Settings", "Settings for the @ref MPU6000 sensor used on CC3D and Revolution. Reboot the board for this to takes effect", "Sensors", 1, 1, ACCESS_READWRITE, ACCESS_READWRITE, 1, 1, UPDATEMODE_ONCHANGE, UPDATEMODE_ONCHANGE, 0, 0, 0)
{

}

int Mpu6000Settings::UAVObjSetDataField(const char *dataIn, const std::string fieldID){
	if(fieldID == "GyroScale") {
		memset( &(dataFields.GyroScale), 0, sizeof(dataFields.GyroScale));
		memcpy( &(dataFields.GyroScale), dataIn, sizeof(dataFields.GyroScale));
	} else if(fieldID == "AccelScale") {
		memset( &(dataFields.AccelScale), 0, sizeof(dataFields.AccelScale));
		memcpy( &(dataFields.AccelScale), dataIn, sizeof(dataFields.AccelScale));
	} else if(fieldID == "FilterSetting") {
		memset( &(dataFields.FilterSetting), 0, sizeof(dataFields.FilterSetting));
		memcpy( &(dataFields.FilterSetting), dataIn, sizeof(dataFields.FilterSetting));
	}
	return 0;
}

int Mpu6000Settings::UAVObjGetDataField(char *dataOut, const std::string fieldID){
	if(fieldID == "GyroScale") {
		memcpy( dataOut, &(dataFields.GyroScale), sizeof(dataFields.GyroScale));
	} else if(fieldID == "AccelScale") {
		memcpy( dataOut, &(dataFields.AccelScale), sizeof(dataFields.AccelScale));
	} else if(fieldID == "FilterSetting") {
		memcpy( dataOut, &(dataFields.FilterSetting), sizeof(dataFields.FilterSetting));
	}
	return 0;
}

int Mpu6000Settings::UAVObjUnpack(const unsigned char *dataIn){
	memcpy(&dataFields, dataIn, NUMBYTES);
	return 0;
}

int Mpu6000Settings::UAVObjPack(unsigned char *dataOut) {
	memcpy(dataOut, &dataFields, NUMBYTES);
	return 0;
}

unsigned short Mpu6000Settings::UAVObjGetInstance() const {
	return instance;
}
unsigned short Mpu6000Settings::UAVObjGetNumBytes() const {
	return sizeof(dataFields);
}
unsigned short Mpu6000Settings::UAVObjGetNumInstances() const {
	return numInstances;
}

std::string Mpu6000Settings::prettyPrint() {
	std::stringstream ss;
	ss << "\nPrinting object: mpu6000settings" << std::endl;
	ss << "\tGyroScale: " << dataFields.GyroScale << std::endl;
	ss << "\tAccelScale: " << dataFields.AccelScale << std::endl;
	ss << "\tFilterSetting: " << dataFields.FilterSetting << std::endl;

	return ss.str();
}

/*/***/
/* * Initialize object fields with the default values.*/
/* * If a default value is not specified the object fields*/
/* * will be initialized to zero.*/
/* */
/*void Mpu6000Settings::setDefaultFieldValues()*/
/*{*/
/*    data.GyroScale = 3;
    data.AccelScale = 2;
    data.FilterSetting = 0;
*/
/*}*/

/*/***/
/* * Get the object data fields*/
/* */
/*Mpu6000Settings::DataFields Mpu6000Settings::getData()*/
/*{*/
/*    QMutexLocker locker(mutex);*/
/*    return data;*/
/*}*/

/*/***/
/* * Set the object data fields*/
/* */
/*void Mpu6000Settings::setData(const DataFields& data)*/
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

/*void Mpu6000Settings::emitNotifications()*/
/*{*/
/*            //if (data.GyroScale != oldData.GyroScale)
            emit GyroScaleChanged(data.GyroScale);
        //if (data.AccelScale != oldData.AccelScale)
            emit AccelScaleChanged(data.AccelScale);
        //if (data.FilterSetting != oldData.FilterSetting)
            emit FilterSettingChanged(data.FilterSetting);
*/
/*}*/

/*/***/
/* * Create a clone of this object, a new instance ID must be specified.*/
/* * Do not use this function directly to create new instances, the*/
/* * UAVObjectManager should be used instead.*/
/* */
/*UAVDataObject *Mpu6000Settings::clone(unsigned int instID)*/
/*{*/
/*    Mpu6000Settings *obj = new Mpu6000Settings();*/
/*    obj->initialize(instID, this->getMetaObject());*/
/*    return obj;*/
/*}*/

/*/***/
/* * Create a clone of this object only to be used to retrieve defaults*/
/* */
/*UAVDataObject *Mpu6000Settings::dirtyClone()*/
/*{*/
/*    Mpu6000Settings *obj = new Mpu6000Settings();*/
/*    return obj;*/
/*}*/

/*/***/
/* * Static function to retrieve an instance of the object.*/
/* */
/*Mpu6000Settings *Mpu6000Settings::GetInstance(UAVObjectManager *objMngr, unsigned int instID)*/
/*{*/
/*    return dynamic_cast<Mpu6000Settings *>(objMngr->getObject(Mpu6000Settings::OBJID, instID));*/
/*}*/

/*unsigned char Mpu6000Settings::getGyroScale() const
{
   QMutexLocker locker(mutex);
   return data.GyroScale;
}
void Mpu6000Settings::setGyroScale(unsigned char value)
{
   mutex->lock();
   bool changed = data.GyroScale != value;
   data.GyroScale = value;
   mutex->unlock();
   if (changed) emit GyroScaleChanged(value);
}

unsigned char Mpu6000Settings::getAccelScale() const
{
   QMutexLocker locker(mutex);
   return data.AccelScale;
}
void Mpu6000Settings::setAccelScale(unsigned char value)
{
   mutex->lock();
   bool changed = data.AccelScale != value;
   data.AccelScale = value;
   mutex->unlock();
   if (changed) emit AccelScaleChanged(value);
}

unsigned char Mpu6000Settings::getFilterSetting() const
{
   QMutexLocker locker(mutex);
   return data.FilterSetting;
}
void Mpu6000Settings::setFilterSetting(unsigned char value)
{
   mutex->lock();
   bool changed = data.FilterSetting != value;
   data.FilterSetting = value;
   mutex->unlock();
   if (changed) emit FilterSettingChanged(value);
}

*/
