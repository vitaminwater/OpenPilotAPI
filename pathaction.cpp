/**
 ******************************************************************************
 *
 * @file       pathaction.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: pathaction.xml.
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

#include "pathaction.h"

int PathAction::numInstances = 0;

/**
 * Constructor
 */
PathAction::PathAction(UAVObjManager* manager): UAVObject(manager, 0x2472A0AE, "PathAction", "A waypoint command the pathplanner is to use at a certain waypoint", "Navigation", 0, 0, ACCESS_READWRITE, ACCESS_READWRITE, 1, 1, UPDATEMODE_MANUAL, UPDATEMODE_MANUAL, 0, 0, 0)
{

}

int PathAction::UAVObjSetDataField(const char *dataIn, const std::string fieldID){
	if(fieldID == "ModeParameters") {
		memset( &(dataFields.ModeParameters), 0, sizeof(dataFields.ModeParameters));
		memcpy( &(dataFields.ModeParameters), dataIn, sizeof(dataFields.ModeParameters));
	} else if(fieldID == "ConditionParameters") {
		memset( &(dataFields.ConditionParameters), 0, sizeof(dataFields.ConditionParameters));
		memcpy( &(dataFields.ConditionParameters), dataIn, sizeof(dataFields.ConditionParameters));
	} else if(fieldID == "JumpDestination") {
		memset( &(dataFields.JumpDestination), 0, sizeof(dataFields.JumpDestination));
		memcpy( &(dataFields.JumpDestination), dataIn, sizeof(dataFields.JumpDestination));
	} else if(fieldID == "ErrorDestination") {
		memset( &(dataFields.ErrorDestination), 0, sizeof(dataFields.ErrorDestination));
		memcpy( &(dataFields.ErrorDestination), dataIn, sizeof(dataFields.ErrorDestination));
	} else if(fieldID == "Mode") {
		memset( &(dataFields.Mode), 0, sizeof(dataFields.Mode));
		memcpy( &(dataFields.Mode), dataIn, sizeof(dataFields.Mode));
	} else if(fieldID == "EndCondition") {
		memset( &(dataFields.EndCondition), 0, sizeof(dataFields.EndCondition));
		memcpy( &(dataFields.EndCondition), dataIn, sizeof(dataFields.EndCondition));
	} else if(fieldID == "Command") {
		memset( &(dataFields.Command), 0, sizeof(dataFields.Command));
		memcpy( &(dataFields.Command), dataIn, sizeof(dataFields.Command));
	}
	return 0;
}

int PathAction::UAVObjGetDataField(char *dataOut, const std::string fieldID){
	if(fieldID == "ModeParameters") {
		memcpy( dataOut, &(dataFields.ModeParameters), sizeof(dataFields.ModeParameters));
	} else if(fieldID == "ConditionParameters") {
		memcpy( dataOut, &(dataFields.ConditionParameters), sizeof(dataFields.ConditionParameters));
	} else if(fieldID == "JumpDestination") {
		memcpy( dataOut, &(dataFields.JumpDestination), sizeof(dataFields.JumpDestination));
	} else if(fieldID == "ErrorDestination") {
		memcpy( dataOut, &(dataFields.ErrorDestination), sizeof(dataFields.ErrorDestination));
	} else if(fieldID == "Mode") {
		memcpy( dataOut, &(dataFields.Mode), sizeof(dataFields.Mode));
	} else if(fieldID == "EndCondition") {
		memcpy( dataOut, &(dataFields.EndCondition), sizeof(dataFields.EndCondition));
	} else if(fieldID == "Command") {
		memcpy( dataOut, &(dataFields.Command), sizeof(dataFields.Command));
	}
	return 0;
}

int PathAction::UAVObjUnpack(const unsigned char *dataIn){
	memcpy(&dataFields, dataIn, NUMBYTES);
	return 0;
}

int PathAction::UAVObjPack(unsigned char *dataOut) {
	memcpy(dataOut, &dataFields, NUMBYTES);
	return 0;
}

unsigned short PathAction::UAVObjGetInstance() const {
	return instance;
}
unsigned short PathAction::UAVObjGetNumBytes() const {
	return sizeof(dataFields);
}
unsigned short PathAction::UAVObjGetNumInstances() const {
	return numInstances;
}

std::string PathAction::prettyPrint() {
	std::stringstream ss;
	ss << "\nPrinting object: pathaction" << std::endl;
	ss << "\tModeParameters: " << dataFields.ModeParameters << std::endl;
	ss << "\tConditionParameters: " << dataFields.ConditionParameters << std::endl;
	ss << "\tJumpDestination: " << dataFields.JumpDestination << std::endl;
	ss << "\tErrorDestination: " << dataFields.ErrorDestination << std::endl;
	ss << "\tMode: " << dataFields.Mode << std::endl;
	ss << "\tEndCondition: " << dataFields.EndCondition << std::endl;
	ss << "\tCommand: " << dataFields.Command << std::endl;

	return ss.str();
}

/*/***/
/* * Initialize object fields with the default values.*/
/* * If a default value is not specified the object fields*/
/* * will be initialized to zero.*/
/* */
/*void PathAction::setDefaultFieldValues()*/
/*{*/
/**/
/*}*/

/*/***/
/* * Get the object data fields*/
/* */
/*PathAction::DataFields PathAction::getData()*/
/*{*/
/*    QMutexLocker locker(mutex);*/
/*    return data;*/
/*}*/

/*/***/
/* * Set the object data fields*/
/* */
/*void PathAction::setData(const DataFields& data)*/
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

/*void PathAction::emitNotifications()*/
/*{*/
/*            //if (data.JumpDestination != oldData.JumpDestination)
            emit JumpDestinationChanged(data.JumpDestination);
        //if (data.ErrorDestination != oldData.ErrorDestination)
            emit ErrorDestinationChanged(data.ErrorDestination);
        //if (data.Mode != oldData.Mode)
            emit ModeChanged(data.Mode);
        //if (data.EndCondition != oldData.EndCondition)
            emit EndConditionChanged(data.EndCondition);
        //if (data.Command != oldData.Command)
            emit CommandChanged(data.Command);
*/
/*}*/

/*/***/
/* * Create a clone of this object, a new instance ID must be specified.*/
/* * Do not use this function directly to create new instances, the*/
/* * UAVObjectManager should be used instead.*/
/* */
/*UAVDataObject *PathAction::clone(unsigned int instID)*/
/*{*/
/*    PathAction *obj = new PathAction();*/
/*    obj->initialize(instID, this->getMetaObject());*/
/*    return obj;*/
/*}*/

/*/***/
/* * Create a clone of this object only to be used to retrieve defaults*/
/* */
/*UAVDataObject *PathAction::dirtyClone()*/
/*{*/
/*    PathAction *obj = new PathAction();*/
/*    return obj;*/
/*}*/

/*/***/
/* * Static function to retrieve an instance of the object.*/
/* */
/*PathAction *PathAction::GetInstance(UAVObjectManager *objMngr, unsigned int instID)*/
/*{*/
/*    return dynamic_cast<PathAction *>(objMngr->getObject(PathAction::OBJID, instID));*/
/*}*/

/*float PathAction::getModeParameters(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.ModeParameters[index];
}
void PathAction::setModeParameters(unsigned int index, float value)
{
   mutex->lock();
   bool changed = data.ModeParameters[index] != value;
   data.ModeParameters[index] = value;
   mutex->unlock();
   if (changed) emit ModeParametersChanged(index,value);
}

float PathAction::getConditionParameters(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.ConditionParameters[index];
}
void PathAction::setConditionParameters(unsigned int index, float value)
{
   mutex->lock();
   bool changed = data.ConditionParameters[index] != value;
   data.ConditionParameters[index] = value;
   mutex->unlock();
   if (changed) emit ConditionParametersChanged(index,value);
}

short int PathAction::getJumpDestination() const
{
   QMutexLocker locker(mutex);
   return data.JumpDestination;
}
void PathAction::setJumpDestination(short int value)
{
   mutex->lock();
   bool changed = data.JumpDestination != value;
   data.JumpDestination = value;
   mutex->unlock();
   if (changed) emit JumpDestinationChanged(value);
}

short int PathAction::getErrorDestination() const
{
   QMutexLocker locker(mutex);
   return data.ErrorDestination;
}
void PathAction::setErrorDestination(short int value)
{
   mutex->lock();
   bool changed = data.ErrorDestination != value;
   data.ErrorDestination = value;
   mutex->unlock();
   if (changed) emit ErrorDestinationChanged(value);
}

unsigned char PathAction::getMode() const
{
   QMutexLocker locker(mutex);
   return data.Mode;
}
void PathAction::setMode(unsigned char value)
{
   mutex->lock();
   bool changed = data.Mode != value;
   data.Mode = value;
   mutex->unlock();
   if (changed) emit ModeChanged(value);
}

unsigned char PathAction::getEndCondition() const
{
   QMutexLocker locker(mutex);
   return data.EndCondition;
}
void PathAction::setEndCondition(unsigned char value)
{
   mutex->lock();
   bool changed = data.EndCondition != value;
   data.EndCondition = value;
   mutex->unlock();
   if (changed) emit EndConditionChanged(value);
}

unsigned char PathAction::getCommand() const
{
   QMutexLocker locker(mutex);
   return data.Command;
}
void PathAction::setCommand(unsigned char value)
{
   mutex->lock();
   bool changed = data.Command != value;
   data.Command = value;
   mutex->unlock();
   if (changed) emit CommandChanged(value);
}

*/
