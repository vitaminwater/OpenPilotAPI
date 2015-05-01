/**
 ******************************************************************************
 *
 * @file       debuglogcontrol.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: debuglogcontrol.xml.
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

#include "debuglogcontrol.h"

int DebugLogControl::numInstances = 0;

/**
 * Constructor
 */
DebugLogControl::DebugLogControl(UAVObjManager* manager): UAVObject(manager, 0xC39642FC, "DebugLogControl", "Log Control Object - Used to issue commands to the on board logging system", "System", 1, 0, ACCESS_READWRITE, ACCESS_READWRITE, 1, 1, UPDATEMODE_MANUAL, UPDATEMODE_MANUAL, 0, 0, 0)
{

}

int DebugLogControl::UAVObjSetDataField(const char *dataIn, const std::string fieldID){
	if(fieldID == "Flight") {
		memset( &(dataFields.Flight), 0, sizeof(dataFields.Flight));
		memcpy( &(dataFields.Flight), dataIn, sizeof(dataFields.Flight));
	} else if(fieldID == "Entry") {
		memset( &(dataFields.Entry), 0, sizeof(dataFields.Entry));
		memcpy( &(dataFields.Entry), dataIn, sizeof(dataFields.Entry));
	} else if(fieldID == "Operation") {
		memset( &(dataFields.Operation), 0, sizeof(dataFields.Operation));
		memcpy( &(dataFields.Operation), dataIn, sizeof(dataFields.Operation));
	}
	return 0;
}

int DebugLogControl::UAVObjGetDataField(char *dataOut, const std::string fieldID){
	if(fieldID == "Flight") {
		memcpy( dataOut, &(dataFields.Flight), sizeof(dataFields.Flight));
	} else if(fieldID == "Entry") {
		memcpy( dataOut, &(dataFields.Entry), sizeof(dataFields.Entry));
	} else if(fieldID == "Operation") {
		memcpy( dataOut, &(dataFields.Operation), sizeof(dataFields.Operation));
	}
	return 0;
}

int DebugLogControl::UAVObjUnpack(const unsigned char *dataIn){
	memcpy(&dataFields, dataIn, NUMBYTES);
	return 0;
}

int DebugLogControl::UAVObjPack(unsigned char *dataOut) {
	memcpy(dataOut, &dataFields, NUMBYTES);
	return 0;
}

unsigned short DebugLogControl::UAVObjGetInstance() const {
	return instance;
}
unsigned short DebugLogControl::UAVObjGetNumBytes() const {
	return sizeof(dataFields);
}
unsigned short DebugLogControl::UAVObjGetNumInstances() const {
	return numInstances;
}

std::string DebugLogControl::prettyPrint() {
	std::stringstream ss;
	ss << "\nPrinting object: debuglogcontrol" << std::endl;
	ss << "\tFlight: " << dataFields.Flight << std::endl;
	ss << "\tEntry: " << dataFields.Entry << std::endl;
	ss << "\tOperation: " << dataFields.Operation << std::endl;

	return ss.str();
}

/*/***/
/* * Initialize object fields with the default values.*/
/* * If a default value is not specified the object fields*/
/* * will be initialized to zero.*/
/* */
/*void DebugLogControl::setDefaultFieldValues()*/
/*{*/
/**/
/*}*/

/*/***/
/* * Get the object data fields*/
/* */
/*DebugLogControl::DataFields DebugLogControl::getData()*/
/*{*/
/*    QMutexLocker locker(mutex);*/
/*    return data;*/
/*}*/

/*/***/
/* * Set the object data fields*/
/* */
/*void DebugLogControl::setData(const DataFields& data)*/
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

/*void DebugLogControl::emitNotifications()*/
/*{*/
/*            //if (data.Flight != oldData.Flight)
            emit FlightChanged(data.Flight);
        //if (data.Entry != oldData.Entry)
            emit EntryChanged(data.Entry);
        //if (data.Operation != oldData.Operation)
            emit OperationChanged(data.Operation);
*/
/*}*/

/*/***/
/* * Create a clone of this object, a new instance ID must be specified.*/
/* * Do not use this function directly to create new instances, the*/
/* * UAVObjectManager should be used instead.*/
/* */
/*UAVDataObject *DebugLogControl::clone(unsigned int instID)*/
/*{*/
/*    DebugLogControl *obj = new DebugLogControl();*/
/*    obj->initialize(instID, this->getMetaObject());*/
/*    return obj;*/
/*}*/

/*/***/
/* * Create a clone of this object only to be used to retrieve defaults*/
/* */
/*UAVDataObject *DebugLogControl::dirtyClone()*/
/*{*/
/*    DebugLogControl *obj = new DebugLogControl();*/
/*    return obj;*/
/*}*/

/*/***/
/* * Static function to retrieve an instance of the object.*/
/* */
/*DebugLogControl *DebugLogControl::GetInstance(UAVObjectManager *objMngr, unsigned int instID)*/
/*{*/
/*    return dynamic_cast<DebugLogControl *>(objMngr->getObject(DebugLogControl::OBJID, instID));*/
/*}*/

/*unsigned short int DebugLogControl::getFlight() const
{
   QMutexLocker locker(mutex);
   return data.Flight;
}
void DebugLogControl::setFlight(unsigned short int value)
{
   mutex->lock();
   bool changed = data.Flight != value;
   data.Flight = value;
   mutex->unlock();
   if (changed) emit FlightChanged(value);
}

unsigned short int DebugLogControl::getEntry() const
{
   QMutexLocker locker(mutex);
   return data.Entry;
}
void DebugLogControl::setEntry(unsigned short int value)
{
   mutex->lock();
   bool changed = data.Entry != value;
   data.Entry = value;
   mutex->unlock();
   if (changed) emit EntryChanged(value);
}

unsigned char DebugLogControl::getOperation() const
{
   QMutexLocker locker(mutex);
   return data.Operation;
}
void DebugLogControl::setOperation(unsigned char value)
{
   mutex->lock();
   bool changed = data.Operation != value;
   data.Operation = value;
   mutex->unlock();
   if (changed) emit OperationChanged(value);
}

*/
