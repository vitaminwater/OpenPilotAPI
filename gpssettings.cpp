/**
 ******************************************************************************
 *
 * @file       gpssettings.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: gpssettings.xml.
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

#include "gpssettings.h"

int GPSSettings::numInstances = 0;

/**
 * Constructor
 */
GPSSettings::GPSSettings(UAVObjManager* manager): UAVObject(manager, 0xDCDE4E70, "GPSSettings", "GPS Module specific settings", "Sensors", 1, 1, ACCESS_READWRITE, ACCESS_READWRITE, 1, 1, UPDATEMODE_ONCHANGE, UPDATEMODE_ONCHANGE, 0, 0, 0)
{

}

int GPSSettings::UAVObjSetDataField(const char *dataIn, const std::string fieldID){
	if(fieldID == "MaxPDOP") {
		memset( &(dataFields.MaxPDOP), 0, sizeof(dataFields.MaxPDOP));
		memcpy( &(dataFields.MaxPDOP), dataIn, sizeof(dataFields.MaxPDOP));
	} else if(fieldID == "DataProtocol") {
		memset( &(dataFields.DataProtocol), 0, sizeof(dataFields.DataProtocol));
		memcpy( &(dataFields.DataProtocol), dataIn, sizeof(dataFields.DataProtocol));
	} else if(fieldID == "MinSatellites") {
		memset( &(dataFields.MinSatellites), 0, sizeof(dataFields.MinSatellites));
		memcpy( &(dataFields.MinSatellites), dataIn, sizeof(dataFields.MinSatellites));
	} else if(fieldID == "UbxAutoConfig") {
		memset( &(dataFields.UbxAutoConfig), 0, sizeof(dataFields.UbxAutoConfig));
		memcpy( &(dataFields.UbxAutoConfig), dataIn, sizeof(dataFields.UbxAutoConfig));
	} else if(fieldID == "UbxRate") {
		memset( &(dataFields.UbxRate), 0, sizeof(dataFields.UbxRate));
		memcpy( &(dataFields.UbxRate), dataIn, sizeof(dataFields.UbxRate));
	} else if(fieldID == "UbxDynamicModel") {
		memset( &(dataFields.UbxDynamicModel), 0, sizeof(dataFields.UbxDynamicModel));
		memcpy( &(dataFields.UbxDynamicModel), dataIn, sizeof(dataFields.UbxDynamicModel));
	} else if(fieldID == "UbxSBASMode") {
		memset( &(dataFields.UbxSBASMode), 0, sizeof(dataFields.UbxSBASMode));
		memcpy( &(dataFields.UbxSBASMode), dataIn, sizeof(dataFields.UbxSBASMode));
	} else if(fieldID == "UbxSBASChannelsUsed") {
		memset( &(dataFields.UbxSBASChannelsUsed), 0, sizeof(dataFields.UbxSBASChannelsUsed));
		memcpy( &(dataFields.UbxSBASChannelsUsed), dataIn, sizeof(dataFields.UbxSBASChannelsUsed));
	} else if(fieldID == "UbxSBASSats") {
		memset( &(dataFields.UbxSBASSats), 0, sizeof(dataFields.UbxSBASSats));
		memcpy( &(dataFields.UbxSBASSats), dataIn, sizeof(dataFields.UbxSBASSats));
	}
	return 0;
}

int GPSSettings::UAVObjGetDataField(char *dataOut, const std::string fieldID){
	if(fieldID == "MaxPDOP") {
		memcpy( dataOut, &(dataFields.MaxPDOP), sizeof(dataFields.MaxPDOP));
	} else if(fieldID == "DataProtocol") {
		memcpy( dataOut, &(dataFields.DataProtocol), sizeof(dataFields.DataProtocol));
	} else if(fieldID == "MinSatellites") {
		memcpy( dataOut, &(dataFields.MinSatellites), sizeof(dataFields.MinSatellites));
	} else if(fieldID == "UbxAutoConfig") {
		memcpy( dataOut, &(dataFields.UbxAutoConfig), sizeof(dataFields.UbxAutoConfig));
	} else if(fieldID == "UbxRate") {
		memcpy( dataOut, &(dataFields.UbxRate), sizeof(dataFields.UbxRate));
	} else if(fieldID == "UbxDynamicModel") {
		memcpy( dataOut, &(dataFields.UbxDynamicModel), sizeof(dataFields.UbxDynamicModel));
	} else if(fieldID == "UbxSBASMode") {
		memcpy( dataOut, &(dataFields.UbxSBASMode), sizeof(dataFields.UbxSBASMode));
	} else if(fieldID == "UbxSBASChannelsUsed") {
		memcpy( dataOut, &(dataFields.UbxSBASChannelsUsed), sizeof(dataFields.UbxSBASChannelsUsed));
	} else if(fieldID == "UbxSBASSats") {
		memcpy( dataOut, &(dataFields.UbxSBASSats), sizeof(dataFields.UbxSBASSats));
	}
	return 0;
}

int GPSSettings::UAVObjUnpack(const unsigned char *dataIn){
	memcpy(&dataFields, dataIn, NUMBYTES);
	return 0;
}

int GPSSettings::UAVObjPack(unsigned char *dataOut) {
	memcpy(dataOut, &dataFields, NUMBYTES);
	return 0;
}

unsigned short GPSSettings::UAVObjGetInstance() const {
	return instance;
}
unsigned short GPSSettings::UAVObjGetNumBytes() const {
	return sizeof(dataFields);
}
unsigned short GPSSettings::UAVObjGetNumInstances() const {
	return numInstances;
}

std::string GPSSettings::prettyPrint() {
	std::stringstream ss;
	ss << "\nPrinting object: gpssettings" << std::endl;
	ss << "\tMaxPDOP: " << dataFields.MaxPDOP << std::endl;
	ss << "\tDataProtocol: " << dataFields.DataProtocol << std::endl;
	ss << "\tMinSatellites: " << dataFields.MinSatellites << std::endl;
	ss << "\tUbxAutoConfig: " << dataFields.UbxAutoConfig << std::endl;
	ss << "\tUbxRate: " << dataFields.UbxRate << std::endl;
	ss << "\tUbxDynamicModel: " << dataFields.UbxDynamicModel << std::endl;
	ss << "\tUbxSBASMode: " << dataFields.UbxSBASMode << std::endl;
	ss << "\tUbxSBASChannelsUsed: " << dataFields.UbxSBASChannelsUsed << std::endl;
	ss << "\tUbxSBASSats: " << dataFields.UbxSBASSats << std::endl;

	return ss.str();
}

/*/***/
/* * Initialize object fields with the default values.*/
/* * If a default value is not specified the object fields*/
/* * will be initialized to zero.*/
/* */
/*void GPSSettings::setDefaultFieldValues()*/
/*{*/
/*    data.MaxPDOP = 3.5;
    data.DataProtocol = 1;
    data.MinSatellites = 7;
    data.UbxAutoConfig = 1;
    data.UbxRate = 5;
    data.UbxDynamicModel = 5;
    data.UbxSBASMode = 1;
    data.UbxSBASChannelsUsed = 3;
    data.UbxSBASSats = -1;
*/
/*}*/

/*/***/
/* * Get the object data fields*/
/* */
/*GPSSettings::DataFields GPSSettings::getData()*/
/*{*/
/*    QMutexLocker locker(mutex);*/
/*    return data;*/
/*}*/

/*/***/
/* * Set the object data fields*/
/* */
/*void GPSSettings::setData(const DataFields& data)*/
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

/*void GPSSettings::emitNotifications()*/
/*{*/
/*            //if (data.MaxPDOP != oldData.MaxPDOP)
            emit MaxPDOPChanged(data.MaxPDOP);
        //if (data.DataProtocol != oldData.DataProtocol)
            emit DataProtocolChanged(data.DataProtocol);
        //if (data.MinSatellites != oldData.MinSatellites)
            emit MinSatellitesChanged(data.MinSatellites);
        //if (data.UbxAutoConfig != oldData.UbxAutoConfig)
            emit UbxAutoConfigChanged(data.UbxAutoConfig);
        //if (data.UbxRate != oldData.UbxRate)
            emit UbxRateChanged(data.UbxRate);
        //if (data.UbxDynamicModel != oldData.UbxDynamicModel)
            emit UbxDynamicModelChanged(data.UbxDynamicModel);
        //if (data.UbxSBASMode != oldData.UbxSBASMode)
            emit UbxSBASModeChanged(data.UbxSBASMode);
        //if (data.UbxSBASChannelsUsed != oldData.UbxSBASChannelsUsed)
            emit UbxSBASChannelsUsedChanged(data.UbxSBASChannelsUsed);
        //if (data.UbxSBASSats != oldData.UbxSBASSats)
            emit UbxSBASSatsChanged(data.UbxSBASSats);
*/
/*}*/

/*/***/
/* * Create a clone of this object, a new instance ID must be specified.*/
/* * Do not use this function directly to create new instances, the*/
/* * UAVObjectManager should be used instead.*/
/* */
/*UAVDataObject *GPSSettings::clone(unsigned int instID)*/
/*{*/
/*    GPSSettings *obj = new GPSSettings();*/
/*    obj->initialize(instID, this->getMetaObject());*/
/*    return obj;*/
/*}*/

/*/***/
/* * Create a clone of this object only to be used to retrieve defaults*/
/* */
/*UAVDataObject *GPSSettings::dirtyClone()*/
/*{*/
/*    GPSSettings *obj = new GPSSettings();*/
/*    return obj;*/
/*}*/

/*/***/
/* * Static function to retrieve an instance of the object.*/
/* */
/*GPSSettings *GPSSettings::GetInstance(UAVObjectManager *objMngr, unsigned int instID)*/
/*{*/
/*    return dynamic_cast<GPSSettings *>(objMngr->getObject(GPSSettings::OBJID, instID));*/
/*}*/

/*float GPSSettings::getMaxPDOP() const
{
   QMutexLocker locker(mutex);
   return data.MaxPDOP;
}
void GPSSettings::setMaxPDOP(float value)
{
   mutex->lock();
   bool changed = data.MaxPDOP != value;
   data.MaxPDOP = value;
   mutex->unlock();
   if (changed) emit MaxPDOPChanged(value);
}

unsigned char GPSSettings::getDataProtocol() const
{
   QMutexLocker locker(mutex);
   return data.DataProtocol;
}
void GPSSettings::setDataProtocol(unsigned char value)
{
   mutex->lock();
   bool changed = data.DataProtocol != value;
   data.DataProtocol = value;
   mutex->unlock();
   if (changed) emit DataProtocolChanged(value);
}

unsigned char GPSSettings::getMinSatellites() const
{
   QMutexLocker locker(mutex);
   return data.MinSatellites;
}
void GPSSettings::setMinSatellites(unsigned char value)
{
   mutex->lock();
   bool changed = data.MinSatellites != value;
   data.MinSatellites = value;
   mutex->unlock();
   if (changed) emit MinSatellitesChanged(value);
}

unsigned char GPSSettings::getUbxAutoConfig() const
{
   QMutexLocker locker(mutex);
   return data.UbxAutoConfig;
}
void GPSSettings::setUbxAutoConfig(unsigned char value)
{
   mutex->lock();
   bool changed = data.UbxAutoConfig != value;
   data.UbxAutoConfig = value;
   mutex->unlock();
   if (changed) emit UbxAutoConfigChanged(value);
}

char GPSSettings::getUbxRate() const
{
   QMutexLocker locker(mutex);
   return data.UbxRate;
}
void GPSSettings::setUbxRate(char value)
{
   mutex->lock();
   bool changed = data.UbxRate != value;
   data.UbxRate = value;
   mutex->unlock();
   if (changed) emit UbxRateChanged(value);
}

unsigned char GPSSettings::getUbxDynamicModel() const
{
   QMutexLocker locker(mutex);
   return data.UbxDynamicModel;
}
void GPSSettings::setUbxDynamicModel(unsigned char value)
{
   mutex->lock();
   bool changed = data.UbxDynamicModel != value;
   data.UbxDynamicModel = value;
   mutex->unlock();
   if (changed) emit UbxDynamicModelChanged(value);
}

unsigned char GPSSettings::getUbxSBASMode() const
{
   QMutexLocker locker(mutex);
   return data.UbxSBASMode;
}
void GPSSettings::setUbxSBASMode(unsigned char value)
{
   mutex->lock();
   bool changed = data.UbxSBASMode != value;
   data.UbxSBASMode = value;
   mutex->unlock();
   if (changed) emit UbxSBASModeChanged(value);
}

unsigned char GPSSettings::getUbxSBASChannelsUsed() const
{
   QMutexLocker locker(mutex);
   return data.UbxSBASChannelsUsed;
}
void GPSSettings::setUbxSBASChannelsUsed(unsigned char value)
{
   mutex->lock();
   bool changed = data.UbxSBASChannelsUsed != value;
   data.UbxSBASChannelsUsed = value;
   mutex->unlock();
   if (changed) emit UbxSBASChannelsUsedChanged(value);
}

unsigned char GPSSettings::getUbxSBASSats() const
{
   QMutexLocker locker(mutex);
   return data.UbxSBASSats;
}
void GPSSettings::setUbxSBASSats(unsigned char value)
{
   mutex->lock();
   bool changed = data.UbxSBASSats != value;
   data.UbxSBASSats = value;
   mutex->unlock();
   if (changed) emit UbxSBASSatsChanged(value);
}

*/
