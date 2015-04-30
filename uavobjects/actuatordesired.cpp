/**
 ******************************************************************************
 *
 * @file       actuatordesired.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: actuatordesired.xml.
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

#include "actuatordesired.h"

int ActuatorDesired::numInstances = 0;

/**
 * Constructor
 */
ActuatorDesired::ActuatorDesired(UAVObjManager* manager): UAVObject(manager, 0xEAE65C28, "ActuatorDesired", "Desired raw, pitch and yaw actuator settings.  Comes from either @ref StabilizationModule or @ref ManualControlModule depending on FlightMode.", "Control", 1, 0, ACCESS_READWRITE, ACCESS_READWRITE, 0, 0, UPDATEMODE_PERIODIC, UPDATEMODE_MANUAL, 1000, 0, 0)
{

}

int ActuatorDesired::UAVObjSetDataField(const char *dataIn, const std::string fieldID){
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
	} else if(fieldID == "UpdateTime") {
		memset( &(dataFields.UpdateTime), 0, sizeof(dataFields.UpdateTime));
		memcpy( &(dataFields.UpdateTime), dataIn, sizeof(dataFields.UpdateTime));
	} else if(fieldID == "NumLongUpdates") {
		memset( &(dataFields.NumLongUpdates), 0, sizeof(dataFields.NumLongUpdates));
		memcpy( &(dataFields.NumLongUpdates), dataIn, sizeof(dataFields.NumLongUpdates));
	}
	return 0;
}

int ActuatorDesired::UAVObjGetDataField(char *dataOut, const std::string fieldID){
	if(fieldID == "Roll") {
		memcpy( dataOut, &(dataFields.Roll), sizeof(dataFields.Roll));
	} else if(fieldID == "Pitch") {
		memcpy( dataOut, &(dataFields.Pitch), sizeof(dataFields.Pitch));
	} else if(fieldID == "Yaw") {
		memcpy( dataOut, &(dataFields.Yaw), sizeof(dataFields.Yaw));
	} else if(fieldID == "Thrust") {
		memcpy( dataOut, &(dataFields.Thrust), sizeof(dataFields.Thrust));
	} else if(fieldID == "UpdateTime") {
		memcpy( dataOut, &(dataFields.UpdateTime), sizeof(dataFields.UpdateTime));
	} else if(fieldID == "NumLongUpdates") {
		memcpy( dataOut, &(dataFields.NumLongUpdates), sizeof(dataFields.NumLongUpdates));
	}
	return 0;
}

int ActuatorDesired::UAVObjUnpack(const unsigned char *dataIn){
	memcpy(&dataFields, dataIn, NUMBYTES);
	return 0;
}

int ActuatorDesired::UAVObjPack(unsigned char *dataOut) {
	memcpy(dataOut, &dataFields, NUMBYTES);
	return 0;
}

unsigned short ActuatorDesired::UAVObjGetInstance() const {
	return instance;
}
unsigned short ActuatorDesired::UAVObjGetNumBytes() const {
	return sizeof(dataFields);
}
unsigned short ActuatorDesired::UAVObjGetNumInstances() const {
	return numInstances;
}

std::string ActuatorDesired::prettyPrint() {
	std::stringstream ss;
	ss << "\nPrinting object: actuatordesired" << std::endl;
	ss << "\tRoll: " << dataFields.Roll << std::endl;
	ss << "\tPitch: " << dataFields.Pitch << std::endl;
	ss << "\tYaw: " << dataFields.Yaw << std::endl;
	ss << "\tThrust: " << dataFields.Thrust << std::endl;
	ss << "\tUpdateTime: " << dataFields.UpdateTime << std::endl;
	ss << "\tNumLongUpdates: " << dataFields.NumLongUpdates << std::endl;

	return ss.str();
}

/*/***/
/* * Initialize object fields with the default values.*/
/* * If a default value is not specified the object fields*/
/* * will be initialized to zero.*/
/* */
/*void ActuatorDesired::setDefaultFieldValues()*/
/*{*/
/**/
/*}*/

/*/***/
/* * Get the object data fields*/
/* */
/*ActuatorDesired::DataFields ActuatorDesired::getData()*/
/*{*/
/*    QMutexLocker locker(mutex);*/
/*    return data;*/
/*}*/

/*/***/
/* * Set the object data fields*/
/* */
/*void ActuatorDesired::setData(const DataFields& data)*/
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

/*void ActuatorDesired::emitNotifications()*/
/*{*/
/*            //if (data.Roll != oldData.Roll)
            emit RollChanged(data.Roll);
        //if (data.Pitch != oldData.Pitch)
            emit PitchChanged(data.Pitch);
        //if (data.Yaw != oldData.Yaw)
            emit YawChanged(data.Yaw);
        //if (data.Thrust != oldData.Thrust)
            emit ThrustChanged(data.Thrust);
        //if (data.UpdateTime != oldData.UpdateTime)
            emit UpdateTimeChanged(data.UpdateTime);
        //if (data.NumLongUpdates != oldData.NumLongUpdates)
            emit NumLongUpdatesChanged(data.NumLongUpdates);
*/
/*}*/

/*/***/
/* * Create a clone of this object, a new instance ID must be specified.*/
/* * Do not use this function directly to create new instances, the*/
/* * UAVObjectManager should be used instead.*/
/* */
/*UAVDataObject *ActuatorDesired::clone(unsigned int instID)*/
/*{*/
/*    ActuatorDesired *obj = new ActuatorDesired();*/
/*    obj->initialize(instID, this->getMetaObject());*/
/*    return obj;*/
/*}*/

/*/***/
/* * Create a clone of this object only to be used to retrieve defaults*/
/* */
/*UAVDataObject *ActuatorDesired::dirtyClone()*/
/*{*/
/*    ActuatorDesired *obj = new ActuatorDesired();*/
/*    return obj;*/
/*}*/

/*/***/
/* * Static function to retrieve an instance of the object.*/
/* */
/*ActuatorDesired *ActuatorDesired::GetInstance(UAVObjectManager *objMngr, unsigned int instID)*/
/*{*/
/*    return dynamic_cast<ActuatorDesired *>(objMngr->getObject(ActuatorDesired::OBJID, instID));*/
/*}*/

/*float ActuatorDesired::getRoll() const
{
   QMutexLocker locker(mutex);
   return data.Roll;
}
void ActuatorDesired::setRoll(float value)
{
   mutex->lock();
   bool changed = data.Roll != value;
   data.Roll = value;
   mutex->unlock();
   if (changed) emit RollChanged(value);
}

float ActuatorDesired::getPitch() const
{
   QMutexLocker locker(mutex);
   return data.Pitch;
}
void ActuatorDesired::setPitch(float value)
{
   mutex->lock();
   bool changed = data.Pitch != value;
   data.Pitch = value;
   mutex->unlock();
   if (changed) emit PitchChanged(value);
}

float ActuatorDesired::getYaw() const
{
   QMutexLocker locker(mutex);
   return data.Yaw;
}
void ActuatorDesired::setYaw(float value)
{
   mutex->lock();
   bool changed = data.Yaw != value;
   data.Yaw = value;
   mutex->unlock();
   if (changed) emit YawChanged(value);
}

float ActuatorDesired::getThrust() const
{
   QMutexLocker locker(mutex);
   return data.Thrust;
}
void ActuatorDesired::setThrust(float value)
{
   mutex->lock();
   bool changed = data.Thrust != value;
   data.Thrust = value;
   mutex->unlock();
   if (changed) emit ThrustChanged(value);
}

float ActuatorDesired::getUpdateTime() const
{
   QMutexLocker locker(mutex);
   return data.UpdateTime;
}
void ActuatorDesired::setUpdateTime(float value)
{
   mutex->lock();
   bool changed = data.UpdateTime != value;
   data.UpdateTime = value;
   mutex->unlock();
   if (changed) emit UpdateTimeChanged(value);
}

float ActuatorDesired::getNumLongUpdates() const
{
   QMutexLocker locker(mutex);
   return data.NumLongUpdates;
}
void ActuatorDesired::setNumLongUpdates(float value)
{
   mutex->lock();
   bool changed = data.NumLongUpdates != value;
   data.NumLongUpdates = value;
   mutex->unlock();
   if (changed) emit NumLongUpdatesChanged(value);
}

*/
