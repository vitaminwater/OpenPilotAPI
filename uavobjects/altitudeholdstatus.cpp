/**
 ******************************************************************************
 *
 * @file       altitudeholdstatus.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: altitudeholdstatus.xml.
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

#include "altitudeholdstatus.h"

int AltitudeHoldStatus::numInstances = 0;

/**
 * Constructor
 */
AltitudeHoldStatus::AltitudeHoldStatus(UAVObjManager* manager): UAVObject(manager, 0x97AFCEC6, "AltitudeHoldStatus", "Status Data from Altitude Hold Control Loops", "Control", 1, 0, ACCESS_READWRITE, ACCESS_READWRITE, 0, 0, UPDATEMODE_PERIODIC, UPDATEMODE_MANUAL, 1000, 0, 0)
{

}

int AltitudeHoldStatus::UAVObjSetDataField(const char *dataIn, const std::string fieldID){
	if(fieldID == "VelocityDesired") {
		memset( &(dataFields.VelocityDesired), 0, sizeof(dataFields.VelocityDesired));
		memcpy( &(dataFields.VelocityDesired), dataIn, sizeof(dataFields.VelocityDesired));
	}
	return 0;
}

int AltitudeHoldStatus::UAVObjGetDataField(char *dataOut, const std::string fieldID){
	if(fieldID == "VelocityDesired") {
		memcpy( dataOut, &(dataFields.VelocityDesired), sizeof(dataFields.VelocityDesired));
	}
	return 0;
}

int AltitudeHoldStatus::UAVObjUnpack(const unsigned char *dataIn){
	memcpy(&dataFields, dataIn, NUMBYTES);
	return 0;
}

int AltitudeHoldStatus::UAVObjPack(unsigned char *dataOut) {
	memcpy(dataOut, &dataFields, NUMBYTES);
	return 0;
}

unsigned short AltitudeHoldStatus::UAVObjGetInstance() const {
	return instance;
}
unsigned short AltitudeHoldStatus::UAVObjGetNumBytes() const {
	return sizeof(dataFields);
}
unsigned short AltitudeHoldStatus::UAVObjGetNumInstances() const {
	return numInstances;
}

std::string AltitudeHoldStatus::prettyPrint() {
	std::stringstream ss;
	ss << "\nPrinting object: altitudeholdstatus" << std::endl;
	ss << "\tVelocityDesired: " << dataFields.VelocityDesired << std::endl;

	return ss.str();
}

/*/***/
/* * Initialize object fields with the default values.*/
/* * If a default value is not specified the object fields*/
/* * will be initialized to zero.*/
/* */
/*void AltitudeHoldStatus::setDefaultFieldValues()*/
/*{*/
/**/
/*}*/

/*/***/
/* * Get the object data fields*/
/* */
/*AltitudeHoldStatus::DataFields AltitudeHoldStatus::getData()*/
/*{*/
/*    QMutexLocker locker(mutex);*/
/*    return data;*/
/*}*/

/*/***/
/* * Set the object data fields*/
/* */
/*void AltitudeHoldStatus::setData(const DataFields& data)*/
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

/*void AltitudeHoldStatus::emitNotifications()*/
/*{*/
/*            //if (data.VelocityDesired != oldData.VelocityDesired)
            emit VelocityDesiredChanged(data.VelocityDesired);
*/
/*}*/

/*/***/
/* * Create a clone of this object, a new instance ID must be specified.*/
/* * Do not use this function directly to create new instances, the*/
/* * UAVObjectManager should be used instead.*/
/* */
/*UAVDataObject *AltitudeHoldStatus::clone(unsigned int instID)*/
/*{*/
/*    AltitudeHoldStatus *obj = new AltitudeHoldStatus();*/
/*    obj->initialize(instID, this->getMetaObject());*/
/*    return obj;*/
/*}*/

/*/***/
/* * Create a clone of this object only to be used to retrieve defaults*/
/* */
/*UAVDataObject *AltitudeHoldStatus::dirtyClone()*/
/*{*/
/*    AltitudeHoldStatus *obj = new AltitudeHoldStatus();*/
/*    return obj;*/
/*}*/

/*/***/
/* * Static function to retrieve an instance of the object.*/
/* */
/*AltitudeHoldStatus *AltitudeHoldStatus::GetInstance(UAVObjectManager *objMngr, unsigned int instID)*/
/*{*/
/*    return dynamic_cast<AltitudeHoldStatus *>(objMngr->getObject(AltitudeHoldStatus::OBJID, instID));*/
/*}*/

/*float AltitudeHoldStatus::getVelocityDesired() const
{
   QMutexLocker locker(mutex);
   return data.VelocityDesired;
}
void AltitudeHoldStatus::setVelocityDesired(float value)
{
   mutex->lock();
   bool changed = data.VelocityDesired != value;
   data.VelocityDesired = value;
   mutex->unlock();
   if (changed) emit VelocityDesiredChanged(value);
}

*/
