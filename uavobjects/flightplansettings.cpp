/**
 ******************************************************************************
 *
 * @file       flightplansettings.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: flightplansettings.xml.
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

#include "flightplansettings.h"

int FlightPlanSettings::numInstances = 0;

/**
 * Constructor
 */
FlightPlanSettings::FlightPlanSettings(UAVObjManager* manager): UAVObject(manager, 0x92E9FF76, "FlightPlanSettings", "Settings for the flight plan module, control the execution of the script", "Navigation", 1, 1, ACCESS_READWRITE, ACCESS_READWRITE, 1, 1, UPDATEMODE_ONCHANGE, UPDATEMODE_ONCHANGE, 0, 0, 0)
{

}

int FlightPlanSettings::UAVObjSetDataField(const char *dataIn, const std::string fieldID){
	if(fieldID == "Test") {
		memset( &(dataFields.Test), 0, sizeof(dataFields.Test));
		memcpy( &(dataFields.Test), dataIn, sizeof(dataFields.Test));
	}
	return 0;
}

int FlightPlanSettings::UAVObjGetDataField(char *dataOut, const std::string fieldID){
	if(fieldID == "Test") {
		memcpy( dataOut, &(dataFields.Test), sizeof(dataFields.Test));
	}
	return 0;
}

int FlightPlanSettings::UAVObjUnpack(const unsigned char *dataIn){
	memcpy(&dataFields, dataIn, NUMBYTES);
	return 0;
}

int FlightPlanSettings::UAVObjPack(unsigned char *dataOut) {
	memcpy(dataOut, &dataFields, NUMBYTES);
	return 0;
}

unsigned short FlightPlanSettings::UAVObjGetInstance() const {
	return instance;
}
unsigned short FlightPlanSettings::UAVObjGetNumBytes() const {
	return sizeof(dataFields);
}
unsigned short FlightPlanSettings::UAVObjGetNumInstances() const {
	return numInstances;
}

std::string FlightPlanSettings::prettyPrint() {
	std::stringstream ss;
	ss << "\nPrinting object: flightplansettings" << std::endl;
	ss << "\tTest: " << dataFields.Test << std::endl;

	return ss.str();
}

/*/***/
/* * Initialize object fields with the default values.*/
/* * If a default value is not specified the object fields*/
/* * will be initialized to zero.*/
/* */
/*void FlightPlanSettings::setDefaultFieldValues()*/
/*{*/
/*    data.Test = 0;
*/
/*}*/

/*/***/
/* * Get the object data fields*/
/* */
/*FlightPlanSettings::DataFields FlightPlanSettings::getData()*/
/*{*/
/*    QMutexLocker locker(mutex);*/
/*    return data;*/
/*}*/

/*/***/
/* * Set the object data fields*/
/* */
/*void FlightPlanSettings::setData(const DataFields& data)*/
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

/*void FlightPlanSettings::emitNotifications()*/
/*{*/
/*            //if (data.Test != oldData.Test)
            emit TestChanged(data.Test);
*/
/*}*/

/*/***/
/* * Create a clone of this object, a new instance ID must be specified.*/
/* * Do not use this function directly to create new instances, the*/
/* * UAVObjectManager should be used instead.*/
/* */
/*UAVDataObject *FlightPlanSettings::clone(unsigned int instID)*/
/*{*/
/*    FlightPlanSettings *obj = new FlightPlanSettings();*/
/*    obj->initialize(instID, this->getMetaObject());*/
/*    return obj;*/
/*}*/

/*/***/
/* * Create a clone of this object only to be used to retrieve defaults*/
/* */
/*UAVDataObject *FlightPlanSettings::dirtyClone()*/
/*{*/
/*    FlightPlanSettings *obj = new FlightPlanSettings();*/
/*    return obj;*/
/*}*/

/*/***/
/* * Static function to retrieve an instance of the object.*/
/* */
/*FlightPlanSettings *FlightPlanSettings::GetInstance(UAVObjectManager *objMngr, unsigned int instID)*/
/*{*/
/*    return dynamic_cast<FlightPlanSettings *>(objMngr->getObject(FlightPlanSettings::OBJID, instID));*/
/*}*/

/*float FlightPlanSettings::getTest() const
{
   QMutexLocker locker(mutex);
   return data.Test;
}
void FlightPlanSettings::setTest(float value)
{
   mutex->lock();
   bool changed = data.Test != value;
   data.Test = value;
   mutex->unlock();
   if (changed) emit TestChanged(value);
}

*/
