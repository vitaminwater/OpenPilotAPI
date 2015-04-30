/**
 ******************************************************************************
 *
 * @file       oplinkreceiver.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: oplinkreceiver.xml. 
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
#ifndef OPLINKRECEIVER_H
#define OPLINKRECEIVER_H

#include <string>
#include <sstream>
#include <iostream>
#include <string.h>

#include "UAVObject.h"

    // Data Fields
typedef struct {
        short int Channel[8];

} __attribute__((packed)) DataFieldsOPLinkReceiver;

class OPLinkReceiver: public UAVObject
{

public:
	int instance;
	DataFieldsOPLinkReceiver dataFields;
	static int numInstances;

    // Field information
    // Field Channel information
    /* Number of elements for field Channel */
    static const unsigned int CHANNEL_NUMELEM = 8;

  
    // Constants
    static const unsigned int NUMBYTES = sizeof(DataFieldsOPLinkReceiver);

    // Functions
    OPLinkReceiver(UAVObjManager* manager);
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
	
    static OPLinkReceiver* GetInstance(UAVObjectManager* objMngr, unsigned int instID = 0);

    Q_INVOKABLE short int getChannel(unsigned int index) const;


public slots:
    void setChannel(unsigned int index, short int value);


signals:
    void ChannelChanged(unsigned int index, short int value);


private slots:
    void emitNotifications();
	
private:
    DataFields data;

    void setDefaultFieldValues();*/

};

#endif // OPLINKRECEIVER_H
