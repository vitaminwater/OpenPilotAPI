/**
 ******************************************************************************
 *
 * @file       objectpersistence.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: objectpersistence.xml. 
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
#ifndef OBJECTPERSISTENCE_H
#define OBJECTPERSISTENCE_H

#include <string>
#include <sstream>
#include <iostream>
#include <string.h>

#include "UAVObject.h"

    // Data Fields
typedef struct {
        unsigned int ObjectID;
        unsigned int InstanceID;
        unsigned char Operation;
        unsigned char Selection;

} __attribute__((packed)) DataFieldsObjectPersistence;

class ObjectPersistence: public UAVObject
{

public:
	int instance;
	DataFieldsObjectPersistence dataFields;
	static int numInstances;

    // Field information
    // Field ObjectID information
    // Field InstanceID information
    // Field Operation information
    /* Enumeration options for field Operation */
    typedef enum { OPERATION_NOP=0, OPERATION_LOAD=1, OPERATION_SAVE=2, OPERATION_DELETE=3, OPERATION_FULLERASE=4, OPERATION_COMPLETED=5, OPERATION_ERROR=6 } OperationOptions;
    // Field Selection information
    /* Enumeration options for field Selection */
    typedef enum { SELECTION_SINGLEOBJECT=0, SELECTION_ALLSETTINGS=1, SELECTION_ALLMETAOBJECTS=2, SELECTION_ALLOBJECTS=3 } SelectionOptions;

  
    // Constants
    static const unsigned int NUMBYTES = sizeof(DataFieldsObjectPersistence);

    // Functions
    ObjectPersistence(UAVObjManager* manager);
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
	
    static ObjectPersistence* GetInstance(UAVObjectManager* objMngr, unsigned int instID = 0);

    Q_INVOKABLE unsigned int getObjectID() const;
    Q_INVOKABLE unsigned int getInstanceID() const;
    Q_INVOKABLE unsigned char getOperation() const;
    Q_INVOKABLE unsigned char getSelection() const;


public slots:
    void setObjectID(unsigned int value);
    void setInstanceID(unsigned int value);
    void setOperation(unsigned char value);
    void setSelection(unsigned char value);


signals:
    void ObjectIDChanged(unsigned int value);
    void InstanceIDChanged(unsigned int value);
    void OperationChanged(unsigned char value);
    void SelectionChanged(unsigned char value);


private slots:
    void emitNotifications();
	
private:
    DataFields data;

    void setDefaultFieldValues();*/

};

#endif // OBJECTPERSISTENCE_H
