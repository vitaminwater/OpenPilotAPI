/**
 ******************************************************************************
 *
 * @file       auxmagsettings.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: auxmagsettings.xml.
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

#include "auxmagsettings.h"

int AuxMagSettings::numInstances = 0;

/**
 * Constructor
 */
AuxMagSettings::AuxMagSettings(UAVObjManager* manager): UAVObject(manager, 0x42F462A, "AuxMagSettings", "Settings for auxiliary magnetometer calibration", "Sensors", 1, 1, ACCESS_READWRITE, ACCESS_READWRITE, 1, 1, UPDATEMODE_ONCHANGE, UPDATEMODE_ONCHANGE, 0, 0, 0)
{

}

int AuxMagSettings::UAVObjSetDataField(const char *dataIn, const std::string fieldID){
	if(fieldID == "mag_bias") {
		memset( &(dataFields.mag_bias), 0, sizeof(dataFields.mag_bias));
		memcpy( &(dataFields.mag_bias), dataIn, sizeof(dataFields.mag_bias));
	} else if(fieldID == "mag_transform") {
		memset( &(dataFields.mag_transform), 0, sizeof(dataFields.mag_transform));
		memcpy( &(dataFields.mag_transform), dataIn, sizeof(dataFields.mag_transform));
	} else if(fieldID == "MagBiasNullingRate") {
		memset( &(dataFields.MagBiasNullingRate), 0, sizeof(dataFields.MagBiasNullingRate));
		memcpy( &(dataFields.MagBiasNullingRate), dataIn, sizeof(dataFields.MagBiasNullingRate));
	} else if(fieldID == "Orientation") {
		memset( &(dataFields.Orientation), 0, sizeof(dataFields.Orientation));
		memcpy( &(dataFields.Orientation), dataIn, sizeof(dataFields.Orientation));
	} else if(fieldID == "Type") {
		memset( &(dataFields.Type), 0, sizeof(dataFields.Type));
		memcpy( &(dataFields.Type), dataIn, sizeof(dataFields.Type));
	} else if(fieldID == "Usage") {
		memset( &(dataFields.Usage), 0, sizeof(dataFields.Usage));
		memcpy( &(dataFields.Usage), dataIn, sizeof(dataFields.Usage));
	}
	return 0;
}

int AuxMagSettings::UAVObjGetDataField(char *dataOut, const std::string fieldID){
	if(fieldID == "mag_bias") {
		memcpy( dataOut, &(dataFields.mag_bias), sizeof(dataFields.mag_bias));
	} else if(fieldID == "mag_transform") {
		memcpy( dataOut, &(dataFields.mag_transform), sizeof(dataFields.mag_transform));
	} else if(fieldID == "MagBiasNullingRate") {
		memcpy( dataOut, &(dataFields.MagBiasNullingRate), sizeof(dataFields.MagBiasNullingRate));
	} else if(fieldID == "Orientation") {
		memcpy( dataOut, &(dataFields.Orientation), sizeof(dataFields.Orientation));
	} else if(fieldID == "Type") {
		memcpy( dataOut, &(dataFields.Type), sizeof(dataFields.Type));
	} else if(fieldID == "Usage") {
		memcpy( dataOut, &(dataFields.Usage), sizeof(dataFields.Usage));
	}
	return 0;
}

int AuxMagSettings::UAVObjUnpack(const unsigned char *dataIn){
	memcpy(&dataFields, dataIn, NUMBYTES);
	return 0;
}

int AuxMagSettings::UAVObjPack(unsigned char *dataOut) {
	memcpy(dataOut, &dataFields, NUMBYTES);
	return 0;
}

unsigned short AuxMagSettings::UAVObjGetInstance() const {
	return instance;
}
unsigned short AuxMagSettings::UAVObjGetNumBytes() const {
	return sizeof(dataFields);
}
unsigned short AuxMagSettings::UAVObjGetNumInstances() const {
	return numInstances;
}

std::string AuxMagSettings::prettyPrint() {
	std::stringstream ss;
	ss << "\nPrinting object: auxmagsettings" << std::endl;
	ss << "\tmag_bias: " << dataFields.mag_bias << std::endl;
	ss << "\tmag_transform: " << dataFields.mag_transform << std::endl;
	ss << "\tMagBiasNullingRate: " << dataFields.MagBiasNullingRate << std::endl;
	ss << "\tOrientation: " << dataFields.Orientation << std::endl;
	ss << "\tType: " << dataFields.Type << std::endl;
	ss << "\tUsage: " << dataFields.Usage << std::endl;

	return ss.str();
}

/*/***/
/* * Initialize object fields with the default values.*/
/* * If a default value is not specified the object fields*/
/* * will be initialized to zero.*/
/* */
/*void AuxMagSettings::setDefaultFieldValues()*/
/*{*/
/*    data.mag_bias[0] = 0;
    data.mag_bias[1] = 0;
    data.mag_bias[2] = 0;
    data.mag_transform[0] = 1;
    data.mag_transform[1] = 0;
    data.mag_transform[2] = 0;
    data.mag_transform[3] = 0;
    data.mag_transform[4] = 1;
    data.mag_transform[5] = 0;
    data.mag_transform[6] = 0;
    data.mag_transform[7] = 0;
    data.mag_transform[8] = 1;
    data.MagBiasNullingRate = 0;
    data.Orientation = 0;
    data.Type = 0;
    data.Usage = 0;
*/
/*}*/

/*/***/
/* * Get the object data fields*/
/* */
/*AuxMagSettings::DataFields AuxMagSettings::getData()*/
/*{*/
/*    QMutexLocker locker(mutex);*/
/*    return data;*/
/*}*/

/*/***/
/* * Set the object data fields*/
/* */
/*void AuxMagSettings::setData(const DataFields& data)*/
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

/*void AuxMagSettings::emitNotifications()*/
/*{*/
/*            //if (data.MagBiasNullingRate != oldData.MagBiasNullingRate)
            emit MagBiasNullingRateChanged(data.MagBiasNullingRate);
        //if (data.Orientation != oldData.Orientation)
            emit OrientationChanged(data.Orientation);
        //if (data.Type != oldData.Type)
            emit TypeChanged(data.Type);
        //if (data.Usage != oldData.Usage)
            emit UsageChanged(data.Usage);
*/
/*}*/

/*/***/
/* * Create a clone of this object, a new instance ID must be specified.*/
/* * Do not use this function directly to create new instances, the*/
/* * UAVObjectManager should be used instead.*/
/* */
/*UAVDataObject *AuxMagSettings::clone(unsigned int instID)*/
/*{*/
/*    AuxMagSettings *obj = new AuxMagSettings();*/
/*    obj->initialize(instID, this->getMetaObject());*/
/*    return obj;*/
/*}*/

/*/***/
/* * Create a clone of this object only to be used to retrieve defaults*/
/* */
/*UAVDataObject *AuxMagSettings::dirtyClone()*/
/*{*/
/*    AuxMagSettings *obj = new AuxMagSettings();*/
/*    return obj;*/
/*}*/

/*/***/
/* * Static function to retrieve an instance of the object.*/
/* */
/*AuxMagSettings *AuxMagSettings::GetInstance(UAVObjectManager *objMngr, unsigned int instID)*/
/*{*/
/*    return dynamic_cast<AuxMagSettings *>(objMngr->getObject(AuxMagSettings::OBJID, instID));*/
/*}*/

/*float AuxMagSettings::getmag_bias(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.mag_bias[index];
}
void AuxMagSettings::setmag_bias(unsigned int index, float value)
{
   mutex->lock();
   bool changed = data.mag_bias[index] != value;
   data.mag_bias[index] = value;
   mutex->unlock();
   if (changed) emit mag_biasChanged(index,value);
}

float AuxMagSettings::getmag_transform(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.mag_transform[index];
}
void AuxMagSettings::setmag_transform(unsigned int index, float value)
{
   mutex->lock();
   bool changed = data.mag_transform[index] != value;
   data.mag_transform[index] = value;
   mutex->unlock();
   if (changed) emit mag_transformChanged(index,value);
}

float AuxMagSettings::getMagBiasNullingRate() const
{
   QMutexLocker locker(mutex);
   return data.MagBiasNullingRate;
}
void AuxMagSettings::setMagBiasNullingRate(float value)
{
   mutex->lock();
   bool changed = data.MagBiasNullingRate != value;
   data.MagBiasNullingRate = value;
   mutex->unlock();
   if (changed) emit MagBiasNullingRateChanged(value);
}

float AuxMagSettings::getOrientation() const
{
   QMutexLocker locker(mutex);
   return data.Orientation;
}
void AuxMagSettings::setOrientation(float value)
{
   mutex->lock();
   bool changed = data.Orientation != value;
   data.Orientation = value;
   mutex->unlock();
   if (changed) emit OrientationChanged(value);
}

unsigned char AuxMagSettings::getType() const
{
   QMutexLocker locker(mutex);
   return data.Type;
}
void AuxMagSettings::setType(unsigned char value)
{
   mutex->lock();
   bool changed = data.Type != value;
   data.Type = value;
   mutex->unlock();
   if (changed) emit TypeChanged(value);
}

unsigned char AuxMagSettings::getUsage() const
{
   QMutexLocker locker(mutex);
   return data.Usage;
}
void AuxMagSettings::setUsage(unsigned char value)
{
   mutex->lock();
   bool changed = data.Usage != value;
   data.Usage = value;
   mutex->unlock();
   if (changed) emit UsageChanged(value);
}

*/
