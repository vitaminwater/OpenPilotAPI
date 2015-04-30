/**
 ******************************************************************************
 *
 * @file       pathplan.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: pathplan.xml. 
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
#ifndef PATHPLAN_H
#define PATHPLAN_H

#include <string>
#include <sstream>
#include <iostream>
#include <string.h>

#include "UAVObject.h"

    // Data Fields
typedef struct {
        unsigned short int WaypointCount;
        unsigned short int PathActionCount;
        unsigned char Crc;

} __attribute__((packed)) DataFieldsPathPlan;

class PathPlan: public UAVObject
{

public:
	int instance;
	DataFieldsPathPlan dataFields;
	static int numInstances;

    // Field information
    // Field WaypointCount information
    // Field PathActionCount information
    // Field Crc information

  
    // Constants
    static const unsigned int NUMBYTES = sizeof(DataFieldsPathPlan);

    // Functions
    PathPlan(UAVObjManager* manager);
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
	
    static PathPlan* GetInstance(UAVObjectManager* objMngr, unsigned int instID = 0);

    Q_INVOKABLE unsigned short int getWaypointCount() const;
    Q_INVOKABLE unsigned short int getPathActionCount() const;
    Q_INVOKABLE unsigned char getCrc() const;


public slots:
    void setWaypointCount(unsigned short int value);
    void setPathActionCount(unsigned short int value);
    void setCrc(unsigned char value);


signals:
    void WaypointCountChanged(unsigned short int value);
    void PathActionCountChanged(unsigned short int value);
    void CrcChanged(unsigned char value);


private slots:
    void emitNotifications();
	
private:
    DataFields data;

    void setDefaultFieldValues();*/

};

#endif // PATHPLAN_H
