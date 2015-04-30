/**
 ******************************************************************************
 *
 * @file       manualcontrolcommand.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: manualcontrolcommand.xml.
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

#include "manualcontrolcommand.h"

int ManualControlCommand::numInstances = 0;

/**
 * Constructor
 */
ManualControlCommand::ManualControlCommand(UAVObjManager* manager): UAVObject(manager, 0x161A2C98, "ManualControlCommand", "The output from the @ref ManualControlModule which decodes the receiver inputs. Overriden by GCS for fly-by-wire control.", "Control", 1, 0, ACCESS_READWRITE, ACCESS_READWRITE, 0, 0, UPDATEMODE_PERIODIC, UPDATEMODE_MANUAL, 2000, 0, 0)
{

}

int ManualControlCommand::UAVObjSetDataField(const char *dataIn, const std::string fieldID){
	if(fieldID == "Throttle") {
		memset( &(dataFields.Throttle), 0, sizeof(dataFields.Throttle));
		memcpy( &(dataFields.Throttle), dataIn, sizeof(dataFields.Throttle));
	} else if(fieldID == "Roll") {
		memset( &(dataFields.Roll), 0, sizeof(dataFields.Roll));
		memcpy( &(dataFields.Roll), dataIn, sizeof(dataFields.Roll));
	} else if(fieldID == "Pitch") {
		memset( &(dataFields.Pitch), 0, sizeof(dataFields.Pitch));
		memcpy( &(dataFields.Pitch), dataIn, sizeof(dataFields.Pitch));
	} else if(fieldID == "Yaw") {
		memset( &(dataFields.Yaw), 0, sizeof(dataFields.Yaw));
		memcpy( &(dataFields.Yaw), dataIn, sizeof(dataFields.Yaw));
	} else if(fieldID == "Collective") {
		memset( &(dataFields.Collective), 0, sizeof(dataFields.Collective));
		memcpy( &(dataFields.Collective), dataIn, sizeof(dataFields.Collective));
	} else if(fieldID == "Thrust") {
		memset( &(dataFields.Thrust), 0, sizeof(dataFields.Thrust));
		memcpy( &(dataFields.Thrust), dataIn, sizeof(dataFields.Thrust));
	} else if(fieldID == "Channel") {
		memset( &(dataFields.Channel), 0, sizeof(dataFields.Channel));
		memcpy( &(dataFields.Channel), dataIn, sizeof(dataFields.Channel));
	} else if(fieldID == "Connected") {
		memset( &(dataFields.Connected), 0, sizeof(dataFields.Connected));
		memcpy( &(dataFields.Connected), dataIn, sizeof(dataFields.Connected));
	} else if(fieldID == "FlightModeSwitchPosition") {
		memset( &(dataFields.FlightModeSwitchPosition), 0, sizeof(dataFields.FlightModeSwitchPosition));
		memcpy( &(dataFields.FlightModeSwitchPosition), dataIn, sizeof(dataFields.FlightModeSwitchPosition));
	}
	return 0;
}

int ManualControlCommand::UAVObjGetDataField(char *dataOut, const std::string fieldID){
	if(fieldID == "Throttle") {
		memcpy( dataOut, &(dataFields.Throttle), sizeof(dataFields.Throttle));
	} else if(fieldID == "Roll") {
		memcpy( dataOut, &(dataFields.Roll), sizeof(dataFields.Roll));
	} else if(fieldID == "Pitch") {
		memcpy( dataOut, &(dataFields.Pitch), sizeof(dataFields.Pitch));
	} else if(fieldID == "Yaw") {
		memcpy( dataOut, &(dataFields.Yaw), sizeof(dataFields.Yaw));
	} else if(fieldID == "Collective") {
		memcpy( dataOut, &(dataFields.Collective), sizeof(dataFields.Collective));
	} else if(fieldID == "Thrust") {
		memcpy( dataOut, &(dataFields.Thrust), sizeof(dataFields.Thrust));
	} else if(fieldID == "Channel") {
		memcpy( dataOut, &(dataFields.Channel), sizeof(dataFields.Channel));
	} else if(fieldID == "Connected") {
		memcpy( dataOut, &(dataFields.Connected), sizeof(dataFields.Connected));
	} else if(fieldID == "FlightModeSwitchPosition") {
		memcpy( dataOut, &(dataFields.FlightModeSwitchPosition), sizeof(dataFields.FlightModeSwitchPosition));
	}
	return 0;
}

int ManualControlCommand::UAVObjUnpack(const unsigned char *dataIn){
	memcpy(&dataFields, dataIn, NUMBYTES);
	return 0;
}

int ManualControlCommand::UAVObjPack(unsigned char *dataOut) {
	memcpy(dataOut, &dataFields, NUMBYTES);
	return 0;
}

unsigned short ManualControlCommand::UAVObjGetInstance() const {
	return instance;
}
unsigned short ManualControlCommand::UAVObjGetNumBytes() const {
	return sizeof(dataFields);
}
unsigned short ManualControlCommand::UAVObjGetNumInstances() const {
	return numInstances;
}

std::string ManualControlCommand::prettyPrint() {
	std::stringstream ss;
	ss << "\nPrinting object: manualcontrolcommand" << std::endl;
	ss << "\tThrottle: " << dataFields.Throttle << std::endl;
	ss << "\tRoll: " << dataFields.Roll << std::endl;
	ss << "\tPitch: " << dataFields.Pitch << std::endl;
	ss << "\tYaw: " << dataFields.Yaw << std::endl;
	ss << "\tCollective: " << dataFields.Collective << std::endl;
	ss << "\tThrust: " << dataFields.Thrust << std::endl;
	ss << "\tChannel: " << dataFields.Channel << std::endl;
	ss << "\tConnected: " << dataFields.Connected << std::endl;
	ss << "\tFlightModeSwitchPosition: " << dataFields.FlightModeSwitchPosition << std::endl;

	return ss.str();
}

/*/***/
/* * Initialize object fields with the default values.*/
/* * If a default value is not specified the object fields*/
/* * will be initialized to zero.*/
/* */
/*void ManualControlCommand::setDefaultFieldValues()*/
/*{*/
/*    data.FlightModeSwitchPosition = 0;
*/
/*}*/

/*/***/
/* * Get the object data fields*/
/* */
/*ManualControlCommand::DataFields ManualControlCommand::getData()*/
/*{*/
/*    QMutexLocker locker(mutex);*/
/*    return data;*/
/*}*/

/*/***/
/* * Set the object data fields*/
/* */
/*void ManualControlCommand::setData(const DataFields& data)*/
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

/*void ManualControlCommand::emitNotifications()*/
/*{*/
/*            //if (data.Throttle != oldData.Throttle)
            emit ThrottleChanged(data.Throttle);
        //if (data.Roll != oldData.Roll)
            emit RollChanged(data.Roll);
        //if (data.Pitch != oldData.Pitch)
            emit PitchChanged(data.Pitch);
        //if (data.Yaw != oldData.Yaw)
            emit YawChanged(data.Yaw);
        //if (data.Collective != oldData.Collective)
            emit CollectiveChanged(data.Collective);
        //if (data.Thrust != oldData.Thrust)
            emit ThrustChanged(data.Thrust);
        //if (data.Connected != oldData.Connected)
            emit ConnectedChanged(data.Connected);
        //if (data.FlightModeSwitchPosition != oldData.FlightModeSwitchPosition)
            emit FlightModeSwitchPositionChanged(data.FlightModeSwitchPosition);
*/
/*}*/

/*/***/
/* * Create a clone of this object, a new instance ID must be specified.*/
/* * Do not use this function directly to create new instances, the*/
/* * UAVObjectManager should be used instead.*/
/* */
/*UAVDataObject *ManualControlCommand::clone(unsigned int instID)*/
/*{*/
/*    ManualControlCommand *obj = new ManualControlCommand();*/
/*    obj->initialize(instID, this->getMetaObject());*/
/*    return obj;*/
/*}*/

/*/***/
/* * Create a clone of this object only to be used to retrieve defaults*/
/* */
/*UAVDataObject *ManualControlCommand::dirtyClone()*/
/*{*/
/*    ManualControlCommand *obj = new ManualControlCommand();*/
/*    return obj;*/
/*}*/

/*/***/
/* * Static function to retrieve an instance of the object.*/
/* */
/*ManualControlCommand *ManualControlCommand::GetInstance(UAVObjectManager *objMngr, unsigned int instID)*/
/*{*/
/*    return dynamic_cast<ManualControlCommand *>(objMngr->getObject(ManualControlCommand::OBJID, instID));*/
/*}*/

/*float ManualControlCommand::getThrottle() const
{
   QMutexLocker locker(mutex);
   return data.Throttle;
}
void ManualControlCommand::setThrottle(float value)
{
   mutex->lock();
   bool changed = data.Throttle != value;
   data.Throttle = value;
   mutex->unlock();
   if (changed) emit ThrottleChanged(value);
}

float ManualControlCommand::getRoll() const
{
   QMutexLocker locker(mutex);
   return data.Roll;
}
void ManualControlCommand::setRoll(float value)
{
   mutex->lock();
   bool changed = data.Roll != value;
   data.Roll = value;
   mutex->unlock();
   if (changed) emit RollChanged(value);
}

float ManualControlCommand::getPitch() const
{
   QMutexLocker locker(mutex);
   return data.Pitch;
}
void ManualControlCommand::setPitch(float value)
{
   mutex->lock();
   bool changed = data.Pitch != value;
   data.Pitch = value;
   mutex->unlock();
   if (changed) emit PitchChanged(value);
}

float ManualControlCommand::getYaw() const
{
   QMutexLocker locker(mutex);
   return data.Yaw;
}
void ManualControlCommand::setYaw(float value)
{
   mutex->lock();
   bool changed = data.Yaw != value;
   data.Yaw = value;
   mutex->unlock();
   if (changed) emit YawChanged(value);
}

float ManualControlCommand::getCollective() const
{
   QMutexLocker locker(mutex);
   return data.Collective;
}
void ManualControlCommand::setCollective(float value)
{
   mutex->lock();
   bool changed = data.Collective != value;
   data.Collective = value;
   mutex->unlock();
   if (changed) emit CollectiveChanged(value);
}

float ManualControlCommand::getThrust() const
{
   QMutexLocker locker(mutex);
   return data.Thrust;
}
void ManualControlCommand::setThrust(float value)
{
   mutex->lock();
   bool changed = data.Thrust != value;
   data.Thrust = value;
   mutex->unlock();
   if (changed) emit ThrustChanged(value);
}

unsigned short int ManualControlCommand::getChannel(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.Channel[index];
}
void ManualControlCommand::setChannel(unsigned int index, unsigned short int value)
{
   mutex->lock();
   bool changed = data.Channel[index] != value;
   data.Channel[index] = value;
   mutex->unlock();
   if (changed) emit ChannelChanged(index,value);
}

unsigned char ManualControlCommand::getConnected() const
{
   QMutexLocker locker(mutex);
   return data.Connected;
}
void ManualControlCommand::setConnected(unsigned char value)
{
   mutex->lock();
   bool changed = data.Connected != value;
   data.Connected = value;
   mutex->unlock();
   if (changed) emit ConnectedChanged(value);
}

unsigned char ManualControlCommand::getFlightModeSwitchPosition() const
{
   QMutexLocker locker(mutex);
   return data.FlightModeSwitchPosition;
}
void ManualControlCommand::setFlightModeSwitchPosition(unsigned char value)
{
   mutex->lock();
   bool changed = data.FlightModeSwitchPosition != value;
   data.FlightModeSwitchPosition = value;
   mutex->unlock();
   if (changed) emit FlightModeSwitchPositionChanged(value);
}

*/
