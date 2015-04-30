/**
 ******************************************************************************
 *
 * @file       actuatorsettings.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: actuatorsettings.xml.
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

#include "actuatorsettings.h"

int ActuatorSettings::numInstances = 0;

/**
 * Constructor
 */
ActuatorSettings::ActuatorSettings(UAVObjManager* manager): UAVObject(manager, 0xD2AD60A2, "ActuatorSettings", "Settings for the @ref ActuatorModule that controls the channel assignments for the mixer based on AircraftType", "Control", 1, 1, ACCESS_READWRITE, ACCESS_READWRITE, 1, 1, UPDATEMODE_ONCHANGE, UPDATEMODE_ONCHANGE, 0, 0, 0)
{

}

int ActuatorSettings::UAVObjSetDataField(const char *dataIn, const std::string fieldID){
	if(fieldID == "BankUpdateFreq") {
		memset( &(dataFields.BankUpdateFreq), 0, sizeof(dataFields.BankUpdateFreq));
		memcpy( &(dataFields.BankUpdateFreq), dataIn, sizeof(dataFields.BankUpdateFreq));
	} else if(fieldID == "ChannelMax") {
		memset( &(dataFields.ChannelMax), 0, sizeof(dataFields.ChannelMax));
		memcpy( &(dataFields.ChannelMax), dataIn, sizeof(dataFields.ChannelMax));
	} else if(fieldID == "ChannelNeutral") {
		memset( &(dataFields.ChannelNeutral), 0, sizeof(dataFields.ChannelNeutral));
		memcpy( &(dataFields.ChannelNeutral), dataIn, sizeof(dataFields.ChannelNeutral));
	} else if(fieldID == "ChannelMin") {
		memset( &(dataFields.ChannelMin), 0, sizeof(dataFields.ChannelMin));
		memcpy( &(dataFields.ChannelMin), dataIn, sizeof(dataFields.ChannelMin));
	} else if(fieldID == "BankMode") {
		memset( &(dataFields.BankMode), 0, sizeof(dataFields.BankMode));
		memcpy( &(dataFields.BankMode), dataIn, sizeof(dataFields.BankMode));
	} else if(fieldID == "ChannelType") {
		memset( &(dataFields.ChannelType), 0, sizeof(dataFields.ChannelType));
		memcpy( &(dataFields.ChannelType), dataIn, sizeof(dataFields.ChannelType));
	} else if(fieldID == "ChannelAddr") {
		memset( &(dataFields.ChannelAddr), 0, sizeof(dataFields.ChannelAddr));
		memcpy( &(dataFields.ChannelAddr), dataIn, sizeof(dataFields.ChannelAddr));
	} else if(fieldID == "MotorsSpinWhileArmed") {
		memset( &(dataFields.MotorsSpinWhileArmed), 0, sizeof(dataFields.MotorsSpinWhileArmed));
		memcpy( &(dataFields.MotorsSpinWhileArmed), dataIn, sizeof(dataFields.MotorsSpinWhileArmed));
	} else if(fieldID == "LowThrottleZeroAxis") {
		memset( &(dataFields.LowThrottleZeroAxis), 0, sizeof(dataFields.LowThrottleZeroAxis));
		memcpy( &(dataFields.LowThrottleZeroAxis), dataIn, sizeof(dataFields.LowThrottleZeroAxis));
	}
	return 0;
}

int ActuatorSettings::UAVObjGetDataField(char *dataOut, const std::string fieldID){
	if(fieldID == "BankUpdateFreq") {
		memcpy( dataOut, &(dataFields.BankUpdateFreq), sizeof(dataFields.BankUpdateFreq));
	} else if(fieldID == "ChannelMax") {
		memcpy( dataOut, &(dataFields.ChannelMax), sizeof(dataFields.ChannelMax));
	} else if(fieldID == "ChannelNeutral") {
		memcpy( dataOut, &(dataFields.ChannelNeutral), sizeof(dataFields.ChannelNeutral));
	} else if(fieldID == "ChannelMin") {
		memcpy( dataOut, &(dataFields.ChannelMin), sizeof(dataFields.ChannelMin));
	} else if(fieldID == "BankMode") {
		memcpy( dataOut, &(dataFields.BankMode), sizeof(dataFields.BankMode));
	} else if(fieldID == "ChannelType") {
		memcpy( dataOut, &(dataFields.ChannelType), sizeof(dataFields.ChannelType));
	} else if(fieldID == "ChannelAddr") {
		memcpy( dataOut, &(dataFields.ChannelAddr), sizeof(dataFields.ChannelAddr));
	} else if(fieldID == "MotorsSpinWhileArmed") {
		memcpy( dataOut, &(dataFields.MotorsSpinWhileArmed), sizeof(dataFields.MotorsSpinWhileArmed));
	} else if(fieldID == "LowThrottleZeroAxis") {
		memcpy( dataOut, &(dataFields.LowThrottleZeroAxis), sizeof(dataFields.LowThrottleZeroAxis));
	}
	return 0;
}

int ActuatorSettings::UAVObjUnpack(const unsigned char *dataIn){
	memcpy(&dataFields, dataIn, NUMBYTES);
	return 0;
}

int ActuatorSettings::UAVObjPack(unsigned char *dataOut) {
	memcpy(dataOut, &dataFields, NUMBYTES);
	return 0;
}

unsigned short ActuatorSettings::UAVObjGetInstance() const {
	return instance;
}
unsigned short ActuatorSettings::UAVObjGetNumBytes() const {
	return sizeof(dataFields);
}
unsigned short ActuatorSettings::UAVObjGetNumInstances() const {
	return numInstances;
}

std::string ActuatorSettings::prettyPrint() {
	std::stringstream ss;
	ss << "\nPrinting object: actuatorsettings" << std::endl;
	ss << "\tBankUpdateFreq: " << dataFields.BankUpdateFreq << std::endl;
	ss << "\tChannelMax: " << dataFields.ChannelMax << std::endl;
	ss << "\tChannelNeutral: " << dataFields.ChannelNeutral << std::endl;
	ss << "\tChannelMin: " << dataFields.ChannelMin << std::endl;
	ss << "\tBankMode: " << dataFields.BankMode << std::endl;
	ss << "\tChannelType: " << dataFields.ChannelType << std::endl;
	ss << "\tChannelAddr: " << dataFields.ChannelAddr << std::endl;
	ss << "\tMotorsSpinWhileArmed: " << dataFields.MotorsSpinWhileArmed << std::endl;
	ss << "\tLowThrottleZeroAxis: " << dataFields.LowThrottleZeroAxis << std::endl;

	return ss.str();
}

/*/***/
/* * Initialize object fields with the default values.*/
/* * If a default value is not specified the object fields*/
/* * will be initialized to zero.*/
/* */
/*void ActuatorSettings::setDefaultFieldValues()*/
/*{*/
/*    data.BankUpdateFreq[0] = 50;
    data.BankUpdateFreq[1] = 50;
    data.BankUpdateFreq[2] = 50;
    data.BankUpdateFreq[3] = 50;
    data.BankUpdateFreq[4] = 50;
    data.BankUpdateFreq[5] = 50;
    data.ChannelMax[0] = 1000;
    data.ChannelMax[1] = 1000;
    data.ChannelMax[2] = 1000;
    data.ChannelMax[3] = 1000;
    data.ChannelMax[4] = 1000;
    data.ChannelMax[5] = 1000;
    data.ChannelMax[6] = 1000;
    data.ChannelMax[7] = 1000;
    data.ChannelMax[8] = 1000;
    data.ChannelMax[9] = 1000;
    data.ChannelMax[10] = 1000;
    data.ChannelMax[11] = 1000;
    data.ChannelNeutral[0] = 1000;
    data.ChannelNeutral[1] = 1000;
    data.ChannelNeutral[2] = 1000;
    data.ChannelNeutral[3] = 1000;
    data.ChannelNeutral[4] = 1000;
    data.ChannelNeutral[5] = 1000;
    data.ChannelNeutral[6] = 1000;
    data.ChannelNeutral[7] = 1000;
    data.ChannelNeutral[8] = 1000;
    data.ChannelNeutral[9] = 1000;
    data.ChannelNeutral[10] = 1000;
    data.ChannelNeutral[11] = 1000;
    data.ChannelMin[0] = 1000;
    data.ChannelMin[1] = 1000;
    data.ChannelMin[2] = 1000;
    data.ChannelMin[3] = 1000;
    data.ChannelMin[4] = 1000;
    data.ChannelMin[5] = 1000;
    data.ChannelMin[6] = 1000;
    data.ChannelMin[7] = 1000;
    data.ChannelMin[8] = 1000;
    data.ChannelMin[9] = 1000;
    data.ChannelMin[10] = 1000;
    data.ChannelMin[11] = 1000;
    data.BankMode[0] = 0;
    data.BankMode[1] = 0;
    data.BankMode[2] = 0;
    data.BankMode[3] = 0;
    data.BankMode[4] = 0;
    data.BankMode[5] = 0;
    data.ChannelType[0] = 0;
    data.ChannelType[1] = 0;
    data.ChannelType[2] = 0;
    data.ChannelType[3] = 0;
    data.ChannelType[4] = 0;
    data.ChannelType[5] = 0;
    data.ChannelType[6] = 0;
    data.ChannelType[7] = 0;
    data.ChannelType[8] = 0;
    data.ChannelType[9] = 0;
    data.ChannelType[10] = 0;
    data.ChannelType[11] = 0;
    data.ChannelAddr[0] = 0;
    data.ChannelAddr[1] = 1;
    data.ChannelAddr[2] = 2;
    data.ChannelAddr[3] = 3;
    data.ChannelAddr[4] = 4;
    data.ChannelAddr[5] = 5;
    data.ChannelAddr[6] = 6;
    data.ChannelAddr[7] = 7;
    data.ChannelAddr[8] = 8;
    data.ChannelAddr[9] = 9;
    data.ChannelAddr[10] = 10;
    data.ChannelAddr[11] = 11;
    data.MotorsSpinWhileArmed = 0;
    data.LowThrottleZeroAxis[0] = 0;
    data.LowThrottleZeroAxis[1] = 0;
    data.LowThrottleZeroAxis[2] = 0;
*/
/*}*/

/*/***/
/* * Get the object data fields*/
/* */
/*ActuatorSettings::DataFields ActuatorSettings::getData()*/
/*{*/
/*    QMutexLocker locker(mutex);*/
/*    return data;*/
/*}*/

/*/***/
/* * Set the object data fields*/
/* */
/*void ActuatorSettings::setData(const DataFields& data)*/
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

/*void ActuatorSettings::emitNotifications()*/
/*{*/
/*            //if (data.MotorsSpinWhileArmed != oldData.MotorsSpinWhileArmed)
            emit MotorsSpinWhileArmedChanged(data.MotorsSpinWhileArmed);
*/
/*}*/

/*/***/
/* * Create a clone of this object, a new instance ID must be specified.*/
/* * Do not use this function directly to create new instances, the*/
/* * UAVObjectManager should be used instead.*/
/* */
/*UAVDataObject *ActuatorSettings::clone(unsigned int instID)*/
/*{*/
/*    ActuatorSettings *obj = new ActuatorSettings();*/
/*    obj->initialize(instID, this->getMetaObject());*/
/*    return obj;*/
/*}*/

/*/***/
/* * Create a clone of this object only to be used to retrieve defaults*/
/* */
/*UAVDataObject *ActuatorSettings::dirtyClone()*/
/*{*/
/*    ActuatorSettings *obj = new ActuatorSettings();*/
/*    return obj;*/
/*}*/

/*/***/
/* * Static function to retrieve an instance of the object.*/
/* */
/*ActuatorSettings *ActuatorSettings::GetInstance(UAVObjectManager *objMngr, unsigned int instID)*/
/*{*/
/*    return dynamic_cast<ActuatorSettings *>(objMngr->getObject(ActuatorSettings::OBJID, instID));*/
/*}*/

/*unsigned short int ActuatorSettings::getBankUpdateFreq(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.BankUpdateFreq[index];
}
void ActuatorSettings::setBankUpdateFreq(unsigned int index, unsigned short int value)
{
   mutex->lock();
   bool changed = data.BankUpdateFreq[index] != value;
   data.BankUpdateFreq[index] = value;
   mutex->unlock();
   if (changed) emit BankUpdateFreqChanged(index,value);
}

short int ActuatorSettings::getChannelMax(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.ChannelMax[index];
}
void ActuatorSettings::setChannelMax(unsigned int index, short int value)
{
   mutex->lock();
   bool changed = data.ChannelMax[index] != value;
   data.ChannelMax[index] = value;
   mutex->unlock();
   if (changed) emit ChannelMaxChanged(index,value);
}

short int ActuatorSettings::getChannelNeutral(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.ChannelNeutral[index];
}
void ActuatorSettings::setChannelNeutral(unsigned int index, short int value)
{
   mutex->lock();
   bool changed = data.ChannelNeutral[index] != value;
   data.ChannelNeutral[index] = value;
   mutex->unlock();
   if (changed) emit ChannelNeutralChanged(index,value);
}

short int ActuatorSettings::getChannelMin(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.ChannelMin[index];
}
void ActuatorSettings::setChannelMin(unsigned int index, short int value)
{
   mutex->lock();
   bool changed = data.ChannelMin[index] != value;
   data.ChannelMin[index] = value;
   mutex->unlock();
   if (changed) emit ChannelMinChanged(index,value);
}

unsigned char ActuatorSettings::getBankMode(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.BankMode[index];
}
void ActuatorSettings::setBankMode(unsigned int index, unsigned char value)
{
   mutex->lock();
   bool changed = data.BankMode[index] != value;
   data.BankMode[index] = value;
   mutex->unlock();
   if (changed) emit BankModeChanged(index,value);
}

unsigned char ActuatorSettings::getChannelType(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.ChannelType[index];
}
void ActuatorSettings::setChannelType(unsigned int index, unsigned char value)
{
   mutex->lock();
   bool changed = data.ChannelType[index] != value;
   data.ChannelType[index] = value;
   mutex->unlock();
   if (changed) emit ChannelTypeChanged(index,value);
}

unsigned char ActuatorSettings::getChannelAddr(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.ChannelAddr[index];
}
void ActuatorSettings::setChannelAddr(unsigned int index, unsigned char value)
{
   mutex->lock();
   bool changed = data.ChannelAddr[index] != value;
   data.ChannelAddr[index] = value;
   mutex->unlock();
   if (changed) emit ChannelAddrChanged(index,value);
}

unsigned char ActuatorSettings::getMotorsSpinWhileArmed() const
{
   QMutexLocker locker(mutex);
   return data.MotorsSpinWhileArmed;
}
void ActuatorSettings::setMotorsSpinWhileArmed(unsigned char value)
{
   mutex->lock();
   bool changed = data.MotorsSpinWhileArmed != value;
   data.MotorsSpinWhileArmed = value;
   mutex->unlock();
   if (changed) emit MotorsSpinWhileArmedChanged(value);
}

unsigned char ActuatorSettings::getLowThrottleZeroAxis(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.LowThrottleZeroAxis[index];
}
void ActuatorSettings::setLowThrottleZeroAxis(unsigned int index, unsigned char value)
{
   mutex->lock();
   bool changed = data.LowThrottleZeroAxis[index] != value;
   data.LowThrottleZeroAxis[index] = value;
   mutex->unlock();
   if (changed) emit LowThrottleZeroAxisChanged(index,value);
}

*/
