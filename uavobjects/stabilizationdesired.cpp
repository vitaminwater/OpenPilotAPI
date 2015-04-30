/**
 ******************************************************************************
 *
 * @file       stabilizationdesired.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: stabilizationdesired.xml.
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

#include "stabilizationdesired.h"

int StabilizationDesired::numInstances = 0;

/**
 * Constructor
 */
StabilizationDesired::StabilizationDesired(UAVObjManager* manager): UAVObject(manager, 0x8A2A042C, "StabilizationDesired", "The desired attitude that @ref StabilizationModule will try and achieve if FlightMode is Stabilized.  Comes from @ref ManaulControlModule.", "Control", 1, 0, ACCESS_READWRITE, ACCESS_READWRITE, 0, 0, UPDATEMODE_PERIODIC, UPDATEMODE_MANUAL, 1000, 0, 0)
{

}

int StabilizationDesired::UAVObjSetDataField(const char *dataIn, const std::string fieldID){
	if(fieldID == "Roll") {
		memset( &(dataFields.Roll), 0, sizeof(dataFields.Roll));
		memcpy( &(dataFields.Roll), dataIn, sizeof(dataFields.Roll));
	} else if(fieldID == "Pitch") {
		memset( &(dataFields.Pitch), 0, sizeof(dataFields.Pitch));
		memcpy( &(dataFields.Pitch), dataIn, sizeof(dataFields.Pitch));
	} else if(fieldID == "Yaw") {
		memset( &(dataFields.Yaw), 0, sizeof(dataFields.Yaw));
		memcpy( &(dataFields.Yaw), dataIn, sizeof(dataFields.Yaw));
	} else if(fieldID == "Thrust") {
		memset( &(dataFields.Thrust), 0, sizeof(dataFields.Thrust));
		memcpy( &(dataFields.Thrust), dataIn, sizeof(dataFields.Thrust));
	} else if(fieldID == "StabilizationMode") {
		memset( &(dataFields.StabilizationMode), 0, sizeof(dataFields.StabilizationMode));
		memcpy( &(dataFields.StabilizationMode), dataIn, sizeof(dataFields.StabilizationMode));
	}
	return 0;
}

int StabilizationDesired::UAVObjGetDataField(char *dataOut, const std::string fieldID){
	if(fieldID == "Roll") {
		memcpy( dataOut, &(dataFields.Roll), sizeof(dataFields.Roll));
	} else if(fieldID == "Pitch") {
		memcpy( dataOut, &(dataFields.Pitch), sizeof(dataFields.Pitch));
	} else if(fieldID == "Yaw") {
		memcpy( dataOut, &(dataFields.Yaw), sizeof(dataFields.Yaw));
	} else if(fieldID == "Thrust") {
		memcpy( dataOut, &(dataFields.Thrust), sizeof(dataFields.Thrust));
	} else if(fieldID == "StabilizationMode") {
		memcpy( dataOut, &(dataFields.StabilizationMode), sizeof(dataFields.StabilizationMode));
	}
	return 0;
}

int StabilizationDesired::UAVObjUnpack(const unsigned char *dataIn){
	memcpy(&dataFields, dataIn, NUMBYTES);
	return 0;
}

int StabilizationDesired::UAVObjPack(unsigned char *dataOut) {
	memcpy(dataOut, &dataFields, NUMBYTES);
	return 0;
}

unsigned short StabilizationDesired::UAVObjGetInstance() const {
	return instance;
}
unsigned short StabilizationDesired::UAVObjGetNumBytes() const {
	return sizeof(dataFields);
}
unsigned short StabilizationDesired::UAVObjGetNumInstances() const {
	return numInstances;
}

std::string StabilizationDesired::prettyPrint() {
	std::stringstream ss;
	ss << "\nPrinting object: stabilizationdesired" << std::endl;
	ss << "\tRoll: " << dataFields.Roll << std::endl;
	ss << "\tPitch: " << dataFields.Pitch << std::endl;
	ss << "\tYaw: " << dataFields.Yaw << std::endl;
	ss << "\tThrust: " << dataFields.Thrust << std::endl;
	ss << "\tStabilizationMode: " << dataFields.StabilizationMode << std::endl;

	return ss.str();
}

/*/***/
/* * Initialize object fields with the default values.*/
/* * If a default value is not specified the object fields*/
/* * will be initialized to zero.*/
/* */
/*void StabilizationDesired::setDefaultFieldValues()*/
/*{*/
/**/
/*}*/

/*/***/
/* * Get the object data fields*/
/* */
/*StabilizationDesired::DataFields StabilizationDesired::getData()*/
/*{*/
/*    QMutexLocker locker(mutex);*/
/*    return data;*/
/*}*/

/*/***/
/* * Set the object data fields*/
/* */
/*void StabilizationDesired::setData(const DataFields& data)*/
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

/*void StabilizationDesired::emitNotifications()*/
/*{*/
/*            //if (data.Roll != oldData.Roll)
            emit RollChanged(data.Roll);
        //if (data.Pitch != oldData.Pitch)
            emit PitchChanged(data.Pitch);
        //if (data.Yaw != oldData.Yaw)
            emit YawChanged(data.Yaw);
        //if (data.Thrust != oldData.Thrust)
            emit ThrustChanged(data.Thrust);
*/
/*}*/

/*/***/
/* * Create a clone of this object, a new instance ID must be specified.*/
/* * Do not use this function directly to create new instances, the*/
/* * UAVObjectManager should be used instead.*/
/* */
/*UAVDataObject *StabilizationDesired::clone(unsigned int instID)*/
/*{*/
/*    StabilizationDesired *obj = new StabilizationDesired();*/
/*    obj->initialize(instID, this->getMetaObject());*/
/*    return obj;*/
/*}*/

/*/***/
/* * Create a clone of this object only to be used to retrieve defaults*/
/* */
/*UAVDataObject *StabilizationDesired::dirtyClone()*/
/*{*/
/*    StabilizationDesired *obj = new StabilizationDesired();*/
/*    return obj;*/
/*}*/

/*/***/
/* * Static function to retrieve an instance of the object.*/
/* */
/*StabilizationDesired *StabilizationDesired::GetInstance(UAVObjectManager *objMngr, unsigned int instID)*/
/*{*/
/*    return dynamic_cast<StabilizationDesired *>(objMngr->getObject(StabilizationDesired::OBJID, instID));*/
/*}*/

/*float StabilizationDesired::getRoll() const
{
   QMutexLocker locker(mutex);
   return data.Roll;
}
void StabilizationDesired::setRoll(float value)
{
   mutex->lock();
   bool changed = data.Roll != value;
   data.Roll = value;
   mutex->unlock();
   if (changed) emit RollChanged(value);
}

float StabilizationDesired::getPitch() const
{
   QMutexLocker locker(mutex);
   return data.Pitch;
}
void StabilizationDesired::setPitch(float value)
{
   mutex->lock();
   bool changed = data.Pitch != value;
   data.Pitch = value;
   mutex->unlock();
   if (changed) emit PitchChanged(value);
}

float StabilizationDesired::getYaw() const
{
   QMutexLocker locker(mutex);
   return data.Yaw;
}
void StabilizationDesired::setYaw(float value)
{
   mutex->lock();
   bool changed = data.Yaw != value;
   data.Yaw = value;
   mutex->unlock();
   if (changed) emit YawChanged(value);
}

float StabilizationDesired::getThrust() const
{
   QMutexLocker locker(mutex);
   return data.Thrust;
}
void StabilizationDesired::setThrust(float value)
{
   mutex->lock();
   bool changed = data.Thrust != value;
   data.Thrust = value;
   mutex->unlock();
   if (changed) emit ThrustChanged(value);
}

unsigned char StabilizationDesired::getStabilizationMode(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.StabilizationMode[index];
}
void StabilizationDesired::setStabilizationMode(unsigned int index, unsigned char value)
{
   mutex->lock();
   bool changed = data.StabilizationMode[index] != value;
   data.StabilizationMode[index] = value;
   mutex->unlock();
   if (changed) emit StabilizationModeChanged(index,value);
}

*/
