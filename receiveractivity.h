/**
 ******************************************************************************
 *
 * @file       receiveractivity.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: receiveractivity.xml. 
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
#ifndef RECEIVERACTIVITY_H
#define RECEIVERACTIVITY_H

#include <string>
#include <sstream>
#include <iostream>
#include <string.h>

#include "UAVObject.h"

    // Data Fields
typedef struct {
        unsigned char ActiveGroup;
        unsigned char ActiveChannel;

} __attribute__((packed)) DataFieldsReceiverActivity;

class ReceiverActivity: public UAVObject
{

public:
	int instance;
	DataFieldsReceiverActivity dataFields;
	static int numInstances;

    // Field information
    // Field ActiveGroup information
    /* Enumeration options for field ActiveGroup */
    typedef enum { ACTIVEGROUP_PWM=0, ACTIVEGROUP_PPM=1, ACTIVEGROUP_DSMMAINPORT=2, ACTIVEGROUP_DSMFLEXIPORT=3, ACTIVEGROUP_SBUS=4, ACTIVEGROUP_GCS=5, ACTIVEGROUP_OPLINK=6, ACTIVEGROUP_NONE=7 } ActiveGroupOptions;
    // Field ActiveChannel information

  
    // Constants
    static const unsigned int NUMBYTES = sizeof(DataFieldsReceiverActivity);

    // Functions
    ReceiverActivity(UAVObjManager* manager);
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
	
    static ReceiverActivity* GetInstance(UAVObjectManager* objMngr, unsigned int instID = 0);

    Q_INVOKABLE unsigned char getActiveGroup() const;
    Q_INVOKABLE unsigned char getActiveChannel() const;


public slots:
    void setActiveGroup(unsigned char value);
    void setActiveChannel(unsigned char value);


signals:
    void ActiveGroupChanged(unsigned char value);
    void ActiveChannelChanged(unsigned char value);


private slots:
    void emitNotifications();
	
private:
    DataFields data;

    void setDefaultFieldValues();*/

};

#endif // RECEIVERACTIVITY_H
