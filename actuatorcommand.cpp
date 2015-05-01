/**
 ******************************************************************************
 *
 * @file       actuatorcommand.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: actuatorcommand.xml.
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

#include "actuatorcommand.h"

int ActuatorCommand::numInstances = 0;

/**
 * Constructor
 */
ActuatorCommand::ActuatorCommand(UAVObjManager* manager): UAVObject(manager, 0xB8229FE4, "ActuatorCommand", "Contains the pulse duration sent to each of the channels.  Set by @ref ActuatorModule", "Control", 1, 0, ACCESS_READWRITE, ACCESS_READWRITE, 0, 0, UPDATEMODE_PERIODIC, UPDATEMODE_MANUAL, 1000, 0, 0)
{

}

int ActuatorCommand::UAVObjSetDataField(const char *dataIn, const std::string fieldID){
	if(fieldID == "Channel") {
		memset( &(dataFields.Channel), 0, sizeof(dataFields.Channel));
		memcpy( &(dataFields.Channel), dataIn, sizeof(dataFields.Channel));
	} else if(fieldID == "UpdateTime") {
		memset( &(dataFields.UpdateTime), 0, sizeof(dataFields.UpdateTime));
		memcpy( &(dataFields.UpdateTime), dataIn, sizeof(dataFields.UpdateTime));
	} else if(fieldID == "MaxUpdateTime") {
		memset( &(dataFields.MaxUpdateTime), 0, sizeof(dataFields.MaxUpdateTime));
		memcpy( &(dataFields.MaxUpdateTime), dataIn, sizeof(dataFields.MaxUpdateTime));
	} else if(fieldID == "NumFailedUpdates") {
		memset( &(dataFields.NumFailedUpdates), 0, sizeof(dataFields.NumFailedUpdates));
		memcpy( &(dataFields.NumFailedUpdates), dataIn, sizeof(dataFields.NumFailedUpdates));
	}
	return 0;
}

int ActuatorCommand::UAVObjGetDataField(char *dataOut, const std::string fieldID){
	if(fieldID == "Channel") {
		memcpy( dataOut, &(dataFields.Channel), sizeof(dataFields.Channel));
	} else if(fieldID == "UpdateTime") {
		memcpy( dataOut, &(dataFields.UpdateTime), sizeof(dataFields.UpdateTime));
	} else if(fieldID == "MaxUpdateTime") {
		memcpy( dataOut, &(dataFields.MaxUpdateTime), sizeof(dataFields.MaxUpdateTime));
	} else if(fieldID == "NumFailedUpdates") {
		memcpy( dataOut, &(dataFields.NumFailedUpdates), sizeof(dataFields.NumFailedUpdates));
	}
	return 0;
}

int ActuatorCommand::UAVObjUnpack(const unsigned char *dataIn){
	memcpy(&dataFields, dataIn, NUMBYTES);
	return 0;
}

int ActuatorCommand::UAVObjPack(unsigned char *dataOut) {
	memcpy(dataOut, &dataFields, NUMBYTES);
	return 0;
}

unsigned short ActuatorCommand::UAVObjGetInstance() const {
	return instance;
}
unsigned short ActuatorCommand::UAVObjGetNumBytes() const {
	return sizeof(dataFields);
}
unsigned short ActuatorCommand::UAVObjGetNumInstances() const {
	return numInstances;
}

std::string ActuatorCommand::prettyPrint() {
	std::stringstream ss;
	ss << "\nPrinting object: actuatorcommand" << std::endl;
	ss << "\tChannel: " << dataFields.Channel << std::endl;
	ss << "\tUpdateTime: " << dataFields.UpdateTime << std::endl;
	ss << "\tMaxUpdateTime: " << dataFields.MaxUpdateTime << std::endl;
	ss << "\tNumFailedUpdates: " << dataFields.NumFailedUpdates << std::endl;

	return ss.str();
}

/*/***/
/* * Initialize object fields with the default values.*/
/* * If a default value is not specified the object fields*/
/* * will be initialized to zero.*/
/* */
/*void ActuatorCommand::setDefaultFieldValues()*/
/*{*/
/**/
/*}*/

/*/***/
/* * Get the object data fields*/
/* */
/*ActuatorCommand::DataFields ActuatorCommand::getData()*/
/*{*/
/*    QMutexLocker locker(mutex);*/
/*    return data;*/
/*}*/

/*/***/
/* * Set the object data fields*/
/* */
/*void ActuatorCommand::setData(const DataFields& data)*/
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

/*void ActuatorCommand::emitNotifications()*/
/*{*/
/*            //if (data.UpdateTime != oldData.UpdateTime)
            emit UpdateTimeChanged(data.UpdateTime);
        //if (data.MaxUpdateTime != oldData.MaxUpdateTime)
            emit MaxUpdateTimeChanged(data.MaxUpdateTime);
        //if (data.NumFailedUpdates != oldData.NumFailedUpdates)
            emit NumFailedUpdatesChanged(data.NumFailedUpdates);
*/
/*}*/

/*/***/
/* * Create a clone of this object, a new instance ID must be specified.*/
/* * Do not use this function directly to create new instances, the*/
/* * UAVObjectManager should be used instead.*/
/* */
/*UAVDataObject *ActuatorCommand::clone(unsigned int instID)*/
/*{*/
/*    ActuatorCommand *obj = new ActuatorCommand();*/
/*    obj->initialize(instID, this->getMetaObject());*/
/*    return obj;*/
/*}*/

/*/***/
/* * Create a clone of this object only to be used to retrieve defaults*/
/* */
/*UAVDataObject *ActuatorCommand::dirtyClone()*/
/*{*/
/*    ActuatorCommand *obj = new ActuatorCommand();*/
/*    return obj;*/
/*}*/

/*/***/
/* * Static function to retrieve an instance of the object.*/
/* */
/*ActuatorCommand *ActuatorCommand::GetInstance(UAVObjectManager *objMngr, unsigned int instID)*/
/*{*/
/*    return dynamic_cast<ActuatorCommand *>(objMngr->getObject(ActuatorCommand::OBJID, instID));*/
/*}*/

/*short int ActuatorCommand::getChannel(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.Channel[index];
}
void ActuatorCommand::setChannel(unsigned int index, short int value)
{
   mutex->lock();
   bool changed = data.Channel[index] != value;
   data.Channel[index] = value;
   mutex->unlock();
   if (changed) emit ChannelChanged(index,value);
}

unsigned short int ActuatorCommand::getUpdateTime() const
{
   QMutexLocker locker(mutex);
   return data.UpdateTime;
}
void ActuatorCommand::setUpdateTime(unsigned short int value)
{
   mutex->lock();
   bool changed = data.UpdateTime != value;
   data.UpdateTime = value;
   mutex->unlock();
   if (changed) emit UpdateTimeChanged(value);
}

unsigned short int ActuatorCommand::getMaxUpdateTime() const
{
   QMutexLocker locker(mutex);
   return data.MaxUpdateTime;
}
void ActuatorCommand::setMaxUpdateTime(unsigned short int value)
{
   mutex->lock();
   bool changed = data.MaxUpdateTime != value;
   data.MaxUpdateTime = value;
   mutex->unlock();
   if (changed) emit MaxUpdateTimeChanged(value);
}

unsigned char ActuatorCommand::getNumFailedUpdates() const
{
   QMutexLocker locker(mutex);
   return data.NumFailedUpdates;
}
void ActuatorCommand::setNumFailedUpdates(unsigned char value)
{
   mutex->lock();
   bool changed = data.NumFailedUpdates != value;
   data.NumFailedUpdates = value;
   mutex->unlock();
   if (changed) emit NumFailedUpdatesChanged(value);
}

*/
