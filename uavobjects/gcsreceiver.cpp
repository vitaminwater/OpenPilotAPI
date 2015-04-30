/**
 ******************************************************************************
 *
 * @file       gcsreceiver.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: gcsreceiver.xml.
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

#include "gcsreceiver.h"

int GCSReceiver::numInstances = 0;

/**
 * Constructor
 */
GCSReceiver::GCSReceiver(UAVObjManager* manager): UAVObject(manager, 0xCC7E1470, "GCSReceiver", "A receiver channel group carried over the telemetry link.", "Control", 1, 0, ACCESS_READWRITE, ACCESS_READWRITE, 0, 0, UPDATEMODE_ONCHANGE, UPDATEMODE_ONCHANGE, 0, 0, 0)
{

}

int GCSReceiver::UAVObjSetDataField(const char *dataIn, const std::string fieldID){
	if(fieldID == "Channel") {
		memset( &(dataFields.Channel), 0, sizeof(dataFields.Channel));
		memcpy( &(dataFields.Channel), dataIn, sizeof(dataFields.Channel));
	}
	return 0;
}

int GCSReceiver::UAVObjGetDataField(char *dataOut, const std::string fieldID){
	if(fieldID == "Channel") {
		memcpy( dataOut, &(dataFields.Channel), sizeof(dataFields.Channel));
	}
	return 0;
}

int GCSReceiver::UAVObjUnpack(const unsigned char *dataIn){
	memcpy(&dataFields, dataIn, NUMBYTES);
	return 0;
}

int GCSReceiver::UAVObjPack(unsigned char *dataOut) {
	memcpy(dataOut, &dataFields, NUMBYTES);
	return 0;
}

unsigned short GCSReceiver::UAVObjGetInstance() const {
	return instance;
}
unsigned short GCSReceiver::UAVObjGetNumBytes() const {
	return sizeof(dataFields);
}
unsigned short GCSReceiver::UAVObjGetNumInstances() const {
	return numInstances;
}

std::string GCSReceiver::prettyPrint() {
	std::stringstream ss;
	ss << "\nPrinting object: gcsreceiver" << std::endl;
	ss << "\tChannel: " << dataFields.Channel << std::endl;

	return ss.str();
}

/*/***/
/* * Initialize object fields with the default values.*/
/* * If a default value is not specified the object fields*/
/* * will be initialized to zero.*/
/* */
/*void GCSReceiver::setDefaultFieldValues()*/
/*{*/
/**/
/*}*/

/*/***/
/* * Get the object data fields*/
/* */
/*GCSReceiver::DataFields GCSReceiver::getData()*/
/*{*/
/*    QMutexLocker locker(mutex);*/
/*    return data;*/
/*}*/

/*/***/
/* * Set the object data fields*/
/* */
/*void GCSReceiver::setData(const DataFields& data)*/
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

/*void GCSReceiver::emitNotifications()*/
/*{*/
/*    */
/*}*/

/*/***/
/* * Create a clone of this object, a new instance ID must be specified.*/
/* * Do not use this function directly to create new instances, the*/
/* * UAVObjectManager should be used instead.*/
/* */
/*UAVDataObject *GCSReceiver::clone(unsigned int instID)*/
/*{*/
/*    GCSReceiver *obj = new GCSReceiver();*/
/*    obj->initialize(instID, this->getMetaObject());*/
/*    return obj;*/
/*}*/

/*/***/
/* * Create a clone of this object only to be used to retrieve defaults*/
/* */
/*UAVDataObject *GCSReceiver::dirtyClone()*/
/*{*/
/*    GCSReceiver *obj = new GCSReceiver();*/
/*    return obj;*/
/*}*/

/*/***/
/* * Static function to retrieve an instance of the object.*/
/* */
/*GCSReceiver *GCSReceiver::GetInstance(UAVObjectManager *objMngr, unsigned int instID)*/
/*{*/
/*    return dynamic_cast<GCSReceiver *>(objMngr->getObject(GCSReceiver::OBJID, instID));*/
/*}*/

/*unsigned short int GCSReceiver::getChannel(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.Channel[index];
}
void GCSReceiver::setChannel(unsigned int index, unsigned short int value)
{
   mutex->lock();
   bool changed = data.Channel[index] != value;
   data.Channel[index] = value;
   mutex->unlock();
   if (changed) emit ChannelChanged(index,value);
}

*/
