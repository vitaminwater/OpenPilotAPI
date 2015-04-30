/**
 ******************************************************************************
 *
 * @file       objectpersistence.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: objectpersistence.xml.
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

#include "objectpersistence.h"

int ObjectPersistence::numInstances = 0;

/**
 * Constructor
 */
ObjectPersistence::ObjectPersistence(UAVObjManager* manager): UAVObject(manager, 0x99C63292, "ObjectPersistence", "Used by gcs to handle object persistence to flash memory", "System", 1, 0, ACCESS_READWRITE, ACCESS_READWRITE, 1, 1, UPDATEMODE_ONCHANGE, UPDATEMODE_MANUAL, 0, 0, 0)
{

}

int ObjectPersistence::UAVObjSetDataField(const char *dataIn, const std::string fieldID){
	if(fieldID == "ObjectID") {
		memset( &(dataFields.ObjectID), 0, sizeof(dataFields.ObjectID));
		memcpy( &(dataFields.ObjectID), dataIn, sizeof(dataFields.ObjectID));
	} else if(fieldID == "InstanceID") {
		memset( &(dataFields.InstanceID), 0, sizeof(dataFields.InstanceID));
		memcpy( &(dataFields.InstanceID), dataIn, sizeof(dataFields.InstanceID));
	} else if(fieldID == "Operation") {
		memset( &(dataFields.Operation), 0, sizeof(dataFields.Operation));
		memcpy( &(dataFields.Operation), dataIn, sizeof(dataFields.Operation));
	} else if(fieldID == "Selection") {
		memset( &(dataFields.Selection), 0, sizeof(dataFields.Selection));
		memcpy( &(dataFields.Selection), dataIn, sizeof(dataFields.Selection));
	}
	return 0;
}

int ObjectPersistence::UAVObjGetDataField(char *dataOut, const std::string fieldID){
	if(fieldID == "ObjectID") {
		memcpy( dataOut, &(dataFields.ObjectID), sizeof(dataFields.ObjectID));
	} else if(fieldID == "InstanceID") {
		memcpy( dataOut, &(dataFields.InstanceID), sizeof(dataFields.InstanceID));
	} else if(fieldID == "Operation") {
		memcpy( dataOut, &(dataFields.Operation), sizeof(dataFields.Operation));
	} else if(fieldID == "Selection") {
		memcpy( dataOut, &(dataFields.Selection), sizeof(dataFields.Selection));
	}
	return 0;
}

int ObjectPersistence::UAVObjUnpack(const unsigned char *dataIn){
	memcpy(&dataFields, dataIn, NUMBYTES);
	return 0;
}

int ObjectPersistence::UAVObjPack(unsigned char *dataOut) {
	memcpy(dataOut, &dataFields, NUMBYTES);
	return 0;
}

unsigned short ObjectPersistence::UAVObjGetInstance() const {
	return instance;
}
unsigned short ObjectPersistence::UAVObjGetNumBytes() const {
	return sizeof(dataFields);
}
unsigned short ObjectPersistence::UAVObjGetNumInstances() const {
	return numInstances;
}

std::string ObjectPersistence::prettyPrint() {
	std::stringstream ss;
	ss << "\nPrinting object: objectpersistence" << std::endl;
	ss << "\tObjectID: " << dataFields.ObjectID << std::endl;
	ss << "\tInstanceID: " << dataFields.InstanceID << std::endl;
	ss << "\tOperation: " << dataFields.Operation << std::endl;
	ss << "\tSelection: " << dataFields.Selection << std::endl;

	return ss.str();
}

/*/***/
/* * Initialize object fields with the default values.*/
/* * If a default value is not specified the object fields*/
/* * will be initialized to zero.*/
/* */
/*void ObjectPersistence::setDefaultFieldValues()*/
/*{*/
/**/
/*}*/

/*/***/
/* * Get the object data fields*/
/* */
/*ObjectPersistence::DataFields ObjectPersistence::getData()*/
/*{*/
/*    QMutexLocker locker(mutex);*/
/*    return data;*/
/*}*/

/*/***/
/* * Set the object data fields*/
/* */
/*void ObjectPersistence::setData(const DataFields& data)*/
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

/*void ObjectPersistence::emitNotifications()*/
/*{*/
/*            //if (data.ObjectID != oldData.ObjectID)
            emit ObjectIDChanged(data.ObjectID);
        //if (data.InstanceID != oldData.InstanceID)
            emit InstanceIDChanged(data.InstanceID);
        //if (data.Operation != oldData.Operation)
            emit OperationChanged(data.Operation);
        //if (data.Selection != oldData.Selection)
            emit SelectionChanged(data.Selection);
*/
/*}*/

/*/***/
/* * Create a clone of this object, a new instance ID must be specified.*/
/* * Do not use this function directly to create new instances, the*/
/* * UAVObjectManager should be used instead.*/
/* */
/*UAVDataObject *ObjectPersistence::clone(unsigned int instID)*/
/*{*/
/*    ObjectPersistence *obj = new ObjectPersistence();*/
/*    obj->initialize(instID, this->getMetaObject());*/
/*    return obj;*/
/*}*/

/*/***/
/* * Create a clone of this object only to be used to retrieve defaults*/
/* */
/*UAVDataObject *ObjectPersistence::dirtyClone()*/
/*{*/
/*    ObjectPersistence *obj = new ObjectPersistence();*/
/*    return obj;*/
/*}*/

/*/***/
/* * Static function to retrieve an instance of the object.*/
/* */
/*ObjectPersistence *ObjectPersistence::GetInstance(UAVObjectManager *objMngr, unsigned int instID)*/
/*{*/
/*    return dynamic_cast<ObjectPersistence *>(objMngr->getObject(ObjectPersistence::OBJID, instID));*/
/*}*/

/*unsigned int ObjectPersistence::getObjectID() const
{
   QMutexLocker locker(mutex);
   return data.ObjectID;
}
void ObjectPersistence::setObjectID(unsigned int value)
{
   mutex->lock();
   bool changed = data.ObjectID != value;
   data.ObjectID = value;
   mutex->unlock();
   if (changed) emit ObjectIDChanged(value);
}

unsigned int ObjectPersistence::getInstanceID() const
{
   QMutexLocker locker(mutex);
   return data.InstanceID;
}
void ObjectPersistence::setInstanceID(unsigned int value)
{
   mutex->lock();
   bool changed = data.InstanceID != value;
   data.InstanceID = value;
   mutex->unlock();
   if (changed) emit InstanceIDChanged(value);
}

unsigned char ObjectPersistence::getOperation() const
{
   QMutexLocker locker(mutex);
   return data.Operation;
}
void ObjectPersistence::setOperation(unsigned char value)
{
   mutex->lock();
   bool changed = data.Operation != value;
   data.Operation = value;
   mutex->unlock();
   if (changed) emit OperationChanged(value);
}

unsigned char ObjectPersistence::getSelection() const
{
   QMutexLocker locker(mutex);
   return data.Selection;
}
void ObjectPersistence::setSelection(unsigned char value)
{
   mutex->lock();
   bool changed = data.Selection != value;
   data.Selection = value;
   mutex->unlock();
   if (changed) emit SelectionChanged(value);
}

*/
