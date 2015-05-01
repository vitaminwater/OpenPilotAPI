/**
 ******************************************************************************
 *
 * @file       overosyncstats.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: overosyncstats.xml. 
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
#ifndef OVEROSYNCSTATS_H
#define OVEROSYNCSTATS_H

#include <string>
#include <sstream>
#include <iostream>
#include <string.h>

#include "UAVObject.h"

    // Data Fields
typedef struct {
        unsigned int Send;
        unsigned int Received;
        unsigned int FramesyncErrors;
        unsigned int UnderrunErrors;
        unsigned int DroppedUpdates;
        unsigned int Packets;
        unsigned char Connected;

} __attribute__((packed)) DataFieldsOveroSyncStats;

class OveroSyncStats: public UAVObject
{

public:
	int instance;
	DataFieldsOveroSyncStats dataFields;
	static int numInstances;

    // Field information
    // Field Send information
    // Field Received information
    // Field FramesyncErrors information
    // Field UnderrunErrors information
    // Field DroppedUpdates information
    // Field Packets information
    // Field Connected information
    /* Enumeration options for field Connected */
    typedef enum { CONNECTED_FALSE=0, CONNECTED_TRUE=1 } ConnectedOptions;

  
    // Constants
    static const unsigned int NUMBYTES = sizeof(DataFieldsOveroSyncStats);

    // Functions
    OveroSyncStats(UAVObjManager* manager);
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
	
    static OveroSyncStats* GetInstance(UAVObjectManager* objMngr, unsigned int instID = 0);

    Q_INVOKABLE unsigned int getSend() const;
    Q_INVOKABLE unsigned int getReceived() const;
    Q_INVOKABLE unsigned int getFramesyncErrors() const;
    Q_INVOKABLE unsigned int getUnderrunErrors() const;
    Q_INVOKABLE unsigned int getDroppedUpdates() const;
    Q_INVOKABLE unsigned int getPackets() const;
    Q_INVOKABLE unsigned char getConnected() const;


public slots:
    void setSend(unsigned int value);
    void setReceived(unsigned int value);
    void setFramesyncErrors(unsigned int value);
    void setUnderrunErrors(unsigned int value);
    void setDroppedUpdates(unsigned int value);
    void setPackets(unsigned int value);
    void setConnected(unsigned char value);


signals:
    void SendChanged(unsigned int value);
    void ReceivedChanged(unsigned int value);
    void FramesyncErrorsChanged(unsigned int value);
    void UnderrunErrorsChanged(unsigned int value);
    void DroppedUpdatesChanged(unsigned int value);
    void PacketsChanged(unsigned int value);
    void ConnectedChanged(unsigned char value);


private slots:
    void emitNotifications();
	
private:
    DataFields data;

    void setDefaultFieldValues();*/

};

#endif // OVEROSYNCSTATS_H
