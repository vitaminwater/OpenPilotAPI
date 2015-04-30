/**
 ******************************************************************************
 *
 * @file       altitudefiltersettings.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: altitudefiltersettings.xml.
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

#include "altitudefiltersettings.h"

int AltitudeFilterSettings::numInstances = 0;

/**
 * Constructor
 */
AltitudeFilterSettings::AltitudeFilterSettings(UAVObjManager* manager): UAVObject(manager, 0xE611042C, "AltitudeFilterSettings", "Settings for the @ref State Estimator module plugin altitudeFilter", "State", 1, 1, ACCESS_READWRITE, ACCESS_READWRITE, 1, 1, UPDATEMODE_ONCHANGE, UPDATEMODE_ONCHANGE, 0, 0, 0)
{

}

int AltitudeFilterSettings::UAVObjSetDataField(const char *dataIn, const std::string fieldID){
	if(fieldID == "AccelLowPassKp") {
		memset( &(dataFields.AccelLowPassKp), 0, sizeof(dataFields.AccelLowPassKp));
		memcpy( &(dataFields.AccelLowPassKp), dataIn, sizeof(dataFields.AccelLowPassKp));
	} else if(fieldID == "AccelDriftKi") {
		memset( &(dataFields.AccelDriftKi), 0, sizeof(dataFields.AccelDriftKi));
		memcpy( &(dataFields.AccelDriftKi), dataIn, sizeof(dataFields.AccelDriftKi));
	} else if(fieldID == "InitializationAccelDriftKi") {
		memset( &(dataFields.InitializationAccelDriftKi), 0, sizeof(dataFields.InitializationAccelDriftKi));
		memcpy( &(dataFields.InitializationAccelDriftKi), dataIn, sizeof(dataFields.InitializationAccelDriftKi));
	} else if(fieldID == "BaroKp") {
		memset( &(dataFields.BaroKp), 0, sizeof(dataFields.BaroKp));
		memcpy( &(dataFields.BaroKp), dataIn, sizeof(dataFields.BaroKp));
	}
	return 0;
}

int AltitudeFilterSettings::UAVObjGetDataField(char *dataOut, const std::string fieldID){
	if(fieldID == "AccelLowPassKp") {
		memcpy( dataOut, &(dataFields.AccelLowPassKp), sizeof(dataFields.AccelLowPassKp));
	} else if(fieldID == "AccelDriftKi") {
		memcpy( dataOut, &(dataFields.AccelDriftKi), sizeof(dataFields.AccelDriftKi));
	} else if(fieldID == "InitializationAccelDriftKi") {
		memcpy( dataOut, &(dataFields.InitializationAccelDriftKi), sizeof(dataFields.InitializationAccelDriftKi));
	} else if(fieldID == "BaroKp") {
		memcpy( dataOut, &(dataFields.BaroKp), sizeof(dataFields.BaroKp));
	}
	return 0;
}

int AltitudeFilterSettings::UAVObjUnpack(const unsigned char *dataIn){
	memcpy(&dataFields, dataIn, NUMBYTES);
	return 0;
}

int AltitudeFilterSettings::UAVObjPack(unsigned char *dataOut) {
	memcpy(dataOut, &dataFields, NUMBYTES);
	return 0;
}

unsigned short AltitudeFilterSettings::UAVObjGetInstance() const {
	return instance;
}
unsigned short AltitudeFilterSettings::UAVObjGetNumBytes() const {
	return sizeof(dataFields);
}
unsigned short AltitudeFilterSettings::UAVObjGetNumInstances() const {
	return numInstances;
}

std::string AltitudeFilterSettings::prettyPrint() {
	std::stringstream ss;
	ss << "\nPrinting object: altitudefiltersettings" << std::endl;
	ss << "\tAccelLowPassKp: " << dataFields.AccelLowPassKp << std::endl;
	ss << "\tAccelDriftKi: " << dataFields.AccelDriftKi << std::endl;
	ss << "\tInitializationAccelDriftKi: " << dataFields.InitializationAccelDriftKi << std::endl;
	ss << "\tBaroKp: " << dataFields.BaroKp << std::endl;

	return ss.str();
}

/*/***/
/* * Initialize object fields with the default values.*/
/* * If a default value is not specified the object fields*/
/* * will be initialized to zero.*/
/* */
/*void AltitudeFilterSettings::setDefaultFieldValues()*/
/*{*/
/*    data.AccelLowPassKp = 0.04;
    data.AccelDriftKi = 0.0005;
    data.InitializationAccelDriftKi = 0.2;
    data.BaroKp = 0.04;
*/
/*}*/

/*/***/
/* * Get the object data fields*/
/* */
/*AltitudeFilterSettings::DataFields AltitudeFilterSettings::getData()*/
/*{*/
/*    QMutexLocker locker(mutex);*/
/*    return data;*/
/*}*/

/*/***/
/* * Set the object data fields*/
/* */
/*void AltitudeFilterSettings::setData(const DataFields& data)*/
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

/*void AltitudeFilterSettings::emitNotifications()*/
/*{*/
/*            //if (data.AccelLowPassKp != oldData.AccelLowPassKp)
            emit AccelLowPassKpChanged(data.AccelLowPassKp);
        //if (data.AccelDriftKi != oldData.AccelDriftKi)
            emit AccelDriftKiChanged(data.AccelDriftKi);
        //if (data.InitializationAccelDriftKi != oldData.InitializationAccelDriftKi)
            emit InitializationAccelDriftKiChanged(data.InitializationAccelDriftKi);
        //if (data.BaroKp != oldData.BaroKp)
            emit BaroKpChanged(data.BaroKp);
*/
/*}*/

/*/***/
/* * Create a clone of this object, a new instance ID must be specified.*/
/* * Do not use this function directly to create new instances, the*/
/* * UAVObjectManager should be used instead.*/
/* */
/*UAVDataObject *AltitudeFilterSettings::clone(unsigned int instID)*/
/*{*/
/*    AltitudeFilterSettings *obj = new AltitudeFilterSettings();*/
/*    obj->initialize(instID, this->getMetaObject());*/
/*    return obj;*/
/*}*/

/*/***/
/* * Create a clone of this object only to be used to retrieve defaults*/
/* */
/*UAVDataObject *AltitudeFilterSettings::dirtyClone()*/
/*{*/
/*    AltitudeFilterSettings *obj = new AltitudeFilterSettings();*/
/*    return obj;*/
/*}*/

/*/***/
/* * Static function to retrieve an instance of the object.*/
/* */
/*AltitudeFilterSettings *AltitudeFilterSettings::GetInstance(UAVObjectManager *objMngr, unsigned int instID)*/
/*{*/
/*    return dynamic_cast<AltitudeFilterSettings *>(objMngr->getObject(AltitudeFilterSettings::OBJID, instID));*/
/*}*/

/*float AltitudeFilterSettings::getAccelLowPassKp() const
{
   QMutexLocker locker(mutex);
   return data.AccelLowPassKp;
}
void AltitudeFilterSettings::setAccelLowPassKp(float value)
{
   mutex->lock();
   bool changed = data.AccelLowPassKp != value;
   data.AccelLowPassKp = value;
   mutex->unlock();
   if (changed) emit AccelLowPassKpChanged(value);
}

float AltitudeFilterSettings::getAccelDriftKi() const
{
   QMutexLocker locker(mutex);
   return data.AccelDriftKi;
}
void AltitudeFilterSettings::setAccelDriftKi(float value)
{
   mutex->lock();
   bool changed = data.AccelDriftKi != value;
   data.AccelDriftKi = value;
   mutex->unlock();
   if (changed) emit AccelDriftKiChanged(value);
}

float AltitudeFilterSettings::getInitializationAccelDriftKi() const
{
   QMutexLocker locker(mutex);
   return data.InitializationAccelDriftKi;
}
void AltitudeFilterSettings::setInitializationAccelDriftKi(float value)
{
   mutex->lock();
   bool changed = data.InitializationAccelDriftKi != value;
   data.InitializationAccelDriftKi = value;
   mutex->unlock();
   if (changed) emit InitializationAccelDriftKiChanged(value);
}

float AltitudeFilterSettings::getBaroKp() const
{
   QMutexLocker locker(mutex);
   return data.BaroKp;
}
void AltitudeFilterSettings::setBaroKp(float value)
{
   mutex->lock();
   bool changed = data.BaroKp != value;
   data.BaroKp = value;
   mutex->unlock();
   if (changed) emit BaroKpChanged(value);
}

*/
