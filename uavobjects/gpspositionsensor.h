/**
 ******************************************************************************
 *
 * @file       gpspositionsensor.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: gpspositionsensor.xml. 
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
#ifndef GPSPOSITIONSENSOR_H
#define GPSPOSITIONSENSOR_H

#include <string>
#include <sstream>
#include <iostream>
#include <string.h>

#include "UAVObject.h"

    // Data Fields
typedef struct {
        int Latitude;
        int Longitude;
        float Altitude;
        float GeoidSeparation;
        float Heading;
        float Groundspeed;
        float PDOP;
        float HDOP;
        float VDOP;
        unsigned char Status;
        char Satellites;
        unsigned char SensorType;
        unsigned char AutoConfigStatus;

} __attribute__((packed)) DataFieldsGPSPositionSensor;

class GPSPositionSensor: public UAVObject
{

public:
	int instance;
	DataFieldsGPSPositionSensor dataFields;
	static int numInstances;

    // Field information
    // Field Latitude information
    // Field Longitude information
    // Field Altitude information
    // Field GeoidSeparation information
    // Field Heading information
    // Field Groundspeed information
    // Field PDOP information
    // Field HDOP information
    // Field VDOP information
    // Field Status information
    /* Enumeration options for field Status */
    typedef enum { STATUS_NOGPS=0, STATUS_NOFIX=1, STATUS_FIX2D=2, STATUS_FIX3D=3 } StatusOptions;
    // Field Satellites information
    // Field SensorType information
    /* Enumeration options for field SensorType */
    typedef enum { SENSORTYPE_UNKNOWN=0, SENSORTYPE_NMEA=1, SENSORTYPE_UBX=2, SENSORTYPE_UBX7=3, SENSORTYPE_UBX8=4 } SensorTypeOptions;
    // Field AutoConfigStatus information
    /* Enumeration options for field AutoConfigStatus */
    typedef enum { AUTOCONFIGSTATUS_DISABLED=0, AUTOCONFIGSTATUS_RUNNING=1, AUTOCONFIGSTATUS_DONE=2, AUTOCONFIGSTATUS_ERROR=3 } AutoConfigStatusOptions;

  
    // Constants
    static const unsigned int NUMBYTES = sizeof(DataFieldsGPSPositionSensor);

    // Functions
    GPSPositionSensor(UAVObjManager* manager);
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
	
    static GPSPositionSensor* GetInstance(UAVObjectManager* objMngr, unsigned int instID = 0);

    Q_INVOKABLE int getLatitude() const;
    Q_INVOKABLE int getLongitude() const;
    Q_INVOKABLE float getAltitude() const;
    Q_INVOKABLE float getGeoidSeparation() const;
    Q_INVOKABLE float getHeading() const;
    Q_INVOKABLE float getGroundspeed() const;
    Q_INVOKABLE float getPDOP() const;
    Q_INVOKABLE float getHDOP() const;
    Q_INVOKABLE float getVDOP() const;
    Q_INVOKABLE unsigned char getStatus() const;
    Q_INVOKABLE char getSatellites() const;
    Q_INVOKABLE unsigned char getSensorType() const;
    Q_INVOKABLE unsigned char getAutoConfigStatus() const;


public slots:
    void setLatitude(int value);
    void setLongitude(int value);
    void setAltitude(float value);
    void setGeoidSeparation(float value);
    void setHeading(float value);
    void setGroundspeed(float value);
    void setPDOP(float value);
    void setHDOP(float value);
    void setVDOP(float value);
    void setStatus(unsigned char value);
    void setSatellites(char value);
    void setSensorType(unsigned char value);
    void setAutoConfigStatus(unsigned char value);


signals:
    void LatitudeChanged(int value);
    void LongitudeChanged(int value);
    void AltitudeChanged(float value);
    void GeoidSeparationChanged(float value);
    void HeadingChanged(float value);
    void GroundspeedChanged(float value);
    void PDOPChanged(float value);
    void HDOPChanged(float value);
    void VDOPChanged(float value);
    void StatusChanged(unsigned char value);
    void SatellitesChanged(char value);
    void SensorTypeChanged(unsigned char value);
    void AutoConfigStatusChanged(unsigned char value);


private slots:
    void emitNotifications();
	
private:
    DataFields data;

    void setDefaultFieldValues();*/

};

#endif // GPSPOSITIONSENSOR_H
