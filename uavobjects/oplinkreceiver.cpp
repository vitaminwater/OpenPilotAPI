/**
 ******************************************************************************
 *
 * @file       oplinkreceiver.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: oplinkreceiver.xml.
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

#include "oplinkreceiver.h"

int OPLinkReceiver::numInstances = 0;

/**
 * Constructor
 */
OPLinkReceiver::OPLinkReceiver(UAVObjManager* manager): UAVObject(manager, 0xD29CCDC, "OPLinkReceiver", "A receiver channel group carried over the OPLink radio.", "System", 1, 0, ACCESS_READWRITE, ACCESS_READONLY, 0, 0, UPDATEMODE_PERIODIC, UPDATEMODE_MANUAL, 1000, 0, 0)
{

}

int OPLinkReceiver::UAVObjSetDataField(const char *dataIn, const std::string fieldID){
	if(fieldID == "Channel") {
		memset( &(dataFields.Channel), 0, sizeof(dataFields.Channel));
		memcpy( &(dataFields.Channel), dataIn, sizeof(dataFields.Channel));
	}
	return 0;
}

int OPLinkReceiver::UAVObjGetDataField(char *dataOut, const std::string fieldID){
	if(fieldID == "Channel") {
		memcpy( dataOut, &(dataFields.Channel), sizeof(dataFields.Channel));
	}
	return 0;
}

int OPLinkReceiver::UAVObjUnpack(const unsigned char *dataIn){
	memcpy(&dataFields, dataIn, NUMBYTES);
	return 0;
}

int OPLinkReceiver::UAVObjPack(unsigned char *dataOut) {
	memcpy(dataOut, &dataFields, NUMBYTES);
	return 0;
}

unsigned short OPLinkReceiver::UAVObjGetInstance() const {
	return instance;
}
unsigned short OPLinkReceiver::UAVObjGetNumBytes() const {
	return sizeof(dataFields);
}
unsigned short OPLinkReceiver::UAVObjGetNumInstances() const {
	return numInstances;
}

std::string OPLinkReceiver::prettyPrint() {
	std::stringstream ss;
	ss << "\nPrinting object: oplinkreceiver" << std::endl;
	ss << "\tChannel: " << dataFields.Channel << std::endl;

	return ss.str();
}

/*/***/
/* * Initialize object fields with the default values.*/
/* * If a default value is not specified the object fields*/
/* * will be initialized to zero.*/
/* */
/*void OPLinkReceiver::setDefaultFieldValues()*/
/*{*/
/**/
/*}*/

/*/***/
/* * Get the object data fields*/
/* */
/*OPLinkReceiver::DataFields OPLinkReceiver::getData()*/
/*{*/
/*    QMutexLocker locker(mutex);*/
/*    return data;*/
/*}*/

/*/***/
/* * Set the object data fields*/
/* */
/*void OPLinkReceiver::setData(const DataFields& data)*/
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

/*void OPLinkReceiver::emitNotifications()*/
/*{*/
/*    */
/*}*/

/*/***/
/* * Create a clone of this object, a new instance ID must be specified.*/
/* * Do not use this function directly to create new instances, the*/
/* * UAVObjectManager should be used instead.*/
/* */
/*UAVDataObject *OPLinkReceiver::clone(unsigned int instID)*/
/*{*/
/*    OPLinkReceiver *obj = new OPLinkReceiver();*/
/*    obj->initialize(instID, this->getMetaObject());*/
/*    return obj;*/
/*}*/

/*/***/
/* * Create a clone of this object only to be used to retrieve defaults*/
/* */
/*UAVDataObject *OPLinkReceiver::dirtyClone()*/
/*{*/
/*    OPLinkReceiver *obj = new OPLinkReceiver();*/
/*    return obj;*/
/*}*/

/*/***/
/* * Static function to retrieve an instance of the object.*/
/* */
/*OPLinkReceiver *OPLinkReceiver::GetInstance(UAVObjectManager *objMngr, unsigned int instID)*/
/*{*/
/*    return dynamic_cast<OPLinkReceiver *>(objMngr->getObject(OPLinkReceiver::OBJID, instID));*/
/*}*/

/*short int OPLinkReceiver::getChannel(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.Channel[index];
}
void OPLinkReceiver::setChannel(unsigned int index, short int value)
{
   mutex->lock();
   bool changed = data.Channel[index] != value;
   data.Channel[index] = value;
   mutex->unlock();
   if (changed) emit ChannelChanged(index,value);
}

*/
