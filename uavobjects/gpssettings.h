/**
 ******************************************************************************
 *
 * @file       gpssettings.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: gpssettings.xml. 
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
#ifndef GPSSETTINGS_H
#define GPSSETTINGS_H

#include <string>
#include <sstream>
#include <iostream>
#include <string.h>

#include "UAVObject.h"

    // Data Fields
typedef struct {
        float MaxPDOP;
        unsigned char DataProtocol;
        unsigned char MinSatellites;
        unsigned char UbxAutoConfig;
        char UbxRate;
        unsigned char UbxDynamicModel;
        unsigned char UbxSBASMode;
        unsigned char UbxSBASChannelsUsed;
        unsigned char UbxSBASSats;

} __attribute__((packed)) DataFieldsGPSSettings;

class GPSSettings: public UAVObject
{

public:
	int instance;
	DataFieldsGPSSettings dataFields;
	static int numInstances;

    // Field information
    // Field MaxPDOP information
    // Field DataProtocol information
    /* Enumeration options for field DataProtocol */
    typedef enum { DATAPROTOCOL_NMEA=0, DATAPROTOCOL_UBX=1 } DataProtocolOptions;
    // Field MinSatellites information
    // Field UbxAutoConfig information
    /* Enumeration options for field UbxAutoConfig */
    typedef enum { UBXAUTOCONFIG_DISABLED=0, UBXAUTOCONFIG_CONFIGURE=1, UBXAUTOCONFIG_CONFIGUREANDSTORE=2 } UbxAutoConfigOptions;
    // Field UbxRate information
    // Field UbxDynamicModel information
    /* Enumeration options for field UbxDynamicModel */
    typedef enum { UBXDYNAMICMODEL_PORTABLE=0, UBXDYNAMICMODEL_STATIONARY=1, UBXDYNAMICMODEL_PEDESTRIAN=2, UBXDYNAMICMODEL_AUTOMOTIVE=3, UBXDYNAMICMODEL_SEA=4, UBXDYNAMICMODEL_AIRBORNE1G=5, UBXDYNAMICMODEL_AIRBORNE2G=6, UBXDYNAMICMODEL_AIRBORNE4G=7 } UbxDynamicModelOptions;
    // Field UbxSBASMode information
    /* Enumeration options for field UbxSBASMode */
    typedef enum { UBXSBASMODE_DISABLED=0, UBXSBASMODE_RANGING=1, UBXSBASMODE_CORRECTION=2, UBXSBASMODE_INTEGRITY=3, UBXSBASMODE_RANGINGCORRECTION=4, UBXSBASMODE_RANGINGINTEGRITY=5, UBXSBASMODE_RANGINGCORRECTIONINTEGRITY=6, UBXSBASMODE_CORRECTIONINTEGRITY=7 } UbxSBASModeOptions;
    // Field UbxSBASChannelsUsed information
    // Field UbxSBASSats information
    /* Enumeration options for field UbxSBASSats */
    typedef enum { UBXSBASSATS_AUTOSCAN=0, UBXSBASSATS_WAAS=1, UBXSBASSATS_EGNOS=2, UBXSBASSATS_MSAS=3, UBXSBASSATS_GAGAN=4, UBXSBASSATS_SDCM=5 } UbxSBASSatsOptions;

  
    // Constants
    static const unsigned int NUMBYTES = sizeof(DataFieldsGPSSettings);

    // Functions
    GPSSettings(UAVObjManager* manager);
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
	
    static GPSSettings* GetInstance(UAVObjectManager* objMngr, unsigned int instID = 0);

    Q_INVOKABLE float getMaxPDOP() const;
    Q_INVOKABLE unsigned char getDataProtocol() const;
    Q_INVOKABLE unsigned char getMinSatellites() const;
    Q_INVOKABLE unsigned char getUbxAutoConfig() const;
    Q_INVOKABLE char getUbxRate() const;
    Q_INVOKABLE unsigned char getUbxDynamicModel() const;
    Q_INVOKABLE unsigned char getUbxSBASMode() const;
    Q_INVOKABLE unsigned char getUbxSBASChannelsUsed() const;
    Q_INVOKABLE unsigned char getUbxSBASSats() const;


public slots:
    void setMaxPDOP(float value);
    void setDataProtocol(unsigned char value);
    void setMinSatellites(unsigned char value);
    void setUbxAutoConfig(unsigned char value);
    void setUbxRate(char value);
    void setUbxDynamicModel(unsigned char value);
    void setUbxSBASMode(unsigned char value);
    void setUbxSBASChannelsUsed(unsigned char value);
    void setUbxSBASSats(unsigned char value);


signals:
    void MaxPDOPChanged(float value);
    void DataProtocolChanged(unsigned char value);
    void MinSatellitesChanged(unsigned char value);
    void UbxAutoConfigChanged(unsigned char value);
    void UbxRateChanged(char value);
    void UbxDynamicModelChanged(unsigned char value);
    void UbxSBASModeChanged(unsigned char value);
    void UbxSBASChannelsUsedChanged(unsigned char value);
    void UbxSBASSatsChanged(unsigned char value);


private slots:
    void emitNotifications();
	
private:
    DataFields data;

    void setDefaultFieldValues();*/

};

#endif // GPSSETTINGS_H
