/**
 ******************************************************************************
 *
 * @file       overosyncstats.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: overosyncstats.xml.
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

#include "overosyncstats.h"

int OveroSyncStats::numInstances = 0;

/**
 * Constructor
 */
OveroSyncStats::OveroSyncStats(UAVObjManager* manager): UAVObject(manager, 0xD2085FAC, "OveroSyncStats", "Maintains statistics on transfer rate to and from over", "System", 1, 0, ACCESS_READWRITE, ACCESS_READWRITE, 0, 0, UPDATEMODE_PERIODIC, UPDATEMODE_MANUAL, 1000, 0, 0)
{

}

int OveroSyncStats::UAVObjSetDataField(const char *dataIn, const std::string fieldID){
	if(fieldID == "Send") {
		memset( &(dataFields.Send), 0, sizeof(dataFields.Send));
		memcpy( &(dataFields.Send), dataIn, sizeof(dataFields.Send));
	} else if(fieldID == "Received") {
		memset( &(dataFields.Received), 0, sizeof(dataFields.Received));
		memcpy( &(dataFields.Received), dataIn, sizeof(dataFields.Received));
	} else if(fieldID == "FramesyncErrors") {
		memset( &(dataFields.FramesyncErrors), 0, sizeof(dataFields.FramesyncErrors));
		memcpy( &(dataFields.FramesyncErrors), dataIn, sizeof(dataFields.FramesyncErrors));
	} else if(fieldID == "UnderrunErrors") {
		memset( &(dataFields.UnderrunErrors), 0, sizeof(dataFields.UnderrunErrors));
		memcpy( &(dataFields.UnderrunErrors), dataIn, sizeof(dataFields.UnderrunErrors));
	} else if(fieldID == "DroppedUpdates") {
		memset( &(dataFields.DroppedUpdates), 0, sizeof(dataFields.DroppedUpdates));
		memcpy( &(dataFields.DroppedUpdates), dataIn, sizeof(dataFields.DroppedUpdates));
	} else if(fieldID == "Packets") {
		memset( &(dataFields.Packets), 0, sizeof(dataFields.Packets));
		memcpy( &(dataFields.Packets), dataIn, sizeof(dataFields.Packets));
	} else if(fieldID == "Connected") {
		memset( &(dataFields.Connected), 0, sizeof(dataFields.Connected));
		memcpy( &(dataFields.Connected), dataIn, sizeof(dataFields.Connected));
	}
	return 0;
}

int OveroSyncStats::UAVObjGetDataField(char *dataOut, const std::string fieldID){
	if(fieldID == "Send") {
		memcpy( dataOut, &(dataFields.Send), sizeof(dataFields.Send));
	} else if(fieldID == "Received") {
		memcpy( dataOut, &(dataFields.Received), sizeof(dataFields.Received));
	} else if(fieldID == "FramesyncErrors") {
		memcpy( dataOut, &(dataFields.FramesyncErrors), sizeof(dataFields.FramesyncErrors));
	} else if(fieldID == "UnderrunErrors") {
		memcpy( dataOut, &(dataFields.UnderrunErrors), sizeof(dataFields.UnderrunErrors));
	} else if(fieldID == "DroppedUpdates") {
		memcpy( dataOut, &(dataFields.DroppedUpdates), sizeof(dataFields.DroppedUpdates));
	} else if(fieldID == "Packets") {
		memcpy( dataOut, &(dataFields.Packets), sizeof(dataFields.Packets));
	} else if(fieldID == "Connected") {
		memcpy( dataOut, &(dataFields.Connected), sizeof(dataFields.Connected));
	}
	return 0;
}

int OveroSyncStats::UAVObjUnpack(const unsigned char *dataIn){
	memcpy(&dataFields, dataIn, NUMBYTES);
	return 0;
}

int OveroSyncStats::UAVObjPack(unsigned char *dataOut) {
	memcpy(dataOut, &dataFields, NUMBYTES);
	return 0;
}

unsigned short OveroSyncStats::UAVObjGetInstance() const {
	return instance;
}
unsigned short OveroSyncStats::UAVObjGetNumBytes() const {
	return sizeof(dataFields);
}
unsigned short OveroSyncStats::UAVObjGetNumInstances() const {
	return numInstances;
}

std::string OveroSyncStats::prettyPrint() {
	std::stringstream ss;
	ss << "\nPrinting object: overosyncstats" << std::endl;
	ss << "\tSend: " << dataFields.Send << std::endl;
	ss << "\tReceived: " << dataFields.Received << std::endl;
	ss << "\tFramesyncErrors: " << dataFields.FramesyncErrors << std::endl;
	ss << "\tUnderrunErrors: " << dataFields.UnderrunErrors << std::endl;
	ss << "\tDroppedUpdates: " << dataFields.DroppedUpdates << std::endl;
	ss << "\tPackets: " << dataFields.Packets << std::endl;
	ss << "\tConnected: " << dataFields.Connected << std::endl;

	return ss.str();
}

/*/***/
/* * Initialize object fields with the default values.*/
/* * If a default value is not specified the object fields*/
/* * will be initialized to zero.*/
/* */
/*void OveroSyncStats::setDefaultFieldValues()*/
/*{*/
/**/
/*}*/

/*/***/
/* * Get the object data fields*/
/* */
/*OveroSyncStats::DataFields OveroSyncStats::getData()*/
/*{*/
/*    QMutexLocker locker(mutex);*/
/*    return data;*/
/*}*/

/*/***/
/* * Set the object data fields*/
/* */
/*void OveroSyncStats::setData(const DataFields& data)*/
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

/*void OveroSyncStats::emitNotifications()*/
/*{*/
/*            //if (data.Send != oldData.Send)
            emit SendChanged(data.Send);
        //if (data.Received != oldData.Received)
            emit ReceivedChanged(data.Received);
        //if (data.FramesyncErrors != oldData.FramesyncErrors)
            emit FramesyncErrorsChanged(data.FramesyncErrors);
        //if (data.UnderrunErrors != oldData.UnderrunErrors)
            emit UnderrunErrorsChanged(data.UnderrunErrors);
        //if (data.DroppedUpdates != oldData.DroppedUpdates)
            emit DroppedUpdatesChanged(data.DroppedUpdates);
        //if (data.Packets != oldData.Packets)
            emit PacketsChanged(data.Packets);
        //if (data.Connected != oldData.Connected)
            emit ConnectedChanged(data.Connected);
*/
/*}*/

/*/***/
/* * Create a clone of this object, a new instance ID must be specified.*/
/* * Do not use this function directly to create new instances, the*/
/* * UAVObjectManager should be used instead.*/
/* */
/*UAVDataObject *OveroSyncStats::clone(unsigned int instID)*/
/*{*/
/*    OveroSyncStats *obj = new OveroSyncStats();*/
/*    obj->initialize(instID, this->getMetaObject());*/
/*    return obj;*/
/*}*/

/*/***/
/* * Create a clone of this object only to be used to retrieve defaults*/
/* */
/*UAVDataObject *OveroSyncStats::dirtyClone()*/
/*{*/
/*    OveroSyncStats *obj = new OveroSyncStats();*/
/*    return obj;*/
/*}*/

/*/***/
/* * Static function to retrieve an instance of the object.*/
/* */
/*OveroSyncStats *OveroSyncStats::GetInstance(UAVObjectManager *objMngr, unsigned int instID)*/
/*{*/
/*    return dynamic_cast<OveroSyncStats *>(objMngr->getObject(OveroSyncStats::OBJID, instID));*/
/*}*/

/*unsigned int OveroSyncStats::getSend() const
{
   QMutexLocker locker(mutex);
   return data.Send;
}
void OveroSyncStats::setSend(unsigned int value)
{
   mutex->lock();
   bool changed = data.Send != value;
   data.Send = value;
   mutex->unlock();
   if (changed) emit SendChanged(value);
}

unsigned int OveroSyncStats::getReceived() const
{
   QMutexLocker locker(mutex);
   return data.Received;
}
void OveroSyncStats::setReceived(unsigned int value)
{
   mutex->lock();
   bool changed = data.Received != value;
   data.Received = value;
   mutex->unlock();
   if (changed) emit ReceivedChanged(value);
}

unsigned int OveroSyncStats::getFramesyncErrors() const
{
   QMutexLocker locker(mutex);
   return data.FramesyncErrors;
}
void OveroSyncStats::setFramesyncErrors(unsigned int value)
{
   mutex->lock();
   bool changed = data.FramesyncErrors != value;
   data.FramesyncErrors = value;
   mutex->unlock();
   if (changed) emit FramesyncErrorsChanged(value);
}

unsigned int OveroSyncStats::getUnderrunErrors() const
{
   QMutexLocker locker(mutex);
   return data.UnderrunErrors;
}
void OveroSyncStats::setUnderrunErrors(unsigned int value)
{
   mutex->lock();
   bool changed = data.UnderrunErrors != value;
   data.UnderrunErrors = value;
   mutex->unlock();
   if (changed) emit UnderrunErrorsChanged(value);
}

unsigned int OveroSyncStats::getDroppedUpdates() const
{
   QMutexLocker locker(mutex);
   return data.DroppedUpdates;
}
void OveroSyncStats::setDroppedUpdates(unsigned int value)
{
   mutex->lock();
   bool changed = data.DroppedUpdates != value;
   data.DroppedUpdates = value;
   mutex->unlock();
   if (changed) emit DroppedUpdatesChanged(value);
}

unsigned int OveroSyncStats::getPackets() const
{
   QMutexLocker locker(mutex);
   return data.Packets;
}
void OveroSyncStats::setPackets(unsigned int value)
{
   mutex->lock();
   bool changed = data.Packets != value;
   data.Packets = value;
   mutex->unlock();
   if (changed) emit PacketsChanged(value);
}

unsigned char OveroSyncStats::getConnected() const
{
   QMutexLocker locker(mutex);
   return data.Connected;
}
void OveroSyncStats::setConnected(unsigned char value)
{
   mutex->lock();
   bool changed = data.Connected != value;
   data.Connected = value;
   mutex->unlock();
   if (changed) emit ConnectedChanged(value);
}

*/
