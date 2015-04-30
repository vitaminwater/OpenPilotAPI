/**
 ******************************************************************************
 *
 * @file       faultsettings.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: faultsettings.xml. 
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
#ifndef FAULTSETTINGS_H
#define FAULTSETTINGS_H

#include <string>
#include <sstream>
#include <iostream>
#include <string.h>

#include "UAVObject.h"

    // Data Fields
typedef struct {
        unsigned char ActivateFault;

} __attribute__((packed)) DataFieldsFaultSettings;

class FaultSettings: public UAVObject
{

public:
	int instance;
	DataFieldsFaultSettings dataFields;
	static int numInstances;

    // Field information
    // Field ActivateFault information
    /* Enumeration options for field ActivateFault */
    typedef enum { ACTIVATEFAULT_NOFAULT=0, ACTIVATEFAULT_MODULEINITASSERT=1, ACTIVATEFAULT_INITOUTOFMEMORY=2, ACTIVATEFAULT_INITBUSERROR=3, ACTIVATEFAULT_RUNAWAYTASK=4, ACTIVATEFAULT_TASKOUTOFMEMORY=5 } ActivateFaultOptions;

  
    // Constants
    static const unsigned int NUMBYTES = sizeof(DataFieldsFaultSettings);

    // Functions
    FaultSettings(UAVObjManager* manager);
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
	
    static FaultSettings* GetInstance(UAVObjectManager* objMngr, unsigned int instID = 0);

    Q_INVOKABLE unsigned char getActivateFault() const;


public slots:
    void setActivateFault(unsigned char value);


signals:
    void ActivateFaultChanged(unsigned char value);


private slots:
    void emitNotifications();
	
private:
    DataFields data;

    void setDefaultFieldValues();*/

};

#endif // FAULTSETTINGS_H
