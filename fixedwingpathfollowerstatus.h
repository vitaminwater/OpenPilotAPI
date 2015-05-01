/**
 ******************************************************************************
 *
 * @file       fixedwingpathfollowerstatus.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: fixedwingpathfollowerstatus.xml. 
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
#ifndef FIXEDWINGPATHFOLLOWERSTATUS_H
#define FIXEDWINGPATHFOLLOWERSTATUS_H

#include <string>
#include <sstream>
#include <iostream>
#include <string.h>

#include "UAVObject.h"

    // Data Fields
typedef struct {
        float Error[3];
        float ErrorInt[3];
        float Command[3];
        unsigned char Errors[8];

} __attribute__((packed)) DataFieldsFixedWingPathFollowerStatus;

class FixedWingPathFollowerStatus: public UAVObject
{

public:
	int instance;
	DataFieldsFixedWingPathFollowerStatus dataFields;
	static int numInstances;

    // Field information
    // Field Error information
    /* Array element names for field Error */
    typedef enum { ERROR_COURSE=0, ERROR_SPEED=1, ERROR_POWER=2 } ErrorElem;
    /* Number of elements for field Error */
    static const unsigned int ERROR_NUMELEM = 3;
    // Field ErrorInt information
    /* Array element names for field ErrorInt */
    typedef enum { ERRORINT_COURSE=0, ERRORINT_SPEED=1, ERRORINT_POWER=2 } ErrorIntElem;
    /* Number of elements for field ErrorInt */
    static const unsigned int ERRORINT_NUMELEM = 3;
    // Field Command information
    /* Array element names for field Command */
    typedef enum { COMMAND_COURSE=0, COMMAND_SPEED=1, COMMAND_POWER=2 } CommandElem;
    /* Number of elements for field Command */
    static const unsigned int COMMAND_NUMELEM = 3;
    // Field Errors information
    /* Array element names for field Errors */
    typedef enum { ERRORS_WIND=0, ERRORS_STALLSPEED=1, ERRORS_LOWSPEED=2, ERRORS_HIGHSPEED=3, ERRORS_OVERSPEED=4, ERRORS_LOWPOWER=5, ERRORS_HIGHPOWER=6, ERRORS_PITCHCONTROL=7 } ErrorsElem;
    /* Number of elements for field Errors */
    static const unsigned int ERRORS_NUMELEM = 8;

  
    // Constants
    static const unsigned int NUMBYTES = sizeof(DataFieldsFixedWingPathFollowerStatus);

    // Functions
    FixedWingPathFollowerStatus(UAVObjManager* manager);
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
	
    static FixedWingPathFollowerStatus* GetInstance(UAVObjectManager* objMngr, unsigned int instID = 0);

    Q_INVOKABLE float getError(unsigned int index) const;
    Q_INVOKABLE float getErrorInt(unsigned int index) const;
    Q_INVOKABLE float getCommand(unsigned int index) const;
    Q_INVOKABLE unsigned char getErrors(unsigned int index) const;


public slots:
    void setError(unsigned int index, float value);
    void setErrorInt(unsigned int index, float value);
    void setCommand(unsigned int index, float value);
    void setErrors(unsigned int index, unsigned char value);


signals:
    void ErrorChanged(unsigned int index, float value);
    void ErrorIntChanged(unsigned int index, float value);
    void CommandChanged(unsigned int index, float value);
    void ErrorsChanged(unsigned int index, unsigned char value);


private slots:
    void emitNotifications();
	
private:
    DataFields data;

    void setDefaultFieldValues();*/

};

#endif // FIXEDWINGPATHFOLLOWERSTATUS_H
