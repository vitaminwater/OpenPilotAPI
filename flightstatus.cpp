/**
 ******************************************************************************
 *
 * @file       flightstatus.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: flightstatus.xml.
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

#include "flightstatus.h"

int FlightStatus::numInstances = 0;

/**
 * Constructor
 */
FlightStatus::FlightStatus(UAVObjManager* manager): UAVObject(manager, 0x8A80EA52, "FlightStatus", "Contains major flight status information for other modules.", "Control", 1, 0, ACCESS_READWRITE, ACCESS_READWRITE, 0, 0, UPDATEMODE_ONCHANGE, UPDATEMODE_MANUAL, 5000, 0, 0)
{

}

int FlightStatus::UAVObjSetDataField(const char *dataIn, const std::string fieldID){
	if(fieldID == "Armed") {
		memset( &(dataFields.Armed), 0, sizeof(dataFields.Armed));
		memcpy( &(dataFields.Armed), dataIn, sizeof(dataFields.Armed));
	} else if(fieldID == "FlightMode") {
		memset( &(dataFields.FlightMode), 0, sizeof(dataFields.FlightMode));
		memcpy( &(dataFields.FlightMode), dataIn, sizeof(dataFields.FlightMode));
	} else if(fieldID == "FlightModeAssist") {
		memset( &(dataFields.FlightModeAssist), 0, sizeof(dataFields.FlightModeAssist));
		memcpy( &(dataFields.FlightModeAssist), dataIn, sizeof(dataFields.FlightModeAssist));
	} else if(fieldID == "AssistedControlState") {
		memset( &(dataFields.AssistedControlState), 0, sizeof(dataFields.AssistedControlState));
		memcpy( &(dataFields.AssistedControlState), dataIn, sizeof(dataFields.AssistedControlState));
	} else if(fieldID == "AssistedThrottleState") {
		memset( &(dataFields.AssistedThrottleState), 0, sizeof(dataFields.AssistedThrottleState));
		memcpy( &(dataFields.AssistedThrottleState), dataIn, sizeof(dataFields.AssistedThrottleState));
	} else if(fieldID == "ControlChain") {
		memset( &(dataFields.ControlChain), 0, sizeof(dataFields.ControlChain));
		memcpy( &(dataFields.ControlChain), dataIn, sizeof(dataFields.ControlChain));
	}
	return 0;
}

int FlightStatus::UAVObjGetDataField(char *dataOut, const std::string fieldID){
	if(fieldID == "Armed") {
		memcpy( dataOut, &(dataFields.Armed), sizeof(dataFields.Armed));
	} else if(fieldID == "FlightMode") {
		memcpy( dataOut, &(dataFields.FlightMode), sizeof(dataFields.FlightMode));
	} else if(fieldID == "FlightModeAssist") {
		memcpy( dataOut, &(dataFields.FlightModeAssist), sizeof(dataFields.FlightModeAssist));
	} else if(fieldID == "AssistedControlState") {
		memcpy( dataOut, &(dataFields.AssistedControlState), sizeof(dataFields.AssistedControlState));
	} else if(fieldID == "AssistedThrottleState") {
		memcpy( dataOut, &(dataFields.AssistedThrottleState), sizeof(dataFields.AssistedThrottleState));
	} else if(fieldID == "ControlChain") {
		memcpy( dataOut, &(dataFields.ControlChain), sizeof(dataFields.ControlChain));
	}
	return 0;
}

int FlightStatus::UAVObjUnpack(const unsigned char *dataIn){
	memcpy(&dataFields, dataIn, NUMBYTES);
	return 0;
}

int FlightStatus::UAVObjPack(unsigned char *dataOut) {
	memcpy(dataOut, &dataFields, NUMBYTES);
	return 0;
}

unsigned short FlightStatus::UAVObjGetInstance() const {
	return instance;
}
unsigned short FlightStatus::UAVObjGetNumBytes() const {
	return sizeof(dataFields);
}
unsigned short FlightStatus::UAVObjGetNumInstances() const {
	return numInstances;
}

std::string FlightStatus::prettyPrint() {
	std::stringstream ss;
	ss << "\nPrinting object: flightstatus" << std::endl;
	ss << "\tArmed: " << (int)dataFields.Armed << std::endl;
	ss << "\tFlightMode: " << (int)dataFields.FlightMode << std::endl;
	ss << "\tFlightModeAssist: " << (int)dataFields.FlightModeAssist << std::endl;
	ss << "\tAssistedControlState: " << (int)dataFields.AssistedControlState << std::endl;
	ss << "\tAssistedThrottleState: " << (int)dataFields.AssistedThrottleState << std::endl;
	ss << "\tControlChain: " << dataFields.ControlChain << std::endl;

	return ss.str();
}

/*/***/
/* * Initialize object fields with the default values.*/
/* * If a default value is not specified the object fields*/
/* * will be initialized to zero.*/
/* */
/*void FlightStatus::setDefaultFieldValues()*/
/*{*/
/*    data.Armed = 0;
    data.AssistedControlState = 0;
    data.AssistedThrottleState = 0;
*/
/*}*/

/*/***/
/* * Get the object data fields*/
/* */
/*FlightStatus::DataFields FlightStatus::getData()*/
/*{*/
/*    QMutexLocker locker(mutex);*/
/*    return data;*/
/*}*/

/*/***/
/* * Set the object data fields*/
/* */
/*void FlightStatus::setData(const DataFields& data)*/
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

/*void FlightStatus::emitNotifications()*/
/*{*/
/*            //if (data.Armed != oldData.Armed)
            emit ArmedChanged(data.Armed);
        //if (data.FlightMode != oldData.FlightMode)
            emit FlightModeChanged(data.FlightMode);
        //if (data.FlightModeAssist != oldData.FlightModeAssist)
            emit FlightModeAssistChanged(data.FlightModeAssist);
        //if (data.AssistedControlState != oldData.AssistedControlState)
            emit AssistedControlStateChanged(data.AssistedControlState);
        //if (data.AssistedThrottleState != oldData.AssistedThrottleState)
            emit AssistedThrottleStateChanged(data.AssistedThrottleState);
*/
/*}*/

/*/***/
/* * Create a clone of this object, a new instance ID must be specified.*/
/* * Do not use this function directly to create new instances, the*/
/* * UAVObjectManager should be used instead.*/
/* */
/*UAVDataObject *FlightStatus::clone(unsigned int instID)*/
/*{*/
/*    FlightStatus *obj = new FlightStatus();*/
/*    obj->initialize(instID, this->getMetaObject());*/
/*    return obj;*/
/*}*/

/*/***/
/* * Create a clone of this object only to be used to retrieve defaults*/
/* */
/*UAVDataObject *FlightStatus::dirtyClone()*/
/*{*/
/*    FlightStatus *obj = new FlightStatus();*/
/*    return obj;*/
/*}*/

/*/***/
/* * Static function to retrieve an instance of the object.*/
/* */
/*FlightStatus *FlightStatus::GetInstance(UAVObjectManager *objMngr, unsigned int instID)*/
/*{*/
/*    return dynamic_cast<FlightStatus *>(objMngr->getObject(FlightStatus::OBJID, instID));*/
/*}*/

/*unsigned char FlightStatus::getArmed() const
{
   QMutexLocker locker(mutex);
   return data.Armed;
}
void FlightStatus::setArmed(unsigned char value)
{
   mutex->lock();
   bool changed = data.Armed != value;
   data.Armed = value;
   mutex->unlock();
   if (changed) emit ArmedChanged(value);
}

unsigned char FlightStatus::getFlightMode() const
{
   QMutexLocker locker(mutex);
   return data.FlightMode;
}
void FlightStatus::setFlightMode(unsigned char value)
{
   mutex->lock();
   bool changed = data.FlightMode != value;
   data.FlightMode = value;
   mutex->unlock();
   if (changed) emit FlightModeChanged(value);
}

unsigned char FlightStatus::getFlightModeAssist() const
{
   QMutexLocker locker(mutex);
   return data.FlightModeAssist;
}
void FlightStatus::setFlightModeAssist(unsigned char value)
{
   mutex->lock();
   bool changed = data.FlightModeAssist != value;
   data.FlightModeAssist = value;
   mutex->unlock();
   if (changed) emit FlightModeAssistChanged(value);
}

unsigned char FlightStatus::getAssistedControlState() const
{
   QMutexLocker locker(mutex);
   return data.AssistedControlState;
}
void FlightStatus::setAssistedControlState(unsigned char value)
{
   mutex->lock();
   bool changed = data.AssistedControlState != value;
   data.AssistedControlState = value;
   mutex->unlock();
   if (changed) emit AssistedControlStateChanged(value);
}

unsigned char FlightStatus::getAssistedThrottleState() const
{
   QMutexLocker locker(mutex);
   return data.AssistedThrottleState;
}
void FlightStatus::setAssistedThrottleState(unsigned char value)
{
   mutex->lock();
   bool changed = data.AssistedThrottleState != value;
   data.AssistedThrottleState = value;
   mutex->unlock();
   if (changed) emit AssistedThrottleStateChanged(value);
}

unsigned char FlightStatus::getControlChain(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.ControlChain[index];
}
void FlightStatus::setControlChain(unsigned int index, unsigned char value)
{
   mutex->lock();
   bool changed = data.ControlChain[index] != value;
   data.ControlChain[index] = value;
   mutex->unlock();
   if (changed) emit ControlChainChanged(index,value);
}

*/
