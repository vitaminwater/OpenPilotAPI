/**
 ******************************************************************************
 *
 * @file       manualcontrolsettings.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: manualcontrolsettings.xml.
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

#include "manualcontrolsettings.h"

int ManualControlSettings::numInstances = 0;

/**
 * Constructor
 */
ManualControlSettings::ManualControlSettings(UAVObjManager* manager): UAVObject(manager, 0x28801F10, "ManualControlSettings", "Settings to indicate how to decode receiver input by @ref ManualControlModule.", "Control", 1, 1, ACCESS_READWRITE, ACCESS_READWRITE, 1, 1, UPDATEMODE_ONCHANGE, UPDATEMODE_ONCHANGE, 0, 0, 0)
{

}

int ManualControlSettings::UAVObjSetDataField(const char *dataIn, const std::string fieldID){
	if(fieldID == "Deadband") {
		memset( &(dataFields.Deadband), 0, sizeof(dataFields.Deadband));
		memcpy( &(dataFields.Deadband), dataIn, sizeof(dataFields.Deadband));
	} else if(fieldID == "DeadbandAssistedControl") {
		memset( &(dataFields.DeadbandAssistedControl), 0, sizeof(dataFields.DeadbandAssistedControl));
		memcpy( &(dataFields.DeadbandAssistedControl), dataIn, sizeof(dataFields.DeadbandAssistedControl));
	} else if(fieldID == "FailsafeChannel") {
		memset( &(dataFields.FailsafeChannel), 0, sizeof(dataFields.FailsafeChannel));
		memcpy( &(dataFields.FailsafeChannel), dataIn, sizeof(dataFields.FailsafeChannel));
	} else if(fieldID == "ChannelMin") {
		memset( &(dataFields.ChannelMin), 0, sizeof(dataFields.ChannelMin));
		memcpy( &(dataFields.ChannelMin), dataIn, sizeof(dataFields.ChannelMin));
	} else if(fieldID == "ChannelNeutral") {
		memset( &(dataFields.ChannelNeutral), 0, sizeof(dataFields.ChannelNeutral));
		memcpy( &(dataFields.ChannelNeutral), dataIn, sizeof(dataFields.ChannelNeutral));
	} else if(fieldID == "ChannelMax") {
		memset( &(dataFields.ChannelMax), 0, sizeof(dataFields.ChannelMax));
		memcpy( &(dataFields.ChannelMax), dataIn, sizeof(dataFields.ChannelMax));
	} else if(fieldID == "ResponseTime") {
		memset( &(dataFields.ResponseTime), 0, sizeof(dataFields.ResponseTime));
		memcpy( &(dataFields.ResponseTime), dataIn, sizeof(dataFields.ResponseTime));
	} else if(fieldID == "ChannelGroups") {
		memset( &(dataFields.ChannelGroups), 0, sizeof(dataFields.ChannelGroups));
		memcpy( &(dataFields.ChannelGroups), dataIn, sizeof(dataFields.ChannelGroups));
	} else if(fieldID == "ChannelNumber") {
		memset( &(dataFields.ChannelNumber), 0, sizeof(dataFields.ChannelNumber));
		memcpy( &(dataFields.ChannelNumber), dataIn, sizeof(dataFields.ChannelNumber));
	} else if(fieldID == "FlightModeNumber") {
		memset( &(dataFields.FlightModeNumber), 0, sizeof(dataFields.FlightModeNumber));
		memcpy( &(dataFields.FlightModeNumber), dataIn, sizeof(dataFields.FlightModeNumber));
	} else if(fieldID == "FailsafeFlightModeSwitchPosition") {
		memset( &(dataFields.FailsafeFlightModeSwitchPosition), 0, sizeof(dataFields.FailsafeFlightModeSwitchPosition));
		memcpy( &(dataFields.FailsafeFlightModeSwitchPosition), dataIn, sizeof(dataFields.FailsafeFlightModeSwitchPosition));
	}
	return 0;
}

int ManualControlSettings::UAVObjGetDataField(char *dataOut, const std::string fieldID){
	if(fieldID == "Deadband") {
		memcpy( dataOut, &(dataFields.Deadband), sizeof(dataFields.Deadband));
	} else if(fieldID == "DeadbandAssistedControl") {
		memcpy( dataOut, &(dataFields.DeadbandAssistedControl), sizeof(dataFields.DeadbandAssistedControl));
	} else if(fieldID == "FailsafeChannel") {
		memcpy( dataOut, &(dataFields.FailsafeChannel), sizeof(dataFields.FailsafeChannel));
	} else if(fieldID == "ChannelMin") {
		memcpy( dataOut, &(dataFields.ChannelMin), sizeof(dataFields.ChannelMin));
	} else if(fieldID == "ChannelNeutral") {
		memcpy( dataOut, &(dataFields.ChannelNeutral), sizeof(dataFields.ChannelNeutral));
	} else if(fieldID == "ChannelMax") {
		memcpy( dataOut, &(dataFields.ChannelMax), sizeof(dataFields.ChannelMax));
	} else if(fieldID == "ResponseTime") {
		memcpy( dataOut, &(dataFields.ResponseTime), sizeof(dataFields.ResponseTime));
	} else if(fieldID == "ChannelGroups") {
		memcpy( dataOut, &(dataFields.ChannelGroups), sizeof(dataFields.ChannelGroups));
	} else if(fieldID == "ChannelNumber") {
		memcpy( dataOut, &(dataFields.ChannelNumber), sizeof(dataFields.ChannelNumber));
	} else if(fieldID == "FlightModeNumber") {
		memcpy( dataOut, &(dataFields.FlightModeNumber), sizeof(dataFields.FlightModeNumber));
	} else if(fieldID == "FailsafeFlightModeSwitchPosition") {
		memcpy( dataOut, &(dataFields.FailsafeFlightModeSwitchPosition), sizeof(dataFields.FailsafeFlightModeSwitchPosition));
	}
	return 0;
}

int ManualControlSettings::UAVObjUnpack(const unsigned char *dataIn){
	memcpy(&dataFields, dataIn, NUMBYTES);
	return 0;
}

int ManualControlSettings::UAVObjPack(unsigned char *dataOut) {
	memcpy(dataOut, &dataFields, NUMBYTES);
	return 0;
}

unsigned short ManualControlSettings::UAVObjGetInstance() const {
	return instance;
}
unsigned short ManualControlSettings::UAVObjGetNumBytes() const {
	return sizeof(dataFields);
}
unsigned short ManualControlSettings::UAVObjGetNumInstances() const {
	return numInstances;
}

std::string ManualControlSettings::prettyPrint() {
	std::stringstream ss;
	ss << "\nPrinting object: manualcontrolsettings" << std::endl;
	ss << "\tDeadband: " << dataFields.Deadband << std::endl;
	ss << "\tDeadbandAssistedControl: " << dataFields.DeadbandAssistedControl << std::endl;
	ss << "\tFailsafeChannel: " << dataFields.FailsafeChannel << std::endl;
	ss << "\tChannelMin: " << dataFields.ChannelMin << std::endl;
	ss << "\tChannelNeutral: " << dataFields.ChannelNeutral << std::endl;
	ss << "\tChannelMax: " << dataFields.ChannelMax << std::endl;
	ss << "\tResponseTime: " << dataFields.ResponseTime << std::endl;
	ss << "\tChannelGroups: " << dataFields.ChannelGroups << std::endl;
	ss << "\tChannelNumber: " << dataFields.ChannelNumber << std::endl;
	ss << "\tFlightModeNumber: " << dataFields.FlightModeNumber << std::endl;
	ss << "\tFailsafeFlightModeSwitchPosition: " << dataFields.FailsafeFlightModeSwitchPosition << std::endl;

	return ss.str();
}

/*/***/
/* * Initialize object fields with the default values.*/
/* * If a default value is not specified the object fields*/
/* * will be initialized to zero.*/
/* */
/*void ManualControlSettings::setDefaultFieldValues()*/
/*{*/
/*    data.Deadband = 0.02;
    data.DeadbandAssistedControl = 0.08;
    data.FailsafeChannel[0] = -1;
    data.FailsafeChannel[1] = 0;
    data.FailsafeChannel[2] = 0;
    data.FailsafeChannel[3] = 0;
    data.FailsafeChannel[4] = 0;
    data.FailsafeChannel[5] = 0;
    data.FailsafeChannel[6] = 0;
    data.FailsafeChannel[7] = 0;
    data.ChannelMin[0] = 1000;
    data.ChannelMin[1] = 1000;
    data.ChannelMin[2] = 1000;
    data.ChannelMin[3] = 1000;
    data.ChannelMin[4] = 1000;
    data.ChannelMin[5] = 1000;
    data.ChannelMin[6] = 1000;
    data.ChannelMin[7] = 1000;
    data.ChannelMin[8] = 1000;
    data.ChannelNeutral[0] = 1500;
    data.ChannelNeutral[1] = 1500;
    data.ChannelNeutral[2] = 1500;
    data.ChannelNeutral[3] = 1500;
    data.ChannelNeutral[4] = 1500;
    data.ChannelNeutral[5] = 1500;
    data.ChannelNeutral[6] = 1500;
    data.ChannelNeutral[7] = 1500;
    data.ChannelNeutral[8] = 1500;
    data.ChannelMax[0] = 2000;
    data.ChannelMax[1] = 2000;
    data.ChannelMax[2] = 2000;
    data.ChannelMax[3] = 2000;
    data.ChannelMax[4] = 2000;
    data.ChannelMax[5] = 2000;
    data.ChannelMax[6] = 2000;
    data.ChannelMax[7] = 2000;
    data.ChannelMax[8] = 2000;
    data.ResponseTime[0] = 0;
    data.ResponseTime[1] = 0;
    data.ResponseTime[2] = 0;
    data.ResponseTime[3] = 0;
    data.ResponseTime[4] = 0;
    data.ResponseTime[5] = 0;
    data.ResponseTime[6] = 0;
    data.ChannelGroups[0] = 7;
    data.ChannelGroups[1] = 7;
    data.ChannelGroups[2] = 7;
    data.ChannelGroups[3] = 7;
    data.ChannelGroups[4] = 7;
    data.ChannelGroups[5] = 7;
    data.ChannelGroups[6] = 7;
    data.ChannelGroups[7] = 7;
    data.ChannelGroups[8] = 7;
    data.ChannelNumber[0] = 0;
    data.ChannelNumber[1] = 0;
    data.ChannelNumber[2] = 0;
    data.ChannelNumber[3] = 0;
    data.ChannelNumber[4] = 0;
    data.ChannelNumber[5] = 0;
    data.ChannelNumber[6] = 0;
    data.ChannelNumber[7] = 0;
    data.ChannelNumber[8] = 0;
    data.FlightModeNumber = 3;
    data.FailsafeFlightModeSwitchPosition = -1;
*/
/*}*/

/*/***/
/* * Get the object data fields*/
/* */
/*ManualControlSettings::DataFields ManualControlSettings::getData()*/
/*{*/
/*    QMutexLocker locker(mutex);*/
/*    return data;*/
/*}*/

/*/***/
/* * Set the object data fields*/
/* */
/*void ManualControlSettings::setData(const DataFields& data)*/
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

/*void ManualControlSettings::emitNotifications()*/
/*{*/
/*            //if (data.Deadband != oldData.Deadband)
            emit DeadbandChanged(data.Deadband);
        //if (data.DeadbandAssistedControl != oldData.DeadbandAssistedControl)
            emit DeadbandAssistedControlChanged(data.DeadbandAssistedControl);
        //if (data.FlightModeNumber != oldData.FlightModeNumber)
            emit FlightModeNumberChanged(data.FlightModeNumber);
        //if (data.FailsafeFlightModeSwitchPosition != oldData.FailsafeFlightModeSwitchPosition)
            emit FailsafeFlightModeSwitchPositionChanged(data.FailsafeFlightModeSwitchPosition);
*/
/*}*/

/*/***/
/* * Create a clone of this object, a new instance ID must be specified.*/
/* * Do not use this function directly to create new instances, the*/
/* * UAVObjectManager should be used instead.*/
/* */
/*UAVDataObject *ManualControlSettings::clone(unsigned int instID)*/
/*{*/
/*    ManualControlSettings *obj = new ManualControlSettings();*/
/*    obj->initialize(instID, this->getMetaObject());*/
/*    return obj;*/
/*}*/

/*/***/
/* * Create a clone of this object only to be used to retrieve defaults*/
/* */
/*UAVDataObject *ManualControlSettings::dirtyClone()*/
/*{*/
/*    ManualControlSettings *obj = new ManualControlSettings();*/
/*    return obj;*/
/*}*/

/*/***/
/* * Static function to retrieve an instance of the object.*/
/* */
/*ManualControlSettings *ManualControlSettings::GetInstance(UAVObjectManager *objMngr, unsigned int instID)*/
/*{*/
/*    return dynamic_cast<ManualControlSettings *>(objMngr->getObject(ManualControlSettings::OBJID, instID));*/
/*}*/

/*float ManualControlSettings::getDeadband() const
{
   QMutexLocker locker(mutex);
   return data.Deadband;
}
void ManualControlSettings::setDeadband(float value)
{
   mutex->lock();
   bool changed = data.Deadband != value;
   data.Deadband = value;
   mutex->unlock();
   if (changed) emit DeadbandChanged(value);
}

float ManualControlSettings::getDeadbandAssistedControl() const
{
   QMutexLocker locker(mutex);
   return data.DeadbandAssistedControl;
}
void ManualControlSettings::setDeadbandAssistedControl(float value)
{
   mutex->lock();
   bool changed = data.DeadbandAssistedControl != value;
   data.DeadbandAssistedControl = value;
   mutex->unlock();
   if (changed) emit DeadbandAssistedControlChanged(value);
}

float ManualControlSettings::getFailsafeChannel(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.FailsafeChannel[index];
}
void ManualControlSettings::setFailsafeChannel(unsigned int index, float value)
{
   mutex->lock();
   bool changed = data.FailsafeChannel[index] != value;
   data.FailsafeChannel[index] = value;
   mutex->unlock();
   if (changed) emit FailsafeChannelChanged(index,value);
}

short int ManualControlSettings::getChannelMin(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.ChannelMin[index];
}
void ManualControlSettings::setChannelMin(unsigned int index, short int value)
{
   mutex->lock();
   bool changed = data.ChannelMin[index] != value;
   data.ChannelMin[index] = value;
   mutex->unlock();
   if (changed) emit ChannelMinChanged(index,value);
}

short int ManualControlSettings::getChannelNeutral(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.ChannelNeutral[index];
}
void ManualControlSettings::setChannelNeutral(unsigned int index, short int value)
{
   mutex->lock();
   bool changed = data.ChannelNeutral[index] != value;
   data.ChannelNeutral[index] = value;
   mutex->unlock();
   if (changed) emit ChannelNeutralChanged(index,value);
}

short int ManualControlSettings::getChannelMax(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.ChannelMax[index];
}
void ManualControlSettings::setChannelMax(unsigned int index, short int value)
{
   mutex->lock();
   bool changed = data.ChannelMax[index] != value;
   data.ChannelMax[index] = value;
   mutex->unlock();
   if (changed) emit ChannelMaxChanged(index,value);
}

unsigned short int ManualControlSettings::getResponseTime(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.ResponseTime[index];
}
void ManualControlSettings::setResponseTime(unsigned int index, unsigned short int value)
{
   mutex->lock();
   bool changed = data.ResponseTime[index] != value;
   data.ResponseTime[index] = value;
   mutex->unlock();
   if (changed) emit ResponseTimeChanged(index,value);
}

unsigned char ManualControlSettings::getChannelGroups(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.ChannelGroups[index];
}
void ManualControlSettings::setChannelGroups(unsigned int index, unsigned char value)
{
   mutex->lock();
   bool changed = data.ChannelGroups[index] != value;
   data.ChannelGroups[index] = value;
   mutex->unlock();
   if (changed) emit ChannelGroupsChanged(index,value);
}

unsigned char ManualControlSettings::getChannelNumber(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.ChannelNumber[index];
}
void ManualControlSettings::setChannelNumber(unsigned int index, unsigned char value)
{
   mutex->lock();
   bool changed = data.ChannelNumber[index] != value;
   data.ChannelNumber[index] = value;
   mutex->unlock();
   if (changed) emit ChannelNumberChanged(index,value);
}

unsigned char ManualControlSettings::getFlightModeNumber() const
{
   QMutexLocker locker(mutex);
   return data.FlightModeNumber;
}
void ManualControlSettings::setFlightModeNumber(unsigned char value)
{
   mutex->lock();
   bool changed = data.FlightModeNumber != value;
   data.FlightModeNumber = value;
   mutex->unlock();
   if (changed) emit FlightModeNumberChanged(value);
}

char ManualControlSettings::getFailsafeFlightModeSwitchPosition() const
{
   QMutexLocker locker(mutex);
   return data.FailsafeFlightModeSwitchPosition;
}
void ManualControlSettings::setFailsafeFlightModeSwitchPosition(char value)
{
   mutex->lock();
   bool changed = data.FailsafeFlightModeSwitchPosition != value;
   data.FailsafeFlightModeSwitchPosition = value;
   mutex->unlock();
   if (changed) emit FailsafeFlightModeSwitchPositionChanged(value);
}

*/
