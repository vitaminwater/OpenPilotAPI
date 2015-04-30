/**
 ******************************************************************************
 *
 * @file       flightbatterysettings.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: flightbatterysettings.xml. 
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
#ifndef FLIGHTBATTERYSETTINGS_H
#define FLIGHTBATTERYSETTINGS_H

#include <string>
#include <sstream>
#include <iostream>
#include <string.h>

#include "UAVObject.h"

    // Data Fields
typedef struct {
        unsigned int Capacity;
        float CellVoltageThresholds[2];
        float SensorCalibrations[4];
        unsigned char Type;
        unsigned char NbCells;

} __attribute__((packed)) DataFieldsFlightBatterySettings;

class FlightBatterySettings: public UAVObject
{

public:
	int instance;
	DataFieldsFlightBatterySettings dataFields;
	static int numInstances;

    // Field information
    // Field Capacity information
    // Field CellVoltageThresholds information
    /* Array element names for field CellVoltageThresholds */
    typedef enum { CELLVOLTAGETHRESHOLDS_WARNING=0, CELLVOLTAGETHRESHOLDS_ALARM=1 } CellVoltageThresholdsElem;
    /* Number of elements for field CellVoltageThresholds */
    static const unsigned int CELLVOLTAGETHRESHOLDS_NUMELEM = 2;
    // Field SensorCalibrations information
    /* Array element names for field SensorCalibrations */
    typedef enum { SENSORCALIBRATIONS_VOLTAGEFACTOR=0, SENSORCALIBRATIONS_CURRENTFACTOR=1, SENSORCALIBRATIONS_VOLTAGEZERO=2, SENSORCALIBRATIONS_CURRENTZERO=3 } SensorCalibrationsElem;
    /* Number of elements for field SensorCalibrations */
    static const unsigned int SENSORCALIBRATIONS_NUMELEM = 4;
    // Field Type information
    /* Enumeration options for field Type */
    typedef enum { TYPE_LIPO=0, TYPE_A123=1, TYPE_LICO=2, TYPE_LIFESO4=3, TYPE_NONE=4 } TypeOptions;
    // Field NbCells information

  
    // Constants
    static const unsigned int NUMBYTES = sizeof(DataFieldsFlightBatterySettings);

    // Functions
    FlightBatterySettings(UAVObjManager* manager);
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
	
    static FlightBatterySettings* GetInstance(UAVObjectManager* objMngr, unsigned int instID = 0);

    Q_INVOKABLE unsigned int getCapacity() const;
    Q_INVOKABLE float getCellVoltageThresholds(unsigned int index) const;
    Q_INVOKABLE float getSensorCalibrations(unsigned int index) const;
    Q_INVOKABLE unsigned char getType() const;
    Q_INVOKABLE unsigned char getNbCells() const;


public slots:
    void setCapacity(unsigned int value);
    void setCellVoltageThresholds(unsigned int index, float value);
    void setSensorCalibrations(unsigned int index, float value);
    void setType(unsigned char value);
    void setNbCells(unsigned char value);


signals:
    void CapacityChanged(unsigned int value);
    void CellVoltageThresholdsChanged(unsigned int index, float value);
    void SensorCalibrationsChanged(unsigned int index, float value);
    void TypeChanged(unsigned char value);
    void NbCellsChanged(unsigned char value);


private slots:
    void emitNotifications();
	
private:
    DataFields data;

    void setDefaultFieldValues();*/

};

#endif // FLIGHTBATTERYSETTINGS_H
