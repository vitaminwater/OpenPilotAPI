/**
 ******************************************************************************
 *
 * @file       attitudestate.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: attitudestate.xml.
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

#include "attitudestate.h"

int AttitudeState::numInstances = 0;

/**
 * Constructor
 */
AttitudeState::AttitudeState(UAVObjManager* manager): UAVObject(manager, 0xD7E0D964, "AttitudeState", "The updated Attitude estimation from @ref StateEstimationModule.", "State", 1, 0, ACCESS_READWRITE, ACCESS_READWRITE, 0, 0, UPDATEMODE_PERIODIC, UPDATEMODE_MANUAL, 130, 0, 0)
{

}

int AttitudeState::UAVObjSetDataField(const char *dataIn, const std::string fieldID){
	if(fieldID == "q1") {
		memset( &(dataFields.q1), 0, sizeof(dataFields.q1));
		memcpy( &(dataFields.q1), dataIn, sizeof(dataFields.q1));
	} else if(fieldID == "q2") {
		memset( &(dataFields.q2), 0, sizeof(dataFields.q2));
		memcpy( &(dataFields.q2), dataIn, sizeof(dataFields.q2));
	} else if(fieldID == "q3") {
		memset( &(dataFields.q3), 0, sizeof(dataFields.q3));
		memcpy( &(dataFields.q3), dataIn, sizeof(dataFields.q3));
	} else if(fieldID == "q4") {
		memset( &(dataFields.q4), 0, sizeof(dataFields.q4));
		memcpy( &(dataFields.q4), dataIn, sizeof(dataFields.q4));
	} else if(fieldID == "Roll") {
		memset( &(dataFields.Roll), 0, sizeof(dataFields.Roll));
		memcpy( &(dataFields.Roll), dataIn, sizeof(dataFields.Roll));
	} else if(fieldID == "Pitch") {
		memset( &(dataFields.Pitch), 0, sizeof(dataFields.Pitch));
		memcpy( &(dataFields.Pitch), dataIn, sizeof(dataFields.Pitch));
	} else if(fieldID == "Yaw") {
		memset( &(dataFields.Yaw), 0, sizeof(dataFields.Yaw));
		memcpy( &(dataFields.Yaw), dataIn, sizeof(dataFields.Yaw));
	}
	return 0;
}

int AttitudeState::UAVObjGetDataField(char *dataOut, const std::string fieldID){
	if(fieldID == "q1") {
		memcpy( dataOut, &(dataFields.q1), sizeof(dataFields.q1));
	} else if(fieldID == "q2") {
		memcpy( dataOut, &(dataFields.q2), sizeof(dataFields.q2));
	} else if(fieldID == "q3") {
		memcpy( dataOut, &(dataFields.q3), sizeof(dataFields.q3));
	} else if(fieldID == "q4") {
		memcpy( dataOut, &(dataFields.q4), sizeof(dataFields.q4));
	} else if(fieldID == "Roll") {
		memcpy( dataOut, &(dataFields.Roll), sizeof(dataFields.Roll));
	} else if(fieldID == "Pitch") {
		memcpy( dataOut, &(dataFields.Pitch), sizeof(dataFields.Pitch));
	} else if(fieldID == "Yaw") {
		memcpy( dataOut, &(dataFields.Yaw), sizeof(dataFields.Yaw));
	}
	return 0;
}

int AttitudeState::UAVObjUnpack(const unsigned char *dataIn){
	memcpy(&dataFields, dataIn, NUMBYTES);
	return 0;
}

int AttitudeState::UAVObjPack(unsigned char *dataOut) {
	memcpy(dataOut, &dataFields, NUMBYTES);
	return 0;
}

unsigned short AttitudeState::UAVObjGetInstance() const {
	return instance;
}
unsigned short AttitudeState::UAVObjGetNumBytes() const {
	return sizeof(dataFields);
}
unsigned short AttitudeState::UAVObjGetNumInstances() const {
	return numInstances;
}

std::string AttitudeState::prettyPrint() {
	std::stringstream ss;
	ss << "\nPrinting object: attitudestate" << std::endl;
	ss << "\tq1: " << dataFields.q1 << std::endl;
	ss << "\tq2: " << dataFields.q2 << std::endl;
	ss << "\tq3: " << dataFields.q3 << std::endl;
	ss << "\tq4: " << dataFields.q4 << std::endl;
	ss << "\tRoll: " << dataFields.Roll << std::endl;
	ss << "\tPitch: " << dataFields.Pitch << std::endl;
	ss << "\tYaw: " << dataFields.Yaw << std::endl;

	return ss.str();
}

/*/***/
/* * Initialize object fields with the default values.*/
/* * If a default value is not specified the object fields*/
/* * will be initialized to zero.*/
/* */
/*void AttitudeState::setDefaultFieldValues()*/
/*{*/
/**/
/*}*/

/*/***/
/* * Get the object data fields*/
/* */
/*AttitudeState::DataFields AttitudeState::getData()*/
/*{*/
/*    QMutexLocker locker(mutex);*/
/*    return data;*/
/*}*/

/*/***/
/* * Set the object data fields*/
/* */
/*void AttitudeState::setData(const DataFields& data)*/
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

/*void AttitudeState::emitNotifications()*/
/*{*/
/*            //if (data.q1 != oldData.q1)
            emit q1Changed(data.q1);
        //if (data.q2 != oldData.q2)
            emit q2Changed(data.q2);
        //if (data.q3 != oldData.q3)
            emit q3Changed(data.q3);
        //if (data.q4 != oldData.q4)
            emit q4Changed(data.q4);
        //if (data.Roll != oldData.Roll)
            emit RollChanged(data.Roll);
        //if (data.Pitch != oldData.Pitch)
            emit PitchChanged(data.Pitch);
        //if (data.Yaw != oldData.Yaw)
            emit YawChanged(data.Yaw);
*/
/*}*/

/*/***/
/* * Create a clone of this object, a new instance ID must be specified.*/
/* * Do not use this function directly to create new instances, the*/
/* * UAVObjectManager should be used instead.*/
/* */
/*UAVDataObject *AttitudeState::clone(unsigned int instID)*/
/*{*/
/*    AttitudeState *obj = new AttitudeState();*/
/*    obj->initialize(instID, this->getMetaObject());*/
/*    return obj;*/
/*}*/

/*/***/
/* * Create a clone of this object only to be used to retrieve defaults*/
/* */
/*UAVDataObject *AttitudeState::dirtyClone()*/
/*{*/
/*    AttitudeState *obj = new AttitudeState();*/
/*    return obj;*/
/*}*/

/*/***/
/* * Static function to retrieve an instance of the object.*/
/* */
/*AttitudeState *AttitudeState::GetInstance(UAVObjectManager *objMngr, unsigned int instID)*/
/*{*/
/*    return dynamic_cast<AttitudeState *>(objMngr->getObject(AttitudeState::OBJID, instID));*/
/*}*/

/*float AttitudeState::getq1() const
{
   QMutexLocker locker(mutex);
   return data.q1;
}
void AttitudeState::setq1(float value)
{
   mutex->lock();
   bool changed = data.q1 != value;
   data.q1 = value;
   mutex->unlock();
   if (changed) emit q1Changed(value);
}

float AttitudeState::getq2() const
{
   QMutexLocker locker(mutex);
   return data.q2;
}
void AttitudeState::setq2(float value)
{
   mutex->lock();
   bool changed = data.q2 != value;
   data.q2 = value;
   mutex->unlock();
   if (changed) emit q2Changed(value);
}

float AttitudeState::getq3() const
{
   QMutexLocker locker(mutex);
   return data.q3;
}
void AttitudeState::setq3(float value)
{
   mutex->lock();
   bool changed = data.q3 != value;
   data.q3 = value;
   mutex->unlock();
   if (changed) emit q3Changed(value);
}

float AttitudeState::getq4() const
{
   QMutexLocker locker(mutex);
   return data.q4;
}
void AttitudeState::setq4(float value)
{
   mutex->lock();
   bool changed = data.q4 != value;
   data.q4 = value;
   mutex->unlock();
   if (changed) emit q4Changed(value);
}

float AttitudeState::getRoll() const
{
   QMutexLocker locker(mutex);
   return data.Roll;
}
void AttitudeState::setRoll(float value)
{
   mutex->lock();
   bool changed = data.Roll != value;
   data.Roll = value;
   mutex->unlock();
   if (changed) emit RollChanged(value);
}

float AttitudeState::getPitch() const
{
   QMutexLocker locker(mutex);
   return data.Pitch;
}
void AttitudeState::setPitch(float value)
{
   mutex->lock();
   bool changed = data.Pitch != value;
   data.Pitch = value;
   mutex->unlock();
   if (changed) emit PitchChanged(value);
}

float AttitudeState::getYaw() const
{
   QMutexLocker locker(mutex);
   return data.Yaw;
}
void AttitudeState::setYaw(float value)
{
   mutex->lock();
   bool changed = data.Yaw != value;
   data.Yaw = value;
   mutex->unlock();
   if (changed) emit YawChanged(value);
}

*/
