/**
 ******************************************************************************
 *
 * @file       osdsettings.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: osdsettings.xml.
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

#include "osdsettings.h"

int OsdSettings::numInstances = 0;

/**
 * Constructor
 */
OsdSettings::OsdSettings(UAVObjManager* manager): UAVObject(manager, 0xDCBBA81A, "OsdSettings", "OSD settings used by the OSDgen module", "System", 1, 1, ACCESS_READWRITE, ACCESS_READWRITE, 1, 1, UPDATEMODE_ONCHANGE, UPDATEMODE_ONCHANGE, 0, 0, 0)
{

}

int OsdSettings::UAVObjSetDataField(const char *dataIn, const std::string fieldID){
	if(fieldID == "AttitudeSetup") {
		memset( &(dataFields.AttitudeSetup), 0, sizeof(dataFields.AttitudeSetup));
		memcpy( &(dataFields.AttitudeSetup), dataIn, sizeof(dataFields.AttitudeSetup));
	} else if(fieldID == "TimeSetup") {
		memset( &(dataFields.TimeSetup), 0, sizeof(dataFields.TimeSetup));
		memcpy( &(dataFields.TimeSetup), dataIn, sizeof(dataFields.TimeSetup));
	} else if(fieldID == "BatterySetup") {
		memset( &(dataFields.BatterySetup), 0, sizeof(dataFields.BatterySetup));
		memcpy( &(dataFields.BatterySetup), dataIn, sizeof(dataFields.BatterySetup));
	} else if(fieldID == "SpeedSetup") {
		memset( &(dataFields.SpeedSetup), 0, sizeof(dataFields.SpeedSetup));
		memcpy( &(dataFields.SpeedSetup), dataIn, sizeof(dataFields.SpeedSetup));
	} else if(fieldID == "AltitudeSetup") {
		memset( &(dataFields.AltitudeSetup), 0, sizeof(dataFields.AltitudeSetup));
		memcpy( &(dataFields.AltitudeSetup), dataIn, sizeof(dataFields.AltitudeSetup));
	} else if(fieldID == "HeadingSetup") {
		memset( &(dataFields.HeadingSetup), 0, sizeof(dataFields.HeadingSetup));
		memcpy( &(dataFields.HeadingSetup), dataIn, sizeof(dataFields.HeadingSetup));
	} else if(fieldID == "Attitude") {
		memset( &(dataFields.Attitude), 0, sizeof(dataFields.Attitude));
		memcpy( &(dataFields.Attitude), dataIn, sizeof(dataFields.Attitude));
	} else if(fieldID == "Time") {
		memset( &(dataFields.Time), 0, sizeof(dataFields.Time));
		memcpy( &(dataFields.Time), dataIn, sizeof(dataFields.Time));
	} else if(fieldID == "Battery") {
		memset( &(dataFields.Battery), 0, sizeof(dataFields.Battery));
		memcpy( &(dataFields.Battery), dataIn, sizeof(dataFields.Battery));
	} else if(fieldID == "Speed") {
		memset( &(dataFields.Speed), 0, sizeof(dataFields.Speed));
		memcpy( &(dataFields.Speed), dataIn, sizeof(dataFields.Speed));
	} else if(fieldID == "Altitude") {
		memset( &(dataFields.Altitude), 0, sizeof(dataFields.Altitude));
		memcpy( &(dataFields.Altitude), dataIn, sizeof(dataFields.Altitude));
	} else if(fieldID == "Heading") {
		memset( &(dataFields.Heading), 0, sizeof(dataFields.Heading));
		memcpy( &(dataFields.Heading), dataIn, sizeof(dataFields.Heading));
	} else if(fieldID == "Screen") {
		memset( &(dataFields.Screen), 0, sizeof(dataFields.Screen));
		memcpy( &(dataFields.Screen), dataIn, sizeof(dataFields.Screen));
	} else if(fieldID == "White") {
		memset( &(dataFields.White), 0, sizeof(dataFields.White));
		memcpy( &(dataFields.White), dataIn, sizeof(dataFields.White));
	} else if(fieldID == "Black") {
		memset( &(dataFields.Black), 0, sizeof(dataFields.Black));
		memcpy( &(dataFields.Black), dataIn, sizeof(dataFields.Black));
	} else if(fieldID == "AltitudeSource") {
		memset( &(dataFields.AltitudeSource), 0, sizeof(dataFields.AltitudeSource));
		memcpy( &(dataFields.AltitudeSource), dataIn, sizeof(dataFields.AltitudeSource));
	}
	return 0;
}

int OsdSettings::UAVObjGetDataField(char *dataOut, const std::string fieldID){
	if(fieldID == "AttitudeSetup") {
		memcpy( dataOut, &(dataFields.AttitudeSetup), sizeof(dataFields.AttitudeSetup));
	} else if(fieldID == "TimeSetup") {
		memcpy( dataOut, &(dataFields.TimeSetup), sizeof(dataFields.TimeSetup));
	} else if(fieldID == "BatterySetup") {
		memcpy( dataOut, &(dataFields.BatterySetup), sizeof(dataFields.BatterySetup));
	} else if(fieldID == "SpeedSetup") {
		memcpy( dataOut, &(dataFields.SpeedSetup), sizeof(dataFields.SpeedSetup));
	} else if(fieldID == "AltitudeSetup") {
		memcpy( dataOut, &(dataFields.AltitudeSetup), sizeof(dataFields.AltitudeSetup));
	} else if(fieldID == "HeadingSetup") {
		memcpy( dataOut, &(dataFields.HeadingSetup), sizeof(dataFields.HeadingSetup));
	} else if(fieldID == "Attitude") {
		memcpy( dataOut, &(dataFields.Attitude), sizeof(dataFields.Attitude));
	} else if(fieldID == "Time") {
		memcpy( dataOut, &(dataFields.Time), sizeof(dataFields.Time));
	} else if(fieldID == "Battery") {
		memcpy( dataOut, &(dataFields.Battery), sizeof(dataFields.Battery));
	} else if(fieldID == "Speed") {
		memcpy( dataOut, &(dataFields.Speed), sizeof(dataFields.Speed));
	} else if(fieldID == "Altitude") {
		memcpy( dataOut, &(dataFields.Altitude), sizeof(dataFields.Altitude));
	} else if(fieldID == "Heading") {
		memcpy( dataOut, &(dataFields.Heading), sizeof(dataFields.Heading));
	} else if(fieldID == "Screen") {
		memcpy( dataOut, &(dataFields.Screen), sizeof(dataFields.Screen));
	} else if(fieldID == "White") {
		memcpy( dataOut, &(dataFields.White), sizeof(dataFields.White));
	} else if(fieldID == "Black") {
		memcpy( dataOut, &(dataFields.Black), sizeof(dataFields.Black));
	} else if(fieldID == "AltitudeSource") {
		memcpy( dataOut, &(dataFields.AltitudeSource), sizeof(dataFields.AltitudeSource));
	}
	return 0;
}

int OsdSettings::UAVObjUnpack(const unsigned char *dataIn){
	memcpy(&dataFields, dataIn, NUMBYTES);
	return 0;
}

int OsdSettings::UAVObjPack(unsigned char *dataOut) {
	memcpy(dataOut, &dataFields, NUMBYTES);
	return 0;
}

unsigned short OsdSettings::UAVObjGetInstance() const {
	return instance;
}
unsigned short OsdSettings::UAVObjGetNumBytes() const {
	return sizeof(dataFields);
}
unsigned short OsdSettings::UAVObjGetNumInstances() const {
	return numInstances;
}

std::string OsdSettings::prettyPrint() {
	std::stringstream ss;
	ss << "\nPrinting object: osdsettings" << std::endl;
	ss << "\tAttitudeSetup: " << dataFields.AttitudeSetup << std::endl;
	ss << "\tTimeSetup: " << dataFields.TimeSetup << std::endl;
	ss << "\tBatterySetup: " << dataFields.BatterySetup << std::endl;
	ss << "\tSpeedSetup: " << dataFields.SpeedSetup << std::endl;
	ss << "\tAltitudeSetup: " << dataFields.AltitudeSetup << std::endl;
	ss << "\tHeadingSetup: " << dataFields.HeadingSetup << std::endl;
	ss << "\tAttitude: " << dataFields.Attitude << std::endl;
	ss << "\tTime: " << dataFields.Time << std::endl;
	ss << "\tBattery: " << dataFields.Battery << std::endl;
	ss << "\tSpeed: " << dataFields.Speed << std::endl;
	ss << "\tAltitude: " << dataFields.Altitude << std::endl;
	ss << "\tHeading: " << dataFields.Heading << std::endl;
	ss << "\tScreen: " << dataFields.Screen << std::endl;
	ss << "\tWhite: " << dataFields.White << std::endl;
	ss << "\tBlack: " << dataFields.Black << std::endl;
	ss << "\tAltitudeSource: " << dataFields.AltitudeSource << std::endl;

	return ss.str();
}

/*/***/
/* * Initialize object fields with the default values.*/
/* * If a default value is not specified the object fields*/
/* * will be initialized to zero.*/
/* */
/*void OsdSettings::setDefaultFieldValues()*/
/*{*/
/*    data.AttitudeSetup[0] = 168;
    data.AttitudeSetup[1] = 135;
    data.TimeSetup[0] = 10;
    data.TimeSetup[1] = 250;
    data.BatterySetup[0] = 316;
    data.BatterySetup[1] = 210;
    data.SpeedSetup[0] = 2;
    data.SpeedSetup[1] = 145;
    data.AltitudeSetup[0] = 2;
    data.AltitudeSetup[1] = 145;
    data.HeadingSetup[0] = 168;
    data.HeadingSetup[1] = 240;
    data.Attitude = 1;
    data.Time = 1;
    data.Battery = 1;
    data.Speed = 1;
    data.Altitude = 1;
    data.Heading = 1;
    data.Screen = 0;
    data.White = 4;
    data.Black = 1;
    data.AltitudeSource = 0;
*/
/*}*/

/*/***/
/* * Get the object data fields*/
/* */
/*OsdSettings::DataFields OsdSettings::getData()*/
/*{*/
/*    QMutexLocker locker(mutex);*/
/*    return data;*/
/*}*/

/*/***/
/* * Set the object data fields*/
/* */
/*void OsdSettings::setData(const DataFields& data)*/
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

/*void OsdSettings::emitNotifications()*/
/*{*/
/*            //if (data.Attitude != oldData.Attitude)
            emit AttitudeChanged(data.Attitude);
        //if (data.Time != oldData.Time)
            emit TimeChanged(data.Time);
        //if (data.Battery != oldData.Battery)
            emit BatteryChanged(data.Battery);
        //if (data.Speed != oldData.Speed)
            emit SpeedChanged(data.Speed);
        //if (data.Altitude != oldData.Altitude)
            emit AltitudeChanged(data.Altitude);
        //if (data.Heading != oldData.Heading)
            emit HeadingChanged(data.Heading);
        //if (data.Screen != oldData.Screen)
            emit ScreenChanged(data.Screen);
        //if (data.White != oldData.White)
            emit WhiteChanged(data.White);
        //if (data.Black != oldData.Black)
            emit BlackChanged(data.Black);
        //if (data.AltitudeSource != oldData.AltitudeSource)
            emit AltitudeSourceChanged(data.AltitudeSource);
*/
/*}*/

/*/***/
/* * Create a clone of this object, a new instance ID must be specified.*/
/* * Do not use this function directly to create new instances, the*/
/* * UAVObjectManager should be used instead.*/
/* */
/*UAVDataObject *OsdSettings::clone(unsigned int instID)*/
/*{*/
/*    OsdSettings *obj = new OsdSettings();*/
/*    obj->initialize(instID, this->getMetaObject());*/
/*    return obj;*/
/*}*/

/*/***/
/* * Create a clone of this object only to be used to retrieve defaults*/
/* */
/*UAVDataObject *OsdSettings::dirtyClone()*/
/*{*/
/*    OsdSettings *obj = new OsdSettings();*/
/*    return obj;*/
/*}*/

/*/***/
/* * Static function to retrieve an instance of the object.*/
/* */
/*OsdSettings *OsdSettings::GetInstance(UAVObjectManager *objMngr, unsigned int instID)*/
/*{*/
/*    return dynamic_cast<OsdSettings *>(objMngr->getObject(OsdSettings::OBJID, instID));*/
/*}*/

/*short int OsdSettings::getAttitudeSetup(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.AttitudeSetup[index];
}
void OsdSettings::setAttitudeSetup(unsigned int index, short int value)
{
   mutex->lock();
   bool changed = data.AttitudeSetup[index] != value;
   data.AttitudeSetup[index] = value;
   mutex->unlock();
   if (changed) emit AttitudeSetupChanged(index,value);
}

short int OsdSettings::getTimeSetup(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.TimeSetup[index];
}
void OsdSettings::setTimeSetup(unsigned int index, short int value)
{
   mutex->lock();
   bool changed = data.TimeSetup[index] != value;
   data.TimeSetup[index] = value;
   mutex->unlock();
   if (changed) emit TimeSetupChanged(index,value);
}

short int OsdSettings::getBatterySetup(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.BatterySetup[index];
}
void OsdSettings::setBatterySetup(unsigned int index, short int value)
{
   mutex->lock();
   bool changed = data.BatterySetup[index] != value;
   data.BatterySetup[index] = value;
   mutex->unlock();
   if (changed) emit BatterySetupChanged(index,value);
}

short int OsdSettings::getSpeedSetup(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.SpeedSetup[index];
}
void OsdSettings::setSpeedSetup(unsigned int index, short int value)
{
   mutex->lock();
   bool changed = data.SpeedSetup[index] != value;
   data.SpeedSetup[index] = value;
   mutex->unlock();
   if (changed) emit SpeedSetupChanged(index,value);
}

short int OsdSettings::getAltitudeSetup(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.AltitudeSetup[index];
}
void OsdSettings::setAltitudeSetup(unsigned int index, short int value)
{
   mutex->lock();
   bool changed = data.AltitudeSetup[index] != value;
   data.AltitudeSetup[index] = value;
   mutex->unlock();
   if (changed) emit AltitudeSetupChanged(index,value);
}

short int OsdSettings::getHeadingSetup(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.HeadingSetup[index];
}
void OsdSettings::setHeadingSetup(unsigned int index, short int value)
{
   mutex->lock();
   bool changed = data.HeadingSetup[index] != value;
   data.HeadingSetup[index] = value;
   mutex->unlock();
   if (changed) emit HeadingSetupChanged(index,value);
}

unsigned char OsdSettings::getAttitude() const
{
   QMutexLocker locker(mutex);
   return data.Attitude;
}
void OsdSettings::setAttitude(unsigned char value)
{
   mutex->lock();
   bool changed = data.Attitude != value;
   data.Attitude = value;
   mutex->unlock();
   if (changed) emit AttitudeChanged(value);
}

unsigned char OsdSettings::getTime() const
{
   QMutexLocker locker(mutex);
   return data.Time;
}
void OsdSettings::setTime(unsigned char value)
{
   mutex->lock();
   bool changed = data.Time != value;
   data.Time = value;
   mutex->unlock();
   if (changed) emit TimeChanged(value);
}

unsigned char OsdSettings::getBattery() const
{
   QMutexLocker locker(mutex);
   return data.Battery;
}
void OsdSettings::setBattery(unsigned char value)
{
   mutex->lock();
   bool changed = data.Battery != value;
   data.Battery = value;
   mutex->unlock();
   if (changed) emit BatteryChanged(value);
}

unsigned char OsdSettings::getSpeed() const
{
   QMutexLocker locker(mutex);
   return data.Speed;
}
void OsdSettings::setSpeed(unsigned char value)
{
   mutex->lock();
   bool changed = data.Speed != value;
   data.Speed = value;
   mutex->unlock();
   if (changed) emit SpeedChanged(value);
}

unsigned char OsdSettings::getAltitude() const
{
   QMutexLocker locker(mutex);
   return data.Altitude;
}
void OsdSettings::setAltitude(unsigned char value)
{
   mutex->lock();
   bool changed = data.Altitude != value;
   data.Altitude = value;
   mutex->unlock();
   if (changed) emit AltitudeChanged(value);
}

unsigned char OsdSettings::getHeading() const
{
   QMutexLocker locker(mutex);
   return data.Heading;
}
void OsdSettings::setHeading(unsigned char value)
{
   mutex->lock();
   bool changed = data.Heading != value;
   data.Heading = value;
   mutex->unlock();
   if (changed) emit HeadingChanged(value);
}

unsigned char OsdSettings::getScreen() const
{
   QMutexLocker locker(mutex);
   return data.Screen;
}
void OsdSettings::setScreen(unsigned char value)
{
   mutex->lock();
   bool changed = data.Screen != value;
   data.Screen = value;
   mutex->unlock();
   if (changed) emit ScreenChanged(value);
}

unsigned char OsdSettings::getWhite() const
{
   QMutexLocker locker(mutex);
   return data.White;
}
void OsdSettings::setWhite(unsigned char value)
{
   mutex->lock();
   bool changed = data.White != value;
   data.White = value;
   mutex->unlock();
   if (changed) emit WhiteChanged(value);
}

unsigned char OsdSettings::getBlack() const
{
   QMutexLocker locker(mutex);
   return data.Black;
}
void OsdSettings::setBlack(unsigned char value)
{
   mutex->lock();
   bool changed = data.Black != value;
   data.Black = value;
   mutex->unlock();
   if (changed) emit BlackChanged(value);
}

unsigned char OsdSettings::getAltitudeSource() const
{
   QMutexLocker locker(mutex);
   return data.AltitudeSource;
}
void OsdSettings::setAltitudeSource(unsigned char value)
{
   mutex->lock();
   bool changed = data.AltitudeSource != value;
   data.AltitudeSource = value;
   mutex->unlock();
   if (changed) emit AltitudeSourceChanged(value);
}

*/
