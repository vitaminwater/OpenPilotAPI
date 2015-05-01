/**
 ******************************************************************************
 *
 * @file       pathdesired.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: pathdesired.xml. 
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
#ifndef PATHDESIRED_H
#define PATHDESIRED_H

#include <string>
#include <sstream>
#include <iostream>
#include <string.h>

#include "UAVObject.h"

    // Data Fields
typedef struct {
        float Start[3];
        float End[3];
        float StartingVelocity;
        float EndingVelocity;
        float ModeParameters[4];
        short int UID;
        unsigned char Mode;

} __attribute__((packed)) DataFieldsPathDesired;

class PathDesired: public UAVObject
{

public:
	int instance;
	DataFieldsPathDesired dataFields;
	static int numInstances;

    // Field information
    // Field Start information
    /* Array element names for field Start */
    typedef enum { START_NORTH=0, START_EAST=1, START_DOWN=2 } StartElem;
    /* Number of elements for field Start */
    static const unsigned int START_NUMELEM = 3;
    // Field End information
    /* Array element names for field End */
    typedef enum { END_NORTH=0, END_EAST=1, END_DOWN=2 } EndElem;
    /* Number of elements for field End */
    static const unsigned int END_NUMELEM = 3;
    // Field StartingVelocity information
    // Field EndingVelocity information
    // Field ModeParameters information
    /* Number of elements for field ModeParameters */
    static const unsigned int MODEPARAMETERS_NUMELEM = 4;
    // Field UID information
    // Field Mode information
    /* Enumeration options for field Mode */
    typedef enum { MODE_FLYENDPOINT=0, MODE_FLYVECTOR=1, MODE_FLYCIRCLERIGHT=2, MODE_FLYCIRCLELEFT=3, MODE_DRIVEENDPOINT=4, MODE_DRIVEVECTOR=5, MODE_DRIVECIRCLELEFT=6, MODE_DRIVECIRCLERIGHT=7, MODE_FIXEDATTITUDE=8, MODE_SETACCESSORY=9, MODE_LAND=10, MODE_DISARMALARM=11, MODE_BRAKE=12 } ModeOptions;

  
    // Constants
    static const unsigned int NUMBYTES = sizeof(DataFieldsPathDesired);

    // Functions
    PathDesired(UAVObjManager* manager);
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
	
    static PathDesired* GetInstance(UAVObjectManager* objMngr, unsigned int instID = 0);

    Q_INVOKABLE float getStart(unsigned int index) const;
    Q_INVOKABLE float getEnd(unsigned int index) const;
    Q_INVOKABLE float getStartingVelocity() const;
    Q_INVOKABLE float getEndingVelocity() const;
    Q_INVOKABLE float getModeParameters(unsigned int index) const;
    Q_INVOKABLE short int getUID() const;
    Q_INVOKABLE unsigned char getMode() const;


public slots:
    void setStart(unsigned int index, float value);
    void setEnd(unsigned int index, float value);
    void setStartingVelocity(float value);
    void setEndingVelocity(float value);
    void setModeParameters(unsigned int index, float value);
    void setUID(short int value);
    void setMode(unsigned char value);


signals:
    void StartChanged(unsigned int index, float value);
    void EndChanged(unsigned int index, float value);
    void StartingVelocityChanged(float value);
    void EndingVelocityChanged(float value);
    void ModeParametersChanged(unsigned int index, float value);
    void UIDChanged(short int value);
    void ModeChanged(unsigned char value);


private slots:
    void emitNotifications();
	
private:
    DataFields data;

    void setDefaultFieldValues();*/

};

#endif // PATHDESIRED_H
