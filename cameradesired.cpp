/**
 ******************************************************************************
 *
 * @file       cameradesired.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: cameradesired.xml.
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

#include "cameradesired.h"

int CameraDesired::numInstances = 0;

/**
 * Constructor
 */
CameraDesired::CameraDesired(UAVObjManager* manager): UAVObject(manager, 0x6440104E, "CameraDesired", "Desired camera outputs.  Comes from @ref CameraStabilization module.", "Control", 1, 0, ACCESS_READWRITE, ACCESS_READWRITE, 0, 0, UPDATEMODE_PERIODIC, UPDATEMODE_MANUAL, 1000, 0, 0)
{

}

int CameraDesired::UAVObjSetDataField(const char *dataIn, const std::string fieldID){
	if(fieldID == "RollOrServo1") {
		memset( &(dataFields.RollOrServo1), 0, sizeof(dataFields.RollOrServo1));
		memcpy( &(dataFields.RollOrServo1), dataIn, sizeof(dataFields.RollOrServo1));
	} else if(fieldID == "PitchOrServo2") {
		memset( &(dataFields.PitchOrServo2), 0, sizeof(dataFields.PitchOrServo2));
		memcpy( &(dataFields.PitchOrServo2), dataIn, sizeof(dataFields.PitchOrServo2));
	} else if(fieldID == "Yaw") {
		memset( &(dataFields.Yaw), 0, sizeof(dataFields.Yaw));
		memcpy( &(dataFields.Yaw), dataIn, sizeof(dataFields.Yaw));
	}
	return 0;
}

int CameraDesired::UAVObjGetDataField(char *dataOut, const std::string fieldID){
	if(fieldID == "RollOrServo1") {
		memcpy( dataOut, &(dataFields.RollOrServo1), sizeof(dataFields.RollOrServo1));
	} else if(fieldID == "PitchOrServo2") {
		memcpy( dataOut, &(dataFields.PitchOrServo2), sizeof(dataFields.PitchOrServo2));
	} else if(fieldID == "Yaw") {
		memcpy( dataOut, &(dataFields.Yaw), sizeof(dataFields.Yaw));
	}
	return 0;
}

int CameraDesired::UAVObjUnpack(const unsigned char *dataIn){
	memcpy(&dataFields, dataIn, NUMBYTES);
	return 0;
}

int CameraDesired::UAVObjPack(unsigned char *dataOut) {
	memcpy(dataOut, &dataFields, NUMBYTES);
	return 0;
}

unsigned short CameraDesired::UAVObjGetInstance() const {
	return instance;
}
unsigned short CameraDesired::UAVObjGetNumBytes() const {
	return sizeof(dataFields);
}
unsigned short CameraDesired::UAVObjGetNumInstances() const {
	return numInstances;
}

std::string CameraDesired::prettyPrint() {
	std::stringstream ss;
	ss << "\nPrinting object: cameradesired" << std::endl;
	ss << "\tRollOrServo1: " << dataFields.RollOrServo1 << std::endl;
	ss << "\tPitchOrServo2: " << dataFields.PitchOrServo2 << std::endl;
	ss << "\tYaw: " << dataFields.Yaw << std::endl;

	return ss.str();
}

/*/***/
/* * Initialize object fields with the default values.*/
/* * If a default value is not specified the object fields*/
/* * will be initialized to zero.*/
/* */
/*void CameraDesired::setDefaultFieldValues()*/
/*{*/
/**/
/*}*/

/*/***/
/* * Get the object data fields*/
/* */
/*CameraDesired::DataFields CameraDesired::getData()*/
/*{*/
/*    QMutexLocker locker(mutex);*/
/*    return data;*/
/*}*/

/*/***/
/* * Set the object data fields*/
/* */
/*void CameraDesired::setData(const DataFields& data)*/
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

/*void CameraDesired::emitNotifications()*/
/*{*/
/*            //if (data.RollOrServo1 != oldData.RollOrServo1)
            emit RollOrServo1Changed(data.RollOrServo1);
        //if (data.PitchOrServo2 != oldData.PitchOrServo2)
            emit PitchOrServo2Changed(data.PitchOrServo2);
        //if (data.Yaw != oldData.Yaw)
            emit YawChanged(data.Yaw);
*/
/*}*/

/*/***/
/* * Create a clone of this object, a new instance ID must be specified.*/
/* * Do not use this function directly to create new instances, the*/
/* * UAVObjectManager should be used instead.*/
/* */
/*UAVDataObject *CameraDesired::clone(unsigned int instID)*/
/*{*/
/*    CameraDesired *obj = new CameraDesired();*/
/*    obj->initialize(instID, this->getMetaObject());*/
/*    return obj;*/
/*}*/

/*/***/
/* * Create a clone of this object only to be used to retrieve defaults*/
/* */
/*UAVDataObject *CameraDesired::dirtyClone()*/
/*{*/
/*    CameraDesired *obj = new CameraDesired();*/
/*    return obj;*/
/*}*/

/*/***/
/* * Static function to retrieve an instance of the object.*/
/* */
/*CameraDesired *CameraDesired::GetInstance(UAVObjectManager *objMngr, unsigned int instID)*/
/*{*/
/*    return dynamic_cast<CameraDesired *>(objMngr->getObject(CameraDesired::OBJID, instID));*/
/*}*/

/*float CameraDesired::getRollOrServo1() const
{
   QMutexLocker locker(mutex);
   return data.RollOrServo1;
}
void CameraDesired::setRollOrServo1(float value)
{
   mutex->lock();
   bool changed = data.RollOrServo1 != value;
   data.RollOrServo1 = value;
   mutex->unlock();
   if (changed) emit RollOrServo1Changed(value);
}

float CameraDesired::getPitchOrServo2() const
{
   QMutexLocker locker(mutex);
   return data.PitchOrServo2;
}
void CameraDesired::setPitchOrServo2(float value)
{
   mutex->lock();
   bool changed = data.PitchOrServo2 != value;
   data.PitchOrServo2 = value;
   mutex->unlock();
   if (changed) emit PitchOrServo2Changed(value);
}

float CameraDesired::getYaw() const
{
   QMutexLocker locker(mutex);
   return data.Yaw;
}
void CameraDesired::setYaw(float value)
{
   mutex->lock();
   bool changed = data.Yaw != value;
   data.Yaw = value;
   mutex->unlock();
   if (changed) emit YawChanged(value);
}

*/
