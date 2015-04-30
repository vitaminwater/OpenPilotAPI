/**
 ******************************************************************************
 *
 * @file       gcstelemetrystats.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: gcstelemetrystats.xml. 
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
#ifndef GCSTELEMETRYSTATS_H
#define GCSTELEMETRYSTATS_H

#include <string>
#include <sstream>
#include <iostream>
#include <string.h>

#include "UAVObject.h"

    // Data Fields
typedef struct {
        float TxDataRate;
        unsigned int TxBytes;
        unsigned int TxFailures;
        unsigned int TxRetries;
        float RxDataRate;
        unsigned int RxBytes;
        unsigned int RxFailures;
        unsigned int RxSyncErrors;
        unsigned int RxCrcErrors;
        unsigned char Status;

} __attribute__((packed)) DataFieldsGCSTelemetryStats;

class GCSTelemetryStats: public UAVObject
{

public:
	int instance;
	DataFieldsGCSTelemetryStats dataFields;
	static int numInstances;

    // Field information
    // Field TxDataRate information
    // Field TxBytes information
    // Field TxFailures information
    // Field TxRetries information
    // Field RxDataRate information
    // Field RxBytes information
    // Field RxFailures information
    // Field RxSyncErrors information
    // Field RxCrcErrors information
    // Field Status information
    /* Enumeration options for field Status */
    typedef enum { STATUS_DISCONNECTED=0, STATUS_HANDSHAKEREQ=1, STATUS_HANDSHAKEACK=2, STATUS_CONNECTED=3 } StatusOptions;

  
    // Constants
    static const unsigned int NUMBYTES = sizeof(DataFieldsGCSTelemetryStats);

    // Functions
    GCSTelemetryStats(UAVObjManager* manager);
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
	
    static GCSTelemetryStats* GetInstance(UAVObjectManager* objMngr, unsigned int instID = 0);

    Q_INVOKABLE float getTxDataRate() const;
    Q_INVOKABLE unsigned int getTxBytes() const;
    Q_INVOKABLE unsigned int getTxFailures() const;
    Q_INVOKABLE unsigned int getTxRetries() const;
    Q_INVOKABLE float getRxDataRate() const;
    Q_INVOKABLE unsigned int getRxBytes() const;
    Q_INVOKABLE unsigned int getRxFailures() const;
    Q_INVOKABLE unsigned int getRxSyncErrors() const;
    Q_INVOKABLE unsigned int getRxCrcErrors() const;
    Q_INVOKABLE unsigned char getStatus() const;


public slots:
    void setTxDataRate(float value);
    void setTxBytes(unsigned int value);
    void setTxFailures(unsigned int value);
    void setTxRetries(unsigned int value);
    void setRxDataRate(float value);
    void setRxBytes(unsigned int value);
    void setRxFailures(unsigned int value);
    void setRxSyncErrors(unsigned int value);
    void setRxCrcErrors(unsigned int value);
    void setStatus(unsigned char value);


signals:
    void TxDataRateChanged(float value);
    void TxBytesChanged(unsigned int value);
    void TxFailuresChanged(unsigned int value);
    void TxRetriesChanged(unsigned int value);
    void RxDataRateChanged(float value);
    void RxBytesChanged(unsigned int value);
    void RxFailuresChanged(unsigned int value);
    void RxSyncErrorsChanged(unsigned int value);
    void RxCrcErrorsChanged(unsigned int value);
    void StatusChanged(unsigned char value);


private slots:
    void emitNotifications();
	
private:
    DataFields data;

    void setDefaultFieldValues();*/

};

#endif // GCSTELEMETRYSTATS_H
