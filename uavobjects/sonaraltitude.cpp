/**
 ******************************************************************************
 *
 * @file       sonaraltitude.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: sonaraltitude.xml.
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

#include "sonaraltitude.h"

int SonarAltitude::numInstances = 0;

/**
 * Constructor
 */
SonarAltitude::SonarAltitude(UAVObjManager* manager): UAVObject(manager, 0x6C5A0CBC, "SonarAltitude", "The raw data from the ultrasound sonar sensor with altitude estimate.", "Sensors", 1, 0, ACCESS_READWRITE, ACCESS_READWRITE, 0, 0, UPDATEMODE_PERIODIC, UPDATEMODE_MANUAL, 1000, 0, 0)
{

}

int SonarAltitude::UAVObjSetDataField(const char *dataIn, const std::string fieldID){
	if(fieldID == "Altitude") {
		memset( &(dataFields.Altitude), 0, sizeof(dataFields.Altitude));
		memcpy( &(dataFields.Altitude), dataIn, sizeof(dataFields.Altitude));
	}
	return 0;
}

int SonarAltitude::UAVObjGetDataField(char *dataOut, const std::string fieldID){
	if(fieldID == "Altitude") {
		memcpy( dataOut, &(dataFields.Altitude), sizeof(dataFields.Altitude));
	}
	return 0;
}

int SonarAltitude::UAVObjUnpack(const unsigned char *dataIn){
	memcpy(&dataFields, dataIn, NUMBYTES);
	return 0;
}

int SonarAltitude::UAVObjPack(unsigned char *dataOut) {
	memcpy(dataOut, &dataFields, NUMBYTES);
	return 0;
}

unsigned short SonarAltitude::UAVObjGetInstance() const {
	return instance;
}
unsigned short SonarAltitude::UAVObjGetNumBytes() const {
	return sizeof(dataFields);
}
unsigned short SonarAltitude::UAVObjGetNumInstances() const {
	return numInstances;
}

std::string SonarAltitude::prettyPrint() {
	std::stringstream ss;
	ss << "\nPrinting object: sonaraltitude" << std::endl;
	ss << "\tAltitude: " << dataFields.Altitude << std::endl;

	return ss.str();
}

/*/***/
/* * Initialize object fields with the default values.*/
/* * If a default value is not specified the object fields*/
/* * will be initialized to zero.*/
/* */
/*void SonarAltitude::setDefaultFieldValues()*/
/*{*/
/**/
/*}*/

/*/***/
/* * Get the object data fields*/
/* */
/*SonarAltitude::DataFields SonarAltitude::getData()*/
/*{*/
/*    QMutexLocker locker(mutex);*/
/*    return data;*/
/*}*/

/*/***/
/* * Set the object data fields*/
/* */
/*void SonarAltitude::setData(const DataFields& data)*/
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

/*void SonarAltitude::emitNotifications()*/
/*{*/
/*            //if (data.Altitude != oldData.Altitude)
            emit AltitudeChanged(data.Altitude);
*/
/*}*/

/*/***/
/* * Create a clone of this object, a new instance ID must be specified.*/
/* * Do not use this function directly to create new instances, the*/
/* * UAVObjectManager should be used instead.*/
/* */
/*UAVDataObject *SonarAltitude::clone(unsigned int instID)*/
/*{*/
/*    SonarAltitude *obj = new SonarAltitude();*/
/*    obj->initialize(instID, this->getMetaObject());*/
/*    return obj;*/
/*}*/

/*/***/
/* * Create a clone of this object only to be used to retrieve defaults*/
/* */
/*UAVDataObject *SonarAltitude::dirtyClone()*/
/*{*/
/*    SonarAltitude *obj = new SonarAltitude();*/
/*    return obj;*/
/*}*/

/*/***/
/* * Static function to retrieve an instance of the object.*/
/* */
/*SonarAltitude *SonarAltitude::GetInstance(UAVObjectManager *objMngr, unsigned int instID)*/
/*{*/
/*    return dynamic_cast<SonarAltitude *>(objMngr->getObject(SonarAltitude::OBJID, instID));*/
/*}*/

/*float SonarAltitude::getAltitude() const
{
   QMutexLocker locker(mutex);
   return data.Altitude;
}
void SonarAltitude::setAltitude(float value)
{
   mutex->lock();
   bool changed = data.Altitude != value;
   data.Altitude = value;
   mutex->unlock();
   if (changed) emit AltitudeChanged(value);
}

*/
