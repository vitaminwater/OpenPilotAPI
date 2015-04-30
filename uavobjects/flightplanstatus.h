/**
 ******************************************************************************
 *
 * @file       flightplanstatus.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: flightplanstatus.xml. 
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
#ifndef FLIGHTPLANSTATUS_H
#define FLIGHTPLANSTATUS_H

#include <string>
#include <sstream>
#include <iostream>
#include <string.h>

#include "UAVObject.h"

    // Data Fields
typedef struct {
        unsigned int ErrorFileID;
        unsigned int ErrorLineNum;
        float Debug[2];
        unsigned char Status;
        unsigned char ErrorType;

} __attribute__((packed)) DataFieldsFlightPlanStatus;

class FlightPlanStatus: public UAVObject
{

public:
	int instance;
	DataFieldsFlightPlanStatus dataFields;
	static int numInstances;

    // Field information
    // Field ErrorFileID information
    // Field ErrorLineNum information
    // Field Debug information
    /* Number of elements for field Debug */
    static const unsigned int DEBUG_NUMELEM = 2;
    // Field Status information
    /* Enumeration options for field Status */
    typedef enum { STATUS_STOPPED=0, STATUS_RUNNING=1, STATUS_ERROR=2 } StatusOptions;
    // Field ErrorType information
    /* Enumeration options for field ErrorType */
    typedef enum { ERRORTYPE_NONE=0, ERRORTYPE_VMINITERROR=1, ERRORTYPE_EXCEPTION=2, ERRORTYPE_IOERROR=3, ERRORTYPE_DIVBYZERO=4, ERRORTYPE_ASSERTERROR=5, ERRORTYPE_ATTRIBUTEERROR=6, ERRORTYPE_IMPORTERROR=7, ERRORTYPE_INDEXERROR=8, ERRORTYPE_KEYERROR=9, ERRORTYPE_MEMORYERROR=10, ERRORTYPE_NAMEERROR=11, ERRORTYPE_SYNTAXERROR=12, ERRORTYPE_SYSTEMERROR=13, ERRORTYPE_TYPEERROR=14, ERRORTYPE_VALUEERROR=15, ERRORTYPE_STOPITERATION=16, ERRORTYPE_WARNING=17, ERRORTYPE_UNKNOWNERROR=18 } ErrorTypeOptions;

  
    // Constants
    static const unsigned int NUMBYTES = sizeof(DataFieldsFlightPlanStatus);

    // Functions
    FlightPlanStatus(UAVObjManager* manager);
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
	
    static FlightPlanStatus* GetInstance(UAVObjectManager* objMngr, unsigned int instID = 0);

    Q_INVOKABLE unsigned int getErrorFileID() const;
    Q_INVOKABLE unsigned int getErrorLineNum() const;
    Q_INVOKABLE float getDebug(unsigned int index) const;
    Q_INVOKABLE unsigned char getStatus() const;
    Q_INVOKABLE unsigned char getErrorType() const;


public slots:
    void setErrorFileID(unsigned int value);
    void setErrorLineNum(unsigned int value);
    void setDebug(unsigned int index, float value);
    void setStatus(unsigned char value);
    void setErrorType(unsigned char value);


signals:
    void ErrorFileIDChanged(unsigned int value);
    void ErrorLineNumChanged(unsigned int value);
    void DebugChanged(unsigned int index, float value);
    void StatusChanged(unsigned char value);
    void ErrorTypeChanged(unsigned char value);


private slots:
    void emitNotifications();
	
private:
    DataFields data;

    void setDefaultFieldValues();*/

};

#endif // FLIGHTPLANSTATUS_H
