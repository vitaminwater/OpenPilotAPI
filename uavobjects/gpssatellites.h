/**
 ******************************************************************************
 *
 * @file       gpssatellites.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: gpssatellites.xml. 
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
#ifndef GPSSATELLITES_H
#define GPSSATELLITES_H

#include <string>
#include <sstream>
#include <iostream>
#include <string.h>

#include "UAVObject.h"

    // Data Fields
typedef struct {
        short int Azimuth[16];
        char SatsInView;
        char PRN[16];
        char Elevation[16];
        char SNR[16];

} __attribute__((packed)) DataFieldsGPSSatellites;

class GPSSatellites: public UAVObject
{

public:
	int instance;
	DataFieldsGPSSatellites dataFields;
	static int numInstances;

    // Field information
    // Field Azimuth information
    /* Number of elements for field Azimuth */
    static const unsigned int AZIMUTH_NUMELEM = 16;
    // Field SatsInView information
    // Field PRN information
    /* Number of elements for field PRN */
    static const unsigned int PRN_NUMELEM = 16;
    // Field Elevation information
    /* Number of elements for field Elevation */
    static const unsigned int ELEVATION_NUMELEM = 16;
    // Field SNR information
    /* Number of elements for field SNR */
    static const unsigned int SNR_NUMELEM = 16;

  
    // Constants
    static const unsigned int NUMBYTES = sizeof(DataFieldsGPSSatellites);

    // Functions
    GPSSatellites(UAVObjManager* manager);
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
	
    static GPSSatellites* GetInstance(UAVObjectManager* objMngr, unsigned int instID = 0);

    Q_INVOKABLE short int getAzimuth(unsigned int index) const;
    Q_INVOKABLE char getSatsInView() const;
    Q_INVOKABLE char getPRN(unsigned int index) const;
    Q_INVOKABLE char getElevation(unsigned int index) const;
    Q_INVOKABLE char getSNR(unsigned int index) const;


public slots:
    void setAzimuth(unsigned int index, short int value);
    void setSatsInView(char value);
    void setPRN(unsigned int index, char value);
    void setElevation(unsigned int index, char value);
    void setSNR(unsigned int index, char value);


signals:
    void AzimuthChanged(unsigned int index, short int value);
    void SatsInViewChanged(char value);
    void PRNChanged(unsigned int index, char value);
    void ElevationChanged(unsigned int index, char value);
    void SNRChanged(unsigned int index, char value);


private slots:
    void emitNotifications();
	
private:
    DataFields data;

    void setDefaultFieldValues();*/

};

#endif // GPSSATELLITES_H
