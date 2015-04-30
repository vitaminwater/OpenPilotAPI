/**
 ******************************************************************************
 *
 * @file       flightbatterystate.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: flightbatterystate.xml. 
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
#ifndef FLIGHTBATTERYSTATE_H
#define FLIGHTBATTERYSTATE_H

#include <string>
#include <sstream>
#include <iostream>
#include <string.h>

#include "UAVObject.h"

    // Data Fields
typedef struct {
        float Voltage;
        float Current;
        float BoardSupplyVoltage;
        float PeakCurrent;
        float AvgCurrent;
        float ConsumedEnergy;
        float EstimatedFlightTime;
        unsigned char NbCells;
        unsigned char NbCellsAutodetected;

} __attribute__((packed)) DataFieldsFlightBatteryState;

class FlightBatteryState: public UAVObject
{

public:
	int instance;
	DataFieldsFlightBatteryState dataFields;
	static int numInstances;

    // Field information
    // Field Voltage information
    // Field Current information
    // Field BoardSupplyVoltage information
    // Field PeakCurrent information
    // Field AvgCurrent information
    // Field ConsumedEnergy information
    // Field EstimatedFlightTime information
    // Field NbCells information
    // Field NbCellsAutodetected information
    /* Enumeration options for field NbCellsAutodetected */
    typedef enum { NBCELLSAUTODETECTED_FALSE=0, NBCELLSAUTODETECTED_TRUE=1 } NbCellsAutodetectedOptions;

  
    // Constants
    static const unsigned int NUMBYTES = sizeof(DataFieldsFlightBatteryState);

    // Functions
    FlightBatteryState(UAVObjManager* manager);
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
	
    static FlightBatteryState* GetInstance(UAVObjectManager* objMngr, unsigned int instID = 0);

    Q_INVOKABLE float getVoltage() const;
    Q_INVOKABLE float getCurrent() const;
    Q_INVOKABLE float getBoardSupplyVoltage() const;
    Q_INVOKABLE float getPeakCurrent() const;
    Q_INVOKABLE float getAvgCurrent() const;
    Q_INVOKABLE float getConsumedEnergy() const;
    Q_INVOKABLE float getEstimatedFlightTime() const;
    Q_INVOKABLE unsigned char getNbCells() const;
    Q_INVOKABLE unsigned char getNbCellsAutodetected() const;


public slots:
    void setVoltage(float value);
    void setCurrent(float value);
    void setBoardSupplyVoltage(float value);
    void setPeakCurrent(float value);
    void setAvgCurrent(float value);
    void setConsumedEnergy(float value);
    void setEstimatedFlightTime(float value);
    void setNbCells(unsigned char value);
    void setNbCellsAutodetected(unsigned char value);


signals:
    void VoltageChanged(float value);
    void CurrentChanged(float value);
    void BoardSupplyVoltageChanged(float value);
    void PeakCurrentChanged(float value);
    void AvgCurrentChanged(float value);
    void ConsumedEnergyChanged(float value);
    void EstimatedFlightTimeChanged(float value);
    void NbCellsChanged(unsigned char value);
    void NbCellsAutodetectedChanged(unsigned char value);


private slots:
    void emitNotifications();
	
private:
    DataFields data;

    void setDefaultFieldValues();*/

};

#endif // FLIGHTBATTERYSTATE_H
