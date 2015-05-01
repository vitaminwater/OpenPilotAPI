/**
 ******************************************************************************
 *
 * @file       magstate.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: magstate.xml.
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

#include "magstate.h"

int MagState::numInstances = 0;

/**
 * Constructor
 */
MagState::MagState(UAVObjManager* manager): UAVObject(manager, 0x9FFEAA0C, "MagState", "The filtered magnet vector.", "State", 1, 0, ACCESS_READWRITE, ACCESS_READWRITE, 0, 0, UPDATEMODE_PERIODIC, UPDATEMODE_MANUAL, 1000, 0, 0)
{

}

int MagState::UAVObjSetDataField(const char *dataIn, const std::string fieldID){
	if(fieldID == "x") {
		memset( &(dataFields.x), 0, sizeof(dataFields.x));
		memcpy( &(dataFields.x), dataIn, sizeof(dataFields.x));
	} else if(fieldID == "y") {
		memset( &(dataFields.y), 0, sizeof(dataFields.y));
		memcpy( &(dataFields.y), dataIn, sizeof(dataFields.y));
	} else if(fieldID == "z") {
		memset( &(dataFields.z), 0, sizeof(dataFields.z));
		memcpy( &(dataFields.z), dataIn, sizeof(dataFields.z));
	} else if(fieldID == "Source") {
		memset( &(dataFields.Source), 0, sizeof(dataFields.Source));
		memcpy( &(dataFields.Source), dataIn, sizeof(dataFields.Source));
	}
	return 0;
}

int MagState::UAVObjGetDataField(char *dataOut, const std::string fieldID){
	if(fieldID == "x") {
		memcpy( dataOut, &(dataFields.x), sizeof(dataFields.x));
	} else if(fieldID == "y") {
		memcpy( dataOut, &(dataFields.y), sizeof(dataFields.y));
	} else if(fieldID == "z") {
		memcpy( dataOut, &(dataFields.z), sizeof(dataFields.z));
	} else if(fieldID == "Source") {
		memcpy( dataOut, &(dataFields.Source), sizeof(dataFields.Source));
	}
	return 0;
}

int MagState::UAVObjUnpack(const unsigned char *dataIn){
	memcpy(&dataFields, dataIn, NUMBYTES);
	return 0;
}

int MagState::UAVObjPack(unsigned char *dataOut) {
	memcpy(dataOut, &dataFields, NUMBYTES);
	return 0;
}

unsigned short MagState::UAVObjGetInstance() const {
	return instance;
}
unsigned short MagState::UAVObjGetNumBytes() const {
	return sizeof(dataFields);
}
unsigned short MagState::UAVObjGetNumInstances() const {
	return numInstances;
}

std::string MagState::prettyPrint() {
	std::stringstream ss;
	ss << "\nPrinting object: magstate" << std::endl;
	ss << "\tx: " << dataFields.x << std::endl;
	ss << "\ty: " << dataFields.y << std::endl;
	ss << "\tz: " << dataFields.z << std::endl;
	ss << "\tSource: " << dataFields.Source << std::endl;

	return ss.str();
}

/*/***/
/* * Initialize object fields with the default values.*/
/* * If a default value is not specified the object fields*/
/* * will be initialized to zero.*/
/* */
/*void MagState::setDefaultFieldValues()*/
/*{*/
/*    data.Source = 0;
*/
/*}*/

/*/***/
/* * Get the object data fields*/
/* */
/*MagState::DataFields MagState::getData()*/
/*{*/
/*    QMutexLocker locker(mutex);*/
/*    return data;*/
/*}*/

/*/***/
/* * Set the object data fields*/
/* */
/*void MagState::setData(const DataFields& data)*/
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

/*void MagState::emitNotifications()*/
/*{*/
/*            //if (data.x != oldData.x)
            emit xChanged(data.x);
        //if (data.y != oldData.y)
            emit yChanged(data.y);
        //if (data.z != oldData.z)
            emit zChanged(data.z);
        //if (data.Source != oldData.Source)
            emit SourceChanged(data.Source);
*/
/*}*/

/*/***/
/* * Create a clone of this object, a new instance ID must be specified.*/
/* * Do not use this function directly to create new instances, the*/
/* * UAVObjectManager should be used instead.*/
/* */
/*UAVDataObject *MagState::clone(unsigned int instID)*/
/*{*/
/*    MagState *obj = new MagState();*/
/*    obj->initialize(instID, this->getMetaObject());*/
/*    return obj;*/
/*}*/

/*/***/
/* * Create a clone of this object only to be used to retrieve defaults*/
/* */
/*UAVDataObject *MagState::dirtyClone()*/
/*{*/
/*    MagState *obj = new MagState();*/
/*    return obj;*/
/*}*/

/*/***/
/* * Static function to retrieve an instance of the object.*/
/* */
/*MagState *MagState::GetInstance(UAVObjectManager *objMngr, unsigned int instID)*/
/*{*/
/*    return dynamic_cast<MagState *>(objMngr->getObject(MagState::OBJID, instID));*/
/*}*/

/*float MagState::getx() const
{
   QMutexLocker locker(mutex);
   return data.x;
}
void MagState::setx(float value)
{
   mutex->lock();
   bool changed = data.x != value;
   data.x = value;
   mutex->unlock();
   if (changed) emit xChanged(value);
}

float MagState::gety() const
{
   QMutexLocker locker(mutex);
   return data.y;
}
void MagState::sety(float value)
{
   mutex->lock();
   bool changed = data.y != value;
   data.y = value;
   mutex->unlock();
   if (changed) emit yChanged(value);
}

float MagState::getz() const
{
   QMutexLocker locker(mutex);
   return data.z;
}
void MagState::setz(float value)
{
   mutex->lock();
   bool changed = data.z != value;
   data.z = value;
   mutex->unlock();
   if (changed) emit zChanged(value);
}

unsigned char MagState::getSource() const
{
   QMutexLocker locker(mutex);
   return data.Source;
}
void MagState::setSource(unsigned char value)
{
   mutex->lock();
   bool changed = data.Source != value;
   data.Source = value;
   mutex->unlock();
   if (changed) emit SourceChanged(value);
}

*/
