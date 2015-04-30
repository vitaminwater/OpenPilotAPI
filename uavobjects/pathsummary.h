/**
 ******************************************************************************
 *
 * @file       pathsummary.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: pathsummary.xml. 
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
#ifndef PATHSUMMARY_H
#define PATHSUMMARY_H

#include <string>
#include <sstream>
#include <iostream>
#include <string.h>

#include "UAVObject.h"

    // Data Fields
typedef struct {
        float brake_distance_offset;
        float time_remaining;
        float fractional_progress;
        float decelrate;
        float brakeRateActualDesiredRatio;
        float velocityIntoHold;
        short int UID;
        unsigned char brake_exit_reason;

} __attribute__((packed)) DataFieldsPathSummary;

class PathSummary: public UAVObject
{

public:
	int instance;
	DataFieldsPathSummary dataFields;
	static int numInstances;

    // Field information
    // Field brake_distance_offset information
    // Field time_remaining information
    // Field fractional_progress information
    // Field decelrate information
    // Field brakeRateActualDesiredRatio information
    // Field velocityIntoHold information
    // Field UID information
    // Field brake_exit_reason information
    /* Enumeration options for field brake_exit_reason */
    typedef enum { BRAKE_EXIT_REASON_TIMEOUT=0, BRAKE_EXIT_REASON_PATHCOMPLETED=1, BRAKE_EXIT_REASON_PATHERROR=2 } brake_exit_reasonOptions;

  
    // Constants
    static const unsigned int NUMBYTES = sizeof(DataFieldsPathSummary);

    // Functions
    PathSummary(UAVObjManager* manager);
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
	
    static PathSummary* GetInstance(UAVObjectManager* objMngr, unsigned int instID = 0);

    Q_INVOKABLE float getbrake_distance_offset() const;
    Q_INVOKABLE float gettime_remaining() const;
    Q_INVOKABLE float getfractional_progress() const;
    Q_INVOKABLE float getdecelrate() const;
    Q_INVOKABLE float getbrakeRateActualDesiredRatio() const;
    Q_INVOKABLE float getvelocityIntoHold() const;
    Q_INVOKABLE short int getUID() const;
    Q_INVOKABLE unsigned char getbrake_exit_reason() const;


public slots:
    void setbrake_distance_offset(float value);
    void settime_remaining(float value);
    void setfractional_progress(float value);
    void setdecelrate(float value);
    void setbrakeRateActualDesiredRatio(float value);
    void setvelocityIntoHold(float value);
    void setUID(short int value);
    void setbrake_exit_reason(unsigned char value);


signals:
    void brake_distance_offsetChanged(float value);
    void time_remainingChanged(float value);
    void fractional_progressChanged(float value);
    void decelrateChanged(float value);
    void brakeRateActualDesiredRatioChanged(float value);
    void velocityIntoHoldChanged(float value);
    void UIDChanged(short int value);
    void brake_exit_reasonChanged(unsigned char value);


private slots:
    void emitNotifications();
	
private:
    DataFields data;

    void setDefaultFieldValues();*/

};

#endif // PATHSUMMARY_H
