/**
 ******************************************************************************
 *
 * @file       airspeedstate.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: airspeedstate.xml.
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

#include "airspeedstate.h"

int AirspeedState::numInstances = 0;

/**
 * Constructor
 */
AirspeedState::AirspeedState(UAVObjManager* manager): UAVObject(manager, 0xC7009F28, "AirspeedState", "UAVO for true airspeed and calibrated airspeed state estimation.", "State", 1, 0, ACCESS_READWRITE, ACCESS_READWRITE, 0, 0, UPDATEMODE_PERIODIC, UPDATEMODE_MANUAL, 1000, 0, 0)
{

}

int AirspeedState::UAVObjSetDataField(const char *dataIn, const std::string fieldID){
	if(fieldID == "CalibratedAirspeed") {
		memset( &(dataFields.CalibratedAirspeed), 0, sizeof(dataFields.CalibratedAirspeed));
		memcpy( &(dataFields.CalibratedAirspeed), dataIn, sizeof(dataFields.CalibratedAirspeed));
	} else if(fieldID == "TrueAirspeed") {
		memset( &(dataFields.TrueAirspeed), 0, sizeof(dataFields.TrueAirspeed));
		memcpy( &(dataFields.TrueAirspeed), dataIn, sizeof(dataFields.TrueAirspeed));
	}
	return 0;
}

int AirspeedState::UAVObjGetDataField(char *dataOut, const std::string fieldID){
	if(fieldID == "CalibratedAirspeed") {
		memcpy( dataOut, &(dataFields.CalibratedAirspeed), sizeof(dataFields.CalibratedAirspeed));
	} else if(fieldID == "TrueAirspeed") {
		memcpy( dataOut, &(dataFields.TrueAirspeed), sizeof(dataFields.TrueAirspeed));
	}
	return 0;
}

int AirspeedState::UAVObjUnpack(const unsigned char *dataIn){
	memcpy(&dataFields, dataIn, NUMBYTES);
	return 0;
}

int AirspeedState::UAVObjPack(unsigned char *dataOut) {
	memcpy(dataOut, &dataFields, NUMBYTES);
	return 0;
}

unsigned short AirspeedState::UAVObjGetInstance() const {
	return instance;
}
unsigned short AirspeedState::UAVObjGetNumBytes() const {
	return sizeof(dataFields);
}
unsigned short AirspeedState::UAVObjGetNumInstances() const {
	return numInstances;
}

std::string AirspeedState::prettyPrint() {
	std::stringstream ss;
	ss << "\nPrinting object: airspeedstate" << std::endl;
	ss << "\tCalibratedAirspeed: " << dataFields.CalibratedAirspeed << std::endl;
	ss << "\tTrueAirspeed: " << dataFields.TrueAirspeed << std::endl;

	return ss.str();
}

/*/***/
/* * Initialize object fields with the default values.*/
/* * If a default value is not specified the object fields*/
/* * will be initialized to zero.*/
/* */
/*void AirspeedState::setDefaultFieldValues()*/
/*{*/
/**/
/*}*/

/*/***/
/* * Get the object data fields*/
/* */
/*AirspeedState::DataFields AirspeedState::getData()*/
/*{*/
/*    QMutexLocker locker(mutex);*/
/*    return data;*/
/*}*/

/*/***/
/* * Set the object data fields*/
/* */
/*void AirspeedState::setData(const DataFields& data)*/
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

/*void AirspeedState::emitNotifications()*/
/*{*/
/*            //if (data.CalibratedAirspeed != oldData.CalibratedAirspeed)
            emit CalibratedAirspeedChanged(data.CalibratedAirspeed);
        //if (data.TrueAirspeed != oldData.TrueAirspeed)
            emit TrueAirspeedChanged(data.TrueAirspeed);
*/
/*}*/

/*/***/
/* * Create a clone of this object, a new instance ID must be specified.*/
/* * Do not use this function directly to create new instances, the*/
/* * UAVObjectManager should be used instead.*/
/* */
/*UAVDataObject *AirspeedState::clone(unsigned int instID)*/
/*{*/
/*    AirspeedState *obj = new AirspeedState();*/
/*    obj->initialize(instID, this->getMetaObject());*/
/*    return obj;*/
/*}*/

/*/***/
/* * Create a clone of this object only to be used to retrieve defaults*/
/* */
/*UAVDataObject *AirspeedState::dirtyClone()*/
/*{*/
/*    AirspeedState *obj = new AirspeedState();*/
/*    return obj;*/
/*}*/

/*/***/
/* * Static function to retrieve an instance of the object.*/
/* */
/*AirspeedState *AirspeedState::GetInstance(UAVObjectManager *objMngr, unsigned int instID)*/
/*{*/
/*    return dynamic_cast<AirspeedState *>(objMngr->getObject(AirspeedState::OBJID, instID));*/
/*}*/

/*float AirspeedState::getCalibratedAirspeed() const
{
   QMutexLocker locker(mutex);
   return data.CalibratedAirspeed;
}
void AirspeedState::setCalibratedAirspeed(float value)
{
   mutex->lock();
   bool changed = data.CalibratedAirspeed != value;
   data.CalibratedAirspeed = value;
   mutex->unlock();
   if (changed) emit CalibratedAirspeedChanged(value);
}

float AirspeedState::getTrueAirspeed() const
{
   QMutexLocker locker(mutex);
   return data.TrueAirspeed;
}
void AirspeedState::setTrueAirspeed(float value)
{
   mutex->lock();
   bool changed = data.TrueAirspeed != value;
   data.TrueAirspeed = value;
   mutex->unlock();
   if (changed) emit TrueAirspeedChanged(value);
}

*/
