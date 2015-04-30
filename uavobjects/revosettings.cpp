/**
 ******************************************************************************
 *
 * @file       revosettings.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: revosettings.xml.
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

#include "revosettings.h"

int RevoSettings::numInstances = 0;

/**
 * Constructor
 */
RevoSettings::RevoSettings(UAVObjManager* manager): UAVObject(manager, 0xC456EB9A, "RevoSettings", "Settings for the revo to control the algorithm and what is updated", "State", 1, 1, ACCESS_READWRITE, ACCESS_READWRITE, 1, 1, UPDATEMODE_ONCHANGE, UPDATEMODE_ONCHANGE, 0, 0, 0)
{

}

int RevoSettings::UAVObjSetDataField(const char *dataIn, const std::string fieldID){
	if(fieldID == "BaroGPSOffsetCorrectionAlpha") {
		memset( &(dataFields.BaroGPSOffsetCorrectionAlpha), 0, sizeof(dataFields.BaroGPSOffsetCorrectionAlpha));
		memcpy( &(dataFields.BaroGPSOffsetCorrectionAlpha), dataIn, sizeof(dataFields.BaroGPSOffsetCorrectionAlpha));
	} else if(fieldID == "MagnetometerMaxDeviation") {
		memset( &(dataFields.MagnetometerMaxDeviation), 0, sizeof(dataFields.MagnetometerMaxDeviation));
		memcpy( &(dataFields.MagnetometerMaxDeviation), dataIn, sizeof(dataFields.MagnetometerMaxDeviation));
	} else if(fieldID == "BaroTempCorrectionPolynomial") {
		memset( &(dataFields.BaroTempCorrectionPolynomial), 0, sizeof(dataFields.BaroTempCorrectionPolynomial));
		memcpy( &(dataFields.BaroTempCorrectionPolynomial), dataIn, sizeof(dataFields.BaroTempCorrectionPolynomial));
	} else if(fieldID == "BaroTempCorrectionExtent") {
		memset( &(dataFields.BaroTempCorrectionExtent), 0, sizeof(dataFields.BaroTempCorrectionExtent));
		memcpy( &(dataFields.BaroTempCorrectionExtent), dataIn, sizeof(dataFields.BaroTempCorrectionExtent));
	} else if(fieldID == "VelocityPostProcessingLowPassAlpha") {
		memset( &(dataFields.VelocityPostProcessingLowPassAlpha), 0, sizeof(dataFields.VelocityPostProcessingLowPassAlpha));
		memcpy( &(dataFields.VelocityPostProcessingLowPassAlpha), dataIn, sizeof(dataFields.VelocityPostProcessingLowPassAlpha));
	} else if(fieldID == "FusionAlgorithm") {
		memset( &(dataFields.FusionAlgorithm), 0, sizeof(dataFields.FusionAlgorithm));
		memcpy( &(dataFields.FusionAlgorithm), dataIn, sizeof(dataFields.FusionAlgorithm));
	}
	return 0;
}

int RevoSettings::UAVObjGetDataField(char *dataOut, const std::string fieldID){
	if(fieldID == "BaroGPSOffsetCorrectionAlpha") {
		memcpy( dataOut, &(dataFields.BaroGPSOffsetCorrectionAlpha), sizeof(dataFields.BaroGPSOffsetCorrectionAlpha));
	} else if(fieldID == "MagnetometerMaxDeviation") {
		memcpy( dataOut, &(dataFields.MagnetometerMaxDeviation), sizeof(dataFields.MagnetometerMaxDeviation));
	} else if(fieldID == "BaroTempCorrectionPolynomial") {
		memcpy( dataOut, &(dataFields.BaroTempCorrectionPolynomial), sizeof(dataFields.BaroTempCorrectionPolynomial));
	} else if(fieldID == "BaroTempCorrectionExtent") {
		memcpy( dataOut, &(dataFields.BaroTempCorrectionExtent), sizeof(dataFields.BaroTempCorrectionExtent));
	} else if(fieldID == "VelocityPostProcessingLowPassAlpha") {
		memcpy( dataOut, &(dataFields.VelocityPostProcessingLowPassAlpha), sizeof(dataFields.VelocityPostProcessingLowPassAlpha));
	} else if(fieldID == "FusionAlgorithm") {
		memcpy( dataOut, &(dataFields.FusionAlgorithm), sizeof(dataFields.FusionAlgorithm));
	}
	return 0;
}

int RevoSettings::UAVObjUnpack(const unsigned char *dataIn){
	memcpy(&dataFields, dataIn, NUMBYTES);
	return 0;
}

int RevoSettings::UAVObjPack(unsigned char *dataOut) {
	memcpy(dataOut, &dataFields, NUMBYTES);
	return 0;
}

unsigned short RevoSettings::UAVObjGetInstance() const {
	return instance;
}
unsigned short RevoSettings::UAVObjGetNumBytes() const {
	return sizeof(dataFields);
}
unsigned short RevoSettings::UAVObjGetNumInstances() const {
	return numInstances;
}

std::string RevoSettings::prettyPrint() {
	std::stringstream ss;
	ss << "\nPrinting object: revosettings" << std::endl;
	ss << "\tBaroGPSOffsetCorrectionAlpha: " << dataFields.BaroGPSOffsetCorrectionAlpha << std::endl;
	ss << "\tMagnetometerMaxDeviation: " << dataFields.MagnetometerMaxDeviation << std::endl;
	ss << "\tBaroTempCorrectionPolynomial: " << dataFields.BaroTempCorrectionPolynomial << std::endl;
	ss << "\tBaroTempCorrectionExtent: " << dataFields.BaroTempCorrectionExtent << std::endl;
	ss << "\tVelocityPostProcessingLowPassAlpha: " << dataFields.VelocityPostProcessingLowPassAlpha << std::endl;
	ss << "\tFusionAlgorithm: " << dataFields.FusionAlgorithm << std::endl;

	return ss.str();
}

/*/***/
/* * Initialize object fields with the default values.*/
/* * If a default value is not specified the object fields*/
/* * will be initialized to zero.*/
/* */
/*void RevoSettings::setDefaultFieldValues()*/
/*{*/
/*    data.BaroGPSOffsetCorrectionAlpha = 0.999334;
    data.MagnetometerMaxDeviation[0] = 0.05;
    data.MagnetometerMaxDeviation[1] = 0.15;
    data.BaroTempCorrectionPolynomial[0] = 0;
    data.BaroTempCorrectionPolynomial[1] = 0;
    data.BaroTempCorrectionPolynomial[2] = 0;
    data.BaroTempCorrectionPolynomial[3] = 0;
    data.BaroTempCorrectionExtent[0] = 0;
    data.BaroTempCorrectionExtent[1] = 0;
    data.VelocityPostProcessingLowPassAlpha = 0.999;
    data.FusionAlgorithm = 1;
*/
/*}*/

/*/***/
/* * Get the object data fields*/
/* */
/*RevoSettings::DataFields RevoSettings::getData()*/
/*{*/
/*    QMutexLocker locker(mutex);*/
/*    return data;*/
/*}*/

/*/***/
/* * Set the object data fields*/
/* */
/*void RevoSettings::setData(const DataFields& data)*/
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

/*void RevoSettings::emitNotifications()*/
/*{*/
/*            //if (data.BaroGPSOffsetCorrectionAlpha != oldData.BaroGPSOffsetCorrectionAlpha)
            emit BaroGPSOffsetCorrectionAlphaChanged(data.BaroGPSOffsetCorrectionAlpha);
        //if (data.VelocityPostProcessingLowPassAlpha != oldData.VelocityPostProcessingLowPassAlpha)
            emit VelocityPostProcessingLowPassAlphaChanged(data.VelocityPostProcessingLowPassAlpha);
        //if (data.FusionAlgorithm != oldData.FusionAlgorithm)
            emit FusionAlgorithmChanged(data.FusionAlgorithm);
*/
/*}*/

/*/***/
/* * Create a clone of this object, a new instance ID must be specified.*/
/* * Do not use this function directly to create new instances, the*/
/* * UAVObjectManager should be used instead.*/
/* */
/*UAVDataObject *RevoSettings::clone(unsigned int instID)*/
/*{*/
/*    RevoSettings *obj = new RevoSettings();*/
/*    obj->initialize(instID, this->getMetaObject());*/
/*    return obj;*/
/*}*/

/*/***/
/* * Create a clone of this object only to be used to retrieve defaults*/
/* */
/*UAVDataObject *RevoSettings::dirtyClone()*/
/*{*/
/*    RevoSettings *obj = new RevoSettings();*/
/*    return obj;*/
/*}*/

/*/***/
/* * Static function to retrieve an instance of the object.*/
/* */
/*RevoSettings *RevoSettings::GetInstance(UAVObjectManager *objMngr, unsigned int instID)*/
/*{*/
/*    return dynamic_cast<RevoSettings *>(objMngr->getObject(RevoSettings::OBJID, instID));*/
/*}*/

/*float RevoSettings::getBaroGPSOffsetCorrectionAlpha() const
{
   QMutexLocker locker(mutex);
   return data.BaroGPSOffsetCorrectionAlpha;
}
void RevoSettings::setBaroGPSOffsetCorrectionAlpha(float value)
{
   mutex->lock();
   bool changed = data.BaroGPSOffsetCorrectionAlpha != value;
   data.BaroGPSOffsetCorrectionAlpha = value;
   mutex->unlock();
   if (changed) emit BaroGPSOffsetCorrectionAlphaChanged(value);
}

float RevoSettings::getMagnetometerMaxDeviation(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.MagnetometerMaxDeviation[index];
}
void RevoSettings::setMagnetometerMaxDeviation(unsigned int index, float value)
{
   mutex->lock();
   bool changed = data.MagnetometerMaxDeviation[index] != value;
   data.MagnetometerMaxDeviation[index] = value;
   mutex->unlock();
   if (changed) emit MagnetometerMaxDeviationChanged(index,value);
}

float RevoSettings::getBaroTempCorrectionPolynomial(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.BaroTempCorrectionPolynomial[index];
}
void RevoSettings::setBaroTempCorrectionPolynomial(unsigned int index, float value)
{
   mutex->lock();
   bool changed = data.BaroTempCorrectionPolynomial[index] != value;
   data.BaroTempCorrectionPolynomial[index] = value;
   mutex->unlock();
   if (changed) emit BaroTempCorrectionPolynomialChanged(index,value);
}

float RevoSettings::getBaroTempCorrectionExtent(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.BaroTempCorrectionExtent[index];
}
void RevoSettings::setBaroTempCorrectionExtent(unsigned int index, float value)
{
   mutex->lock();
   bool changed = data.BaroTempCorrectionExtent[index] != value;
   data.BaroTempCorrectionExtent[index] = value;
   mutex->unlock();
   if (changed) emit BaroTempCorrectionExtentChanged(index,value);
}

float RevoSettings::getVelocityPostProcessingLowPassAlpha() const
{
   QMutexLocker locker(mutex);
   return data.VelocityPostProcessingLowPassAlpha;
}
void RevoSettings::setVelocityPostProcessingLowPassAlpha(float value)
{
   mutex->lock();
   bool changed = data.VelocityPostProcessingLowPassAlpha != value;
   data.VelocityPostProcessingLowPassAlpha = value;
   mutex->unlock();
   if (changed) emit VelocityPostProcessingLowPassAlphaChanged(value);
}

unsigned char RevoSettings::getFusionAlgorithm() const
{
   QMutexLocker locker(mutex);
   return data.FusionAlgorithm;
}
void RevoSettings::setFusionAlgorithm(unsigned char value)
{
   mutex->lock();
   bool changed = data.FusionAlgorithm != value;
   data.FusionAlgorithm = value;
   mutex->unlock();
   if (changed) emit FusionAlgorithmChanged(value);
}

*/
