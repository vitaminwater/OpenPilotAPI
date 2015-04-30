/**
 ******************************************************************************
 *
 * @file       flightplancontrol.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: flightplancontrol.xml.
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

#include "flightplancontrol.h"

int FlightPlanControl::numInstances = 0;

/**
 * Constructor
 */
FlightPlanControl::FlightPlanControl(UAVObjManager* manager): UAVObject(manager, 0x53E3F180, "FlightPlanControl", "Control the flight plan script", "Navigation", 1, 0, ACCESS_READWRITE, ACCESS_READWRITE, 1, 1, UPDATEMODE_MANUAL, UPDATEMODE_MANUAL, 0, 0, 0)
{

}

int FlightPlanControl::UAVObjSetDataField(const char *dataIn, const std::string fieldID){
	if(fieldID == "Command") {
		memset( &(dataFields.Command), 0, sizeof(dataFields.Command));
		memcpy( &(dataFields.Command), dataIn, sizeof(dataFields.Command));
	}
	return 0;
}

int FlightPlanControl::UAVObjGetDataField(char *dataOut, const std::string fieldID){
	if(fieldID == "Command") {
		memcpy( dataOut, &(dataFields.Command), sizeof(dataFields.Command));
	}
	return 0;
}

int FlightPlanControl::UAVObjUnpack(const unsigned char *dataIn){
	memcpy(&dataFields, dataIn, NUMBYTES);
	return 0;
}

int FlightPlanControl::UAVObjPack(unsigned char *dataOut) {
	memcpy(dataOut, &dataFields, NUMBYTES);
	return 0;
}

unsigned short FlightPlanControl::UAVObjGetInstance() const {
	return instance;
}
unsigned short FlightPlanControl::UAVObjGetNumBytes() const {
	return sizeof(dataFields);
}
unsigned short FlightPlanControl::UAVObjGetNumInstances() const {
	return numInstances;
}

std::string FlightPlanControl::prettyPrint() {
	std::stringstream ss;
	ss << "\nPrinting object: flightplancontrol" << std::endl;
	ss << "\tCommand: " << dataFields.Command << std::endl;

	return ss.str();
}

/*/***/
/* * Initialize object fields with the default values.*/
/* * If a default value is not specified the object fields*/
/* * will be initialized to zero.*/
/* */
/*void FlightPlanControl::setDefaultFieldValues()*/
/*{*/
/*    data.Command = 0;
*/
/*}*/

/*/***/
/* * Get the object data fields*/
/* */
/*FlightPlanControl::DataFields FlightPlanControl::getData()*/
/*{*/
/*    QMutexLocker locker(mutex);*/
/*    return data;*/
/*}*/

/*/***/
/* * Set the object data fields*/
/* */
/*void FlightPlanControl::setData(const DataFields& data)*/
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

/*void FlightPlanControl::emitNotifications()*/
/*{*/
/*            //if (data.Command != oldData.Command)
            emit CommandChanged(data.Command);
*/
/*}*/

/*/***/
/* * Create a clone of this object, a new instance ID must be specified.*/
/* * Do not use this function directly to create new instances, the*/
/* * UAVObjectManager should be used instead.*/
/* */
/*UAVDataObject *FlightPlanControl::clone(unsigned int instID)*/
/*{*/
/*    FlightPlanControl *obj = new FlightPlanControl();*/
/*    obj->initialize(instID, this->getMetaObject());*/
/*    return obj;*/
/*}*/

/*/***/
/* * Create a clone of this object only to be used to retrieve defaults*/
/* */
/*UAVDataObject *FlightPlanControl::dirtyClone()*/
/*{*/
/*    FlightPlanControl *obj = new FlightPlanControl();*/
/*    return obj;*/
/*}*/

/*/***/
/* * Static function to retrieve an instance of the object.*/
/* */
/*FlightPlanControl *FlightPlanControl::GetInstance(UAVObjectManager *objMngr, unsigned int instID)*/
/*{*/
/*    return dynamic_cast<FlightPlanControl *>(objMngr->getObject(FlightPlanControl::OBJID, instID));*/
/*}*/

/*unsigned char FlightPlanControl::getCommand() const
{
   QMutexLocker locker(mutex);
   return data.Command;
}
void FlightPlanControl::setCommand(unsigned char value)
{
   mutex->lock();
   bool changed = data.Command != value;
   data.Command = value;
   mutex->unlock();
   if (changed) emit CommandChanged(value);
}

*/
