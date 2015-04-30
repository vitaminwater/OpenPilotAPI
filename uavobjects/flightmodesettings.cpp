/**
 ******************************************************************************
 *
 * @file       flightmodesettings.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: flightmodesettings.xml.
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

#include "flightmodesettings.h"

int FlightModeSettings::numInstances = 0;

/**
 * Constructor
 */
FlightModeSettings::FlightModeSettings(UAVObjManager* manager): UAVObject(manager, 0xBC5AE17C, "FlightModeSettings", "Settings to control arming and flight mode", "Control", 1, 1, ACCESS_READWRITE, ACCESS_READWRITE, 1, 1, UPDATEMODE_ONCHANGE, UPDATEMODE_ONCHANGE, 0, 0, 0)
{

}

int FlightModeSettings::UAVObjSetDataField(const char *dataIn, const std::string fieldID){
	if(fieldID == "ReturnToBaseAltitudeOffset") {
		memset( &(dataFields.ReturnToBaseAltitudeOffset), 0, sizeof(dataFields.ReturnToBaseAltitudeOffset));
		memcpy( &(dataFields.ReturnToBaseAltitudeOffset), dataIn, sizeof(dataFields.ReturnToBaseAltitudeOffset));
	} else if(fieldID == "LandingVelocity") {
		memset( &(dataFields.LandingVelocity), 0, sizeof(dataFields.LandingVelocity));
		memcpy( &(dataFields.LandingVelocity), dataIn, sizeof(dataFields.LandingVelocity));
	} else if(fieldID == "PositionHoldOffset") {
		memset( &(dataFields.PositionHoldOffset), 0, sizeof(dataFields.PositionHoldOffset));
		memcpy( &(dataFields.PositionHoldOffset), dataIn, sizeof(dataFields.PositionHoldOffset));
	} else if(fieldID == "VarioControlLowPassAlpha") {
		memset( &(dataFields.VarioControlLowPassAlpha), 0, sizeof(dataFields.VarioControlLowPassAlpha));
		memcpy( &(dataFields.VarioControlLowPassAlpha), dataIn, sizeof(dataFields.VarioControlLowPassAlpha));
	} else if(fieldID == "ArmedTimeout") {
		memset( &(dataFields.ArmedTimeout), 0, sizeof(dataFields.ArmedTimeout));
		memcpy( &(dataFields.ArmedTimeout), dataIn, sizeof(dataFields.ArmedTimeout));
	} else if(fieldID == "ArmingSequenceTime") {
		memset( &(dataFields.ArmingSequenceTime), 0, sizeof(dataFields.ArmingSequenceTime));
		memcpy( &(dataFields.ArmingSequenceTime), dataIn, sizeof(dataFields.ArmingSequenceTime));
	} else if(fieldID == "DisarmingSequenceTime") {
		memset( &(dataFields.DisarmingSequenceTime), 0, sizeof(dataFields.DisarmingSequenceTime));
		memcpy( &(dataFields.DisarmingSequenceTime), dataIn, sizeof(dataFields.DisarmingSequenceTime));
	} else if(fieldID == "Arming") {
		memset( &(dataFields.Arming), 0, sizeof(dataFields.Arming));
		memcpy( &(dataFields.Arming), dataIn, sizeof(dataFields.Arming));
	} else if(fieldID == "Stabilization1Settings") {
		memset( &(dataFields.Stabilization1Settings), 0, sizeof(dataFields.Stabilization1Settings));
		memcpy( &(dataFields.Stabilization1Settings), dataIn, sizeof(dataFields.Stabilization1Settings));
	} else if(fieldID == "Stabilization2Settings") {
		memset( &(dataFields.Stabilization2Settings), 0, sizeof(dataFields.Stabilization2Settings));
		memcpy( &(dataFields.Stabilization2Settings), dataIn, sizeof(dataFields.Stabilization2Settings));
	} else if(fieldID == "Stabilization3Settings") {
		memset( &(dataFields.Stabilization3Settings), 0, sizeof(dataFields.Stabilization3Settings));
		memcpy( &(dataFields.Stabilization3Settings), dataIn, sizeof(dataFields.Stabilization3Settings));
	} else if(fieldID == "Stabilization4Settings") {
		memset( &(dataFields.Stabilization4Settings), 0, sizeof(dataFields.Stabilization4Settings));
		memcpy( &(dataFields.Stabilization4Settings), dataIn, sizeof(dataFields.Stabilization4Settings));
	} else if(fieldID == "Stabilization5Settings") {
		memset( &(dataFields.Stabilization5Settings), 0, sizeof(dataFields.Stabilization5Settings));
		memcpy( &(dataFields.Stabilization5Settings), dataIn, sizeof(dataFields.Stabilization5Settings));
	} else if(fieldID == "Stabilization6Settings") {
		memset( &(dataFields.Stabilization6Settings), 0, sizeof(dataFields.Stabilization6Settings));
		memcpy( &(dataFields.Stabilization6Settings), dataIn, sizeof(dataFields.Stabilization6Settings));
	} else if(fieldID == "FlightModePosition") {
		memset( &(dataFields.FlightModePosition), 0, sizeof(dataFields.FlightModePosition));
		memcpy( &(dataFields.FlightModePosition), dataIn, sizeof(dataFields.FlightModePosition));
	} else if(fieldID == "DisableSanityChecks") {
		memset( &(dataFields.DisableSanityChecks), 0, sizeof(dataFields.DisableSanityChecks));
		memcpy( &(dataFields.DisableSanityChecks), dataIn, sizeof(dataFields.DisableSanityChecks));
	}
	return 0;
}

int FlightModeSettings::UAVObjGetDataField(char *dataOut, const std::string fieldID){
	if(fieldID == "ReturnToBaseAltitudeOffset") {
		memcpy( dataOut, &(dataFields.ReturnToBaseAltitudeOffset), sizeof(dataFields.ReturnToBaseAltitudeOffset));
	} else if(fieldID == "LandingVelocity") {
		memcpy( dataOut, &(dataFields.LandingVelocity), sizeof(dataFields.LandingVelocity));
	} else if(fieldID == "PositionHoldOffset") {
		memcpy( dataOut, &(dataFields.PositionHoldOffset), sizeof(dataFields.PositionHoldOffset));
	} else if(fieldID == "VarioControlLowPassAlpha") {
		memcpy( dataOut, &(dataFields.VarioControlLowPassAlpha), sizeof(dataFields.VarioControlLowPassAlpha));
	} else if(fieldID == "ArmedTimeout") {
		memcpy( dataOut, &(dataFields.ArmedTimeout), sizeof(dataFields.ArmedTimeout));
	} else if(fieldID == "ArmingSequenceTime") {
		memcpy( dataOut, &(dataFields.ArmingSequenceTime), sizeof(dataFields.ArmingSequenceTime));
	} else if(fieldID == "DisarmingSequenceTime") {
		memcpy( dataOut, &(dataFields.DisarmingSequenceTime), sizeof(dataFields.DisarmingSequenceTime));
	} else if(fieldID == "Arming") {
		memcpy( dataOut, &(dataFields.Arming), sizeof(dataFields.Arming));
	} else if(fieldID == "Stabilization1Settings") {
		memcpy( dataOut, &(dataFields.Stabilization1Settings), sizeof(dataFields.Stabilization1Settings));
	} else if(fieldID == "Stabilization2Settings") {
		memcpy( dataOut, &(dataFields.Stabilization2Settings), sizeof(dataFields.Stabilization2Settings));
	} else if(fieldID == "Stabilization3Settings") {
		memcpy( dataOut, &(dataFields.Stabilization3Settings), sizeof(dataFields.Stabilization3Settings));
	} else if(fieldID == "Stabilization4Settings") {
		memcpy( dataOut, &(dataFields.Stabilization4Settings), sizeof(dataFields.Stabilization4Settings));
	} else if(fieldID == "Stabilization5Settings") {
		memcpy( dataOut, &(dataFields.Stabilization5Settings), sizeof(dataFields.Stabilization5Settings));
	} else if(fieldID == "Stabilization6Settings") {
		memcpy( dataOut, &(dataFields.Stabilization6Settings), sizeof(dataFields.Stabilization6Settings));
	} else if(fieldID == "FlightModePosition") {
		memcpy( dataOut, &(dataFields.FlightModePosition), sizeof(dataFields.FlightModePosition));
	} else if(fieldID == "DisableSanityChecks") {
		memcpy( dataOut, &(dataFields.DisableSanityChecks), sizeof(dataFields.DisableSanityChecks));
	}
	return 0;
}

int FlightModeSettings::UAVObjUnpack(const unsigned char *dataIn){
	memcpy(&dataFields, dataIn, NUMBYTES);
	return 0;
}

int FlightModeSettings::UAVObjPack(unsigned char *dataOut) {
	memcpy(dataOut, &dataFields, NUMBYTES);
	return 0;
}

unsigned short FlightModeSettings::UAVObjGetInstance() const {
	return instance;
}
unsigned short FlightModeSettings::UAVObjGetNumBytes() const {
	return sizeof(dataFields);
}
unsigned short FlightModeSettings::UAVObjGetNumInstances() const {
	return numInstances;
}

std::string FlightModeSettings::prettyPrint() {
	std::stringstream ss;
	ss << "\nPrinting object: flightmodesettings" << std::endl;
	ss << "\tReturnToBaseAltitudeOffset: " << dataFields.ReturnToBaseAltitudeOffset << std::endl;
	ss << "\tLandingVelocity: " << dataFields.LandingVelocity << std::endl;
	ss << "\tPositionHoldOffset: " << dataFields.PositionHoldOffset << std::endl;
	ss << "\tVarioControlLowPassAlpha: " << dataFields.VarioControlLowPassAlpha << std::endl;
	ss << "\tArmedTimeout: " << dataFields.ArmedTimeout << std::endl;
	ss << "\tArmingSequenceTime: " << dataFields.ArmingSequenceTime << std::endl;
	ss << "\tDisarmingSequenceTime: " << dataFields.DisarmingSequenceTime << std::endl;
	ss << "\tArming: " << dataFields.Arming << std::endl;
	ss << "\tStabilization1Settings: " << dataFields.Stabilization1Settings << std::endl;
	ss << "\tStabilization2Settings: " << dataFields.Stabilization2Settings << std::endl;
	ss << "\tStabilization3Settings: " << dataFields.Stabilization3Settings << std::endl;
	ss << "\tStabilization4Settings: " << dataFields.Stabilization4Settings << std::endl;
	ss << "\tStabilization5Settings: " << dataFields.Stabilization5Settings << std::endl;
	ss << "\tStabilization6Settings: " << dataFields.Stabilization6Settings << std::endl;
	ss << "\tFlightModePosition: " << dataFields.FlightModePosition << std::endl;
	ss << "\tDisableSanityChecks: " << dataFields.DisableSanityChecks << std::endl;

	return ss.str();
}

/*/***/
/* * Initialize object fields with the default values.*/
/* * If a default value is not specified the object fields*/
/* * will be initialized to zero.*/
/* */
/*void FlightModeSettings::setDefaultFieldValues()*/
/*{*/
/*    data.ReturnToBaseAltitudeOffset = 10;
    data.LandingVelocity = 0.4;
    data.PositionHoldOffset[0] = 30;
    data.PositionHoldOffset[1] = 15;
    data.VarioControlLowPassAlpha = 0.98;
    data.ArmedTimeout = 30000;
    data.ArmingSequenceTime = 1000;
    data.DisarmingSequenceTime = 1000;
    data.Arming = 0;
    data.Stabilization1Settings[0] = 2;
    data.Stabilization1Settings[1] = 2;
    data.Stabilization1Settings[2] = 3;
    data.Stabilization1Settings[3] = 0;
    data.Stabilization2Settings[0] = 2;
    data.Stabilization2Settings[1] = 2;
    data.Stabilization2Settings[2] = 1;
    data.Stabilization2Settings[3] = 0;
    data.Stabilization3Settings[0] = 1;
    data.Stabilization3Settings[1] = 1;
    data.Stabilization3Settings[2] = 1;
    data.Stabilization3Settings[3] = 0;
    data.Stabilization4Settings[0] = 2;
    data.Stabilization4Settings[1] = 2;
    data.Stabilization4Settings[2] = 3;
    data.Stabilization4Settings[3] = 10;
    data.Stabilization5Settings[0] = 2;
    data.Stabilization5Settings[1] = 2;
    data.Stabilization5Settings[2] = 1;
    data.Stabilization5Settings[3] = 10;
    data.Stabilization6Settings[0] = 1;
    data.Stabilization6Settings[1] = 1;
    data.Stabilization6Settings[2] = 1;
    data.Stabilization6Settings[3] = 0;
    data.FlightModePosition[0] = 1;
    data.FlightModePosition[1] = 2;
    data.FlightModePosition[2] = 3;
    data.FlightModePosition[3] = 4;
    data.FlightModePosition[4] = 5;
    data.FlightModePosition[5] = 6;
    data.DisableSanityChecks = 0;
*/
/*}*/

/*/***/
/* * Get the object data fields*/
/* */
/*FlightModeSettings::DataFields FlightModeSettings::getData()*/
/*{*/
/*    QMutexLocker locker(mutex);*/
/*    return data;*/
/*}*/

/*/***/
/* * Set the object data fields*/
/* */
/*void FlightModeSettings::setData(const DataFields& data)*/
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

/*void FlightModeSettings::emitNotifications()*/
/*{*/
/*            //if (data.ReturnToBaseAltitudeOffset != oldData.ReturnToBaseAltitudeOffset)
            emit ReturnToBaseAltitudeOffsetChanged(data.ReturnToBaseAltitudeOffset);
        //if (data.LandingVelocity != oldData.LandingVelocity)
            emit LandingVelocityChanged(data.LandingVelocity);
        //if (data.VarioControlLowPassAlpha != oldData.VarioControlLowPassAlpha)
            emit VarioControlLowPassAlphaChanged(data.VarioControlLowPassAlpha);
        //if (data.ArmedTimeout != oldData.ArmedTimeout)
            emit ArmedTimeoutChanged(data.ArmedTimeout);
        //if (data.ArmingSequenceTime != oldData.ArmingSequenceTime)
            emit ArmingSequenceTimeChanged(data.ArmingSequenceTime);
        //if (data.DisarmingSequenceTime != oldData.DisarmingSequenceTime)
            emit DisarmingSequenceTimeChanged(data.DisarmingSequenceTime);
        //if (data.Arming != oldData.Arming)
            emit ArmingChanged(data.Arming);
        //if (data.DisableSanityChecks != oldData.DisableSanityChecks)
            emit DisableSanityChecksChanged(data.DisableSanityChecks);
*/
/*}*/

/*/***/
/* * Create a clone of this object, a new instance ID must be specified.*/
/* * Do not use this function directly to create new instances, the*/
/* * UAVObjectManager should be used instead.*/
/* */
/*UAVDataObject *FlightModeSettings::clone(unsigned int instID)*/
/*{*/
/*    FlightModeSettings *obj = new FlightModeSettings();*/
/*    obj->initialize(instID, this->getMetaObject());*/
/*    return obj;*/
/*}*/

/*/***/
/* * Create a clone of this object only to be used to retrieve defaults*/
/* */
/*UAVDataObject *FlightModeSettings::dirtyClone()*/
/*{*/
/*    FlightModeSettings *obj = new FlightModeSettings();*/
/*    return obj;*/
/*}*/

/*/***/
/* * Static function to retrieve an instance of the object.*/
/* */
/*FlightModeSettings *FlightModeSettings::GetInstance(UAVObjectManager *objMngr, unsigned int instID)*/
/*{*/
/*    return dynamic_cast<FlightModeSettings *>(objMngr->getObject(FlightModeSettings::OBJID, instID));*/
/*}*/

/*float FlightModeSettings::getReturnToBaseAltitudeOffset() const
{
   QMutexLocker locker(mutex);
   return data.ReturnToBaseAltitudeOffset;
}
void FlightModeSettings::setReturnToBaseAltitudeOffset(float value)
{
   mutex->lock();
   bool changed = data.ReturnToBaseAltitudeOffset != value;
   data.ReturnToBaseAltitudeOffset = value;
   mutex->unlock();
   if (changed) emit ReturnToBaseAltitudeOffsetChanged(value);
}

float FlightModeSettings::getLandingVelocity() const
{
   QMutexLocker locker(mutex);
   return data.LandingVelocity;
}
void FlightModeSettings::setLandingVelocity(float value)
{
   mutex->lock();
   bool changed = data.LandingVelocity != value;
   data.LandingVelocity = value;
   mutex->unlock();
   if (changed) emit LandingVelocityChanged(value);
}

float FlightModeSettings::getPositionHoldOffset(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.PositionHoldOffset[index];
}
void FlightModeSettings::setPositionHoldOffset(unsigned int index, float value)
{
   mutex->lock();
   bool changed = data.PositionHoldOffset[index] != value;
   data.PositionHoldOffset[index] = value;
   mutex->unlock();
   if (changed) emit PositionHoldOffsetChanged(index,value);
}

float FlightModeSettings::getVarioControlLowPassAlpha() const
{
   QMutexLocker locker(mutex);
   return data.VarioControlLowPassAlpha;
}
void FlightModeSettings::setVarioControlLowPassAlpha(float value)
{
   mutex->lock();
   bool changed = data.VarioControlLowPassAlpha != value;
   data.VarioControlLowPassAlpha = value;
   mutex->unlock();
   if (changed) emit VarioControlLowPassAlphaChanged(value);
}

unsigned short int FlightModeSettings::getArmedTimeout() const
{
   QMutexLocker locker(mutex);
   return data.ArmedTimeout;
}
void FlightModeSettings::setArmedTimeout(unsigned short int value)
{
   mutex->lock();
   bool changed = data.ArmedTimeout != value;
   data.ArmedTimeout = value;
   mutex->unlock();
   if (changed) emit ArmedTimeoutChanged(value);
}

unsigned short int FlightModeSettings::getArmingSequenceTime() const
{
   QMutexLocker locker(mutex);
   return data.ArmingSequenceTime;
}
void FlightModeSettings::setArmingSequenceTime(unsigned short int value)
{
   mutex->lock();
   bool changed = data.ArmingSequenceTime != value;
   data.ArmingSequenceTime = value;
   mutex->unlock();
   if (changed) emit ArmingSequenceTimeChanged(value);
}

unsigned short int FlightModeSettings::getDisarmingSequenceTime() const
{
   QMutexLocker locker(mutex);
   return data.DisarmingSequenceTime;
}
void FlightModeSettings::setDisarmingSequenceTime(unsigned short int value)
{
   mutex->lock();
   bool changed = data.DisarmingSequenceTime != value;
   data.DisarmingSequenceTime = value;
   mutex->unlock();
   if (changed) emit DisarmingSequenceTimeChanged(value);
}

unsigned char FlightModeSettings::getArming() const
{
   QMutexLocker locker(mutex);
   return data.Arming;
}
void FlightModeSettings::setArming(unsigned char value)
{
   mutex->lock();
   bool changed = data.Arming != value;
   data.Arming = value;
   mutex->unlock();
   if (changed) emit ArmingChanged(value);
}

unsigned char FlightModeSettings::getStabilization1Settings(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.Stabilization1Settings[index];
}
void FlightModeSettings::setStabilization1Settings(unsigned int index, unsigned char value)
{
   mutex->lock();
   bool changed = data.Stabilization1Settings[index] != value;
   data.Stabilization1Settings[index] = value;
   mutex->unlock();
   if (changed) emit Stabilization1SettingsChanged(index,value);
}

unsigned char FlightModeSettings::getStabilization2Settings(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.Stabilization2Settings[index];
}
void FlightModeSettings::setStabilization2Settings(unsigned int index, unsigned char value)
{
   mutex->lock();
   bool changed = data.Stabilization2Settings[index] != value;
   data.Stabilization2Settings[index] = value;
   mutex->unlock();
   if (changed) emit Stabilization2SettingsChanged(index,value);
}

unsigned char FlightModeSettings::getStabilization3Settings(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.Stabilization3Settings[index];
}
void FlightModeSettings::setStabilization3Settings(unsigned int index, unsigned char value)
{
   mutex->lock();
   bool changed = data.Stabilization3Settings[index] != value;
   data.Stabilization3Settings[index] = value;
   mutex->unlock();
   if (changed) emit Stabilization3SettingsChanged(index,value);
}

unsigned char FlightModeSettings::getStabilization4Settings(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.Stabilization4Settings[index];
}
void FlightModeSettings::setStabilization4Settings(unsigned int index, unsigned char value)
{
   mutex->lock();
   bool changed = data.Stabilization4Settings[index] != value;
   data.Stabilization4Settings[index] = value;
   mutex->unlock();
   if (changed) emit Stabilization4SettingsChanged(index,value);
}

unsigned char FlightModeSettings::getStabilization5Settings(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.Stabilization5Settings[index];
}
void FlightModeSettings::setStabilization5Settings(unsigned int index, unsigned char value)
{
   mutex->lock();
   bool changed = data.Stabilization5Settings[index] != value;
   data.Stabilization5Settings[index] = value;
   mutex->unlock();
   if (changed) emit Stabilization5SettingsChanged(index,value);
}

unsigned char FlightModeSettings::getStabilization6Settings(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.Stabilization6Settings[index];
}
void FlightModeSettings::setStabilization6Settings(unsigned int index, unsigned char value)
{
   mutex->lock();
   bool changed = data.Stabilization6Settings[index] != value;
   data.Stabilization6Settings[index] = value;
   mutex->unlock();
   if (changed) emit Stabilization6SettingsChanged(index,value);
}

unsigned char FlightModeSettings::getFlightModePosition(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.FlightModePosition[index];
}
void FlightModeSettings::setFlightModePosition(unsigned int index, unsigned char value)
{
   mutex->lock();
   bool changed = data.FlightModePosition[index] != value;
   data.FlightModePosition[index] = value;
   mutex->unlock();
   if (changed) emit FlightModePositionChanged(index,value);
}

unsigned char FlightModeSettings::getDisableSanityChecks() const
{
   QMutexLocker locker(mutex);
   return data.DisableSanityChecks;
}
void FlightModeSettings::setDisableSanityChecks(unsigned char value)
{
   mutex->lock();
   bool changed = data.DisableSanityChecks != value;
   data.DisableSanityChecks = value;
   mutex->unlock();
   if (changed) emit DisableSanityChecksChanged(value);
}

*/
