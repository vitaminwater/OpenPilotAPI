/**
 ******************************************************************************
 *
 * @file       ekfconfiguration.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: ekfconfiguration.xml.
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

#include "ekfconfiguration.h"

int EKFConfiguration::numInstances = 0;

/**
 * Constructor
 */
EKFConfiguration::EKFConfiguration(UAVObjManager* manager): UAVObject(manager, 0x5E91213C, "EKFConfiguration", "Extended Kalman Filter initialisation", "State", 1, 1, ACCESS_READWRITE, ACCESS_READWRITE, 1, 1, UPDATEMODE_ONCHANGE, UPDATEMODE_ONCHANGE, 0, 0, 0)
{

}

int EKFConfiguration::UAVObjSetDataField(const char *dataIn, const std::string fieldID){
	if(fieldID == "P") {
		memset( &(dataFields.P), 0, sizeof(dataFields.P));
		memcpy( &(dataFields.P), dataIn, sizeof(dataFields.P));
	} else if(fieldID == "Q") {
		memset( &(dataFields.Q), 0, sizeof(dataFields.Q));
		memcpy( &(dataFields.Q), dataIn, sizeof(dataFields.Q));
	} else if(fieldID == "R") {
		memset( &(dataFields.R), 0, sizeof(dataFields.R));
		memcpy( &(dataFields.R), dataIn, sizeof(dataFields.R));
	} else if(fieldID == "FakeR") {
		memset( &(dataFields.FakeR), 0, sizeof(dataFields.FakeR));
		memcpy( &(dataFields.FakeR), dataIn, sizeof(dataFields.FakeR));
	}
	return 0;
}

int EKFConfiguration::UAVObjGetDataField(char *dataOut, const std::string fieldID){
	if(fieldID == "P") {
		memcpy( dataOut, &(dataFields.P), sizeof(dataFields.P));
	} else if(fieldID == "Q") {
		memcpy( dataOut, &(dataFields.Q), sizeof(dataFields.Q));
	} else if(fieldID == "R") {
		memcpy( dataOut, &(dataFields.R), sizeof(dataFields.R));
	} else if(fieldID == "FakeR") {
		memcpy( dataOut, &(dataFields.FakeR), sizeof(dataFields.FakeR));
	}
	return 0;
}

int EKFConfiguration::UAVObjUnpack(const unsigned char *dataIn){
	memcpy(&dataFields, dataIn, NUMBYTES);
	return 0;
}

int EKFConfiguration::UAVObjPack(unsigned char *dataOut) {
	memcpy(dataOut, &dataFields, NUMBYTES);
	return 0;
}

unsigned short EKFConfiguration::UAVObjGetInstance() const {
	return instance;
}
unsigned short EKFConfiguration::UAVObjGetNumBytes() const {
	return sizeof(dataFields);
}
unsigned short EKFConfiguration::UAVObjGetNumInstances() const {
	return numInstances;
}

std::string EKFConfiguration::prettyPrint() {
	std::stringstream ss;
	ss << "\nPrinting object: ekfconfiguration" << std::endl;
	ss << "\tP: " << dataFields.P << std::endl;
	ss << "\tQ: " << dataFields.Q << std::endl;
	ss << "\tR: " << dataFields.R << std::endl;
	ss << "\tFakeR: " << dataFields.FakeR << std::endl;

	return ss.str();
}

/*/***/
/* * Initialize object fields with the default values.*/
/* * If a default value is not specified the object fields*/
/* * will be initialized to zero.*/
/* */
/*void EKFConfiguration::setDefaultFieldValues()*/
/*{*/
/*    data.P[0] = 10;
    data.P[1] = 10;
    data.P[2] = 10;
    data.P[3] = 1;
    data.P[4] = 1;
    data.P[5] = 1;
    data.P[6] = 0.007;
    data.P[7] = 0.007;
    data.P[8] = 0.007;
    data.P[9] = 0.007;
    data.P[10] = 1e-06;
    data.P[11] = 1e-06;
    data.P[12] = 1e-06;
    data.Q[0] = 0.01;
    data.Q[1] = 0.01;
    data.Q[2] = 0.01;
    data.Q[3] = 0.01;
    data.Q[4] = 0.01;
    data.Q[5] = 0.01;
    data.Q[6] = 1e-06;
    data.Q[7] = 1e-06;
    data.Q[8] = 1e-06;
    data.R[0] = 1;
    data.R[1] = 1;
    data.R[2] = 1e+06;
    data.R[3] = 0.001;
    data.R[4] = 0.001;
    data.R[5] = 0.001;
    data.R[6] = 10;
    data.R[7] = 10;
    data.R[8] = 10;
    data.R[9] = 0.01;
    data.FakeR[0] = 10;
    data.FakeR[1] = 1;
    data.FakeR[2] = 1000;
*/
/*}*/

/*/***/
/* * Get the object data fields*/
/* */
/*EKFConfiguration::DataFields EKFConfiguration::getData()*/
/*{*/
/*    QMutexLocker locker(mutex);*/
/*    return data;*/
/*}*/

/*/***/
/* * Set the object data fields*/
/* */
/*void EKFConfiguration::setData(const DataFields& data)*/
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

/*void EKFConfiguration::emitNotifications()*/
/*{*/
/*    */
/*}*/

/*/***/
/* * Create a clone of this object, a new instance ID must be specified.*/
/* * Do not use this function directly to create new instances, the*/
/* * UAVObjectManager should be used instead.*/
/* */
/*UAVDataObject *EKFConfiguration::clone(unsigned int instID)*/
/*{*/
/*    EKFConfiguration *obj = new EKFConfiguration();*/
/*    obj->initialize(instID, this->getMetaObject());*/
/*    return obj;*/
/*}*/

/*/***/
/* * Create a clone of this object only to be used to retrieve defaults*/
/* */
/*UAVDataObject *EKFConfiguration::dirtyClone()*/
/*{*/
/*    EKFConfiguration *obj = new EKFConfiguration();*/
/*    return obj;*/
/*}*/

/*/***/
/* * Static function to retrieve an instance of the object.*/
/* */
/*EKFConfiguration *EKFConfiguration::GetInstance(UAVObjectManager *objMngr, unsigned int instID)*/
/*{*/
/*    return dynamic_cast<EKFConfiguration *>(objMngr->getObject(EKFConfiguration::OBJID, instID));*/
/*}*/

/*float EKFConfiguration::getP(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.P[index];
}
void EKFConfiguration::setP(unsigned int index, float value)
{
   mutex->lock();
   bool changed = data.P[index] != value;
   data.P[index] = value;
   mutex->unlock();
   if (changed) emit PChanged(index,value);
}

float EKFConfiguration::getQ(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.Q[index];
}
void EKFConfiguration::setQ(unsigned int index, float value)
{
   mutex->lock();
   bool changed = data.Q[index] != value;
   data.Q[index] = value;
   mutex->unlock();
   if (changed) emit QChanged(index,value);
}

float EKFConfiguration::getR(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.R[index];
}
void EKFConfiguration::setR(unsigned int index, float value)
{
   mutex->lock();
   bool changed = data.R[index] != value;
   data.R[index] = value;
   mutex->unlock();
   if (changed) emit RChanged(index,value);
}

float EKFConfiguration::getFakeR(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.FakeR[index];
}
void EKFConfiguration::setFakeR(unsigned int index, float value)
{
   mutex->lock();
   bool changed = data.FakeR[index] != value;
   data.FakeR[index] = value;
   mutex->unlock();
   if (changed) emit FakeRChanged(index,value);
}

*/
