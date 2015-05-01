/**
 ******************************************************************************
 *
 * @file       homelocation.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: homelocation.xml.
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

#include "homelocation.h"

int HomeLocation::numInstances = 0;

/**
 * Constructor
 */
HomeLocation::HomeLocation(UAVObjManager* manager): UAVObject(manager, 0x6185DC6E, "HomeLocation", "HomeLocation setting which contains the constants to translate from longitude and latitude to NED reference frame.  Automatically set by @ref GPSModule after acquiring a 3D lock.  Used by @ref AHRSCommsModule.", "Navigation", 1, 1, ACCESS_READWRITE, ACCESS_READWRITE, 1, 1, UPDATEMODE_ONCHANGE, UPDATEMODE_ONCHANGE, 0, 0, 0)
{

}

int HomeLocation::UAVObjSetDataField(const char *dataIn, const std::string fieldID){
	if(fieldID == "Latitude") {
		memset( &(dataFields.Latitude), 0, sizeof(dataFields.Latitude));
		memcpy( &(dataFields.Latitude), dataIn, sizeof(dataFields.Latitude));
	} else if(fieldID == "Longitude") {
		memset( &(dataFields.Longitude), 0, sizeof(dataFields.Longitude));
		memcpy( &(dataFields.Longitude), dataIn, sizeof(dataFields.Longitude));
	} else if(fieldID == "Altitude") {
		memset( &(dataFields.Altitude), 0, sizeof(dataFields.Altitude));
		memcpy( &(dataFields.Altitude), dataIn, sizeof(dataFields.Altitude));
	} else if(fieldID == "Be") {
		memset( &(dataFields.Be), 0, sizeof(dataFields.Be));
		memcpy( &(dataFields.Be), dataIn, sizeof(dataFields.Be));
	} else if(fieldID == "g_e") {
		memset( &(dataFields.g_e), 0, sizeof(dataFields.g_e));
		memcpy( &(dataFields.g_e), dataIn, sizeof(dataFields.g_e));
	} else if(fieldID == "Set") {
		memset( &(dataFields.Set), 0, sizeof(dataFields.Set));
		memcpy( &(dataFields.Set), dataIn, sizeof(dataFields.Set));
	}
	return 0;
}

int HomeLocation::UAVObjGetDataField(char *dataOut, const std::string fieldID){
	if(fieldID == "Latitude") {
		memcpy( dataOut, &(dataFields.Latitude), sizeof(dataFields.Latitude));
	} else if(fieldID == "Longitude") {
		memcpy( dataOut, &(dataFields.Longitude), sizeof(dataFields.Longitude));
	} else if(fieldID == "Altitude") {
		memcpy( dataOut, &(dataFields.Altitude), sizeof(dataFields.Altitude));
	} else if(fieldID == "Be") {
		memcpy( dataOut, &(dataFields.Be), sizeof(dataFields.Be));
	} else if(fieldID == "g_e") {
		memcpy( dataOut, &(dataFields.g_e), sizeof(dataFields.g_e));
	} else if(fieldID == "Set") {
		memcpy( dataOut, &(dataFields.Set), sizeof(dataFields.Set));
	}
	return 0;
}

int HomeLocation::UAVObjUnpack(const unsigned char *dataIn){
	memcpy(&dataFields, dataIn, NUMBYTES);
	return 0;
}

int HomeLocation::UAVObjPack(unsigned char *dataOut) {
	memcpy(dataOut, &dataFields, NUMBYTES);
	return 0;
}

unsigned short HomeLocation::UAVObjGetInstance() const {
	return instance;
}
unsigned short HomeLocation::UAVObjGetNumBytes() const {
	return sizeof(dataFields);
}
unsigned short HomeLocation::UAVObjGetNumInstances() const {
	return numInstances;
}

std::string HomeLocation::prettyPrint() {
	std::stringstream ss;
	ss << "\nPrinting object: homelocation" << std::endl;
	ss << "\tLatitude: " << dataFields.Latitude << std::endl;
	ss << "\tLongitude: " << dataFields.Longitude << std::endl;
	ss << "\tAltitude: " << dataFields.Altitude << std::endl;
	ss << "\tBe: " << dataFields.Be << std::endl;
	ss << "\tg_e: " << dataFields.g_e << std::endl;
	ss << "\tSet: " << dataFields.Set << std::endl;

	return ss.str();
}

/*/***/
/* * Initialize object fields with the default values.*/
/* * If a default value is not specified the object fields*/
/* * will be initialized to zero.*/
/* */
/*void HomeLocation::setDefaultFieldValues()*/
/*{*/
/*    data.Latitude = 0;
    data.Longitude = 0;
    data.Altitude = 0;
    data.Be[0] = 0;
    data.Be[1] = 0;
    data.Be[2] = 0;
    data.g_e = 9.81;
    data.Set = 0;
*/
/*}*/

/*/***/
/* * Get the object data fields*/
/* */
/*HomeLocation::DataFields HomeLocation::getData()*/
/*{*/
/*    QMutexLocker locker(mutex);*/
/*    return data;*/
/*}*/

/*/***/
/* * Set the object data fields*/
/* */
/*void HomeLocation::setData(const DataFields& data)*/
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

/*void HomeLocation::emitNotifications()*/
/*{*/
/*            //if (data.Latitude != oldData.Latitude)
            emit LatitudeChanged(data.Latitude);
        //if (data.Longitude != oldData.Longitude)
            emit LongitudeChanged(data.Longitude);
        //if (data.Altitude != oldData.Altitude)
            emit AltitudeChanged(data.Altitude);
        //if (data.g_e != oldData.g_e)
            emit g_eChanged(data.g_e);
        //if (data.Set != oldData.Set)
            emit SetChanged(data.Set);
*/
/*}*/

/*/***/
/* * Create a clone of this object, a new instance ID must be specified.*/
/* * Do not use this function directly to create new instances, the*/
/* * UAVObjectManager should be used instead.*/
/* */
/*UAVDataObject *HomeLocation::clone(unsigned int instID)*/
/*{*/
/*    HomeLocation *obj = new HomeLocation();*/
/*    obj->initialize(instID, this->getMetaObject());*/
/*    return obj;*/
/*}*/

/*/***/
/* * Create a clone of this object only to be used to retrieve defaults*/
/* */
/*UAVDataObject *HomeLocation::dirtyClone()*/
/*{*/
/*    HomeLocation *obj = new HomeLocation();*/
/*    return obj;*/
/*}*/

/*/***/
/* * Static function to retrieve an instance of the object.*/
/* */
/*HomeLocation *HomeLocation::GetInstance(UAVObjectManager *objMngr, unsigned int instID)*/
/*{*/
/*    return dynamic_cast<HomeLocation *>(objMngr->getObject(HomeLocation::OBJID, instID));*/
/*}*/

/*int HomeLocation::getLatitude() const
{
   QMutexLocker locker(mutex);
   return data.Latitude;
}
void HomeLocation::setLatitude(int value)
{
   mutex->lock();
   bool changed = data.Latitude != value;
   data.Latitude = value;
   mutex->unlock();
   if (changed) emit LatitudeChanged(value);
}

int HomeLocation::getLongitude() const
{
   QMutexLocker locker(mutex);
   return data.Longitude;
}
void HomeLocation::setLongitude(int value)
{
   mutex->lock();
   bool changed = data.Longitude != value;
   data.Longitude = value;
   mutex->unlock();
   if (changed) emit LongitudeChanged(value);
}

float HomeLocation::getAltitude() const
{
   QMutexLocker locker(mutex);
   return data.Altitude;
}
void HomeLocation::setAltitude(float value)
{
   mutex->lock();
   bool changed = data.Altitude != value;
   data.Altitude = value;
   mutex->unlock();
   if (changed) emit AltitudeChanged(value);
}

float HomeLocation::getBe(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.Be[index];
}
void HomeLocation::setBe(unsigned int index, float value)
{
   mutex->lock();
   bool changed = data.Be[index] != value;
   data.Be[index] = value;
   mutex->unlock();
   if (changed) emit BeChanged(index,value);
}

float HomeLocation::getg_e() const
{
   QMutexLocker locker(mutex);
   return data.g_e;
}
void HomeLocation::setg_e(float value)
{
   mutex->lock();
   bool changed = data.g_e != value;
   data.g_e = value;
   mutex->unlock();
   if (changed) emit g_eChanged(value);
}

unsigned char HomeLocation::getSet() const
{
   QMutexLocker locker(mutex);
   return data.Set;
}
void HomeLocation::setSet(unsigned char value)
{
   mutex->lock();
   bool changed = data.Set != value;
   data.Set = value;
   mutex->unlock();
   if (changed) emit SetChanged(value);
}

*/
