/**
 ******************************************************************************
 *
 * @file       ekfstatevariance.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: ekfstatevariance.xml.
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

#include "ekfstatevariance.h"

int EKFStateVariance::numInstances = 0;

/**
 * Constructor
 */
EKFStateVariance::EKFStateVariance(UAVObjManager* manager): UAVObject(manager, 0x1EB385E4, "EKFStateVariance", "Extended Kalman Filter state covariance", "State", 1, 0, ACCESS_READWRITE, ACCESS_READWRITE, 0, 0, UPDATEMODE_PERIODIC, UPDATEMODE_MANUAL, 10000, 0, 0)
{

}

int EKFStateVariance::UAVObjSetDataField(const char *dataIn, const std::string fieldID){
	if(fieldID == "P") {
		memset( &(dataFields.P), 0, sizeof(dataFields.P));
		memcpy( &(dataFields.P), dataIn, sizeof(dataFields.P));
	}
	return 0;
}

int EKFStateVariance::UAVObjGetDataField(char *dataOut, const std::string fieldID){
	if(fieldID == "P") {
		memcpy( dataOut, &(dataFields.P), sizeof(dataFields.P));
	}
	return 0;
}

int EKFStateVariance::UAVObjUnpack(const unsigned char *dataIn){
	memcpy(&dataFields, dataIn, NUMBYTES);
	return 0;
}

int EKFStateVariance::UAVObjPack(unsigned char *dataOut) {
	memcpy(dataOut, &dataFields, NUMBYTES);
	return 0;
}

unsigned short EKFStateVariance::UAVObjGetInstance() const {
	return instance;
}
unsigned short EKFStateVariance::UAVObjGetNumBytes() const {
	return sizeof(dataFields);
}
unsigned short EKFStateVariance::UAVObjGetNumInstances() const {
	return numInstances;
}

std::string EKFStateVariance::prettyPrint() {
	std::stringstream ss;
	ss << "\nPrinting object: ekfstatevariance" << std::endl;
	ss << "\tP: " << dataFields.P << std::endl;

	return ss.str();
}

/*/***/
/* * Initialize object fields with the default values.*/
/* * If a default value is not specified the object fields*/
/* * will be initialized to zero.*/
/* */
/*void EKFStateVariance::setDefaultFieldValues()*/
/*{*/
/**/
/*}*/

/*/***/
/* * Get the object data fields*/
/* */
/*EKFStateVariance::DataFields EKFStateVariance::getData()*/
/*{*/
/*    QMutexLocker locker(mutex);*/
/*    return data;*/
/*}*/

/*/***/
/* * Set the object data fields*/
/* */
/*void EKFStateVariance::setData(const DataFields& data)*/
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

/*void EKFStateVariance::emitNotifications()*/
/*{*/
/*    */
/*}*/

/*/***/
/* * Create a clone of this object, a new instance ID must be specified.*/
/* * Do not use this function directly to create new instances, the*/
/* * UAVObjectManager should be used instead.*/
/* */
/*UAVDataObject *EKFStateVariance::clone(unsigned int instID)*/
/*{*/
/*    EKFStateVariance *obj = new EKFStateVariance();*/
/*    obj->initialize(instID, this->getMetaObject());*/
/*    return obj;*/
/*}*/

/*/***/
/* * Create a clone of this object only to be used to retrieve defaults*/
/* */
/*UAVDataObject *EKFStateVariance::dirtyClone()*/
/*{*/
/*    EKFStateVariance *obj = new EKFStateVariance();*/
/*    return obj;*/
/*}*/

/*/***/
/* * Static function to retrieve an instance of the object.*/
/* */
/*EKFStateVariance *EKFStateVariance::GetInstance(UAVObjectManager *objMngr, unsigned int instID)*/
/*{*/
/*    return dynamic_cast<EKFStateVariance *>(objMngr->getObject(EKFStateVariance::OBJID, instID));*/
/*}*/

/*float EKFStateVariance::getP(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.P[index];
}
void EKFStateVariance::setP(unsigned int index, float value)
{
   mutex->lock();
   bool changed = data.P[index] != value;
   data.P[index] = value;
   mutex->unlock();
   if (changed) emit PChanged(index,value);
}

*/
