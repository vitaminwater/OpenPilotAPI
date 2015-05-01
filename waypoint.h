/**
 ******************************************************************************
 *
 * @file       waypoint.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: waypoint.xml. 
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
#ifndef WAYPOINT_H
#define WAYPOINT_H

#include <string>
#include <sstream>
#include <iostream>
#include <string.h>

#include "UAVObject.h"

    // Data Fields
typedef struct {
        float Position[3];
        float Velocity;
        unsigned char Action;

} __attribute__((packed)) DataFieldsWaypoint;

class Waypoint: public UAVObject
{

public:
	int instance;
	DataFieldsWaypoint dataFields;
	static int numInstances;

    // Field information
    // Field Position information
    /* Array element names for field Position */
    typedef enum { POSITION_NORTH=0, POSITION_EAST=1, POSITION_DOWN=2 } PositionElem;
    /* Number of elements for field Position */
    static const unsigned int POSITION_NUMELEM = 3;
    // Field Velocity information
    // Field Action information

  
    // Constants
    static const unsigned int NUMBYTES = sizeof(DataFieldsWaypoint);

    // Functions
    Waypoint(UAVObjManager* manager);
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
	
    static Waypoint* GetInstance(UAVObjectManager* objMngr, unsigned int instID = 0);

    Q_INVOKABLE float getPosition(unsigned int index) const;
    Q_INVOKABLE float getVelocity() const;
    Q_INVOKABLE unsigned char getAction() const;


public slots:
    void setPosition(unsigned int index, float value);
    void setVelocity(float value);
    void setAction(unsigned char value);


signals:
    void PositionChanged(unsigned int index, float value);
    void VelocityChanged(float value);
    void ActionChanged(unsigned char value);


private slots:
    void emitNotifications();
	
private:
    DataFields data;

    void setDefaultFieldValues();*/

};

#endif // WAYPOINT_H
