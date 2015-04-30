/**
 ******************************************************************************
 *
 * @file       gpssatellites.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: gpssatellites.xml.
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

#include "gpssatellites.h"

int GPSSatellites::numInstances = 0;

/**
 * Constructor
 */
GPSSatellites::GPSSatellites(UAVObjManager* manager): UAVObject(manager, 0x5838003C, "GPSSatellites", "Contains information about the GPS satellites in view from @ref GPSModule.", "Sensors", 1, 0, ACCESS_READWRITE, ACCESS_READWRITE, 0, 0, UPDATEMODE_PERIODIC, UPDATEMODE_MANUAL, 10000, 0, 0)
{

}

int GPSSatellites::UAVObjSetDataField(const char *dataIn, const std::string fieldID){
	if(fieldID == "Azimuth") {
		memset( &(dataFields.Azimuth), 0, sizeof(dataFields.Azimuth));
		memcpy( &(dataFields.Azimuth), dataIn, sizeof(dataFields.Azimuth));
	} else if(fieldID == "SatsInView") {
		memset( &(dataFields.SatsInView), 0, sizeof(dataFields.SatsInView));
		memcpy( &(dataFields.SatsInView), dataIn, sizeof(dataFields.SatsInView));
	} else if(fieldID == "PRN") {
		memset( &(dataFields.PRN), 0, sizeof(dataFields.PRN));
		memcpy( &(dataFields.PRN), dataIn, sizeof(dataFields.PRN));
	} else if(fieldID == "Elevation") {
		memset( &(dataFields.Elevation), 0, sizeof(dataFields.Elevation));
		memcpy( &(dataFields.Elevation), dataIn, sizeof(dataFields.Elevation));
	} else if(fieldID == "SNR") {
		memset( &(dataFields.SNR), 0, sizeof(dataFields.SNR));
		memcpy( &(dataFields.SNR), dataIn, sizeof(dataFields.SNR));
	}
	return 0;
}

int GPSSatellites::UAVObjGetDataField(char *dataOut, const std::string fieldID){
	if(fieldID == "Azimuth") {
		memcpy( dataOut, &(dataFields.Azimuth), sizeof(dataFields.Azimuth));
	} else if(fieldID == "SatsInView") {
		memcpy( dataOut, &(dataFields.SatsInView), sizeof(dataFields.SatsInView));
	} else if(fieldID == "PRN") {
		memcpy( dataOut, &(dataFields.PRN), sizeof(dataFields.PRN));
	} else if(fieldID == "Elevation") {
		memcpy( dataOut, &(dataFields.Elevation), sizeof(dataFields.Elevation));
	} else if(fieldID == "SNR") {
		memcpy( dataOut, &(dataFields.SNR), sizeof(dataFields.SNR));
	}
	return 0;
}

int GPSSatellites::UAVObjUnpack(const unsigned char *dataIn){
	memcpy(&dataFields, dataIn, NUMBYTES);
	return 0;
}

int GPSSatellites::UAVObjPack(unsigned char *dataOut) {
	memcpy(dataOut, &dataFields, NUMBYTES);
	return 0;
}

unsigned short GPSSatellites::UAVObjGetInstance() const {
	return instance;
}
unsigned short GPSSatellites::UAVObjGetNumBytes() const {
	return sizeof(dataFields);
}
unsigned short GPSSatellites::UAVObjGetNumInstances() const {
	return numInstances;
}

std::string GPSSatellites::prettyPrint() {
	std::stringstream ss;
	ss << "\nPrinting object: gpssatellites" << std::endl;
	ss << "\tAzimuth: " << dataFields.Azimuth << std::endl;
	ss << "\tSatsInView: " << dataFields.SatsInView << std::endl;
	ss << "\tPRN: " << dataFields.PRN << std::endl;
	ss << "\tElevation: " << dataFields.Elevation << std::endl;
	ss << "\tSNR: " << dataFields.SNR << std::endl;

	return ss.str();
}

/*/***/
/* * Initialize object fields with the default values.*/
/* * If a default value is not specified the object fields*/
/* * will be initialized to zero.*/
/* */
/*void GPSSatellites::setDefaultFieldValues()*/
/*{*/
/**/
/*}*/

/*/***/
/* * Get the object data fields*/
/* */
/*GPSSatellites::DataFields GPSSatellites::getData()*/
/*{*/
/*    QMutexLocker locker(mutex);*/
/*    return data;*/
/*}*/

/*/***/
/* * Set the object data fields*/
/* */
/*void GPSSatellites::setData(const DataFields& data)*/
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

/*void GPSSatellites::emitNotifications()*/
/*{*/
/*            //if (data.SatsInView != oldData.SatsInView)
            emit SatsInViewChanged(data.SatsInView);
*/
/*}*/

/*/***/
/* * Create a clone of this object, a new instance ID must be specified.*/
/* * Do not use this function directly to create new instances, the*/
/* * UAVObjectManager should be used instead.*/
/* */
/*UAVDataObject *GPSSatellites::clone(unsigned int instID)*/
/*{*/
/*    GPSSatellites *obj = new GPSSatellites();*/
/*    obj->initialize(instID, this->getMetaObject());*/
/*    return obj;*/
/*}*/

/*/***/
/* * Create a clone of this object only to be used to retrieve defaults*/
/* */
/*UAVDataObject *GPSSatellites::dirtyClone()*/
/*{*/
/*    GPSSatellites *obj = new GPSSatellites();*/
/*    return obj;*/
/*}*/

/*/***/
/* * Static function to retrieve an instance of the object.*/
/* */
/*GPSSatellites *GPSSatellites::GetInstance(UAVObjectManager *objMngr, unsigned int instID)*/
/*{*/
/*    return dynamic_cast<GPSSatellites *>(objMngr->getObject(GPSSatellites::OBJID, instID));*/
/*}*/

/*short int GPSSatellites::getAzimuth(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.Azimuth[index];
}
void GPSSatellites::setAzimuth(unsigned int index, short int value)
{
   mutex->lock();
   bool changed = data.Azimuth[index] != value;
   data.Azimuth[index] = value;
   mutex->unlock();
   if (changed) emit AzimuthChanged(index,value);
}

char GPSSatellites::getSatsInView() const
{
   QMutexLocker locker(mutex);
   return data.SatsInView;
}
void GPSSatellites::setSatsInView(char value)
{
   mutex->lock();
   bool changed = data.SatsInView != value;
   data.SatsInView = value;
   mutex->unlock();
   if (changed) emit SatsInViewChanged(value);
}

char GPSSatellites::getPRN(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.PRN[index];
}
void GPSSatellites::setPRN(unsigned int index, char value)
{
   mutex->lock();
   bool changed = data.PRN[index] != value;
   data.PRN[index] = value;
   mutex->unlock();
   if (changed) emit PRNChanged(index,value);
}

char GPSSatellites::getElevation(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.Elevation[index];
}
void GPSSatellites::setElevation(unsigned int index, char value)
{
   mutex->lock();
   bool changed = data.Elevation[index] != value;
   data.Elevation[index] = value;
   mutex->unlock();
   if (changed) emit ElevationChanged(index,value);
}

char GPSSatellites::getSNR(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.SNR[index];
}
void GPSSatellites::setSNR(unsigned int index, char value)
{
   mutex->lock();
   bool changed = data.SNR[index] != value;
   data.SNR[index] = value;
   mutex->unlock();
   if (changed) emit SNRChanged(index,value);
}

*/
