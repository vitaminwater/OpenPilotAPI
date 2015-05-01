/**
 ******************************************************************************
 *
 * @file       altitudeholdsettings.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: altitudeholdsettings.xml.
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

#include "altitudeholdsettings.h"

int AltitudeHoldSettings::numInstances = 0;

/**
 * Constructor
 */
AltitudeHoldSettings::AltitudeHoldSettings(UAVObjManager* manager): UAVObject(manager, 0xF19EFC2C, "AltitudeHoldSettings", "Settings for the @ref AltitudeHold module", "Control", 1, 1, ACCESS_READWRITE, ACCESS_READWRITE, 1, 1, UPDATEMODE_ONCHANGE, UPDATEMODE_ONCHANGE, 0, 0, 0)
{

}

int AltitudeHoldSettings::UAVObjSetDataField(const char *dataIn, const std::string fieldID){
	if(fieldID == "AltitudePI") {
		memset( &(dataFields.AltitudePI), 0, sizeof(dataFields.AltitudePI));
		memcpy( &(dataFields.AltitudePI), dataIn, sizeof(dataFields.AltitudePI));
	} else if(fieldID == "VelocityPI") {
		memset( &(dataFields.VelocityPI), 0, sizeof(dataFields.VelocityPI));
		memcpy( &(dataFields.VelocityPI), dataIn, sizeof(dataFields.VelocityPI));
	} else if(fieldID == "ThrustRate") {
		memset( &(dataFields.ThrustRate), 0, sizeof(dataFields.ThrustRate));
		memcpy( &(dataFields.ThrustRate), dataIn, sizeof(dataFields.ThrustRate));
	} else if(fieldID == "CutThrustWhenZero") {
		memset( &(dataFields.CutThrustWhenZero), 0, sizeof(dataFields.CutThrustWhenZero));
		memcpy( &(dataFields.CutThrustWhenZero), dataIn, sizeof(dataFields.CutThrustWhenZero));
	} else if(fieldID == "ThrustExp") {
		memset( &(dataFields.ThrustExp), 0, sizeof(dataFields.ThrustExp));
		memcpy( &(dataFields.ThrustExp), dataIn, sizeof(dataFields.ThrustExp));
	}
	return 0;
}

int AltitudeHoldSettings::UAVObjGetDataField(char *dataOut, const std::string fieldID){
	if(fieldID == "AltitudePI") {
		memcpy( dataOut, &(dataFields.AltitudePI), sizeof(dataFields.AltitudePI));
	} else if(fieldID == "VelocityPI") {
		memcpy( dataOut, &(dataFields.VelocityPI), sizeof(dataFields.VelocityPI));
	} else if(fieldID == "ThrustRate") {
		memcpy( dataOut, &(dataFields.ThrustRate), sizeof(dataFields.ThrustRate));
	} else if(fieldID == "CutThrustWhenZero") {
		memcpy( dataOut, &(dataFields.CutThrustWhenZero), sizeof(dataFields.CutThrustWhenZero));
	} else if(fieldID == "ThrustExp") {
		memcpy( dataOut, &(dataFields.ThrustExp), sizeof(dataFields.ThrustExp));
	}
	return 0;
}

int AltitudeHoldSettings::UAVObjUnpack(const unsigned char *dataIn){
	memcpy(&dataFields, dataIn, NUMBYTES);
	return 0;
}

int AltitudeHoldSettings::UAVObjPack(unsigned char *dataOut) {
	memcpy(dataOut, &dataFields, NUMBYTES);
	return 0;
}

unsigned short AltitudeHoldSettings::UAVObjGetInstance() const {
	return instance;
}
unsigned short AltitudeHoldSettings::UAVObjGetNumBytes() const {
	return sizeof(dataFields);
}
unsigned short AltitudeHoldSettings::UAVObjGetNumInstances() const {
	return numInstances;
}

std::string AltitudeHoldSettings::prettyPrint() {
	std::stringstream ss;
	ss << "\nPrinting object: altitudeholdsettings" << std::endl;
	ss << "\tAltitudePI: " << dataFields.AltitudePI << std::endl;
	ss << "\tVelocityPI: " << dataFields.VelocityPI << std::endl;
	ss << "\tThrustRate: " << dataFields.ThrustRate << std::endl;
	ss << "\tCutThrustWhenZero: " << dataFields.CutThrustWhenZero << std::endl;
	ss << "\tThrustExp: " << dataFields.ThrustExp << std::endl;

	return ss.str();
}

/*/***/
/* * Initialize object fields with the default values.*/
/* * If a default value is not specified the object fields*/
/* * will be initialized to zero.*/
/* */
/*void AltitudeHoldSettings::setDefaultFieldValues()*/
/*{*/
/*    data.AltitudePI[0] = 0.8;
    data.AltitudePI[1] = 0;
    data.AltitudePI[2] = 0;
    data.VelocityPI[0] = 0.2;
    data.VelocityPI[1] = 0.0002;
    data.VelocityPI[2] = 2;
    data.ThrustRate = 5;
    data.CutThrustWhenZero = 1;
    data.ThrustExp = 128;
*/
/*}*/

/*/***/
/* * Get the object data fields*/
/* */
/*AltitudeHoldSettings::DataFields AltitudeHoldSettings::getData()*/
/*{*/
/*    QMutexLocker locker(mutex);*/
/*    return data;*/
/*}*/

/*/***/
/* * Set the object data fields*/
/* */
/*void AltitudeHoldSettings::setData(const DataFields& data)*/
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

/*void AltitudeHoldSettings::emitNotifications()*/
/*{*/
/*            //if (data.ThrustRate != oldData.ThrustRate)
            emit ThrustRateChanged(data.ThrustRate);
        //if (data.CutThrustWhenZero != oldData.CutThrustWhenZero)
            emit CutThrustWhenZeroChanged(data.CutThrustWhenZero);
        //if (data.ThrustExp != oldData.ThrustExp)
            emit ThrustExpChanged(data.ThrustExp);
*/
/*}*/

/*/***/
/* * Create a clone of this object, a new instance ID must be specified.*/
/* * Do not use this function directly to create new instances, the*/
/* * UAVObjectManager should be used instead.*/
/* */
/*UAVDataObject *AltitudeHoldSettings::clone(unsigned int instID)*/
/*{*/
/*    AltitudeHoldSettings *obj = new AltitudeHoldSettings();*/
/*    obj->initialize(instID, this->getMetaObject());*/
/*    return obj;*/
/*}*/

/*/***/
/* * Create a clone of this object only to be used to retrieve defaults*/
/* */
/*UAVDataObject *AltitudeHoldSettings::dirtyClone()*/
/*{*/
/*    AltitudeHoldSettings *obj = new AltitudeHoldSettings();*/
/*    return obj;*/
/*}*/

/*/***/
/* * Static function to retrieve an instance of the object.*/
/* */
/*AltitudeHoldSettings *AltitudeHoldSettings::GetInstance(UAVObjectManager *objMngr, unsigned int instID)*/
/*{*/
/*    return dynamic_cast<AltitudeHoldSettings *>(objMngr->getObject(AltitudeHoldSettings::OBJID, instID));*/
/*}*/

/*float AltitudeHoldSettings::getAltitudePI(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.AltitudePI[index];
}
void AltitudeHoldSettings::setAltitudePI(unsigned int index, float value)
{
   mutex->lock();
   bool changed = data.AltitudePI[index] != value;
   data.AltitudePI[index] = value;
   mutex->unlock();
   if (changed) emit AltitudePIChanged(index,value);
}

float AltitudeHoldSettings::getVelocityPI(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.VelocityPI[index];
}
void AltitudeHoldSettings::setVelocityPI(unsigned int index, float value)
{
   mutex->lock();
   bool changed = data.VelocityPI[index] != value;
   data.VelocityPI[index] = value;
   mutex->unlock();
   if (changed) emit VelocityPIChanged(index,value);
}

float AltitudeHoldSettings::getThrustRate() const
{
   QMutexLocker locker(mutex);
   return data.ThrustRate;
}
void AltitudeHoldSettings::setThrustRate(float value)
{
   mutex->lock();
   bool changed = data.ThrustRate != value;
   data.ThrustRate = value;
   mutex->unlock();
   if (changed) emit ThrustRateChanged(value);
}

unsigned char AltitudeHoldSettings::getCutThrustWhenZero() const
{
   QMutexLocker locker(mutex);
   return data.CutThrustWhenZero;
}
void AltitudeHoldSettings::setCutThrustWhenZero(unsigned char value)
{
   mutex->lock();
   bool changed = data.CutThrustWhenZero != value;
   data.CutThrustWhenZero = value;
   mutex->unlock();
   if (changed) emit CutThrustWhenZeroChanged(value);
}

unsigned char AltitudeHoldSettings::getThrustExp() const
{
   QMutexLocker locker(mutex);
   return data.ThrustExp;
}
void AltitudeHoldSettings::setThrustExp(unsigned char value)
{
   mutex->lock();
   bool changed = data.ThrustExp != value;
   data.ThrustExp = value;
   mutex->unlock();
   if (changed) emit ThrustExpChanged(value);
}

*/
