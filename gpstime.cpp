/**
 ******************************************************************************
 *
 * @file       gpstime.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: gpstime.xml.
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

#include "gpstime.h"

int GPSTime::numInstances = 0;

/**
 * Constructor
 */
GPSTime::GPSTime(UAVObjManager* manager): UAVObject(manager, 0xD4478084, "GPSTime", "Contains the GPS time from @ref GPSModule.  Required to compute the world magnetic model correctly when setting the home location.", "Sensors", 1, 0, ACCESS_READWRITE, ACCESS_READWRITE, 0, 0, UPDATEMODE_PERIODIC, UPDATEMODE_MANUAL, 10000, 0, 0)
{

}

int GPSTime::UAVObjSetDataField(const char *dataIn, const std::string fieldID){
	if(fieldID == "Year") {
		memset( &(dataFields.Year), 0, sizeof(dataFields.Year));
		memcpy( &(dataFields.Year), dataIn, sizeof(dataFields.Year));
	} else if(fieldID == "Month") {
		memset( &(dataFields.Month), 0, sizeof(dataFields.Month));
		memcpy( &(dataFields.Month), dataIn, sizeof(dataFields.Month));
	} else if(fieldID == "Day") {
		memset( &(dataFields.Day), 0, sizeof(dataFields.Day));
		memcpy( &(dataFields.Day), dataIn, sizeof(dataFields.Day));
	} else if(fieldID == "Hour") {
		memset( &(dataFields.Hour), 0, sizeof(dataFields.Hour));
		memcpy( &(dataFields.Hour), dataIn, sizeof(dataFields.Hour));
	} else if(fieldID == "Minute") {
		memset( &(dataFields.Minute), 0, sizeof(dataFields.Minute));
		memcpy( &(dataFields.Minute), dataIn, sizeof(dataFields.Minute));
	} else if(fieldID == "Second") {
		memset( &(dataFields.Second), 0, sizeof(dataFields.Second));
		memcpy( &(dataFields.Second), dataIn, sizeof(dataFields.Second));
	}
	return 0;
}

int GPSTime::UAVObjGetDataField(char *dataOut, const std::string fieldID){
	if(fieldID == "Year") {
		memcpy( dataOut, &(dataFields.Year), sizeof(dataFields.Year));
	} else if(fieldID == "Month") {
		memcpy( dataOut, &(dataFields.Month), sizeof(dataFields.Month));
	} else if(fieldID == "Day") {
		memcpy( dataOut, &(dataFields.Day), sizeof(dataFields.Day));
	} else if(fieldID == "Hour") {
		memcpy( dataOut, &(dataFields.Hour), sizeof(dataFields.Hour));
	} else if(fieldID == "Minute") {
		memcpy( dataOut, &(dataFields.Minute), sizeof(dataFields.Minute));
	} else if(fieldID == "Second") {
		memcpy( dataOut, &(dataFields.Second), sizeof(dataFields.Second));
	}
	return 0;
}

int GPSTime::UAVObjUnpack(const unsigned char *dataIn){
	memcpy(&dataFields, dataIn, NUMBYTES);
	return 0;
}

int GPSTime::UAVObjPack(unsigned char *dataOut) {
	memcpy(dataOut, &dataFields, NUMBYTES);
	return 0;
}

unsigned short GPSTime::UAVObjGetInstance() const {
	return instance;
}
unsigned short GPSTime::UAVObjGetNumBytes() const {
	return sizeof(dataFields);
}
unsigned short GPSTime::UAVObjGetNumInstances() const {
	return numInstances;
}

std::string GPSTime::prettyPrint() {
	std::stringstream ss;
	ss << "\nPrinting object: gpstime" << std::endl;
	ss << "\tYear: " << dataFields.Year << std::endl;
	ss << "\tMonth: " << dataFields.Month << std::endl;
	ss << "\tDay: " << dataFields.Day << std::endl;
	ss << "\tHour: " << dataFields.Hour << std::endl;
	ss << "\tMinute: " << dataFields.Minute << std::endl;
	ss << "\tSecond: " << dataFields.Second << std::endl;

	return ss.str();
}

/*/***/
/* * Initialize object fields with the default values.*/
/* * If a default value is not specified the object fields*/
/* * will be initialized to zero.*/
/* */
/*void GPSTime::setDefaultFieldValues()*/
/*{*/
/**/
/*}*/

/*/***/
/* * Get the object data fields*/
/* */
/*GPSTime::DataFields GPSTime::getData()*/
/*{*/
/*    QMutexLocker locker(mutex);*/
/*    return data;*/
/*}*/

/*/***/
/* * Set the object data fields*/
/* */
/*void GPSTime::setData(const DataFields& data)*/
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

/*void GPSTime::emitNotifications()*/
/*{*/
/*            //if (data.Year != oldData.Year)
            emit YearChanged(data.Year);
        //if (data.Month != oldData.Month)
            emit MonthChanged(data.Month);
        //if (data.Day != oldData.Day)
            emit DayChanged(data.Day);
        //if (data.Hour != oldData.Hour)
            emit HourChanged(data.Hour);
        //if (data.Minute != oldData.Minute)
            emit MinuteChanged(data.Minute);
        //if (data.Second != oldData.Second)
            emit SecondChanged(data.Second);
*/
/*}*/

/*/***/
/* * Create a clone of this object, a new instance ID must be specified.*/
/* * Do not use this function directly to create new instances, the*/
/* * UAVObjectManager should be used instead.*/
/* */
/*UAVDataObject *GPSTime::clone(unsigned int instID)*/
/*{*/
/*    GPSTime *obj = new GPSTime();*/
/*    obj->initialize(instID, this->getMetaObject());*/
/*    return obj;*/
/*}*/

/*/***/
/* * Create a clone of this object only to be used to retrieve defaults*/
/* */
/*UAVDataObject *GPSTime::dirtyClone()*/
/*{*/
/*    GPSTime *obj = new GPSTime();*/
/*    return obj;*/
/*}*/

/*/***/
/* * Static function to retrieve an instance of the object.*/
/* */
/*GPSTime *GPSTime::GetInstance(UAVObjectManager *objMngr, unsigned int instID)*/
/*{*/
/*    return dynamic_cast<GPSTime *>(objMngr->getObject(GPSTime::OBJID, instID));*/
/*}*/

/*short int GPSTime::getYear() const
{
   QMutexLocker locker(mutex);
   return data.Year;
}
void GPSTime::setYear(short int value)
{
   mutex->lock();
   bool changed = data.Year != value;
   data.Year = value;
   mutex->unlock();
   if (changed) emit YearChanged(value);
}

char GPSTime::getMonth() const
{
   QMutexLocker locker(mutex);
   return data.Month;
}
void GPSTime::setMonth(char value)
{
   mutex->lock();
   bool changed = data.Month != value;
   data.Month = value;
   mutex->unlock();
   if (changed) emit MonthChanged(value);
}

char GPSTime::getDay() const
{
   QMutexLocker locker(mutex);
   return data.Day;
}
void GPSTime::setDay(char value)
{
   mutex->lock();
   bool changed = data.Day != value;
   data.Day = value;
   mutex->unlock();
   if (changed) emit DayChanged(value);
}

char GPSTime::getHour() const
{
   QMutexLocker locker(mutex);
   return data.Hour;
}
void GPSTime::setHour(char value)
{
   mutex->lock();
   bool changed = data.Hour != value;
   data.Hour = value;
   mutex->unlock();
   if (changed) emit HourChanged(value);
}

char GPSTime::getMinute() const
{
   QMutexLocker locker(mutex);
   return data.Minute;
}
void GPSTime::setMinute(char value)
{
   mutex->lock();
   bool changed = data.Minute != value;
   data.Minute = value;
   mutex->unlock();
   if (changed) emit MinuteChanged(value);
}

char GPSTime::getSecond() const
{
   QMutexLocker locker(mutex);
   return data.Second;
}
void GPSTime::setSecond(char value)
{
   mutex->lock();
   bool changed = data.Second != value;
   data.Second = value;
   mutex->unlock();
   if (changed) emit SecondChanged(value);
}

*/
