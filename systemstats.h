/**
 ******************************************************************************
 *
 * @file       systemstats.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: systemstats.xml. 
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
#ifndef SYSTEMSTATS_H
#define SYSTEMSTATS_H

#include <string>
#include <sstream>
#include <iostream>
#include <string.h>

#include "UAVObject.h"

    // Data Fields
typedef struct {
        unsigned int FlightTime;
        unsigned int HeapRemaining;
        unsigned int EventSystemWarningID;
        unsigned int ObjectManagerCallbackID;
        unsigned int ObjectManagerQueueID;
        unsigned short int IRQStackRemaining;
        unsigned short int SystemModStackRemaining;
        unsigned short int SysSlotsFree;
        unsigned short int SysSlotsActive;
        unsigned short int UsrSlotsFree;
        unsigned short int UsrSlotsActive;
        unsigned char CPULoad;
        char CPUTemp;

} __attribute__((packed)) DataFieldsSystemStats;

class SystemStats: public UAVObject
{

public:
	int instance;
	DataFieldsSystemStats dataFields;
	static int numInstances;

    // Field information
    // Field FlightTime information
    // Field HeapRemaining information
    // Field EventSystemWarningID information
    // Field ObjectManagerCallbackID information
    // Field ObjectManagerQueueID information
    // Field IRQStackRemaining information
    // Field SystemModStackRemaining information
    // Field SysSlotsFree information
    // Field SysSlotsActive information
    // Field UsrSlotsFree information
    // Field UsrSlotsActive information
    // Field CPULoad information
    // Field CPUTemp information

  
    // Constants
    static const unsigned int NUMBYTES = sizeof(DataFieldsSystemStats);

    // Functions
    SystemStats(UAVObjManager* manager);
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
	
    static SystemStats* GetInstance(UAVObjectManager* objMngr, unsigned int instID = 0);

    Q_INVOKABLE unsigned int getFlightTime() const;
    Q_INVOKABLE unsigned int getHeapRemaining() const;
    Q_INVOKABLE unsigned int getEventSystemWarningID() const;
    Q_INVOKABLE unsigned int getObjectManagerCallbackID() const;
    Q_INVOKABLE unsigned int getObjectManagerQueueID() const;
    Q_INVOKABLE unsigned short int getIRQStackRemaining() const;
    Q_INVOKABLE unsigned short int getSystemModStackRemaining() const;
    Q_INVOKABLE unsigned short int getSysSlotsFree() const;
    Q_INVOKABLE unsigned short int getSysSlotsActive() const;
    Q_INVOKABLE unsigned short int getUsrSlotsFree() const;
    Q_INVOKABLE unsigned short int getUsrSlotsActive() const;
    Q_INVOKABLE unsigned char getCPULoad() const;
    Q_INVOKABLE char getCPUTemp() const;


public slots:
    void setFlightTime(unsigned int value);
    void setHeapRemaining(unsigned int value);
    void setEventSystemWarningID(unsigned int value);
    void setObjectManagerCallbackID(unsigned int value);
    void setObjectManagerQueueID(unsigned int value);
    void setIRQStackRemaining(unsigned short int value);
    void setSystemModStackRemaining(unsigned short int value);
    void setSysSlotsFree(unsigned short int value);
    void setSysSlotsActive(unsigned short int value);
    void setUsrSlotsFree(unsigned short int value);
    void setUsrSlotsActive(unsigned short int value);
    void setCPULoad(unsigned char value);
    void setCPUTemp(char value);


signals:
    void FlightTimeChanged(unsigned int value);
    void HeapRemainingChanged(unsigned int value);
    void EventSystemWarningIDChanged(unsigned int value);
    void ObjectManagerCallbackIDChanged(unsigned int value);
    void ObjectManagerQueueIDChanged(unsigned int value);
    void IRQStackRemainingChanged(unsigned short int value);
    void SystemModStackRemainingChanged(unsigned short int value);
    void SysSlotsFreeChanged(unsigned short int value);
    void SysSlotsActiveChanged(unsigned short int value);
    void UsrSlotsFreeChanged(unsigned short int value);
    void UsrSlotsActiveChanged(unsigned short int value);
    void CPULoadChanged(unsigned char value);
    void CPUTempChanged(char value);


private slots:
    void emitNotifications();
	
private:
    DataFields data;

    void setDefaultFieldValues();*/

};

#endif // SYSTEMSTATS_H
