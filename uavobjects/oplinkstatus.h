/**
 ******************************************************************************
 *
 * @file       oplinkstatus.h
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
#ifndef OPLINKSTATUS_H
#define OPLINKSTATUS_H

#include <string>
#include <sstream>
#include <iostream>
#include <string.h>

#include "UAVObject.h"

    // Data Fields
typedef struct {
        unsigned int DeviceID;
        unsigned int PairIDs[4];
        unsigned short int BoardRevision;
        unsigned short int HeapRemaining;
        unsigned short int UAVTalkErrors;
        unsigned short int TXRate;
        unsigned short int RXRate;
        unsigned short int TXSeq;
        unsigned short int RXSeq;
        unsigned char Description[40];
        unsigned char CPUSerial[12];
        unsigned char BoardType;
        unsigned char RxGood;
        unsigned char RxCorrected;
        unsigned char RxErrors;
        unsigned char RxMissed;
        unsigned char RxFailure;
        unsigned char TxDropped;
        unsigned char TxFailure;
        unsigned char Resets;
        unsigned char Timeouts;
        char RSSI;
        unsigned char LinkQuality;
        unsigned char LinkState;
        char PairSignalStrengths[4];

} __attribute__((packed)) DataFieldsOPLinkStatus;

class OPLinkStatus: public UAVObject
{

public:
	int instance;
	DataFieldsOPLinkStatus dataFields;
	static int numInstances;

    // Field information
    // Field DeviceID information
    // Field PairIDs information
    /* Number of elements for field PairIDs */
    static const unsigned int PAIRIDS_NUMELEM = 4;
    // Field BoardRevision information
    // Field HeapRemaining information
    // Field UAVTalkErrors information
    // Field TXRate information
    // Field RXRate information
    // Field TXSeq information
    // Field RXSeq information
    // Field Description information
    /* Number of elements for field Description */
    static const unsigned int DESCRIPTION_NUMELEM = 40;
    // Field CPUSerial information
    /* Number of elements for field CPUSerial */
    static const unsigned int CPUSERIAL_NUMELEM = 12;
    // Field BoardType information
    // Field RxGood information
    // Field RxCorrected information
    // Field RxErrors information
    // Field RxMissed information
    // Field RxFailure information
    // Field TxDropped information
    // Field TxFailure information
    // Field Resets information
    // Field Timeouts information
    // Field RSSI information
    // Field LinkQuality information
    // Field LinkState information
    /* Enumeration options for field LinkState */
    typedef enum { LINKSTATE_DISABLED=0, LINKSTATE_ENABLED=1, LINKSTATE_DISCONNECTED=2, LINKSTATE_CONNECTING=3, LINKSTATE_CONNECTED=4 } LinkStateOptions;
    // Field PairSignalStrengths information
    /* Number of elements for field PairSignalStrengths */
    static const unsigned int PAIRSIGNALSTRENGTHS_NUMELEM = 4;

  
    // Constants
    static const unsigned int NUMBYTES = sizeof(DataFieldsOPLinkStatus);

    // Functions
    OPLinkStatus(UAVObjManager* manager);
	int UAVObjSetDataField(const char *dataIn, const std::string fieldID);
	int UAVObjGetDataField(char *dataOut, const std::string fieldID);
	int UAVObjUnpack(const unsigned char *dataIn);
	int UAVObjPack(unsigned char *dataOut);
	unsigned short UAVObjGetInstance() const;
	unsigned short UAVObjGetNumBytes() const;
	unsigned short UAVObjGetNumInstances() const;
	std::string prettyPrint();

    /*DataFields getData();
    void setData(const DataFields& data);
    Metadata getDefaultMetadata();
    UAVDataObject* clone(unsigned int instID);
	UAVDataObject* dirtyClone();
	
    static OPLinkStatus* GetInstance(UAVObjectManager* objMngr, unsigned int instID = 0);

    Q_INVOKABLE unsigned int getDeviceID() const;
    Q_INVOKABLE unsigned int getPairIDs(unsigned int index) const;
    Q_INVOKABLE unsigned short int getBoardRevision() const;
    Q_INVOKABLE unsigned short int getHeapRemaining() const;
    Q_INVOKABLE unsigned short int getUAVTalkErrors() const;
    Q_INVOKABLE unsigned short int getTXRate() const;
    Q_INVOKABLE unsigned short int getRXRate() const;
    Q_INVOKABLE unsigned short int getTXSeq() const;
    Q_INVOKABLE unsigned short int getRXSeq() const;
    Q_INVOKABLE unsigned char getCPUSerial(unsigned int index) const;
    Q_INVOKABLE unsigned char getBoardType() const;
    Q_INVOKABLE unsigned char getRxGood() const;
    Q_INVOKABLE unsigned char getRxCorrected() const;
    Q_INVOKABLE unsigned char getRxErrors() const;
    Q_INVOKABLE unsigned char getRxMissed() const;
    Q_INVOKABLE unsigned char getRxFailure() const;
    Q_INVOKABLE unsigned char getTxDropped() const;
    Q_INVOKABLE unsigned char getTxFailure() const;
    Q_INVOKABLE unsigned char getResets() const;
    Q_INVOKABLE unsigned char getTimeouts() const;
    Q_INVOKABLE char getRSSI() const;
    Q_INVOKABLE unsigned char getLinkQuality() const;
    Q_INVOKABLE unsigned char getLinkState() const;
    Q_INVOKABLE char getPairSignalStrengths(unsigned int index) const;


public slots:
    void setDeviceID(unsigned int value);
    void setPairIDs(unsigned int index, unsigned int value);
    void setBoardRevision(unsigned short int value);
    void setHeapRemaining(unsigned short int value);
    void setUAVTalkErrors(unsigned short int value);
    void setTXRate(unsigned short int value);
    void setRXRate(unsigned short int value);
    void setTXSeq(unsigned short int value);
    void setRXSeq(unsigned short int value);
    void setCPUSerial(unsigned int index, unsigned char value);
    void setBoardType(unsigned char value);
    void setRxGood(unsigned char value);
    void setRxCorrected(unsigned char value);
    void setRxErrors(unsigned char value);
    void setRxMissed(unsigned char value);
    void setRxFailure(unsigned char value);
    void setTxDropped(unsigned char value);
    void setTxFailure(unsigned char value);
    void setResets(unsigned char value);
    void setTimeouts(unsigned char value);
    void setRSSI(char value);
    void setLinkQuality(unsigned char value);
    void setLinkState(unsigned char value);
    void setPairSignalStrengths(unsigned int index, char value);


signals:
    void DeviceIDChanged(unsigned int value);
    void PairIDsChanged(unsigned int index, unsigned int value);
    void BoardRevisionChanged(unsigned short int value);
    void HeapRemainingChanged(unsigned short int value);
    void UAVTalkErrorsChanged(unsigned short int value);
    void TXRateChanged(unsigned short int value);
    void RXRateChanged(unsigned short int value);
    void TXSeqChanged(unsigned short int value);
    void RXSeqChanged(unsigned short int value);
    void CPUSerialChanged(unsigned int index, unsigned char value);
    void BoardTypeChanged(unsigned char value);
    void RxGoodChanged(unsigned char value);
    void RxCorrectedChanged(unsigned char value);
    void RxErrorsChanged(unsigned char value);
    void RxMissedChanged(unsigned char value);
    void RxFailureChanged(unsigned char value);
    void TxDroppedChanged(unsigned char value);
    void TxFailureChanged(unsigned char value);
    void ResetsChanged(unsigned char value);
    void TimeoutsChanged(unsigned char value);
    void RSSIChanged(char value);
    void LinkQualityChanged(unsigned char value);
    void LinkStateChanged(unsigned char value);
    void PairSignalStrengthsChanged(unsigned int index, char value);


private slots:
    void emitNotifications();
	
private:
    DataFields data;

    void setDefaultFieldValues();*/

};

#endif // OPLINKSTATUS_H
