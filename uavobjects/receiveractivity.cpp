/**
 ******************************************************************************
 *
 * @file       receiveractivity.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: receiveractivity.xml.
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

#include "receiveractivity.h"

int ReceiverActivity::numInstances = 0;

/**
 * Constructor
 */
ReceiverActivity::ReceiverActivity(UAVObjManager* manager): UAVObject(manager, 0xFF531024, "ReceiverActivity", "Monitors which receiver channels have been active within the last second.", "System", 1, 0, ACCESS_READWRITE, ACCESS_READONLY, 0, 0, UPDATEMODE_ONCHANGE, UPDATEMODE_MANUAL, 0, 0, 0)
{

}

int ReceiverActivity::UAVObjSetDataField(const char *dataIn, const std::string fieldID){
	if(fieldID == "ActiveGroup") {
		memset( &(dataFields.ActiveGroup), 0, sizeof(dataFields.ActiveGroup));
		memcpy( &(dataFields.ActiveGroup), dataIn, sizeof(dataFields.ActiveGroup));
	} else if(fieldID == "ActiveChannel") {
		memset( &(dataFields.ActiveChannel), 0, sizeof(dataFields.ActiveChannel));
		memcpy( &(dataFields.ActiveChannel), dataIn, sizeof(dataFields.ActiveChannel));
	}
	return 0;
}

int ReceiverActivity::UAVObjGetDataField(char *dataOut, const std::string fieldID){
	if(fieldID == "ActiveGroup") {
		memcpy( dataOut, &(dataFields.ActiveGroup), sizeof(dataFields.ActiveGroup));
	} else if(fieldID == "ActiveChannel") {
		memcpy( dataOut, &(dataFields.ActiveChannel), sizeof(dataFields.ActiveChannel));
	}
	return 0;
}

int ReceiverActivity::UAVObjUnpack(const unsigned char *dataIn){
	memcpy(&dataFields, dataIn, NUMBYTES);
	return 0;
}

int ReceiverActivity::UAVObjPack(unsigned char *dataOut) {
	memcpy(dataOut, &dataFields, NUMBYTES);
	return 0;
}

unsigned short ReceiverActivity::UAVObjGetInstance() const {
	return instance;
}
unsigned short ReceiverActivity::UAVObjGetNumBytes() const {
	return sizeof(dataFields);
}
unsigned short ReceiverActivity::UAVObjGetNumInstances() const {
	return numInstances;
}

std::string ReceiverActivity::prettyPrint() {
	std::stringstream ss;
	ss << "\nPrinting object: receiveractivity" << std::endl;
	ss << "\tActiveGroup: " << dataFields.ActiveGroup << std::endl;
	ss << "\tActiveChannel: " << dataFields.ActiveChannel << std::endl;

	return ss.str();
}

/*/***/
/* * Initialize object fields with the default values.*/
/* * If a default value is not specified the object fields*/
/* * will be initialized to zero.*/
/* */
/*void ReceiverActivity::setDefaultFieldValues()*/
/*{*/
/*    data.ActiveGroup = 7;
    data.ActiveChannel = 255;
*/
/*}*/

/*/***/
/* * Get the object data fields*/
/* */
/*ReceiverActivity::DataFields ReceiverActivity::getData()*/
/*{*/
/*    QMutexLocker locker(mutex);*/
/*    return data;*/
/*}*/

/*/***/
/* * Set the object data fields*/
/* */
/*void ReceiverActivity::setData(const DataFields& data)*/
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

/*void ReceiverActivity::emitNotifications()*/
/*{*/
/*            //if (data.ActiveGroup != oldData.ActiveGroup)
            emit ActiveGroupChanged(data.ActiveGroup);
        //if (data.ActiveChannel != oldData.ActiveChannel)
            emit ActiveChannelChanged(data.ActiveChannel);
*/
/*}*/

/*/***/
/* * Create a clone of this object, a new instance ID must be specified.*/
/* * Do not use this function directly to create new instances, the*/
/* * UAVObjectManager should be used instead.*/
/* */
/*UAVDataObject *ReceiverActivity::clone(unsigned int instID)*/
/*{*/
/*    ReceiverActivity *obj = new ReceiverActivity();*/
/*    obj->initialize(instID, this->getMetaObject());*/
/*    return obj;*/
/*}*/

/*/***/
/* * Create a clone of this object only to be used to retrieve defaults*/
/* */
/*UAVDataObject *ReceiverActivity::dirtyClone()*/
/*{*/
/*    ReceiverActivity *obj = new ReceiverActivity();*/
/*    return obj;*/
/*}*/

/*/***/
/* * Static function to retrieve an instance of the object.*/
/* */
/*ReceiverActivity *ReceiverActivity::GetInstance(UAVObjectManager *objMngr, unsigned int instID)*/
/*{*/
/*    return dynamic_cast<ReceiverActivity *>(objMngr->getObject(ReceiverActivity::OBJID, instID));*/
/*}*/

/*unsigned char ReceiverActivity::getActiveGroup() const
{
   QMutexLocker locker(mutex);
   return data.ActiveGroup;
}
void ReceiverActivity::setActiveGroup(unsigned char value)
{
   mutex->lock();
   bool changed = data.ActiveGroup != value;
   data.ActiveGroup = value;
   mutex->unlock();
   if (changed) emit ActiveGroupChanged(value);
}

unsigned char ReceiverActivity::getActiveChannel() const
{
   QMutexLocker locker(mutex);
   return data.ActiveChannel;
}
void ReceiverActivity::setActiveChannel(unsigned char value)
{
   mutex->lock();
   bool changed = data.ActiveChannel != value;
   data.ActiveChannel = value;
   mutex->unlock();
   if (changed) emit ActiveChannelChanged(value);
}

*/
