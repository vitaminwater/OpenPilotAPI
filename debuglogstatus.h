/**
 ******************************************************************************
 *
 * @file       debuglogstatus.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: debuglogstatus.xml. 
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
#ifndef DEBUGLOGSTATUS_H
#define DEBUGLOGSTATUS_H

#include <string>
#include <sstream>
#include <iostream>
#include <string.h>

#include "UAVObject.h"

    // Data Fields
typedef struct {
        unsigned short int Flight;
        unsigned short int Entry;
        unsigned short int UsedSlots;
        unsigned short int FreeSlots;

} __attribute__((packed)) DataFieldsDebugLogStatus;

class DebugLogStatus: public UAVObject
{

public:
	int instance;
	DataFieldsDebugLogStatus dataFields;
	static int numInstances;

    // Field information
    // Field Flight information
    // Field Entry information
    // Field UsedSlots information
    // Field FreeSlots information

  
    // Constants
    static const unsigned int NUMBYTES = sizeof(DataFieldsDebugLogStatus);

    // Functions
    DebugLogStatus(UAVObjManager* manager);
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
	
    static DebugLogStatus* GetInstance(UAVObjectManager* objMngr, unsigned int instID = 0);

    Q_INVOKABLE unsigned short int getFlight() const;
    Q_INVOKABLE unsigned short int getEntry() const;
    Q_INVOKABLE unsigned short int getUsedSlots() const;
    Q_INVOKABLE unsigned short int getFreeSlots() const;


public slots:
    void setFlight(unsigned short int value);
    void setEntry(unsigned short int value);
    void setUsedSlots(unsigned short int value);
    void setFreeSlots(unsigned short int value);


signals:
    void FlightChanged(unsigned short int value);
    void EntryChanged(unsigned short int value);
    void UsedSlotsChanged(unsigned short int value);
    void FreeSlotsChanged(unsigned short int value);


private slots:
    void emitNotifications();
	
private:
    DataFields data;

    void setDefaultFieldValues();*/

};

#endif // DEBUGLOGSTATUS_H
