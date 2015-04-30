/**
 ******************************************************************************
 *
 * @file       gpsextendedstatus.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: gpsextendedstatus.xml. 
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
#ifndef GPSEXTENDEDSTATUS_H
#define GPSEXTENDEDSTATUS_H

#include <string>
#include <sstream>
#include <iostream>
#include <string.h>

#include "UAVObject.h"

    // Data Fields
typedef struct {
        unsigned int FlightTime;
        unsigned short int Options;
        unsigned char Status;
        unsigned char BoardType[2];
        unsigned char FirmwareHash[8];
        unsigned char FirmwareTag[26];

} __attribute__((packed)) DataFieldsGPSExtendedStatus;

class GPSExtendedStatus: public UAVObject
{

public:
	int instance;
	DataFieldsGPSExtendedStatus dataFields;
	static int numInstances;

    // Field information
    // Field FlightTime information
    // Field Options information
    // Field Status information
    /* Enumeration options for field Status */
    typedef enum { STATUS_NONE=0, STATUS_GPSV9=1 } StatusOptions;
    // Field BoardType information
    /* Number of elements for field BoardType */
    static const unsigned int BOARDTYPE_NUMELEM = 2;
    // Field FirmwareHash information
    /* Number of elements for field FirmwareHash */
    static const unsigned int FIRMWAREHASH_NUMELEM = 8;
    // Field FirmwareTag information
    /* Number of elements for field FirmwareTag */
    static const unsigned int FIRMWARETAG_NUMELEM = 26;

  
    // Constants
    static const unsigned int NUMBYTES = sizeof(DataFieldsGPSExtendedStatus);

    // Functions
    GPSExtendedStatus(UAVObjManager* manager);
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
	
    static GPSExtendedStatus* GetInstance(UAVObjectManager* objMngr, unsigned int instID = 0);

    Q_INVOKABLE unsigned int getFlightTime() const;
    Q_INVOKABLE unsigned short int getOptions() const;
    Q_INVOKABLE unsigned char getStatus() const;
    Q_INVOKABLE unsigned char getBoardType(unsigned int index) const;
    Q_INVOKABLE unsigned char getFirmwareHash(unsigned int index) const;
    Q_INVOKABLE unsigned char getFirmwareTag(unsigned int index) const;


public slots:
    void setFlightTime(unsigned int value);
    void setOptions(unsigned short int value);
    void setStatus(unsigned char value);
    void setBoardType(unsigned int index, unsigned char value);
    void setFirmwareHash(unsigned int index, unsigned char value);
    void setFirmwareTag(unsigned int index, unsigned char value);


signals:
    void FlightTimeChanged(unsigned int value);
    void OptionsChanged(unsigned short int value);
    void StatusChanged(unsigned char value);
    void BoardTypeChanged(unsigned int index, unsigned char value);
    void FirmwareHashChanged(unsigned int index, unsigned char value);
    void FirmwareTagChanged(unsigned int index, unsigned char value);


private slots:
    void emitNotifications();
	
private:
    DataFields data;

    void setDefaultFieldValues();*/

};

#endif // GPSEXTENDEDSTATUS_H
