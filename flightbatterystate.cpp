/**
 ******************************************************************************
 *
 * @file       flightbatterystate.cpp
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

#include "flightbatterystate.h"

int FlightBatteryState::numInstances = 0;

/**
 * Constructor
 */
FlightBatteryState::FlightBatteryState(UAVObjManager* manager): UAVObject(manager, 0x26962352, "FlightBatteryState", "Battery status information.", "Sensors", 1, 0, ACCESS_READWRITE, ACCESS_READONLY, 0, 0, UPDATEMODE_PERIODIC, UPDATEMODE_MANUAL, 1000, 0, 0)
{

}

int FlightBatteryState::UAVObjSetDataField(const char *dataIn, const std::string fieldID){
	if(fieldID == "Voltage") {
		memset( &(dataFields.Voltage), 0, sizeof(dataFields.Voltage));
		memcpy( &(dataFields.Voltage), dataIn, sizeof(dataFields.Voltage));
	} else if(fieldID == "Current") {
		memset( &(dataFields.Current), 0, sizeof(dataFields.Current));
		memcpy( &(dataFields.Current), dataIn, sizeof(dataFields.Current));
	} else if(fieldID == "BoardSupplyVoltage") {
		memset( &(dataFields.BoardSupplyVoltage), 0, sizeof(dataFields.BoardSupplyVoltage));
		memcpy( &(dataFields.BoardSupplyVoltage), dataIn, sizeof(dataFields.BoardSupplyVoltage));
	} else if(fieldID == "PeakCurrent") {
		memset( &(dataFields.PeakCurrent), 0, sizeof(dataFields.PeakCurrent));
		memcpy( &(dataFields.PeakCurrent), dataIn, sizeof(dataFields.PeakCurrent));
	} else if(fieldID == "AvgCurrent") {
		memset( &(dataFields.AvgCurrent), 0, sizeof(dataFields.AvgCurrent));
		memcpy( &(dataFields.AvgCurrent), dataIn, sizeof(dataFields.AvgCurrent));
	} else if(fieldID == "ConsumedEnergy") {
		memset( &(dataFields.ConsumedEnergy), 0, sizeof(dataFields.ConsumedEnergy));
		memcpy( &(dataFields.ConsumedEnergy), dataIn, sizeof(dataFields.ConsumedEnergy));
	} else if(fieldID == "EstimatedFlightTime") {
		memset( &(dataFields.EstimatedFlightTime), 0, sizeof(dataFields.EstimatedFlightTime));
		memcpy( &(dataFields.EstimatedFlightTime), dataIn, sizeof(dataFields.EstimatedFlightTime));
	} else if(fieldID == "NbCells") {
		memset( &(dataFields.NbCells), 0, sizeof(dataFields.NbCells));
		memcpy( &(dataFields.NbCells), dataIn, sizeof(dataFields.NbCells));
	} else if(fieldID == "NbCellsAutodetected") {
		memset( &(dataFields.NbCellsAutodetected), 0, sizeof(dataFields.NbCellsAutodetected));
		memcpy( &(dataFields.NbCellsAutodetected), dataIn, sizeof(dataFields.NbCellsAutodetected));
	}
	return 0;
}

int FlightBatteryState::UAVObjGetDataField(char *dataOut, const std::string fieldID){
	if(fieldID == "Voltage") {
		memcpy( dataOut, &(dataFields.Voltage), sizeof(dataFields.Voltage));
	} else if(fieldID == "Current") {
		memcpy( dataOut, &(dataFields.Current), sizeof(dataFields.Current));
	} else if(fieldID == "BoardSupplyVoltage") {
		memcpy( dataOut, &(dataFields.BoardSupplyVoltage), sizeof(dataFields.BoardSupplyVoltage));
	} else if(fieldID == "PeakCurrent") {
		memcpy( dataOut, &(dataFields.PeakCurrent), sizeof(dataFields.PeakCurrent));
	} else if(fieldID == "AvgCurrent") {
		memcpy( dataOut, &(dataFields.AvgCurrent), sizeof(dataFields.AvgCurrent));
	} else if(fieldID == "ConsumedEnergy") {
		memcpy( dataOut, &(dataFields.ConsumedEnergy), sizeof(dataFields.ConsumedEnergy));
	} else if(fieldID == "EstimatedFlightTime") {
		memcpy( dataOut, &(dataFields.EstimatedFlightTime), sizeof(dataFields.EstimatedFlightTime));
	} else if(fieldID == "NbCells") {
		memcpy( dataOut, &(dataFields.NbCells), sizeof(dataFields.NbCells));
	} else if(fieldID == "NbCellsAutodetected") {
		memcpy( dataOut, &(dataFields.NbCellsAutodetected), sizeof(dataFields.NbCellsAutodetected));
	}
	return 0;
}

int FlightBatteryState::UAVObjUnpack(const unsigned char *dataIn){
	memcpy(&dataFields, dataIn, NUMBYTES);
	return 0;
}

int FlightBatteryState::UAVObjPack(unsigned char *dataOut) {
	memcpy(dataOut, &dataFields, NUMBYTES);
	return 0;
}

unsigned short FlightBatteryState::UAVObjGetInstance() const {
	return instance;
}
unsigned short FlightBatteryState::UAVObjGetNumBytes() const {
	return sizeof(dataFields);
}
unsigned short FlightBatteryState::UAVObjGetNumInstances() const {
	return numInstances;
}

std::string FlightBatteryState::prettyPrint() {
	std::stringstream ss;
	ss << "\nPrinting object: flightbatterystate" << std::endl;
	ss << "\tVoltage: " << dataFields.Voltage << std::endl;
	ss << "\tCurrent: " << dataFields.Current << std::endl;
	ss << "\tBoardSupplyVoltage: " << dataFields.BoardSupplyVoltage << std::endl;
	ss << "\tPeakCurrent: " << dataFields.PeakCurrent << std::endl;
	ss << "\tAvgCurrent: " << dataFields.AvgCurrent << std::endl;
	ss << "\tConsumedEnergy: " << dataFields.ConsumedEnergy << std::endl;
	ss << "\tEstimatedFlightTime: " << dataFields.EstimatedFlightTime << std::endl;
	ss << "\tNbCells: " << dataFields.NbCells << std::endl;
	ss << "\tNbCellsAutodetected: " << dataFields.NbCellsAutodetected << std::endl;

	return ss.str();
}

/*/***/
/* * Initialize object fields with the default values.*/
/* * If a default value is not specified the object fields*/
/* * will be initialized to zero.*/
/* */
/*void FlightBatteryState::setDefaultFieldValues()*/
/*{*/
/*    data.Voltage = 0;
    data.Current = 0;
    data.BoardSupplyVoltage = 0;
    data.PeakCurrent = 0;
    data.AvgCurrent = 0;
    data.ConsumedEnergy = 0;
    data.EstimatedFlightTime = 0;
    data.NbCells = 3;
    data.NbCellsAutodetected = 0;
*/
/*}*/

/*/***/
/* * Get the object data fields*/
/* */
/*FlightBatteryState::DataFields FlightBatteryState::getData()*/
/*{*/
/*    QMutexLocker locker(mutex);*/
/*    return data;*/
/*}*/

/*/***/
/* * Set the object data fields*/
/* */
/*void FlightBatteryState::setData(const DataFields& data)*/
/*{*/
/*    QMutexLocker locker(mutex);*/
/*    // Get metadata*/
/*    Metadata mdata = getMetadata();*/
/*    // Update object if the access mode permits*/
/*    if (UAVObject::GetGcsAccess(mdata) == ACCESS_READWRITE) {*/
/*        this->data = data;*/
/*        emit objectUpdatedAuto(this); // trigger object updated event*/
/*        emit objectUpdated(this);*/
/*    }*/
/*}*/

/*void FlightBatteryState::emitNotifications()*/
/*{*/
/*            //if (data.Voltage != oldData.Voltage)
            emit VoltageChanged(data.Voltage);
        //if (data.Current != oldData.Current)
            emit CurrentChanged(data.Current);
        //if (data.BoardSupplyVoltage != oldData.BoardSupplyVoltage)
            emit BoardSupplyVoltageChanged(data.BoardSupplyVoltage);
        //if (data.PeakCurrent != oldData.PeakCurrent)
            emit PeakCurrentChanged(data.PeakCurrent);
        //if (data.AvgCurrent != oldData.AvgCurrent)
            emit AvgCurrentChanged(data.AvgCurrent);
        //if (data.ConsumedEnergy != oldData.ConsumedEnergy)
            emit ConsumedEnergyChanged(data.ConsumedEnergy);
        //if (data.EstimatedFlightTime != oldData.EstimatedFlightTime)
            emit EstimatedFlightTimeChanged(data.EstimatedFlightTime);
        //if (data.NbCells != oldData.NbCells)
            emit NbCellsChanged(data.NbCells);
        //if (data.NbCellsAutodetected != oldData.NbCellsAutodetected)
            emit NbCellsAutodetectedChanged(data.NbCellsAutodetected);
*/
/*}*/

/*/***/
/* * Create a clone of this object, a new instance ID must be specified.*/
/* * Do not use this function directly to create new instances, the*/
/* * UAVObjectManager should be used instead.*/
/* */
/*UAVDataObject *FlightBatteryState::clone(unsigned int instID)*/
/*{*/
/*    FlightBatteryState *obj = new FlightBatteryState();*/
/*    obj->initialize(instID, this->getMetaObject());*/
/*    return obj;*/
/*}*/

/*/***/
/* * Create a clone of this object only to be used to retrieve defaults*/
/* */
/*UAVDataObject *FlightBatteryState::dirtyClone()*/
/*{*/
/*    FlightBatteryState *obj = new FlightBatteryState();*/
/*    return obj;*/
/*}*/

/*/***/
/* * Static function to retrieve an instance of the object.*/
/* */
/*FlightBatteryState *FlightBatteryState::GetInstance(UAVObjectManager *objMngr, unsigned int instID)*/
/*{*/
/*    return dynamic_cast<FlightBatteryState *>(objMngr->getObject(FlightBatteryState::OBJID, instID));*/
/*}*/

/*float FlightBatteryState::getVoltage() const
{
   QMutexLocker locker(mutex);
   return data.Voltage;
}
void FlightBatteryState::setVoltage(float value)
{
   mutex->lock();
   bool changed = data.Voltage != value;
   data.Voltage = value;
   mutex->unlock();
   if (changed) emit VoltageChanged(value);
}

float FlightBatteryState::getCurrent() const
{
   QMutexLocker locker(mutex);
   return data.Current;
}
void FlightBatteryState::setCurrent(float value)
{
   mutex->lock();
   bool changed = data.Current != value;
   data.Current = value;
   mutex->unlock();
   if (changed) emit CurrentChanged(value);
}

float FlightBatteryState::getBoardSupplyVoltage() const
{
   QMutexLocker locker(mutex);
   return data.BoardSupplyVoltage;
}
void FlightBatteryState::setBoardSupplyVoltage(float value)
{
   mutex->lock();
   bool changed = data.BoardSupplyVoltage != value;
   data.BoardSupplyVoltage = value;
   mutex->unlock();
   if (changed) emit BoardSupplyVoltageChanged(value);
}

float FlightBatteryState::getPeakCurrent() const
{
   QMutexLocker locker(mutex);
   return data.PeakCurrent;
}
void FlightBatteryState::setPeakCurrent(float value)
{
   mutex->lock();
   bool changed = data.PeakCurrent != value;
   data.PeakCurrent = value;
   mutex->unlock();
   if (changed) emit PeakCurrentChanged(value);
}

float FlightBatteryState::getAvgCurrent() const
{
   QMutexLocker locker(mutex);
   return data.AvgCurrent;
}
void FlightBatteryState::setAvgCurrent(float value)
{
   mutex->lock();
   bool changed = data.AvgCurrent != value;
   data.AvgCurrent = value;
   mutex->unlock();
   if (changed) emit AvgCurrentChanged(value);
}

float FlightBatteryState::getConsumedEnergy() const
{
   QMutexLocker locker(mutex);
   return data.ConsumedEnergy;
}
void FlightBatteryState::setConsumedEnergy(float value)
{
   mutex->lock();
   bool changed = data.ConsumedEnergy != value;
   data.ConsumedEnergy = value;
   mutex->unlock();
   if (changed) emit ConsumedEnergyChanged(value);
}

float FlightBatteryState::getEstimatedFlightTime() const
{
   QMutexLocker locker(mutex);
   return data.EstimatedFlightTime;
}
void FlightBatteryState::setEstimatedFlightTime(float value)
{
   mutex->lock();
   bool changed = data.EstimatedFlightTime != value;
   data.EstimatedFlightTime = value;
   mutex->unlock();
   if (changed) emit EstimatedFlightTimeChanged(value);
}

unsigned char FlightBatteryState::getNbCells() const
{
   QMutexLocker locker(mutex);
   return data.NbCells;
}
void FlightBatteryState::setNbCells(unsigned char value)
{
   mutex->lock();
   bool changed = data.NbCells != value;
   data.NbCells = value;
   mutex->unlock();
   if (changed) emit NbCellsChanged(value);
}

unsigned char FlightBatteryState::getNbCellsAutodetected() const
{
   QMutexLocker locker(mutex);
   return data.NbCellsAutodetected;
}
void FlightBatteryState::setNbCellsAutodetected(unsigned char value)
{
   mutex->lock();
   bool changed = data.NbCellsAutodetected != value;
   data.NbCellsAutodetected = value;
   mutex->unlock();
   if (changed) emit NbCellsAutodetectedChanged(value);
}

*/
