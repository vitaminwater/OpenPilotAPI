/**
 ******************************************************************************
 *
 * @file       firmwareiapobj.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: firmwareiapobj.xml. 
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
#ifndef FIRMWAREIAPOBJ_H
#define FIRMWAREIAPOBJ_H

#include <string>
#include <sstream>
#include <iostream>
#include <string.h>

#include "UAVObject.h"

    // Data Fields
typedef struct {
        unsigned int crc;
        unsigned short int Command;
        unsigned short int BoardRevision;
        unsigned char Description[100];
        unsigned char CPUSerial[12];
        unsigned char BoardType;
        unsigned char BootloaderRevision;
        unsigned char ArmReset;

} __attribute__((packed)) DataFieldsFirmwareIAPObj;

class FirmwareIAPObj: public UAVObject
{

public:
	int instance;
	DataFieldsFirmwareIAPObj dataFields;
	static int numInstances;

    // Field information
    // Field crc information
    // Field Command information
    // Field BoardRevision information
    // Field Description information
    /* Number of elements for field Description */
    static const unsigned int DESCRIPTION_NUMELEM = 100;
    // Field CPUSerial information
    /* Number of elements for field CPUSerial */
    static const unsigned int CPUSERIAL_NUMELEM = 12;
    // Field BoardType information
    // Field BootloaderRevision information
    // Field ArmReset information

  
    // Constants
    static const unsigned int NUMBYTES = sizeof(DataFieldsFirmwareIAPObj);

    // Functions
    FirmwareIAPObj(UAVObjManager* manager);
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
	
    static FirmwareIAPObj* GetInstance(UAVObjectManager* objMngr, unsigned int instID = 0);

    Q_INVOKABLE unsigned int getcrc() const;
    Q_INVOKABLE unsigned short int getCommand() const;
    Q_INVOKABLE unsigned short int getBoardRevision() const;
    Q_INVOKABLE unsigned char getCPUSerial(unsigned int index) const;
    Q_INVOKABLE unsigned char getBoardType() const;
    Q_INVOKABLE unsigned char getBootloaderRevision() const;
    Q_INVOKABLE unsigned char getArmReset() const;


public slots:
    void setcrc(unsigned int value);
    void setCommand(unsigned short int value);
    void setBoardRevision(unsigned short int value);
    void setCPUSerial(unsigned int index, unsigned char value);
    void setBoardType(unsigned char value);
    void setBootloaderRevision(unsigned char value);
    void setArmReset(unsigned char value);


signals:
    void crcChanged(unsigned int value);
    void CommandChanged(unsigned short int value);
    void BoardRevisionChanged(unsigned short int value);
    void CPUSerialChanged(unsigned int index, unsigned char value);
    void BoardTypeChanged(unsigned char value);
    void BootloaderRevisionChanged(unsigned char value);
    void ArmResetChanged(unsigned char value);


private slots:
    void emitNotifications();
	
private:
    DataFields data;

    void setDefaultFieldValues();*/

};

#endif // FIRMWAREIAPOBJ_H
