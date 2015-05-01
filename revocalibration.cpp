/**
 ******************************************************************************
 *
 * @file       revocalibration.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: revocalibration.xml.
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

#include "revocalibration.h"

int RevoCalibration::numInstances = 0;

/**
 * Constructor
 */
RevoCalibration::RevoCalibration(UAVObjManager* manager): UAVObject(manager, 0xA3633042, "RevoCalibration", "Settings for the INS to control the algorithm and what is updated", "Sensors", 1, 1, ACCESS_READWRITE, ACCESS_READWRITE, 1, 1, UPDATEMODE_ONCHANGE, UPDATEMODE_ONCHANGE, 0, 0, 0)
{

}

int RevoCalibration::UAVObjSetDataField(const char *dataIn, const std::string fieldID){
	if(fieldID == "mag_bias") {
		memset( &(dataFields.mag_bias), 0, sizeof(dataFields.mag_bias));
		memcpy( &(dataFields.mag_bias), dataIn, sizeof(dataFields.mag_bias));
	} else if(fieldID == "mag_transform") {
		memset( &(dataFields.mag_transform), 0, sizeof(dataFields.mag_transform));
		memcpy( &(dataFields.mag_transform), dataIn, sizeof(dataFields.mag_transform));
	} else if(fieldID == "MagBiasNullingRate") {
		memset( &(dataFields.MagBiasNullingRate), 0, sizeof(dataFields.MagBiasNullingRate));
		memcpy( &(dataFields.MagBiasNullingRate), dataIn, sizeof(dataFields.MagBiasNullingRate));
	} else if(fieldID == "BiasCorrectedRaw") {
		memset( &(dataFields.BiasCorrectedRaw), 0, sizeof(dataFields.BiasCorrectedRaw));
		memcpy( &(dataFields.BiasCorrectedRaw), dataIn, sizeof(dataFields.BiasCorrectedRaw));
	}
	return 0;
}

int RevoCalibration::UAVObjGetDataField(char *dataOut, const std::string fieldID){
	if(fieldID == "mag_bias") {
		memcpy( dataOut, &(dataFields.mag_bias), sizeof(dataFields.mag_bias));
	} else if(fieldID == "mag_transform") {
		memcpy( dataOut, &(dataFields.mag_transform), sizeof(dataFields.mag_transform));
	} else if(fieldID == "MagBiasNullingRate") {
		memcpy( dataOut, &(dataFields.MagBiasNullingRate), sizeof(dataFields.MagBiasNullingRate));
	} else if(fieldID == "BiasCorrectedRaw") {
		memcpy( dataOut, &(dataFields.BiasCorrectedRaw), sizeof(dataFields.BiasCorrectedRaw));
	}
	return 0;
}

int RevoCalibration::UAVObjUnpack(const unsigned char *dataIn){
	memcpy(&dataFields, dataIn, NUMBYTES);
	return 0;
}

int RevoCalibration::UAVObjPack(unsigned char *dataOut) {
	memcpy(dataOut, &dataFields, NUMBYTES);
	return 0;
}

unsigned short RevoCalibration::UAVObjGetInstance() const {
	return instance;
}
unsigned short RevoCalibration::UAVObjGetNumBytes() const {
	return sizeof(dataFields);
}
unsigned short RevoCalibration::UAVObjGetNumInstances() const {
	return numInstances;
}

std::string RevoCalibration::prettyPrint() {
	std::stringstream ss;
	ss << "\nPrinting object: revocalibration" << std::endl;
	ss << "\tmag_bias: " << dataFields.mag_bias << std::endl;
	ss << "\tmag_transform: " << dataFields.mag_transform << std::endl;
	ss << "\tMagBiasNullingRate: " << dataFields.MagBiasNullingRate << std::endl;
	ss << "\tBiasCorrectedRaw: " << dataFields.BiasCorrectedRaw << std::endl;

	return ss.str();
}

/*/***/
/* * Initialize object fields with the default values.*/
/* * If a default value is not specified the object fields*/
/* * will be initialized to zero.*/
/* */
/*void RevoCalibration::setDefaultFieldValues()*/
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
    data.BiasCorrectedRaw = 1;
*/
/*}*/

/*/***/
/* * Get the object data fields*/
/* */
/*RevoCalibration::DataFields RevoCalibration::getData()*/
/*{*/
/*    QMutexLocker locker(mutex);*/
/*    return data;*/
/*}*/

/*/***/
/* * Set the object data fields*/
/* */
/*void RevoCalibration::setData(const DataFields& data)*/
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

/*void RevoCalibration::emitNotifications()*/
/*{*/
/*            //if (data.MagBiasNullingRate != oldData.MagBiasNullingRate)
            emit MagBiasNullingRateChanged(data.MagBiasNullingRate);
        //if (data.BiasCorrectedRaw != oldData.BiasCorrectedRaw)
            emit BiasCorrectedRawChanged(data.BiasCorrectedRaw);
*/
/*}*/

/*/***/
/* * Create a clone of this object, a new instance ID must be specified.*/
/* * Do not use this function directly to create new instances, the*/
/* * UAVObjectManager should be used instead.*/
/* */
/*UAVDataObject *RevoCalibration::clone(unsigned int instID)*/
/*{*/
/*    RevoCalibration *obj = new RevoCalibration();*/
/*    obj->initialize(instID, this->getMetaObject());*/
/*    return obj;*/
/*}*/

/*/***/
/* * Create a clone of this object only to be used to retrieve defaults*/
/* */
/*UAVDataObject *RevoCalibration::dirtyClone()*/
/*{*/
/*    RevoCalibration *obj = new RevoCalibration();*/
/*    return obj;*/
/*}*/

/*/***/
/* * Static function to retrieve an instance of the object.*/
/* */
/*RevoCalibration *RevoCalibration::GetInstance(UAVObjectManager *objMngr, unsigned int instID)*/
/*{*/
/*    return dynamic_cast<RevoCalibration *>(objMngr->getObject(RevoCalibration::OBJID, instID));*/
/*}*/

/*float RevoCalibration::getmag_bias(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.mag_bias[index];
}
void RevoCalibration::setmag_bias(unsigned int index, float value)
{
   mutex->lock();
   bool changed = data.mag_bias[index] != value;
   data.mag_bias[index] = value;
   mutex->unlock();
   if (changed) emit mag_biasChanged(index,value);
}

float RevoCalibration::getmag_transform(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.mag_transform[index];
}
void RevoCalibration::setmag_transform(unsigned int index, float value)
{
   mutex->lock();
   bool changed = data.mag_transform[index] != value;
   data.mag_transform[index] = value;
   mutex->unlock();
   if (changed) emit mag_transformChanged(index,value);
}

float RevoCalibration::getMagBiasNullingRate() const
{
   QMutexLocker locker(mutex);
   return data.MagBiasNullingRate;
}
void RevoCalibration::setMagBiasNullingRate(float value)
{
   mutex->lock();
   bool changed = data.MagBiasNullingRate != value;
   data.MagBiasNullingRate = value;
   mutex->unlock();
   if (changed) emit MagBiasNullingRateChanged(value);
}

unsigned char RevoCalibration::getBiasCorrectedRaw() const
{
   QMutexLocker locker(mutex);
   return data.BiasCorrectedRaw;
}
void RevoCalibration::setBiasCorrectedRaw(unsigned char value)
{
   mutex->lock();
   bool changed = data.BiasCorrectedRaw != value;
   data.BiasCorrectedRaw = value;
   mutex->unlock();
   if (changed) emit BiasCorrectedRawChanged(value);
}

*/
