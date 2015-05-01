/**
 ******************************************************************************
 *
 * @file       perfcounter.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: perfcounter.xml.
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

#include "perfcounter.h"

int PerfCounter::numInstances = 0;

/**
 * Constructor
 */
PerfCounter::PerfCounter(UAVObjManager* manager): UAVObject(manager, 0x692FBF7A, "PerfCounter", "A single performance counter, used to instrument flight code", "System", 0, 0, ACCESS_READWRITE, ACCESS_READWRITE, 0, 0, UPDATEMODE_MANUAL, UPDATEMODE_MANUAL, 0, 0, 0)
{

}

int PerfCounter::UAVObjSetDataField(const char *dataIn, const std::string fieldID){
	if(fieldID == "Id") {
		memset( &(dataFields.Id), 0, sizeof(dataFields.Id));
		memcpy( &(dataFields.Id), dataIn, sizeof(dataFields.Id));
	} else if(fieldID == "Counter") {
		memset( &(dataFields.Counter), 0, sizeof(dataFields.Counter));
		memcpy( &(dataFields.Counter), dataIn, sizeof(dataFields.Counter));
	}
	return 0;
}

int PerfCounter::UAVObjGetDataField(char *dataOut, const std::string fieldID){
	if(fieldID == "Id") {
		memcpy( dataOut, &(dataFields.Id), sizeof(dataFields.Id));
	} else if(fieldID == "Counter") {
		memcpy( dataOut, &(dataFields.Counter), sizeof(dataFields.Counter));
	}
	return 0;
}

int PerfCounter::UAVObjUnpack(const unsigned char *dataIn){
	memcpy(&dataFields, dataIn, NUMBYTES);
	return 0;
}

int PerfCounter::UAVObjPack(unsigned char *dataOut) {
	memcpy(dataOut, &dataFields, NUMBYTES);
	return 0;
}

unsigned short PerfCounter::UAVObjGetInstance() const {
	return instance;
}
unsigned short PerfCounter::UAVObjGetNumBytes() const {
	return sizeof(dataFields);
}
unsigned short PerfCounter::UAVObjGetNumInstances() const {
	return numInstances;
}

std::string PerfCounter::prettyPrint() {
	std::stringstream ss;
	ss << "\nPrinting object: perfcounter" << std::endl;
	ss << "\tId: " << dataFields.Id << std::endl;
	ss << "\tCounter: " << dataFields.Counter << std::endl;

	return ss.str();
}

/*/***/
/* * Initialize object fields with the default values.*/
/* * If a default value is not specified the object fields*/
/* * will be initialized to zero.*/
/* */
/*void PerfCounter::setDefaultFieldValues()*/
/*{*/
/**/
/*}*/

/*/***/
/* * Get the object data fields*/
/* */
/*PerfCounter::DataFields PerfCounter::getData()*/
/*{*/
/*    QMutexLocker locker(mutex);*/
/*    return data;*/
/*}*/

/*/***/
/* * Set the object data fields*/
/* */
/*void PerfCounter::setData(const DataFields& data)*/
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

/*void PerfCounter::emitNotifications()*/
/*{*/
/*            //if (data.Id != oldData.Id)
            emit IdChanged(data.Id);
*/
/*}*/

/*/***/
/* * Create a clone of this object, a new instance ID must be specified.*/
/* * Do not use this function directly to create new instances, the*/
/* * UAVObjectManager should be used instead.*/
/* */
/*UAVDataObject *PerfCounter::clone(unsigned int instID)*/
/*{*/
/*    PerfCounter *obj = new PerfCounter();*/
/*    obj->initialize(instID, this->getMetaObject());*/
/*    return obj;*/
/*}*/

/*/***/
/* * Create a clone of this object only to be used to retrieve defaults*/
/* */
/*UAVDataObject *PerfCounter::dirtyClone()*/
/*{*/
/*    PerfCounter *obj = new PerfCounter();*/
/*    return obj;*/
/*}*/

/*/***/
/* * Static function to retrieve an instance of the object.*/
/* */
/*PerfCounter *PerfCounter::GetInstance(UAVObjectManager *objMngr, unsigned int instID)*/
/*{*/
/*    return dynamic_cast<PerfCounter *>(objMngr->getObject(PerfCounter::OBJID, instID));*/
/*}*/

/*unsigned int PerfCounter::getId() const
{
   QMutexLocker locker(mutex);
   return data.Id;
}
void PerfCounter::setId(unsigned int value)
{
   mutex->lock();
   bool changed = data.Id != value;
   data.Id = value;
   mutex->unlock();
   if (changed) emit IdChanged(value);
}

int PerfCounter::getCounter(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.Counter[index];
}
void PerfCounter::setCounter(unsigned int index, int value)
{
   mutex->lock();
   bool changed = data.Counter[index] != value;
   data.Counter[index] = value;
   mutex->unlock();
   if (changed) emit CounterChanged(index,value);
}

*/
