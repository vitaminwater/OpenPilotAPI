/**
 ******************************************************************************
 *
 * @file       systemsettings.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: systemsettings.xml.
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

#include "systemsettings.h"

int SystemSettings::numInstances = 0;

/**
 * Constructor
 */
SystemSettings::SystemSettings(UAVObjManager* manager): UAVObject(manager, 0xD9D093B8, "SystemSettings", "Select airframe type.  Currently used by @ref ActuatorModule to choose mixing from @ref ActuatorDesired to @ref ActuatorCommand", "System", 1, 1, ACCESS_READWRITE, ACCESS_READWRITE, 1, 1, UPDATEMODE_ONCHANGE, UPDATEMODE_ONCHANGE, 0, 0, 0)
{

}

int SystemSettings::UAVObjSetDataField(const char *dataIn, const std::string fieldID){
	if(fieldID == "GUIConfigData") {
		memset( &(dataFields.GUIConfigData), 0, sizeof(dataFields.GUIConfigData));
		memcpy( &(dataFields.GUIConfigData), dataIn, sizeof(dataFields.GUIConfigData));
	} else if(fieldID == "AirSpeedMax") {
		memset( &(dataFields.AirSpeedMax), 0, sizeof(dataFields.AirSpeedMax));
		memcpy( &(dataFields.AirSpeedMax), dataIn, sizeof(dataFields.AirSpeedMax));
	} else if(fieldID == "AirSpeedMin") {
		memset( &(dataFields.AirSpeedMin), 0, sizeof(dataFields.AirSpeedMin));
		memcpy( &(dataFields.AirSpeedMin), dataIn, sizeof(dataFields.AirSpeedMin));
	} else if(fieldID == "AirframeType") {
		memset( &(dataFields.AirframeType), 0, sizeof(dataFields.AirframeType));
		memcpy( &(dataFields.AirframeType), dataIn, sizeof(dataFields.AirframeType));
	} else if(fieldID == "VehicleName") {
		memset( &(dataFields.VehicleName), 0, sizeof(dataFields.VehicleName));
		memcpy( &(dataFields.VehicleName), dataIn, sizeof(dataFields.VehicleName));
	} else if(fieldID == "ThrustControl") {
		memset( &(dataFields.ThrustControl), 0, sizeof(dataFields.ThrustControl));
		memcpy( &(dataFields.ThrustControl), dataIn, sizeof(dataFields.ThrustControl));
	}
	return 0;
}

int SystemSettings::UAVObjGetDataField(char *dataOut, const std::string fieldID){
	if(fieldID == "GUIConfigData") {
		memcpy( dataOut, &(dataFields.GUIConfigData), sizeof(dataFields.GUIConfigData));
	} else if(fieldID == "AirSpeedMax") {
		memcpy( dataOut, &(dataFields.AirSpeedMax), sizeof(dataFields.AirSpeedMax));
	} else if(fieldID == "AirSpeedMin") {
		memcpy( dataOut, &(dataFields.AirSpeedMin), sizeof(dataFields.AirSpeedMin));
	} else if(fieldID == "AirframeType") {
		memcpy( dataOut, &(dataFields.AirframeType), sizeof(dataFields.AirframeType));
	} else if(fieldID == "VehicleName") {
		memcpy( dataOut, &(dataFields.VehicleName), sizeof(dataFields.VehicleName));
	} else if(fieldID == "ThrustControl") {
		memcpy( dataOut, &(dataFields.ThrustControl), sizeof(dataFields.ThrustControl));
	}
	return 0;
}

int SystemSettings::UAVObjUnpack(const unsigned char *dataIn){
	memcpy(&dataFields, dataIn, NUMBYTES);
	return 0;
}

int SystemSettings::UAVObjPack(unsigned char *dataOut) {
	memcpy(dataOut, &dataFields, NUMBYTES);
	return 0;
}

unsigned short SystemSettings::UAVObjGetInstance() const {
	return instance;
}
unsigned short SystemSettings::UAVObjGetNumBytes() const {
	return sizeof(dataFields);
}
unsigned short SystemSettings::UAVObjGetNumInstances() const {
	return numInstances;
}

std::string SystemSettings::prettyPrint() {
	std::stringstream ss;
	ss << "\nPrinting object: systemsettings" << std::endl;
	ss << "\tGUIConfigData: " << dataFields.GUIConfigData << std::endl;
	ss << "\tAirSpeedMax: " << dataFields.AirSpeedMax << std::endl;
	ss << "\tAirSpeedMin: " << dataFields.AirSpeedMin << std::endl;
	ss << "\tAirframeType: " << dataFields.AirframeType << std::endl;
	ss << "\tVehicleName: " << dataFields.VehicleName << std::endl;
	ss << "\tThrustControl: " << dataFields.ThrustControl << std::endl;

	return ss.str();
}

/*/***/
/* * Initialize object fields with the default values.*/
/* * If a default value is not specified the object fields*/
/* * will be initialized to zero.*/
/* */
/*void SystemSettings::setDefaultFieldValues()*/
/*{*/
/*    data.GUIConfigData[0] = 0;
    data.GUIConfigData[1] = 0;
    data.GUIConfigData[2] = 0;
    data.GUIConfigData[3] = 0;
    data.AirSpeedMax = 30;
    data.AirSpeedMin = 10;
    data.AirframeType = 5;
    data.VehicleName[0] = 0;
    data.VehicleName[1] = 0;
    data.VehicleName[2] = 0;
    data.VehicleName[3] = 0;
    data.VehicleName[4] = 0;
    data.VehicleName[5] = 0;
    data.VehicleName[6] = 0;
    data.VehicleName[7] = 0;
    data.VehicleName[8] = 0;
    data.VehicleName[9] = 0;
    data.VehicleName[10] = 0;
    data.VehicleName[11] = 0;
    data.VehicleName[12] = 0;
    data.VehicleName[13] = 0;
    data.VehicleName[14] = 0;
    data.VehicleName[15] = 0;
    data.VehicleName[16] = 0;
    data.VehicleName[17] = 0;
    data.VehicleName[18] = 0;
    data.VehicleName[19] = 0;
    data.ThrustControl = 0;
*/
/*}*/

/*/***/
/* * Get the object data fields*/
/* */
/*SystemSettings::DataFields SystemSettings::getData()*/
/*{*/
/*    QMutexLocker locker(mutex);*/
/*    return data;*/
/*}*/

/*/***/
/* * Set the object data fields*/
/* */
/*void SystemSettings::setData(const DataFields& data)*/
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

/*void SystemSettings::emitNotifications()*/
/*{*/
/*            //if (data.AirSpeedMax != oldData.AirSpeedMax)
            emit AirSpeedMaxChanged(data.AirSpeedMax);
        //if (data.AirSpeedMin != oldData.AirSpeedMin)
            emit AirSpeedMinChanged(data.AirSpeedMin);
        //if (data.AirframeType != oldData.AirframeType)
            emit AirframeTypeChanged(data.AirframeType);
        //if (data.ThrustControl != oldData.ThrustControl)
            emit ThrustControlChanged(data.ThrustControl);
*/
/*}*/

/*/***/
/* * Create a clone of this object, a new instance ID must be specified.*/
/* * Do not use this function directly to create new instances, the*/
/* * UAVObjectManager should be used instead.*/
/* */
/*UAVDataObject *SystemSettings::clone(unsigned int instID)*/
/*{*/
/*    SystemSettings *obj = new SystemSettings();*/
/*    obj->initialize(instID, this->getMetaObject());*/
/*    return obj;*/
/*}*/

/*/***/
/* * Create a clone of this object only to be used to retrieve defaults*/
/* */
/*UAVDataObject *SystemSettings::dirtyClone()*/
/*{*/
/*    SystemSettings *obj = new SystemSettings();*/
/*    return obj;*/
/*}*/

/*/***/
/* * Static function to retrieve an instance of the object.*/
/* */
/*SystemSettings *SystemSettings::GetInstance(UAVObjectManager *objMngr, unsigned int instID)*/
/*{*/
/*    return dynamic_cast<SystemSettings *>(objMngr->getObject(SystemSettings::OBJID, instID));*/
/*}*/

/*unsigned int SystemSettings::getGUIConfigData(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.GUIConfigData[index];
}
void SystemSettings::setGUIConfigData(unsigned int index, unsigned int value)
{
   mutex->lock();
   bool changed = data.GUIConfigData[index] != value;
   data.GUIConfigData[index] = value;
   mutex->unlock();
   if (changed) emit GUIConfigDataChanged(index,value);
}

float SystemSettings::getAirSpeedMax() const
{
   QMutexLocker locker(mutex);
   return data.AirSpeedMax;
}
void SystemSettings::setAirSpeedMax(float value)
{
   mutex->lock();
   bool changed = data.AirSpeedMax != value;
   data.AirSpeedMax = value;
   mutex->unlock();
   if (changed) emit AirSpeedMaxChanged(value);
}

float SystemSettings::getAirSpeedMin() const
{
   QMutexLocker locker(mutex);
   return data.AirSpeedMin;
}
void SystemSettings::setAirSpeedMin(float value)
{
   mutex->lock();
   bool changed = data.AirSpeedMin != value;
   data.AirSpeedMin = value;
   mutex->unlock();
   if (changed) emit AirSpeedMinChanged(value);
}

unsigned char SystemSettings::getAirframeType() const
{
   QMutexLocker locker(mutex);
   return data.AirframeType;
}
void SystemSettings::setAirframeType(unsigned char value)
{
   mutex->lock();
   bool changed = data.AirframeType != value;
   data.AirframeType = value;
   mutex->unlock();
   if (changed) emit AirframeTypeChanged(value);
}

unsigned char SystemSettings::getVehicleName(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.VehicleName[index];
}
void SystemSettings::setVehicleName(unsigned int index, unsigned char value)
{
   mutex->lock();
   bool changed = data.VehicleName[index] != value;
   data.VehicleName[index] = value;
   mutex->unlock();
   if (changed) emit VehicleNameChanged(index,value);
}

unsigned char SystemSettings::getThrustControl() const
{
   QMutexLocker locker(mutex);
   return data.ThrustControl;
}
void SystemSettings::setThrustControl(unsigned char value)
{
   mutex->lock();
   bool changed = data.ThrustControl != value;
   data.ThrustControl = value;
   mutex->unlock();
   if (changed) emit ThrustControlChanged(value);
}

*/
