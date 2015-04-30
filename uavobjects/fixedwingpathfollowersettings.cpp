/**
 ******************************************************************************
 *
 * @file       fixedwingpathfollowersettings.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: fixedwingpathfollowersettings.xml.
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

#include "fixedwingpathfollowersettings.h"

int FixedWingPathFollowerSettings::numInstances = 0;

/**
 * Constructor
 */
FixedWingPathFollowerSettings::FixedWingPathFollowerSettings(UAVObjManager* manager): UAVObject(manager, 0x38AD8B0A, "FixedWingPathFollowerSettings", "Settings for the @ref FixedWingPathFollowerModule", "Control", 1, 1, ACCESS_READWRITE, ACCESS_READWRITE, 1, 1, UPDATEMODE_ONCHANGE, UPDATEMODE_ONCHANGE, 0, 0, 0)
{

}

int FixedWingPathFollowerSettings::UAVObjSetDataField(const char *dataIn, const std::string fieldID){
	if(fieldID == "HorizontalVelMax") {
		memset( &(dataFields.HorizontalVelMax), 0, sizeof(dataFields.HorizontalVelMax));
		memcpy( &(dataFields.HorizontalVelMax), dataIn, sizeof(dataFields.HorizontalVelMax));
	} else if(fieldID == "HorizontalVelMin") {
		memset( &(dataFields.HorizontalVelMin), 0, sizeof(dataFields.HorizontalVelMin));
		memcpy( &(dataFields.HorizontalVelMin), dataIn, sizeof(dataFields.HorizontalVelMin));
	} else if(fieldID == "VerticalVelMax") {
		memset( &(dataFields.VerticalVelMax), 0, sizeof(dataFields.VerticalVelMax));
		memcpy( &(dataFields.VerticalVelMax), dataIn, sizeof(dataFields.VerticalVelMax));
	} else if(fieldID == "CourseFeedForward") {
		memset( &(dataFields.CourseFeedForward), 0, sizeof(dataFields.CourseFeedForward));
		memcpy( &(dataFields.CourseFeedForward), dataIn, sizeof(dataFields.CourseFeedForward));
	} else if(fieldID == "ReverseCourseOverlap") {
		memset( &(dataFields.ReverseCourseOverlap), 0, sizeof(dataFields.ReverseCourseOverlap));
		memcpy( &(dataFields.ReverseCourseOverlap), dataIn, sizeof(dataFields.ReverseCourseOverlap));
	} else if(fieldID == "HorizontalPosP") {
		memset( &(dataFields.HorizontalPosP), 0, sizeof(dataFields.HorizontalPosP));
		memcpy( &(dataFields.HorizontalPosP), dataIn, sizeof(dataFields.HorizontalPosP));
	} else if(fieldID == "VerticalPosP") {
		memset( &(dataFields.VerticalPosP), 0, sizeof(dataFields.VerticalPosP));
		memcpy( &(dataFields.VerticalPosP), dataIn, sizeof(dataFields.VerticalPosP));
	} else if(fieldID == "CoursePI") {
		memset( &(dataFields.CoursePI), 0, sizeof(dataFields.CoursePI));
		memcpy( &(dataFields.CoursePI), dataIn, sizeof(dataFields.CoursePI));
	} else if(fieldID == "SpeedPI") {
		memset( &(dataFields.SpeedPI), 0, sizeof(dataFields.SpeedPI));
		memcpy( &(dataFields.SpeedPI), dataIn, sizeof(dataFields.SpeedPI));
	} else if(fieldID == "VerticalToPitchCrossFeed") {
		memset( &(dataFields.VerticalToPitchCrossFeed), 0, sizeof(dataFields.VerticalToPitchCrossFeed));
		memcpy( &(dataFields.VerticalToPitchCrossFeed), dataIn, sizeof(dataFields.VerticalToPitchCrossFeed));
	} else if(fieldID == "AirspeedToPowerCrossFeed") {
		memset( &(dataFields.AirspeedToPowerCrossFeed), 0, sizeof(dataFields.AirspeedToPowerCrossFeed));
		memcpy( &(dataFields.AirspeedToPowerCrossFeed), dataIn, sizeof(dataFields.AirspeedToPowerCrossFeed));
	} else if(fieldID == "PowerPI") {
		memset( &(dataFields.PowerPI), 0, sizeof(dataFields.PowerPI));
		memcpy( &(dataFields.PowerPI), dataIn, sizeof(dataFields.PowerPI));
	} else if(fieldID == "RollLimit") {
		memset( &(dataFields.RollLimit), 0, sizeof(dataFields.RollLimit));
		memcpy( &(dataFields.RollLimit), dataIn, sizeof(dataFields.RollLimit));
	} else if(fieldID == "PitchLimit") {
		memset( &(dataFields.PitchLimit), 0, sizeof(dataFields.PitchLimit));
		memcpy( &(dataFields.PitchLimit), dataIn, sizeof(dataFields.PitchLimit));
	} else if(fieldID == "ThrustLimit") {
		memset( &(dataFields.ThrustLimit), 0, sizeof(dataFields.ThrustLimit));
		memcpy( &(dataFields.ThrustLimit), dataIn, sizeof(dataFields.ThrustLimit));
	} else if(fieldID == "Safetymargins") {
		memset( &(dataFields.Safetymargins), 0, sizeof(dataFields.Safetymargins));
		memcpy( &(dataFields.Safetymargins), dataIn, sizeof(dataFields.Safetymargins));
	} else if(fieldID == "UpdatePeriod") {
		memset( &(dataFields.UpdatePeriod), 0, sizeof(dataFields.UpdatePeriod));
		memcpy( &(dataFields.UpdatePeriod), dataIn, sizeof(dataFields.UpdatePeriod));
	}
	return 0;
}

int FixedWingPathFollowerSettings::UAVObjGetDataField(char *dataOut, const std::string fieldID){
	if(fieldID == "HorizontalVelMax") {
		memcpy( dataOut, &(dataFields.HorizontalVelMax), sizeof(dataFields.HorizontalVelMax));
	} else if(fieldID == "HorizontalVelMin") {
		memcpy( dataOut, &(dataFields.HorizontalVelMin), sizeof(dataFields.HorizontalVelMin));
	} else if(fieldID == "VerticalVelMax") {
		memcpy( dataOut, &(dataFields.VerticalVelMax), sizeof(dataFields.VerticalVelMax));
	} else if(fieldID == "CourseFeedForward") {
		memcpy( dataOut, &(dataFields.CourseFeedForward), sizeof(dataFields.CourseFeedForward));
	} else if(fieldID == "ReverseCourseOverlap") {
		memcpy( dataOut, &(dataFields.ReverseCourseOverlap), sizeof(dataFields.ReverseCourseOverlap));
	} else if(fieldID == "HorizontalPosP") {
		memcpy( dataOut, &(dataFields.HorizontalPosP), sizeof(dataFields.HorizontalPosP));
	} else if(fieldID == "VerticalPosP") {
		memcpy( dataOut, &(dataFields.VerticalPosP), sizeof(dataFields.VerticalPosP));
	} else if(fieldID == "CoursePI") {
		memcpy( dataOut, &(dataFields.CoursePI), sizeof(dataFields.CoursePI));
	} else if(fieldID == "SpeedPI") {
		memcpy( dataOut, &(dataFields.SpeedPI), sizeof(dataFields.SpeedPI));
	} else if(fieldID == "VerticalToPitchCrossFeed") {
		memcpy( dataOut, &(dataFields.VerticalToPitchCrossFeed), sizeof(dataFields.VerticalToPitchCrossFeed));
	} else if(fieldID == "AirspeedToPowerCrossFeed") {
		memcpy( dataOut, &(dataFields.AirspeedToPowerCrossFeed), sizeof(dataFields.AirspeedToPowerCrossFeed));
	} else if(fieldID == "PowerPI") {
		memcpy( dataOut, &(dataFields.PowerPI), sizeof(dataFields.PowerPI));
	} else if(fieldID == "RollLimit") {
		memcpy( dataOut, &(dataFields.RollLimit), sizeof(dataFields.RollLimit));
	} else if(fieldID == "PitchLimit") {
		memcpy( dataOut, &(dataFields.PitchLimit), sizeof(dataFields.PitchLimit));
	} else if(fieldID == "ThrustLimit") {
		memcpy( dataOut, &(dataFields.ThrustLimit), sizeof(dataFields.ThrustLimit));
	} else if(fieldID == "Safetymargins") {
		memcpy( dataOut, &(dataFields.Safetymargins), sizeof(dataFields.Safetymargins));
	} else if(fieldID == "UpdatePeriod") {
		memcpy( dataOut, &(dataFields.UpdatePeriod), sizeof(dataFields.UpdatePeriod));
	}
	return 0;
}

int FixedWingPathFollowerSettings::UAVObjUnpack(const unsigned char *dataIn){
	memcpy(&dataFields, dataIn, NUMBYTES);
	return 0;
}

int FixedWingPathFollowerSettings::UAVObjPack(unsigned char *dataOut) {
	memcpy(dataOut, &dataFields, NUMBYTES);
	return 0;
}

unsigned short FixedWingPathFollowerSettings::UAVObjGetInstance() const {
	return instance;
}
unsigned short FixedWingPathFollowerSettings::UAVObjGetNumBytes() const {
	return sizeof(dataFields);
}
unsigned short FixedWingPathFollowerSettings::UAVObjGetNumInstances() const {
	return numInstances;
}

std::string FixedWingPathFollowerSettings::prettyPrint() {
	std::stringstream ss;
	ss << "\nPrinting object: fixedwingpathfollowersettings" << std::endl;
	ss << "\tHorizontalVelMax: " << dataFields.HorizontalVelMax << std::endl;
	ss << "\tHorizontalVelMin: " << dataFields.HorizontalVelMin << std::endl;
	ss << "\tVerticalVelMax: " << dataFields.VerticalVelMax << std::endl;
	ss << "\tCourseFeedForward: " << dataFields.CourseFeedForward << std::endl;
	ss << "\tReverseCourseOverlap: " << dataFields.ReverseCourseOverlap << std::endl;
	ss << "\tHorizontalPosP: " << dataFields.HorizontalPosP << std::endl;
	ss << "\tVerticalPosP: " << dataFields.VerticalPosP << std::endl;
	ss << "\tCoursePI: " << dataFields.CoursePI << std::endl;
	ss << "\tSpeedPI: " << dataFields.SpeedPI << std::endl;
	ss << "\tVerticalToPitchCrossFeed: " << dataFields.VerticalToPitchCrossFeed << std::endl;
	ss << "\tAirspeedToPowerCrossFeed: " << dataFields.AirspeedToPowerCrossFeed << std::endl;
	ss << "\tPowerPI: " << dataFields.PowerPI << std::endl;
	ss << "\tRollLimit: " << dataFields.RollLimit << std::endl;
	ss << "\tPitchLimit: " << dataFields.PitchLimit << std::endl;
	ss << "\tThrustLimit: " << dataFields.ThrustLimit << std::endl;
	ss << "\tSafetymargins: " << dataFields.Safetymargins << std::endl;
	ss << "\tUpdatePeriod: " << dataFields.UpdatePeriod << std::endl;

	return ss.str();
}

/*/***/
/* * Initialize object fields with the default values.*/
/* * If a default value is not specified the object fields*/
/* * will be initialized to zero.*/
/* */
/*void FixedWingPathFollowerSettings::setDefaultFieldValues()*/
/*{*/
/*    data.HorizontalVelMax = 20;
    data.HorizontalVelMin = 10;
    data.VerticalVelMax = 10;
    data.CourseFeedForward = 3;
    data.ReverseCourseOverlap = 20;
    data.HorizontalPosP = 0.2;
    data.VerticalPosP = 0.4;
    data.CoursePI[0] = 0.2;
    data.CoursePI[1] = 0;
    data.CoursePI[2] = 0;
    data.SpeedPI[0] = 2.5;
    data.SpeedPI[1] = 0.25;
    data.SpeedPI[2] = 10;
    data.VerticalToPitchCrossFeed[0] = 5;
    data.VerticalToPitchCrossFeed[1] = 10;
    data.AirspeedToPowerCrossFeed[0] = 0.2;
    data.AirspeedToPowerCrossFeed[1] = 1;
    data.PowerPI[0] = 0.01;
    data.PowerPI[1] = 0.05;
    data.PowerPI[2] = 0.5;
    data.RollLimit[0] = -45;
    data.RollLimit[1] = 0;
    data.RollLimit[2] = 45;
    data.PitchLimit[0] = -10;
    data.PitchLimit[1] = 5;
    data.PitchLimit[2] = 20;
    data.ThrustLimit[0] = 0.1;
    data.ThrustLimit[1] = 0.5;
    data.ThrustLimit[2] = 0.9;
    data.Safetymargins[0] = 90;
    data.Safetymargins[1] = 1;
    data.Safetymargins[2] = 0.5;
    data.Safetymargins[3] = 1.5;
    data.Safetymargins[4] = 1;
    data.Safetymargins[5] = 1;
    data.Safetymargins[6] = 0;
    data.Safetymargins[7] = 1;
    data.UpdatePeriod = 100;
*/
/*}*/

/*/***/
/* * Get the object data fields*/
/* */
/*FixedWingPathFollowerSettings::DataFields FixedWingPathFollowerSettings::getData()*/
/*{*/
/*    QMutexLocker locker(mutex);*/
/*    return data;*/
/*}*/

/*/***/
/* * Set the object data fields*/
/* */
/*void FixedWingPathFollowerSettings::setData(const DataFields& data)*/
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

/*void FixedWingPathFollowerSettings::emitNotifications()*/
/*{*/
/*            //if (data.HorizontalVelMax != oldData.HorizontalVelMax)
            emit HorizontalVelMaxChanged(data.HorizontalVelMax);
        //if (data.HorizontalVelMin != oldData.HorizontalVelMin)
            emit HorizontalVelMinChanged(data.HorizontalVelMin);
        //if (data.VerticalVelMax != oldData.VerticalVelMax)
            emit VerticalVelMaxChanged(data.VerticalVelMax);
        //if (data.CourseFeedForward != oldData.CourseFeedForward)
            emit CourseFeedForwardChanged(data.CourseFeedForward);
        //if (data.ReverseCourseOverlap != oldData.ReverseCourseOverlap)
            emit ReverseCourseOverlapChanged(data.ReverseCourseOverlap);
        //if (data.HorizontalPosP != oldData.HorizontalPosP)
            emit HorizontalPosPChanged(data.HorizontalPosP);
        //if (data.VerticalPosP != oldData.VerticalPosP)
            emit VerticalPosPChanged(data.VerticalPosP);
        //if (data.UpdatePeriod != oldData.UpdatePeriod)
            emit UpdatePeriodChanged(data.UpdatePeriod);
*/
/*}*/

/*/***/
/* * Create a clone of this object, a new instance ID must be specified.*/
/* * Do not use this function directly to create new instances, the*/
/* * UAVObjectManager should be used instead.*/
/* */
/*UAVDataObject *FixedWingPathFollowerSettings::clone(unsigned int instID)*/
/*{*/
/*    FixedWingPathFollowerSettings *obj = new FixedWingPathFollowerSettings();*/
/*    obj->initialize(instID, this->getMetaObject());*/
/*    return obj;*/
/*}*/

/*/***/
/* * Create a clone of this object only to be used to retrieve defaults*/
/* */
/*UAVDataObject *FixedWingPathFollowerSettings::dirtyClone()*/
/*{*/
/*    FixedWingPathFollowerSettings *obj = new FixedWingPathFollowerSettings();*/
/*    return obj;*/
/*}*/

/*/***/
/* * Static function to retrieve an instance of the object.*/
/* */
/*FixedWingPathFollowerSettings *FixedWingPathFollowerSettings::GetInstance(UAVObjectManager *objMngr, unsigned int instID)*/
/*{*/
/*    return dynamic_cast<FixedWingPathFollowerSettings *>(objMngr->getObject(FixedWingPathFollowerSettings::OBJID, instID));*/
/*}*/

/*float FixedWingPathFollowerSettings::getHorizontalVelMax() const
{
   QMutexLocker locker(mutex);
   return data.HorizontalVelMax;
}
void FixedWingPathFollowerSettings::setHorizontalVelMax(float value)
{
   mutex->lock();
   bool changed = data.HorizontalVelMax != value;
   data.HorizontalVelMax = value;
   mutex->unlock();
   if (changed) emit HorizontalVelMaxChanged(value);
}

float FixedWingPathFollowerSettings::getHorizontalVelMin() const
{
   QMutexLocker locker(mutex);
   return data.HorizontalVelMin;
}
void FixedWingPathFollowerSettings::setHorizontalVelMin(float value)
{
   mutex->lock();
   bool changed = data.HorizontalVelMin != value;
   data.HorizontalVelMin = value;
   mutex->unlock();
   if (changed) emit HorizontalVelMinChanged(value);
}

float FixedWingPathFollowerSettings::getVerticalVelMax() const
{
   QMutexLocker locker(mutex);
   return data.VerticalVelMax;
}
void FixedWingPathFollowerSettings::setVerticalVelMax(float value)
{
   mutex->lock();
   bool changed = data.VerticalVelMax != value;
   data.VerticalVelMax = value;
   mutex->unlock();
   if (changed) emit VerticalVelMaxChanged(value);
}

float FixedWingPathFollowerSettings::getCourseFeedForward() const
{
   QMutexLocker locker(mutex);
   return data.CourseFeedForward;
}
void FixedWingPathFollowerSettings::setCourseFeedForward(float value)
{
   mutex->lock();
   bool changed = data.CourseFeedForward != value;
   data.CourseFeedForward = value;
   mutex->unlock();
   if (changed) emit CourseFeedForwardChanged(value);
}

float FixedWingPathFollowerSettings::getReverseCourseOverlap() const
{
   QMutexLocker locker(mutex);
   return data.ReverseCourseOverlap;
}
void FixedWingPathFollowerSettings::setReverseCourseOverlap(float value)
{
   mutex->lock();
   bool changed = data.ReverseCourseOverlap != value;
   data.ReverseCourseOverlap = value;
   mutex->unlock();
   if (changed) emit ReverseCourseOverlapChanged(value);
}

float FixedWingPathFollowerSettings::getHorizontalPosP() const
{
   QMutexLocker locker(mutex);
   return data.HorizontalPosP;
}
void FixedWingPathFollowerSettings::setHorizontalPosP(float value)
{
   mutex->lock();
   bool changed = data.HorizontalPosP != value;
   data.HorizontalPosP = value;
   mutex->unlock();
   if (changed) emit HorizontalPosPChanged(value);
}

float FixedWingPathFollowerSettings::getVerticalPosP() const
{
   QMutexLocker locker(mutex);
   return data.VerticalPosP;
}
void FixedWingPathFollowerSettings::setVerticalPosP(float value)
{
   mutex->lock();
   bool changed = data.VerticalPosP != value;
   data.VerticalPosP = value;
   mutex->unlock();
   if (changed) emit VerticalPosPChanged(value);
}

float FixedWingPathFollowerSettings::getCoursePI(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.CoursePI[index];
}
void FixedWingPathFollowerSettings::setCoursePI(unsigned int index, float value)
{
   mutex->lock();
   bool changed = data.CoursePI[index] != value;
   data.CoursePI[index] = value;
   mutex->unlock();
   if (changed) emit CoursePIChanged(index,value);
}

float FixedWingPathFollowerSettings::getSpeedPI(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.SpeedPI[index];
}
void FixedWingPathFollowerSettings::setSpeedPI(unsigned int index, float value)
{
   mutex->lock();
   bool changed = data.SpeedPI[index] != value;
   data.SpeedPI[index] = value;
   mutex->unlock();
   if (changed) emit SpeedPIChanged(index,value);
}

float FixedWingPathFollowerSettings::getVerticalToPitchCrossFeed(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.VerticalToPitchCrossFeed[index];
}
void FixedWingPathFollowerSettings::setVerticalToPitchCrossFeed(unsigned int index, float value)
{
   mutex->lock();
   bool changed = data.VerticalToPitchCrossFeed[index] != value;
   data.VerticalToPitchCrossFeed[index] = value;
   mutex->unlock();
   if (changed) emit VerticalToPitchCrossFeedChanged(index,value);
}

float FixedWingPathFollowerSettings::getAirspeedToPowerCrossFeed(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.AirspeedToPowerCrossFeed[index];
}
void FixedWingPathFollowerSettings::setAirspeedToPowerCrossFeed(unsigned int index, float value)
{
   mutex->lock();
   bool changed = data.AirspeedToPowerCrossFeed[index] != value;
   data.AirspeedToPowerCrossFeed[index] = value;
   mutex->unlock();
   if (changed) emit AirspeedToPowerCrossFeedChanged(index,value);
}

float FixedWingPathFollowerSettings::getPowerPI(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.PowerPI[index];
}
void FixedWingPathFollowerSettings::setPowerPI(unsigned int index, float value)
{
   mutex->lock();
   bool changed = data.PowerPI[index] != value;
   data.PowerPI[index] = value;
   mutex->unlock();
   if (changed) emit PowerPIChanged(index,value);
}

float FixedWingPathFollowerSettings::getRollLimit(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.RollLimit[index];
}
void FixedWingPathFollowerSettings::setRollLimit(unsigned int index, float value)
{
   mutex->lock();
   bool changed = data.RollLimit[index] != value;
   data.RollLimit[index] = value;
   mutex->unlock();
   if (changed) emit RollLimitChanged(index,value);
}

float FixedWingPathFollowerSettings::getPitchLimit(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.PitchLimit[index];
}
void FixedWingPathFollowerSettings::setPitchLimit(unsigned int index, float value)
{
   mutex->lock();
   bool changed = data.PitchLimit[index] != value;
   data.PitchLimit[index] = value;
   mutex->unlock();
   if (changed) emit PitchLimitChanged(index,value);
}

float FixedWingPathFollowerSettings::getThrustLimit(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.ThrustLimit[index];
}
void FixedWingPathFollowerSettings::setThrustLimit(unsigned int index, float value)
{
   mutex->lock();
   bool changed = data.ThrustLimit[index] != value;
   data.ThrustLimit[index] = value;
   mutex->unlock();
   if (changed) emit ThrustLimitChanged(index,value);
}

float FixedWingPathFollowerSettings::getSafetymargins(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.Safetymargins[index];
}
void FixedWingPathFollowerSettings::setSafetymargins(unsigned int index, float value)
{
   mutex->lock();
   bool changed = data.Safetymargins[index] != value;
   data.Safetymargins[index] = value;
   mutex->unlock();
   if (changed) emit SafetymarginsChanged(index,value);
}

int FixedWingPathFollowerSettings::getUpdatePeriod() const
{
   QMutexLocker locker(mutex);
   return data.UpdatePeriod;
}
void FixedWingPathFollowerSettings::setUpdatePeriod(int value)
{
   mutex->lock();
   bool changed = data.UpdatePeriod != value;
   data.UpdatePeriod = value;
   mutex->unlock();
   if (changed) emit UpdatePeriodChanged(value);
}

*/
