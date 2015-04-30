/**
 ******************************************************************************
 *
 * @file       flightbatterysettings.cpp
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

#include "flightbatterysettings.h"

int FlightBatterySettings::numInstances = 0;

/**
 * Constructor
 */
FlightBatterySettings::FlightBatterySettings(UAVObjManager* manager): UAVObject(manager, 0xC3D9C8AA, "FlightBatterySettings", "Flight Battery configuration.", "Sensors", 1, 1, ACCESS_READWRITE, ACCESS_READWRITE, 1, 1, UPDATEMODE_ONCHANGE, UPDATEMODE_ONCHANGE, 0, 0, 0)
{

}

int FlightBatterySettings::UAVObjSetDataField(const char *dataIn, const std::string fieldID){
	if(fieldID == "Capacity") {
		memset( &(dataFields.Capacity), 0, sizeof(dataFields.Capacity));
		memcpy( &(dataFields.Capacity), dataIn, sizeof(dataFields.Capacity));
	} else if(fieldID == "CellVoltageThresholds") {
		memset( &(dataFields.CellVoltageThresholds), 0, sizeof(dataFields.CellVoltageThresholds));
		memcpy( &(dataFields.CellVoltageThresholds), dataIn, sizeof(dataFields.CellVoltageThresholds));
	} else if(fieldID == "SensorCalibrations") {
		memset( &(dataFields.SensorCalibrations), 0, sizeof(dataFields.SensorCalibrations));
		memcpy( &(dataFields.SensorCalibrations), dataIn, sizeof(dataFields.SensorCalibrations));
	} else if(fieldID == "Type") {
		memset( &(dataFields.Type), 0, sizeof(dataFields.Type));
		memcpy( &(dataFields.Type), dataIn, sizeof(dataFields.Type));
	} else if(fieldID == "NbCells") {
		memset( &(dataFields.NbCells), 0, sizeof(dataFields.NbCells));
		memcpy( &(dataFields.NbCells), dataIn, sizeof(dataFields.NbCells));
	}
	return 0;
}

int FlightBatterySettings::UAVObjGetDataField(char *dataOut, const std::string fieldID){
	if(fieldID == "Capacity") {
		memcpy( dataOut, &(dataFields.Capacity), sizeof(dataFields.Capacity));
	} else if(fieldID == "CellVoltageThresholds") {
		memcpy( dataOut, &(dataFields.CellVoltageThresholds), sizeof(dataFields.CellVoltageThresholds));
	} else if(fieldID == "SensorCalibrations") {
		memcpy( dataOut, &(dataFields.SensorCalibrations), sizeof(dataFields.SensorCalibrations));
	} else if(fieldID == "Type") {
		memcpy( dataOut, &(dataFields.Type), sizeof(dataFields.Type));
	} else if(fieldID == "NbCells") {
		memcpy( dataOut, &(dataFields.NbCells), sizeof(dataFields.NbCells));
	}
	return 0;
}

int FlightBatterySettings::UAVObjUnpack(const unsigned char *dataIn){
	memcpy(&dataFields, dataIn, NUMBYTES);
	return 0;
}

int FlightBatterySettings::UAVObjPack(unsigned char *dataOut) {
	memcpy(dataOut, &dataFields, NUMBYTES);
	return 0;
}

unsigned short FlightBatterySettings::UAVObjGetInstance() const {
	return instance;
}
unsigned short FlightBatterySettings::UAVObjGetNumBytes() const {
	return sizeof(dataFields);
}
unsigned short FlightBatterySettings::UAVObjGetNumInstances() const {
	return numInstances;
}

std::string FlightBatterySettings::prettyPrint() {
	std::stringstream ss;
	ss << "\nPrinting object: flightbatterysettings" << std::endl;
	ss << "\tCapacity: " << dataFields.Capacity << std::endl;
	ss << "\tCellVoltageThresholds: " << dataFields.CellVoltageThresholds << std::endl;
	ss << "\tSensorCalibrations: " << dataFields.SensorCalibrations << std::endl;
	ss << "\tType: " << dataFields.Type << std::endl;
	ss << "\tNbCells: " << dataFields.NbCells << std::endl;

	return ss.str();
}

/*/***/
/* * Initialize object fields with the default values.*/
/* * If a default value is not specified the object fields*/
/* * will be initialized to zero.*/
/* */
/*void FlightBatterySettings::setDefaultFieldValues()*/
/*{*/
/*    data.Capacity = 2200;
    data.CellVoltageThresholds[0] = 3.4;
    data.CellVoltageThresholds[1] = 3.1;
    data.SensorCalibrations[0] = 1;
    data.SensorCalibrations[1] = 1;
    data.SensorCalibrations[2] = 0;
    data.SensorCalibrations[3] = 0;
    data.Type = 0;
    data.NbCells = 0;
*/
/*}*/

/*/***/
/* * Get the object data fields*/
/* */
/*FlightBatterySettings::DataFields FlightBatterySettings::getData()*/
/*{*/
/*    QMutexLocker locker(mutex);*/
/*    return data;*/
/*}*/

/*/***/
/* * Set the object data fields*/
/* */
/*void FlightBatterySettings::setData(const DataFields& data)*/
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

/*void FlightBatterySettings::emitNotifications()*/
/*{*/
/*            //if (data.Capacity != oldData.Capacity)
            emit CapacityChanged(data.Capacity);
        //if (data.Type != oldData.Type)
            emit TypeChanged(data.Type);
        //if (data.NbCells != oldData.NbCells)
            emit NbCellsChanged(data.NbCells);
*/
/*}*/

/*/***/
/* * Create a clone of this object, a new instance ID must be specified.*/
/* * Do not use this function directly to create new instances, the*/
/* * UAVObjectManager should be used instead.*/
/* */
/*UAVDataObject *FlightBatterySettings::clone(unsigned int instID)*/
/*{*/
/*    FlightBatterySettings *obj = new FlightBatterySettings();*/
/*    obj->initialize(instID, this->getMetaObject());*/
/*    return obj;*/
/*}*/

/*/***/
/* * Create a clone of this object only to be used to retrieve defaults*/
/* */
/*UAVDataObject *FlightBatterySettings::dirtyClone()*/
/*{*/
/*    FlightBatterySettings *obj = new FlightBatterySettings();*/
/*    return obj;*/
/*}*/

/*/***/
/* * Static function to retrieve an instance of the object.*/
/* */
/*FlightBatterySettings *FlightBatterySettings::GetInstance(UAVObjectManager *objMngr, unsigned int instID)*/
/*{*/
/*    return dynamic_cast<FlightBatterySettings *>(objMngr->getObject(FlightBatterySettings::OBJID, instID));*/
/*}*/

/*unsigned int FlightBatterySettings::getCapacity() const
{
   QMutexLocker locker(mutex);
   return data.Capacity;
}
void FlightBatterySettings::setCapacity(unsigned int value)
{
   mutex->lock();
   bool changed = data.Capacity != value;
   data.Capacity = value;
   mutex->unlock();
   if (changed) emit CapacityChanged(value);
}

float FlightBatterySettings::getCellVoltageThresholds(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.CellVoltageThresholds[index];
}
void FlightBatterySettings::setCellVoltageThresholds(unsigned int index, float value)
{
   mutex->lock();
   bool changed = data.CellVoltageThresholds[index] != value;
   data.CellVoltageThresholds[index] = value;
   mutex->unlock();
   if (changed) emit CellVoltageThresholdsChanged(index,value);
}

float FlightBatterySettings::getSensorCalibrations(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.SensorCalibrations[index];
}
void FlightBatterySettings::setSensorCalibrations(unsigned int index, float value)
{
   mutex->lock();
   bool changed = data.SensorCalibrations[index] != value;
   data.SensorCalibrations[index] = value;
   mutex->unlock();
   if (changed) emit SensorCalibrationsChanged(index,value);
}

unsigned char FlightBatterySettings::getType() const
{
   QMutexLocker locker(mutex);
   return data.Type;
}
void FlightBatterySettings::setType(unsigned char value)
{
   mutex->lock();
   bool changed = data.Type != value;
   data.Type = value;
   mutex->unlock();
   if (changed) emit TypeChanged(value);
}

unsigned char FlightBatterySettings::getNbCells() const
{
   QMutexLocker locker(mutex);
   return data.NbCells;
}
void FlightBatterySettings::setNbCells(unsigned char value)
{
   mutex->lock();
   bool changed = data.NbCells != value;
   data.NbCells = value;
   mutex->unlock();
   if (changed) emit NbCellsChanged(value);
}

*/
