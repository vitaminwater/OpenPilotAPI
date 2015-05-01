/**
 ******************************************************************************
 *
 * @file       oplinkstatus.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: oplinkstatus.xml.
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

#include "oplinkstatus.h"

int OPLinkStatus::numInstances = 0;

/**
 * Constructor
 */
OPLinkStatus::OPLinkStatus(UAVObjManager* manager): UAVObject(manager, 0xB1A94E20, "OPLinkStatus", "OPLink device status.", "System", 1, 0, ACCESS_READWRITE, ACCESS_READONLY, 0, 0, UPDATEMODE_THROTTLED, UPDATEMODE_MANUAL, 500, 0, 0)
{

}

int OPLinkStatus::UAVObjSetDataField(const char *dataIn, const std::string fieldID){
	if(fieldID == "DeviceID") {
		memset( &(dataFields.DeviceID), 0, sizeof(dataFields.DeviceID));
		memcpy( &(dataFields.DeviceID), dataIn, sizeof(dataFields.DeviceID));
	} else if(fieldID == "PairIDs") {
		memset( &(dataFields.PairIDs), 0, sizeof(dataFields.PairIDs));
		memcpy( &(dataFields.PairIDs), dataIn, sizeof(dataFields.PairIDs));
	} else if(fieldID == "BoardRevision") {
		memset( &(dataFields.BoardRevision), 0, sizeof(dataFields.BoardRevision));
		memcpy( &(dataFields.BoardRevision), dataIn, sizeof(dataFields.BoardRevision));
	} else if(fieldID == "HeapRemaining") {
		memset( &(dataFields.HeapRemaining), 0, sizeof(dataFields.HeapRemaining));
		memcpy( &(dataFields.HeapRemaining), dataIn, sizeof(dataFields.HeapRemaining));
	} else if(fieldID == "UAVTalkErrors") {
		memset( &(dataFields.UAVTalkErrors), 0, sizeof(dataFields.UAVTalkErrors));
		memcpy( &(dataFields.UAVTalkErrors), dataIn, sizeof(dataFields.UAVTalkErrors));
	} else if(fieldID == "TXRate") {
		memset( &(dataFields.TXRate), 0, sizeof(dataFields.TXRate));
		memcpy( &(dataFields.TXRate), dataIn, sizeof(dataFields.TXRate));
	} else if(fieldID == "RXRate") {
		memset( &(dataFields.RXRate), 0, sizeof(dataFields.RXRate));
		memcpy( &(dataFields.RXRate), dataIn, sizeof(dataFields.RXRate));
	} else if(fieldID == "TXSeq") {
		memset( &(dataFields.TXSeq), 0, sizeof(dataFields.TXSeq));
		memcpy( &(dataFields.TXSeq), dataIn, sizeof(dataFields.TXSeq));
	} else if(fieldID == "RXSeq") {
		memset( &(dataFields.RXSeq), 0, sizeof(dataFields.RXSeq));
		memcpy( &(dataFields.RXSeq), dataIn, sizeof(dataFields.RXSeq));
	} else if(fieldID == "Description") {
		memset( &(dataFields.Description), 0, sizeof(dataFields.Description));
		memcpy( &(dataFields.Description), dataIn, sizeof(dataFields.Description));
	} else if(fieldID == "CPUSerial") {
		memset( &(dataFields.CPUSerial), 0, sizeof(dataFields.CPUSerial));
		memcpy( &(dataFields.CPUSerial), dataIn, sizeof(dataFields.CPUSerial));
	} else if(fieldID == "BoardType") {
		memset( &(dataFields.BoardType), 0, sizeof(dataFields.BoardType));
		memcpy( &(dataFields.BoardType), dataIn, sizeof(dataFields.BoardType));
	} else if(fieldID == "RxGood") {
		memset( &(dataFields.RxGood), 0, sizeof(dataFields.RxGood));
		memcpy( &(dataFields.RxGood), dataIn, sizeof(dataFields.RxGood));
	} else if(fieldID == "RxCorrected") {
		memset( &(dataFields.RxCorrected), 0, sizeof(dataFields.RxCorrected));
		memcpy( &(dataFields.RxCorrected), dataIn, sizeof(dataFields.RxCorrected));
	} else if(fieldID == "RxErrors") {
		memset( &(dataFields.RxErrors), 0, sizeof(dataFields.RxErrors));
		memcpy( &(dataFields.RxErrors), dataIn, sizeof(dataFields.RxErrors));
	} else if(fieldID == "RxMissed") {
		memset( &(dataFields.RxMissed), 0, sizeof(dataFields.RxMissed));
		memcpy( &(dataFields.RxMissed), dataIn, sizeof(dataFields.RxMissed));
	} else if(fieldID == "RxFailure") {
		memset( &(dataFields.RxFailure), 0, sizeof(dataFields.RxFailure));
		memcpy( &(dataFields.RxFailure), dataIn, sizeof(dataFields.RxFailure));
	} else if(fieldID == "TxDropped") {
		memset( &(dataFields.TxDropped), 0, sizeof(dataFields.TxDropped));
		memcpy( &(dataFields.TxDropped), dataIn, sizeof(dataFields.TxDropped));
	} else if(fieldID == "TxFailure") {
		memset( &(dataFields.TxFailure), 0, sizeof(dataFields.TxFailure));
		memcpy( &(dataFields.TxFailure), dataIn, sizeof(dataFields.TxFailure));
	} else if(fieldID == "Resets") {
		memset( &(dataFields.Resets), 0, sizeof(dataFields.Resets));
		memcpy( &(dataFields.Resets), dataIn, sizeof(dataFields.Resets));
	} else if(fieldID == "Timeouts") {
		memset( &(dataFields.Timeouts), 0, sizeof(dataFields.Timeouts));
		memcpy( &(dataFields.Timeouts), dataIn, sizeof(dataFields.Timeouts));
	} else if(fieldID == "RSSI") {
		memset( &(dataFields.RSSI), 0, sizeof(dataFields.RSSI));
		memcpy( &(dataFields.RSSI), dataIn, sizeof(dataFields.RSSI));
	} else if(fieldID == "LinkQuality") {
		memset( &(dataFields.LinkQuality), 0, sizeof(dataFields.LinkQuality));
		memcpy( &(dataFields.LinkQuality), dataIn, sizeof(dataFields.LinkQuality));
	} else if(fieldID == "LinkState") {
		memset( &(dataFields.LinkState), 0, sizeof(dataFields.LinkState));
		memcpy( &(dataFields.LinkState), dataIn, sizeof(dataFields.LinkState));
	} else if(fieldID == "PairSignalStrengths") {
		memset( &(dataFields.PairSignalStrengths), 0, sizeof(dataFields.PairSignalStrengths));
		memcpy( &(dataFields.PairSignalStrengths), dataIn, sizeof(dataFields.PairSignalStrengths));
	}
	return 0;
}

int OPLinkStatus::UAVObjGetDataField(char *dataOut, const std::string fieldID){
	if(fieldID == "DeviceID") {
		memcpy( dataOut, &(dataFields.DeviceID), sizeof(dataFields.DeviceID));
	} else if(fieldID == "PairIDs") {
		memcpy( dataOut, &(dataFields.PairIDs), sizeof(dataFields.PairIDs));
	} else if(fieldID == "BoardRevision") {
		memcpy( dataOut, &(dataFields.BoardRevision), sizeof(dataFields.BoardRevision));
	} else if(fieldID == "HeapRemaining") {
		memcpy( dataOut, &(dataFields.HeapRemaining), sizeof(dataFields.HeapRemaining));
	} else if(fieldID == "UAVTalkErrors") {
		memcpy( dataOut, &(dataFields.UAVTalkErrors), sizeof(dataFields.UAVTalkErrors));
	} else if(fieldID == "TXRate") {
		memcpy( dataOut, &(dataFields.TXRate), sizeof(dataFields.TXRate));
	} else if(fieldID == "RXRate") {
		memcpy( dataOut, &(dataFields.RXRate), sizeof(dataFields.RXRate));
	} else if(fieldID == "TXSeq") {
		memcpy( dataOut, &(dataFields.TXSeq), sizeof(dataFields.TXSeq));
	} else if(fieldID == "RXSeq") {
		memcpy( dataOut, &(dataFields.RXSeq), sizeof(dataFields.RXSeq));
	} else if(fieldID == "Description") {
		memcpy( dataOut, &(dataFields.Description), sizeof(dataFields.Description));
	} else if(fieldID == "CPUSerial") {
		memcpy( dataOut, &(dataFields.CPUSerial), sizeof(dataFields.CPUSerial));
	} else if(fieldID == "BoardType") {
		memcpy( dataOut, &(dataFields.BoardType), sizeof(dataFields.BoardType));
	} else if(fieldID == "RxGood") {
		memcpy( dataOut, &(dataFields.RxGood), sizeof(dataFields.RxGood));
	} else if(fieldID == "RxCorrected") {
		memcpy( dataOut, &(dataFields.RxCorrected), sizeof(dataFields.RxCorrected));
	} else if(fieldID == "RxErrors") {
		memcpy( dataOut, &(dataFields.RxErrors), sizeof(dataFields.RxErrors));
	} else if(fieldID == "RxMissed") {
		memcpy( dataOut, &(dataFields.RxMissed), sizeof(dataFields.RxMissed));
	} else if(fieldID == "RxFailure") {
		memcpy( dataOut, &(dataFields.RxFailure), sizeof(dataFields.RxFailure));
	} else if(fieldID == "TxDropped") {
		memcpy( dataOut, &(dataFields.TxDropped), sizeof(dataFields.TxDropped));
	} else if(fieldID == "TxFailure") {
		memcpy( dataOut, &(dataFields.TxFailure), sizeof(dataFields.TxFailure));
	} else if(fieldID == "Resets") {
		memcpy( dataOut, &(dataFields.Resets), sizeof(dataFields.Resets));
	} else if(fieldID == "Timeouts") {
		memcpy( dataOut, &(dataFields.Timeouts), sizeof(dataFields.Timeouts));
	} else if(fieldID == "RSSI") {
		memcpy( dataOut, &(dataFields.RSSI), sizeof(dataFields.RSSI));
	} else if(fieldID == "LinkQuality") {
		memcpy( dataOut, &(dataFields.LinkQuality), sizeof(dataFields.LinkQuality));
	} else if(fieldID == "LinkState") {
		memcpy( dataOut, &(dataFields.LinkState), sizeof(dataFields.LinkState));
	} else if(fieldID == "PairSignalStrengths") {
		memcpy( dataOut, &(dataFields.PairSignalStrengths), sizeof(dataFields.PairSignalStrengths));
	}
	return 0;
}

int OPLinkStatus::UAVObjUnpack(const unsigned char *dataIn){
	memcpy(&dataFields, dataIn, NUMBYTES);
	return 0;
}

int OPLinkStatus::UAVObjPack(unsigned char *dataOut) {
	memcpy(dataOut, &dataFields, NUMBYTES);
	return 0;
}

unsigned short OPLinkStatus::UAVObjGetInstance() const {
	return instance;
}
unsigned short OPLinkStatus::UAVObjGetNumBytes() const {
	return sizeof(dataFields);
}
unsigned short OPLinkStatus::UAVObjGetNumInstances() const {
	return numInstances;
}

std::string OPLinkStatus::prettyPrint() {
	std::stringstream ss;
	ss << "\nPrinting object: oplinkstatus" << std::endl;
	ss << "\tDeviceID: " << dataFields.DeviceID << std::endl;
	ss << "\tPairIDs: " << dataFields.PairIDs << std::endl;
	ss << "\tBoardRevision: " << dataFields.BoardRevision << std::endl;
	ss << "\tHeapRemaining: " << dataFields.HeapRemaining << std::endl;
	ss << "\tUAVTalkErrors: " << dataFields.UAVTalkErrors << std::endl;
	ss << "\tTXRate: " << dataFields.TXRate << std::endl;
	ss << "\tRXRate: " << dataFields.RXRate << std::endl;
	ss << "\tTXSeq: " << dataFields.TXSeq << std::endl;
	ss << "\tRXSeq: " << dataFields.RXSeq << std::endl;
	ss << "\tDescription: " << dataFields.Description << std::endl;
	ss << "\tCPUSerial: " << dataFields.CPUSerial << std::endl;
	ss << "\tBoardType: " << dataFields.BoardType << std::endl;
	ss << "\tRxGood: " << dataFields.RxGood << std::endl;
	ss << "\tRxCorrected: " << dataFields.RxCorrected << std::endl;
	ss << "\tRxErrors: " << dataFields.RxErrors << std::endl;
	ss << "\tRxMissed: " << dataFields.RxMissed << std::endl;
	ss << "\tRxFailure: " << dataFields.RxFailure << std::endl;
	ss << "\tTxDropped: " << dataFields.TxDropped << std::endl;
	ss << "\tTxFailure: " << dataFields.TxFailure << std::endl;
	ss << "\tResets: " << dataFields.Resets << std::endl;
	ss << "\tTimeouts: " << dataFields.Timeouts << std::endl;
	ss << "\tRSSI: " << dataFields.RSSI << std::endl;
	ss << "\tLinkQuality: " << dataFields.LinkQuality << std::endl;
	ss << "\tLinkState: " << dataFields.LinkState << std::endl;
	ss << "\tPairSignalStrengths: " << dataFields.PairSignalStrengths << std::endl;

	return ss.str();
}

/*/***/
/* * Initialize object fields with the default values.*/
/* * If a default value is not specified the object fields*/
/* * will be initialized to zero.*/
/* */
/*void OPLinkStatus::setDefaultFieldValues()*/
/*{*/
/*    data.DeviceID = 0;
    data.PairIDs[0] = 0;
    data.PairIDs[1] = 0;
    data.PairIDs[2] = 0;
    data.PairIDs[3] = 0;
    data.UAVTalkErrors = 0;
    data.TXRate = 0;
    data.RXRate = 0;
    data.TXSeq = 0;
    data.RXSeq = 0;
    data.RxGood = 0;
    data.RxCorrected = 0;
    data.RxErrors = 0;
    data.RxMissed = 0;
    data.RxFailure = 0;
    data.TxDropped = 0;
    data.TxFailure = 0;
    data.Resets = 0;
    data.Timeouts = 0;
    data.RSSI = 0;
    data.LinkQuality = 0;
    data.LinkState = 0;
    data.PairSignalStrengths[0] = -127;
    data.PairSignalStrengths[1] = -127;
    data.PairSignalStrengths[2] = -127;
    data.PairSignalStrengths[3] = -127;
*/
/*}*/

/*/***/
/* * Get the object data fields*/
/* */
/*OPLinkStatus::DataFields OPLinkStatus::getData()*/
/*{*/
/*    QMutexLocker locker(mutex);*/
/*    return data;*/
/*}*/

/*/***/
/* * Set the object data fields*/
/* */
/*void OPLinkStatus::setData(const DataFields& data)*/
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

/*void OPLinkStatus::emitNotifications()*/
/*{*/
/*            //if (data.DeviceID != oldData.DeviceID)
            emit DeviceIDChanged(data.DeviceID);
        //if (data.BoardRevision != oldData.BoardRevision)
            emit BoardRevisionChanged(data.BoardRevision);
        //if (data.HeapRemaining != oldData.HeapRemaining)
            emit HeapRemainingChanged(data.HeapRemaining);
        //if (data.UAVTalkErrors != oldData.UAVTalkErrors)
            emit UAVTalkErrorsChanged(data.UAVTalkErrors);
        //if (data.TXRate != oldData.TXRate)
            emit TXRateChanged(data.TXRate);
        //if (data.RXRate != oldData.RXRate)
            emit RXRateChanged(data.RXRate);
        //if (data.TXSeq != oldData.TXSeq)
            emit TXSeqChanged(data.TXSeq);
        //if (data.RXSeq != oldData.RXSeq)
            emit RXSeqChanged(data.RXSeq);
        //if (data.BoardType != oldData.BoardType)
            emit BoardTypeChanged(data.BoardType);
        //if (data.RxGood != oldData.RxGood)
            emit RxGoodChanged(data.RxGood);
        //if (data.RxCorrected != oldData.RxCorrected)
            emit RxCorrectedChanged(data.RxCorrected);
        //if (data.RxErrors != oldData.RxErrors)
            emit RxErrorsChanged(data.RxErrors);
        //if (data.RxMissed != oldData.RxMissed)
            emit RxMissedChanged(data.RxMissed);
        //if (data.RxFailure != oldData.RxFailure)
            emit RxFailureChanged(data.RxFailure);
        //if (data.TxDropped != oldData.TxDropped)
            emit TxDroppedChanged(data.TxDropped);
        //if (data.TxFailure != oldData.TxFailure)
            emit TxFailureChanged(data.TxFailure);
        //if (data.Resets != oldData.Resets)
            emit ResetsChanged(data.Resets);
        //if (data.Timeouts != oldData.Timeouts)
            emit TimeoutsChanged(data.Timeouts);
        //if (data.RSSI != oldData.RSSI)
            emit RSSIChanged(data.RSSI);
        //if (data.LinkQuality != oldData.LinkQuality)
            emit LinkQualityChanged(data.LinkQuality);
        //if (data.LinkState != oldData.LinkState)
            emit LinkStateChanged(data.LinkState);
*/
/*}*/

/*/***/
/* * Create a clone of this object, a new instance ID must be specified.*/
/* * Do not use this function directly to create new instances, the*/
/* * UAVObjectManager should be used instead.*/
/* */
/*UAVDataObject *OPLinkStatus::clone(unsigned int instID)*/
/*{*/
/*    OPLinkStatus *obj = new OPLinkStatus();*/
/*    obj->initialize(instID, this->getMetaObject());*/
/*    return obj;*/
/*}*/

/*/***/
/* * Create a clone of this object only to be used to retrieve defaults*/
/* */
/*UAVDataObject *OPLinkStatus::dirtyClone()*/
/*{*/
/*    OPLinkStatus *obj = new OPLinkStatus();*/
/*    return obj;*/
/*}*/

/*/***/
/* * Static function to retrieve an instance of the object.*/
/* */
/*OPLinkStatus *OPLinkStatus::GetInstance(UAVObjectManager *objMngr, unsigned int instID)*/
/*{*/
/*    return dynamic_cast<OPLinkStatus *>(objMngr->getObject(OPLinkStatus::OBJID, instID));*/
/*}*/

/*unsigned int OPLinkStatus::getDeviceID() const
{
   QMutexLocker locker(mutex);
   return data.DeviceID;
}
void OPLinkStatus::setDeviceID(unsigned int value)
{
   mutex->lock();
   bool changed = data.DeviceID != value;
   data.DeviceID = value;
   mutex->unlock();
   if (changed) emit DeviceIDChanged(value);
}

unsigned int OPLinkStatus::getPairIDs(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.PairIDs[index];
}
void OPLinkStatus::setPairIDs(unsigned int index, unsigned int value)
{
   mutex->lock();
   bool changed = data.PairIDs[index] != value;
   data.PairIDs[index] = value;
   mutex->unlock();
   if (changed) emit PairIDsChanged(index,value);
}

unsigned short int OPLinkStatus::getBoardRevision() const
{
   QMutexLocker locker(mutex);
   return data.BoardRevision;
}
void OPLinkStatus::setBoardRevision(unsigned short int value)
{
   mutex->lock();
   bool changed = data.BoardRevision != value;
   data.BoardRevision = value;
   mutex->unlock();
   if (changed) emit BoardRevisionChanged(value);
}

unsigned short int OPLinkStatus::getHeapRemaining() const
{
   QMutexLocker locker(mutex);
   return data.HeapRemaining;
}
void OPLinkStatus::setHeapRemaining(unsigned short int value)
{
   mutex->lock();
   bool changed = data.HeapRemaining != value;
   data.HeapRemaining = value;
   mutex->unlock();
   if (changed) emit HeapRemainingChanged(value);
}

unsigned short int OPLinkStatus::getUAVTalkErrors() const
{
   QMutexLocker locker(mutex);
   return data.UAVTalkErrors;
}
void OPLinkStatus::setUAVTalkErrors(unsigned short int value)
{
   mutex->lock();
   bool changed = data.UAVTalkErrors != value;
   data.UAVTalkErrors = value;
   mutex->unlock();
   if (changed) emit UAVTalkErrorsChanged(value);
}

unsigned short int OPLinkStatus::getTXRate() const
{
   QMutexLocker locker(mutex);
   return data.TXRate;
}
void OPLinkStatus::setTXRate(unsigned short int value)
{
   mutex->lock();
   bool changed = data.TXRate != value;
   data.TXRate = value;
   mutex->unlock();
   if (changed) emit TXRateChanged(value);
}

unsigned short int OPLinkStatus::getRXRate() const
{
   QMutexLocker locker(mutex);
   return data.RXRate;
}
void OPLinkStatus::setRXRate(unsigned short int value)
{
   mutex->lock();
   bool changed = data.RXRate != value;
   data.RXRate = value;
   mutex->unlock();
   if (changed) emit RXRateChanged(value);
}

unsigned short int OPLinkStatus::getTXSeq() const
{
   QMutexLocker locker(mutex);
   return data.TXSeq;
}
void OPLinkStatus::setTXSeq(unsigned short int value)
{
   mutex->lock();
   bool changed = data.TXSeq != value;
   data.TXSeq = value;
   mutex->unlock();
   if (changed) emit TXSeqChanged(value);
}

unsigned short int OPLinkStatus::getRXSeq() const
{
   QMutexLocker locker(mutex);
   return data.RXSeq;
}
void OPLinkStatus::setRXSeq(unsigned short int value)
{
   mutex->lock();
   bool changed = data.RXSeq != value;
   data.RXSeq = value;
   mutex->unlock();
   if (changed) emit RXSeqChanged(value);
}

unsigned char OPLinkStatus::getCPUSerial(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.CPUSerial[index];
}
void OPLinkStatus::setCPUSerial(unsigned int index, unsigned char value)
{
   mutex->lock();
   bool changed = data.CPUSerial[index] != value;
   data.CPUSerial[index] = value;
   mutex->unlock();
   if (changed) emit CPUSerialChanged(index,value);
}

unsigned char OPLinkStatus::getBoardType() const
{
   QMutexLocker locker(mutex);
   return data.BoardType;
}
void OPLinkStatus::setBoardType(unsigned char value)
{
   mutex->lock();
   bool changed = data.BoardType != value;
   data.BoardType = value;
   mutex->unlock();
   if (changed) emit BoardTypeChanged(value);
}

unsigned char OPLinkStatus::getRxGood() const
{
   QMutexLocker locker(mutex);
   return data.RxGood;
}
void OPLinkStatus::setRxGood(unsigned char value)
{
   mutex->lock();
   bool changed = data.RxGood != value;
   data.RxGood = value;
   mutex->unlock();
   if (changed) emit RxGoodChanged(value);
}

unsigned char OPLinkStatus::getRxCorrected() const
{
   QMutexLocker locker(mutex);
   return data.RxCorrected;
}
void OPLinkStatus::setRxCorrected(unsigned char value)
{
   mutex->lock();
   bool changed = data.RxCorrected != value;
   data.RxCorrected = value;
   mutex->unlock();
   if (changed) emit RxCorrectedChanged(value);
}

unsigned char OPLinkStatus::getRxErrors() const
{
   QMutexLocker locker(mutex);
   return data.RxErrors;
}
void OPLinkStatus::setRxErrors(unsigned char value)
{
   mutex->lock();
   bool changed = data.RxErrors != value;
   data.RxErrors = value;
   mutex->unlock();
   if (changed) emit RxErrorsChanged(value);
}

unsigned char OPLinkStatus::getRxMissed() const
{
   QMutexLocker locker(mutex);
   return data.RxMissed;
}
void OPLinkStatus::setRxMissed(unsigned char value)
{
   mutex->lock();
   bool changed = data.RxMissed != value;
   data.RxMissed = value;
   mutex->unlock();
   if (changed) emit RxMissedChanged(value);
}

unsigned char OPLinkStatus::getRxFailure() const
{
   QMutexLocker locker(mutex);
   return data.RxFailure;
}
void OPLinkStatus::setRxFailure(unsigned char value)
{
   mutex->lock();
   bool changed = data.RxFailure != value;
   data.RxFailure = value;
   mutex->unlock();
   if (changed) emit RxFailureChanged(value);
}

unsigned char OPLinkStatus::getTxDropped() const
{
   QMutexLocker locker(mutex);
   return data.TxDropped;
}
void OPLinkStatus::setTxDropped(unsigned char value)
{
   mutex->lock();
   bool changed = data.TxDropped != value;
   data.TxDropped = value;
   mutex->unlock();
   if (changed) emit TxDroppedChanged(value);
}

unsigned char OPLinkStatus::getTxFailure() const
{
   QMutexLocker locker(mutex);
   return data.TxFailure;
}
void OPLinkStatus::setTxFailure(unsigned char value)
{
   mutex->lock();
   bool changed = data.TxFailure != value;
   data.TxFailure = value;
   mutex->unlock();
   if (changed) emit TxFailureChanged(value);
}

unsigned char OPLinkStatus::getResets() const
{
   QMutexLocker locker(mutex);
   return data.Resets;
}
void OPLinkStatus::setResets(unsigned char value)
{
   mutex->lock();
   bool changed = data.Resets != value;
   data.Resets = value;
   mutex->unlock();
   if (changed) emit ResetsChanged(value);
}

unsigned char OPLinkStatus::getTimeouts() const
{
   QMutexLocker locker(mutex);
   return data.Timeouts;
}
void OPLinkStatus::setTimeouts(unsigned char value)
{
   mutex->lock();
   bool changed = data.Timeouts != value;
   data.Timeouts = value;
   mutex->unlock();
   if (changed) emit TimeoutsChanged(value);
}

char OPLinkStatus::getRSSI() const
{
   QMutexLocker locker(mutex);
   return data.RSSI;
}
void OPLinkStatus::setRSSI(char value)
{
   mutex->lock();
   bool changed = data.RSSI != value;
   data.RSSI = value;
   mutex->unlock();
   if (changed) emit RSSIChanged(value);
}

unsigned char OPLinkStatus::getLinkQuality() const
{
   QMutexLocker locker(mutex);
   return data.LinkQuality;
}
void OPLinkStatus::setLinkQuality(unsigned char value)
{
   mutex->lock();
   bool changed = data.LinkQuality != value;
   data.LinkQuality = value;
   mutex->unlock();
   if (changed) emit LinkQualityChanged(value);
}

unsigned char OPLinkStatus::getLinkState() const
{
   QMutexLocker locker(mutex);
   return data.LinkState;
}
void OPLinkStatus::setLinkState(unsigned char value)
{
   mutex->lock();
   bool changed = data.LinkState != value;
   data.LinkState = value;
   mutex->unlock();
   if (changed) emit LinkStateChanged(value);
}

char OPLinkStatus::getPairSignalStrengths(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.PairSignalStrengths[index];
}
void OPLinkStatus::setPairSignalStrengths(unsigned int index, char value)
{
   mutex->lock();
   bool changed = data.PairSignalStrengths[index] != value;
   data.PairSignalStrengths[index] = value;
   mutex->unlock();
   if (changed) emit PairSignalStrengthsChanged(index,value);
}

*/
