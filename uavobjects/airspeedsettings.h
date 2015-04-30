/**
 ******************************************************************************
 *
 * @file       airspeedsettings.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: airspeedsettings.xml. 
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
#ifndef AIRSPEEDSETTINGS_H
#define AIRSPEEDSETTINGS_H

#include <string>
#include <sstream>
#include <iostream>
#include <string.h>

#include "UAVObject.h"

    // Data Fields
typedef struct {
        float Scale;
        float IMUBasedEstimationLowPassPeriod1;
        float IMUBasedEstimationLowPassPeriod2;
        unsigned short int ZeroPoint;
        unsigned char SamplePeriod;
        unsigned char AirspeedSensorType;

} __attribute__((packed)) DataFieldsAirspeedSettings;

class AirspeedSettings: public UAVObject
{

public:
	int instance;
	DataFieldsAirspeedSettings dataFields;
	static int numInstances;

    // Field information
    // Field Scale information
    // Field IMUBasedEstimationLowPassPeriod1 information
    // Field IMUBasedEstimationLowPassPeriod2 information
    // Field ZeroPoint information
    // Field SamplePeriod information
    // Field AirspeedSensorType information
    /* Enumeration options for field AirspeedSensorType */
    typedef enum { AIRSPEEDSENSORTYPE_PIXHAWKAIRSPEEDMS4525DO=0, AIRSPEEDSENSORTYPE_EAGLETREEAIRSPEEDV3=1, AIRSPEEDSENSORTYPE_DIYDRONESMPXV5004=2, AIRSPEEDSENSORTYPE_DIYDRONESMPXV7002=3, AIRSPEEDSENSORTYPE_GROUNDSPEEDBASEDWINDESTIMATION=4, AIRSPEEDSENSORTYPE_NONE=5 } AirspeedSensorTypeOptions;

  
    // Constants
    static const unsigned int NUMBYTES = sizeof(DataFieldsAirspeedSettings);

    // Functions
    AirspeedSettings(UAVObjManager* manager);
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
	
    static AirspeedSettings* GetInstance(UAVObjectManager* objMngr, unsigned int instID = 0);

    Q_INVOKABLE float getScale() const;
    Q_INVOKABLE float getIMUBasedEstimationLowPassPeriod1() const;
    Q_INVOKABLE float getIMUBasedEstimationLowPassPeriod2() const;
    Q_INVOKABLE unsigned short int getZeroPoint() const;
    Q_INVOKABLE unsigned char getSamplePeriod() const;
    Q_INVOKABLE unsigned char getAirspeedSensorType() const;


public slots:
    void setScale(float value);
    void setIMUBasedEstimationLowPassPeriod1(float value);
    void setIMUBasedEstimationLowPassPeriod2(float value);
    void setZeroPoint(unsigned short int value);
    void setSamplePeriod(unsigned char value);
    void setAirspeedSensorType(unsigned char value);


signals:
    void ScaleChanged(float value);
    void IMUBasedEstimationLowPassPeriod1Changed(float value);
    void IMUBasedEstimationLowPassPeriod2Changed(float value);
    void ZeroPointChanged(unsigned short int value);
    void SamplePeriodChanged(unsigned char value);
    void AirspeedSensorTypeChanged(unsigned char value);


private slots:
    void emitNotifications();
	
private:
    DataFields data;

    void setDefaultFieldValues();*/

};

#endif // AIRSPEEDSETTINGS_H
