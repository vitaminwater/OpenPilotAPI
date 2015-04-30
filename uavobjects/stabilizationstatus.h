/**
 ******************************************************************************
 *
 * @file       stabilizationstatus.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: stabilizationstatus.xml. 
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
#ifndef STABILIZATIONSTATUS_H
#define STABILIZATIONSTATUS_H

#include <string>
#include <sstream>
#include <iostream>
#include <string.h>

#include "UAVObject.h"

    // Data Fields
typedef struct {
        unsigned char OuterLoop[4];
        unsigned char InnerLoop[4];

} __attribute__((packed)) DataFieldsStabilizationStatus;

class StabilizationStatus: public UAVObject
{

public:
	int instance;
	DataFieldsStabilizationStatus dataFields;
	static int numInstances;

    // Field information
    // Field OuterLoop information
    /* Enumeration options for field OuterLoop */
    typedef enum { OUTERLOOP_DIRECT=0, OUTERLOOP_ATTITUDE=1, OUTERLOOP_RATTITUDE=2, OUTERLOOP_WEAKLEVELING=3, OUTERLOOP_ALTITUDE=4, OUTERLOOP_ALTITUDEVARIO=5 } OuterLoopOptions;
    /* Array element names for field OuterLoop */
    typedef enum { OUTERLOOP_ROLL=0, OUTERLOOP_PITCH=1, OUTERLOOP_YAW=2, OUTERLOOP_THRUST=3 } OuterLoopElem;
    /* Number of elements for field OuterLoop */
    static const unsigned int OUTERLOOP_NUMELEM = 4;
    // Field InnerLoop information
    /* Enumeration options for field InnerLoop */
    typedef enum { INNERLOOP_DIRECT=0, INNERLOOP_VIRTUALFLYBAR=1, INNERLOOP_ACRO=2, INNERLOOP_AXISLOCK=3, INNERLOOP_RATE=4, INNERLOOP_CRUISECONTROL=5 } InnerLoopOptions;
    /* Array element names for field InnerLoop */
    typedef enum { INNERLOOP_ROLL=0, INNERLOOP_PITCH=1, INNERLOOP_YAW=2, INNERLOOP_THRUST=3 } InnerLoopElem;
    /* Number of elements for field InnerLoop */
    static const unsigned int INNERLOOP_NUMELEM = 4;

  
    // Constants
    static const unsigned int NUMBYTES = sizeof(DataFieldsStabilizationStatus);

    // Functions
    StabilizationStatus(UAVObjManager* manager);
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
	
    static StabilizationStatus* GetInstance(UAVObjectManager* objMngr, unsigned int instID = 0);

    Q_INVOKABLE unsigned char getOuterLoop(unsigned int index) const;
    Q_INVOKABLE unsigned char getInnerLoop(unsigned int index) const;


public slots:
    void setOuterLoop(unsigned int index, unsigned char value);
    void setInnerLoop(unsigned int index, unsigned char value);


signals:
    void OuterLoopChanged(unsigned int index, unsigned char value);
    void InnerLoopChanged(unsigned int index, unsigned char value);


private slots:
    void emitNotifications();
	
private:
    DataFields data;

    void setDefaultFieldValues();*/

};

#endif // STABILIZATIONSTATUS_H
