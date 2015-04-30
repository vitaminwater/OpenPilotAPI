/**
 ******************************************************************************
 *
 * @file       actuatorcommand.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: actuatorcommand.xml. 
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
#ifndef ACTUATORCOMMAND_H
#define ACTUATORCOMMAND_H

#include <string>
#include <sstream>
#include <iostream>
#include <string.h>

#include "UAVObject.h"

    // Data Fields
typedef struct {
        short int Channel[12];
        unsigned short int UpdateTime;
        unsigned short int MaxUpdateTime;
        unsigned char NumFailedUpdates;

} __attribute__((packed)) DataFieldsActuatorCommand;

class ActuatorCommand: public UAVObject
{

public:
	int instance;
	DataFieldsActuatorCommand dataFields;
	static int numInstances;

    // Field information
    // Field Channel information
    /* Number of elements for field Channel */
    static const unsigned int CHANNEL_NUMELEM = 12;
    // Field UpdateTime information
    // Field MaxUpdateTime information
    // Field NumFailedUpdates information

  
    // Constants
    static const unsigned int NUMBYTES = sizeof(DataFieldsActuatorCommand);

    // Functions
    ActuatorCommand(UAVObjManager* manager);
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
	
    static ActuatorCommand* GetInstance(UAVObjectManager* objMngr, unsigned int instID = 0);

    Q_INVOKABLE short int getChannel(unsigned int index) const;
    Q_INVOKABLE unsigned short int getUpdateTime() const;
    Q_INVOKABLE unsigned short int getMaxUpdateTime() const;
    Q_INVOKABLE unsigned char getNumFailedUpdates() const;


public slots:
    void setChannel(unsigned int index, short int value);
    void setUpdateTime(unsigned short int value);
    void setMaxUpdateTime(unsigned short int value);
    void setNumFailedUpdates(unsigned char value);


signals:
    void ChannelChanged(unsigned int index, short int value);
    void UpdateTimeChanged(unsigned short int value);
    void MaxUpdateTimeChanged(unsigned short int value);
    void NumFailedUpdatesChanged(unsigned char value);


private slots:
    void emitNotifications();
	
private:
    DataFields data;

    void setDefaultFieldValues();*/

};

#endif // ACTUATORCOMMAND_H
