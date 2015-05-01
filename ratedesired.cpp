/**
 ******************************************************************************
 *
 * @file       ratedesired.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: ratedesired.xml.
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

#include "ratedesired.h"

int RateDesired::numInstances = 0;

/**
 * Constructor
 */
RateDesired::RateDesired(UAVObjManager* manager): UAVObject(manager, 0x3642723E, "RateDesired", "Status for the matrix mixer showing the output of each mixer after all scaling", "Control", 1, 0, ACCESS_READWRITE, ACCESS_READWRITE, 0, 0, UPDATEMODE_PERIODIC, UPDATEMODE_MANUAL, 1000, 0, 0)
{

}

int RateDesired::UAVObjSetDataField(const char *dataIn, const std::string fieldID){
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
	}
	return 0;
}

int RateDesired::UAVObjGetDataField(char *dataOut, const std::string fieldID){
	if(fieldID == "Roll") {
		memcpy( dataOut, &(dataFields.Roll), sizeof(dataFields.Roll));
	} else if(fieldID == "Pitch") {
		memcpy( dataOut, &(dataFields.Pitch), sizeof(dataFields.Pitch));
	} else if(fieldID == "Yaw") {
		memcpy( dataOut, &(dataFields.Yaw), sizeof(dataFields.Yaw));
	} else if(fieldID == "Thrust") {
		memcpy( dataOut, &(dataFields.Thrust), sizeof(dataFields.Thrust));
	}
	return 0;
}

int RateDesired::UAVObjUnpack(const unsigned char *dataIn){
	memcpy(&dataFields, dataIn, NUMBYTES);
	return 0;
}

int RateDesired::UAVObjPack(unsigned char *dataOut) {
	memcpy(dataOut, &dataFields, NUMBYTES);
	return 0;
}

unsigned short RateDesired::UAVObjGetInstance() const {
	return instance;
}
unsigned short RateDesired::UAVObjGetNumBytes() const {
	return sizeof(dataFields);
}
unsigned short RateDesired::UAVObjGetNumInstances() const {
	return numInstances;
}

std::string RateDesired::prettyPrint() {
	std::stringstream ss;
	ss << "\nPrinting object: ratedesired" << std::endl;
	ss << "\tRoll: " << dataFields.Roll << std::endl;
	ss << "\tPitch: " << dataFields.Pitch << std::endl;
	ss << "\tYaw: " << dataFields.Yaw << std::endl;
	ss << "\tThrust: " << dataFields.Thrust << std::endl;

	return ss.str();
}

/*/***/
/* * Initialize object fields with the default values.*/
/* * If a default value is not specified the object fields*/
/* * will be initialized to zero.*/
/* */
/*void RateDesired::setDefaultFieldValues()*/
/*{*/
/**/
/*}*/

/*/***/
/* * Get the object data fields*/
/* */
/*RateDesired::DataFields RateDesired::getData()*/
/*{*/
/*    QMutexLocker locker(mutex);*/
/*    return data;*/
/*}*/

/*/***/
/* * Set the object data fields*/
/* */
/*void RateDesired::setData(const DataFields& data)*/
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

/*void RateDesired::emitNotifications()*/
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
/*UAVDataObject *RateDesired::clone(unsigned int instID)*/
/*{*/
/*    RateDesired *obj = new RateDesired();*/
/*    obj->initialize(instID, this->getMetaObject());*/
/*    return obj;*/
/*}*/

/*/***/
/* * Create a clone of this object only to be used to retrieve defaults*/
/* */
/*UAVDataObject *RateDesired::dirtyClone()*/
/*{*/
/*    RateDesired *obj = new RateDesired();*/
/*    return obj;*/
/*}*/

/*/***/
/* * Static function to retrieve an instance of the object.*/
/* */
/*RateDesired *RateDesired::GetInstance(UAVObjectManager *objMngr, unsigned int instID)*/
/*{*/
/*    return dynamic_cast<RateDesired *>(objMngr->getObject(RateDesired::OBJID, instID));*/
/*}*/

/*float RateDesired::getRoll() const
{
   QMutexLocker locker(mutex);
   return data.Roll;
}
void RateDesired::setRoll(float value)
{
   mutex->lock();
   bool changed = data.Roll != value;
   data.Roll = value;
   mutex->unlock();
   if (changed) emit RollChanged(value);
}

float RateDesired::getPitch() const
{
   QMutexLocker locker(mutex);
   return data.Pitch;
}
void RateDesired::setPitch(float value)
{
   mutex->lock();
   bool changed = data.Pitch != value;
   data.Pitch = value;
   mutex->unlock();
   if (changed) emit PitchChanged(value);
}

float RateDesired::getYaw() const
{
   QMutexLocker locker(mutex);
   return data.Yaw;
}
void RateDesired::setYaw(float value)
{
   mutex->lock();
   bool changed = data.Yaw != value;
   data.Yaw = value;
   mutex->unlock();
   if (changed) emit YawChanged(value);
}

float RateDesired::getThrust() const
{
   QMutexLocker locker(mutex);
   return data.Thrust;
}
void RateDesired::setThrust(float value)
{
   mutex->lock();
   bool changed = data.Thrust != value;
   data.Thrust = value;
   mutex->unlock();
   if (changed) emit ThrustChanged(value);
}

*/
