/**
 ******************************************************************************
 *
 * @file       airspeedsensor.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: airspeedsensor.xml. 
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
#ifndef AIRSPEEDSENSOR_H
#define AIRSPEEDSENSOR_H

#include <string>
#include <sstream>
#include <iostream>
#include <string.h>

#include "UAVObject.h"

    // Data Fields
typedef struct {
        float DifferentialPressure;
        float Temperature;
        float CalibratedAirspeed;
        float TrueAirspeed;
        unsigned short int SensorValue;
        unsigned short int SensorValueTemperature;
        unsigned char SensorConnected;

} __attribute__((packed)) DataFieldsAirspeedSensor;

class AirspeedSensor: public UAVObject
{

public:
	int instance;
	DataFieldsAirspeedSensor dataFields;
	static int numInstances;

    // Field information
    // Field DifferentialPressure information
    // Field Temperature information
    // Field CalibratedAirspeed information
    // Field TrueAirspeed information
    // Field SensorValue information
    // Field SensorValueTemperature information
    // Field SensorConnected information
    /* Enumeration options for field SensorConnected */
    typedef enum { SENSORCONNECTED_FALSE=0, SENSORCONNECTED_TRUE=1 } SensorConnectedOptions;

  
    // Constants
    static const unsigned int NUMBYTES = sizeof(DataFieldsAirspeedSensor);

    // Functions
    AirspeedSensor(UAVObjManager* manager);
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
	
    static AirspeedSensor* GetInstance(UAVObjectManager* objMngr, unsigned int instID = 0);

    Q_INVOKABLE float getDifferentialPressure() const;
    Q_INVOKABLE float getTemperature() const;
    Q_INVOKABLE float getCalibratedAirspeed() const;
    Q_INVOKABLE float getTrueAirspeed() const;
    Q_INVOKABLE unsigned short int getSensorValue() const;
    Q_INVOKABLE unsigned short int getSensorValueTemperature() const;
    Q_INVOKABLE unsigned char getSensorConnected() const;


public slots:
    void setDifferentialPressure(float value);
    void setTemperature(float value);
    void setCalibratedAirspeed(float value);
    void setTrueAirspeed(float value);
    void setSensorValue(unsigned short int value);
    void setSensorValueTemperature(unsigned short int value);
    void setSensorConnected(unsigned char value);


signals:
    void DifferentialPressureChanged(float value);
    void TemperatureChanged(float value);
    void CalibratedAirspeedChanged(float value);
    void TrueAirspeedChanged(float value);
    void SensorValueChanged(unsigned short int value);
    void SensorValueTemperatureChanged(unsigned short int value);
    void SensorConnectedChanged(unsigned char value);


private slots:
    void emitNotifications();
	
private:
    DataFields data;

    void setDefaultFieldValues();*/

};

#endif // AIRSPEEDSENSOR_H
