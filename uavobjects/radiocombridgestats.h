/**
 ******************************************************************************
 *
 * @file       radiocombridgestats.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: radiocombridgestats.xml. 
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
#ifndef RADIOCOMBRIDGESTATS_H
#define RADIOCOMBRIDGESTATS_H

#include <string>
#include <sstream>
#include <iostream>
#include <string.h>

#include "UAVObject.h"

    // Data Fields
typedef struct {
        unsigned int TelemetryTxBytes;
        unsigned int TelemetryTxFailures;
        unsigned int TelemetryTxRetries;
        unsigned int TelemetryRxBytes;
        unsigned int TelemetryRxFailures;
        unsigned int TelemetryRxSyncErrors;
        unsigned int TelemetryRxCrcErrors;
        unsigned int RadioTxBytes;
        unsigned int RadioTxFailures;
        unsigned int RadioTxRetries;
        unsigned int RadioRxBytes;
        unsigned int RadioRxFailures;
        unsigned int RadioRxSyncErrors;
        unsigned int RadioRxCrcErrors;

} __attribute__((packed)) DataFieldsRadioComBridgeStats;

class RadioComBridgeStats: public UAVObject
{

public:
	int instance;
	DataFieldsRadioComBridgeStats dataFields;
	static int numInstances;

    // Field information
    // Field TelemetryTxBytes information
    // Field TelemetryTxFailures information
    // Field TelemetryTxRetries information
    // Field TelemetryRxBytes information
    // Field TelemetryRxFailures information
    // Field TelemetryRxSyncErrors information
    // Field TelemetryRxCrcErrors information
    // Field RadioTxBytes information
    // Field RadioTxFailures information
    // Field RadioTxRetries information
    // Field RadioRxBytes information
    // Field RadioRxFailures information
    // Field RadioRxSyncErrors information
    // Field RadioRxCrcErrors information

  
    // Constants
    static const unsigned int NUMBYTES = sizeof(DataFieldsRadioComBridgeStats);

    // Functions
    RadioComBridgeStats(UAVObjManager* manager);
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
	
    static RadioComBridgeStats* GetInstance(UAVObjectManager* objMngr, unsigned int instID = 0);

    Q_INVOKABLE unsigned int getTelemetryTxBytes() const;
    Q_INVOKABLE unsigned int getTelemetryTxFailures() const;
    Q_INVOKABLE unsigned int getTelemetryTxRetries() const;
    Q_INVOKABLE unsigned int getTelemetryRxBytes() const;
    Q_INVOKABLE unsigned int getTelemetryRxFailures() const;
    Q_INVOKABLE unsigned int getTelemetryRxSyncErrors() const;
    Q_INVOKABLE unsigned int getTelemetryRxCrcErrors() const;
    Q_INVOKABLE unsigned int getRadioTxBytes() const;
    Q_INVOKABLE unsigned int getRadioTxFailures() const;
    Q_INVOKABLE unsigned int getRadioTxRetries() const;
    Q_INVOKABLE unsigned int getRadioRxBytes() const;
    Q_INVOKABLE unsigned int getRadioRxFailures() const;
    Q_INVOKABLE unsigned int getRadioRxSyncErrors() const;
    Q_INVOKABLE unsigned int getRadioRxCrcErrors() const;


public slots:
    void setTelemetryTxBytes(unsigned int value);
    void setTelemetryTxFailures(unsigned int value);
    void setTelemetryTxRetries(unsigned int value);
    void setTelemetryRxBytes(unsigned int value);
    void setTelemetryRxFailures(unsigned int value);
    void setTelemetryRxSyncErrors(unsigned int value);
    void setTelemetryRxCrcErrors(unsigned int value);
    void setRadioTxBytes(unsigned int value);
    void setRadioTxFailures(unsigned int value);
    void setRadioTxRetries(unsigned int value);
    void setRadioRxBytes(unsigned int value);
    void setRadioRxFailures(unsigned int value);
    void setRadioRxSyncErrors(unsigned int value);
    void setRadioRxCrcErrors(unsigned int value);


signals:
    void TelemetryTxBytesChanged(unsigned int value);
    void TelemetryTxFailuresChanged(unsigned int value);
    void TelemetryTxRetriesChanged(unsigned int value);
    void TelemetryRxBytesChanged(unsigned int value);
    void TelemetryRxFailuresChanged(unsigned int value);
    void TelemetryRxSyncErrorsChanged(unsigned int value);
    void TelemetryRxCrcErrorsChanged(unsigned int value);
    void RadioTxBytesChanged(unsigned int value);
    void RadioTxFailuresChanged(unsigned int value);
    void RadioTxRetriesChanged(unsigned int value);
    void RadioRxBytesChanged(unsigned int value);
    void RadioRxFailuresChanged(unsigned int value);
    void RadioRxSyncErrorsChanged(unsigned int value);
    void RadioRxCrcErrorsChanged(unsigned int value);


private slots:
    void emitNotifications();
	
private:
    DataFields data;

    void setDefaultFieldValues();*/

};

#endif // RADIOCOMBRIDGESTATS_H
