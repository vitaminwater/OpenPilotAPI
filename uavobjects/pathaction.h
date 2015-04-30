/**
 ******************************************************************************
 *
 * @file       pathaction.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: pathaction.xml. 
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
#ifndef PATHACTION_H
#define PATHACTION_H

#include <string>
#include <sstream>
#include <iostream>
#include <string.h>

#include "UAVObject.h"

    // Data Fields
typedef struct {
        float ModeParameters[4];
        float ConditionParameters[4];
        short int JumpDestination;
        short int ErrorDestination;
        unsigned char Mode;
        unsigned char EndCondition;
        unsigned char Command;

} __attribute__((packed)) DataFieldsPathAction;

class PathAction: public UAVObject
{

public:
	int instance;
	DataFieldsPathAction dataFields;
	static int numInstances;

    // Field information
    // Field ModeParameters information
    /* Number of elements for field ModeParameters */
    static const unsigned int MODEPARAMETERS_NUMELEM = 4;
    // Field ConditionParameters information
    /* Number of elements for field ConditionParameters */
    static const unsigned int CONDITIONPARAMETERS_NUMELEM = 4;
    // Field JumpDestination information
    // Field ErrorDestination information
    // Field Mode information
    /* Enumeration options for field Mode */
    typedef enum { MODE_FLYENDPOINT=0, MODE_FLYVECTOR=1, MODE_FLYCIRCLERIGHT=2, MODE_FLYCIRCLELEFT=3, MODE_DRIVEENDPOINT=4, MODE_DRIVEVECTOR=5, MODE_DRIVECIRCLELEFT=6, MODE_DRIVECIRCLERIGHT=7, MODE_FIXEDATTITUDE=8, MODE_SETACCESSORY=9, MODE_DISARMALARM=10 } ModeOptions;
    // Field EndCondition information
    /* Enumeration options for field EndCondition */
    typedef enum { ENDCONDITION_NONE=0, ENDCONDITION_TIMEOUT=1, ENDCONDITION_DISTANCETOTARGET=2, ENDCONDITION_LEGREMAINING=3, ENDCONDITION_BELOWERROR=4, ENDCONDITION_ABOVEALTITUDE=5, ENDCONDITION_ABOVESPEED=6, ENDCONDITION_POINTINGTOWARDSNEXT=7, ENDCONDITION_PYTHONSCRIPT=8, ENDCONDITION_IMMEDIATE=9 } EndConditionOptions;
    // Field Command information
    /* Enumeration options for field Command */
    typedef enum { COMMAND_ONCONDITIONNEXTWAYPOINT=0, COMMAND_ONNOTCONDITIONNEXTWAYPOINT=1, COMMAND_ONCONDITIONJUMPWAYPOINT=2, COMMAND_ONNOTCONDITIONJUMPWAYPOINT=3, COMMAND_IFCONDITIONJUMPWAYPOINTELSENEXTWAYPOINT=4 } CommandOptions;

  
    // Constants
    static const unsigned int NUMBYTES = sizeof(DataFieldsPathAction);

    // Functions
    PathAction(UAVObjManager* manager);
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
	
    static PathAction* GetInstance(UAVObjectManager* objMngr, unsigned int instID = 0);

    Q_INVOKABLE float getModeParameters(unsigned int index) const;
    Q_INVOKABLE float getConditionParameters(unsigned int index) const;
    Q_INVOKABLE short int getJumpDestination() const;
    Q_INVOKABLE short int getErrorDestination() const;
    Q_INVOKABLE unsigned char getMode() const;
    Q_INVOKABLE unsigned char getEndCondition() const;
    Q_INVOKABLE unsigned char getCommand() const;


public slots:
    void setModeParameters(unsigned int index, float value);
    void setConditionParameters(unsigned int index, float value);
    void setJumpDestination(short int value);
    void setErrorDestination(short int value);
    void setMode(unsigned char value);
    void setEndCondition(unsigned char value);
    void setCommand(unsigned char value);


signals:
    void ModeParametersChanged(unsigned int index, float value);
    void ConditionParametersChanged(unsigned int index, float value);
    void JumpDestinationChanged(short int value);
    void ErrorDestinationChanged(short int value);
    void ModeChanged(unsigned char value);
    void EndConditionChanged(unsigned char value);
    void CommandChanged(unsigned char value);


private slots:
    void emitNotifications();
	
private:
    DataFields data;

    void setDefaultFieldValues();*/

};

#endif // PATHACTION_H
