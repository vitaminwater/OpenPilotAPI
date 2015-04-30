/**
 ******************************************************************************
 *
 * @file       debuglogentry.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: debuglogentry.xml. 
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
#ifndef DEBUGLOGENTRY_H
#define DEBUGLOGENTRY_H

#include <string>
#include <sstream>
#include <iostream>
#include <string.h>

#include "UAVObject.h"

    // Data Fields
typedef struct {
        unsigned int FlightTime;
        unsigned int ObjectID;
        unsigned short int Flight;
        unsigned short int Entry;
        unsigned short int InstanceID;
        unsigned short int Size;
        unsigned char Type;
        unsigned char Data[200];

} __attribute__((packed)) DataFieldsDebugLogEntry;

class DebugLogEntry: public UAVObject
{

public:
	int instance;
	DataFieldsDebugLogEntry dataFields;
	static int numInstances;

    // Field information
    // Field FlightTime information
    // Field ObjectID information
    // Field Flight information
    // Field Entry information
    // Field InstanceID information
    // Field Size information
    // Field Type information
    /* Enumeration options for field Type */
    typedef enum { TYPE_EMPTY=0, TYPE_TEXT=1, TYPE_UAVOBJECT=2, TYPE_MULTIPLEUAVOBJECTS=3 } TypeOptions;
    // Field Data information
    /* Number of elements for field Data */
    static const unsigned int DATA_NUMELEM = 200;

  
    // Constants
    static const unsigned int NUMBYTES = sizeof(DataFieldsDebugLogEntry);

    // Functions
    DebugLogEntry(UAVObjManager* manager);
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
	
    static DebugLogEntry* GetInstance(UAVObjectManager* objMngr, unsigned int instID = 0);

    Q_INVOKABLE unsigned int getFlightTime() const;
    Q_INVOKABLE unsigned int getObjectID() const;
    Q_INVOKABLE unsigned short int getFlight() const;
    Q_INVOKABLE unsigned short int getEntry() const;
    Q_INVOKABLE unsigned short int getInstanceID() const;
    Q_INVOKABLE unsigned short int getSize() const;
    Q_INVOKABLE unsigned char getType() const;
    Q_INVOKABLE unsigned char getData(unsigned int index) const;


public slots:
    void setFlightTime(unsigned int value);
    void setObjectID(unsigned int value);
    void setFlight(unsigned short int value);
    void setEntry(unsigned short int value);
    void setInstanceID(unsigned short int value);
    void setSize(unsigned short int value);
    void setType(unsigned char value);
    void setData(unsigned int index, unsigned char value);


signals:
    void FlightTimeChanged(unsigned int value);
    void ObjectIDChanged(unsigned int value);
    void FlightChanged(unsigned short int value);
    void EntryChanged(unsigned short int value);
    void InstanceIDChanged(unsigned short int value);
    void SizeChanged(unsigned short int value);
    void TypeChanged(unsigned char value);
    void DataChanged(unsigned int index, unsigned char value);


private slots:
    void emitNotifications();
	
private:
    DataFields data;

    void setDefaultFieldValues();*/

};

#endif // DEBUGLOGENTRY_H
