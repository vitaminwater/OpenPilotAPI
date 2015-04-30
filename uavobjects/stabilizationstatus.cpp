/**
 ******************************************************************************
 *
 * @file       stabilizationstatus.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: stabilizationstatus.xml.
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

#include "stabilizationstatus.h"

int StabilizationStatus::numInstances = 0;

/**
 * Constructor
 */
StabilizationStatus::StabilizationStatus(UAVObjManager* manager): UAVObject(manager, 0x38EAB692, "StabilizationStatus", "Contains status information to control submodules for stabilization.", "Control", 1, 0, ACCESS_READWRITE, ACCESS_READWRITE, 0, 0, UPDATEMODE_PERIODIC, UPDATEMODE_MANUAL, 5000, 0, 0)
{

}

int StabilizationStatus::UAVObjSetDataField(const char *dataIn, const std::string fieldID){
	if(fieldID == "OuterLoop") {
		memset( &(dataFields.OuterLoop), 0, sizeof(dataFields.OuterLoop));
		memcpy( &(dataFields.OuterLoop), dataIn, sizeof(dataFields.OuterLoop));
	} else if(fieldID == "InnerLoop") {
		memset( &(dataFields.InnerLoop), 0, sizeof(dataFields.InnerLoop));
		memcpy( &(dataFields.InnerLoop), dataIn, sizeof(dataFields.InnerLoop));
	}
	return 0;
}

int StabilizationStatus::UAVObjGetDataField(char *dataOut, const std::string fieldID){
	if(fieldID == "OuterLoop") {
		memcpy( dataOut, &(dataFields.OuterLoop), sizeof(dataFields.OuterLoop));
	} else if(fieldID == "InnerLoop") {
		memcpy( dataOut, &(dataFields.InnerLoop), sizeof(dataFields.InnerLoop));
	}
	return 0;
}

int StabilizationStatus::UAVObjUnpack(const unsigned char *dataIn){
	memcpy(&dataFields, dataIn, NUMBYTES);
	return 0;
}

int StabilizationStatus::UAVObjPack(unsigned char *dataOut) {
	memcpy(dataOut, &dataFields, NUMBYTES);
	return 0;
}

unsigned short StabilizationStatus::UAVObjGetInstance() const {
	return instance;
}
unsigned short StabilizationStatus::UAVObjGetNumBytes() const {
	return sizeof(dataFields);
}
unsigned short StabilizationStatus::UAVObjGetNumInstances() const {
	return numInstances;
}

std::string StabilizationStatus::prettyPrint() {
	std::stringstream ss;
	ss << "\nPrinting object: stabilizationstatus" << std::endl;
	ss << "\tOuterLoop: " << dataFields.OuterLoop << std::endl;
	ss << "\tInnerLoop: " << dataFields.InnerLoop << std::endl;

	return ss.str();
}

/*/***/
/* * Initialize object fields with the default values.*/
/* * If a default value is not specified the object fields*/
/* * will be initialized to zero.*/
/* */
/*void StabilizationStatus::setDefaultFieldValues()*/
/*{*/
/**/
/*}*/

/*/***/
/* * Get the object data fields*/
/* */
/*StabilizationStatus::DataFields StabilizationStatus::getData()*/
/*{*/
/*    QMutexLocker locker(mutex);*/
/*    return data;*/
/*}*/

/*/***/
/* * Set the object data fields*/
/* */
/*void StabilizationStatus::setData(const DataFields& data)*/
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

/*void StabilizationStatus::emitNotifications()*/
/*{*/
/*    */
/*}*/

/*/***/
/* * Create a clone of this object, a new instance ID must be specified.*/
/* * Do not use this function directly to create new instances, the*/
/* * UAVObjectManager should be used instead.*/
/* */
/*UAVDataObject *StabilizationStatus::clone(unsigned int instID)*/
/*{*/
/*    StabilizationStatus *obj = new StabilizationStatus();*/
/*    obj->initialize(instID, this->getMetaObject());*/
/*    return obj;*/
/*}*/

/*/***/
/* * Create a clone of this object only to be used to retrieve defaults*/
/* */
/*UAVDataObject *StabilizationStatus::dirtyClone()*/
/*{*/
/*    StabilizationStatus *obj = new StabilizationStatus();*/
/*    return obj;*/
/*}*/

/*/***/
/* * Static function to retrieve an instance of the object.*/
/* */
/*StabilizationStatus *StabilizationStatus::GetInstance(UAVObjectManager *objMngr, unsigned int instID)*/
/*{*/
/*    return dynamic_cast<StabilizationStatus *>(objMngr->getObject(StabilizationStatus::OBJID, instID));*/
/*}*/

/*unsigned char StabilizationStatus::getOuterLoop(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.OuterLoop[index];
}
void StabilizationStatus::setOuterLoop(unsigned int index, unsigned char value)
{
   mutex->lock();
   bool changed = data.OuterLoop[index] != value;
   data.OuterLoop[index] = value;
   mutex->unlock();
   if (changed) emit OuterLoopChanged(index,value);
}

unsigned char StabilizationStatus::getInnerLoop(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.InnerLoop[index];
}
void StabilizationStatus::setInnerLoop(unsigned int index, unsigned char value)
{
   mutex->lock();
   bool changed = data.InnerLoop[index] != value;
   data.InnerLoop[index] = value;
   mutex->unlock();
   if (changed) emit InnerLoopChanged(index,value);
}

*/
