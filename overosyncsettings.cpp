/**
 ******************************************************************************
 *
 * @file       overosyncsettings.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: overosyncsettings.xml.
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

#include "overosyncsettings.h"

int OveroSyncSettings::numInstances = 0;

/**
 * Constructor
 */
OveroSyncSettings::OveroSyncSettings(UAVObjManager* manager): UAVObject(manager, 0xA1ABC278, "OveroSyncSettings", "Settings to control the behavior of the overo sync module", "System", 1, 1, ACCESS_READWRITE, ACCESS_READWRITE, 0, 0, UPDATEMODE_ONCHANGE, UPDATEMODE_MANUAL, 0, 0, 0)
{

}

int OveroSyncSettings::UAVObjSetDataField(const char *dataIn, const std::string fieldID){
	if(fieldID == "LogOn") {
		memset( &(dataFields.LogOn), 0, sizeof(dataFields.LogOn));
		memcpy( &(dataFields.LogOn), dataIn, sizeof(dataFields.LogOn));
	}
	return 0;
}

int OveroSyncSettings::UAVObjGetDataField(char *dataOut, const std::string fieldID){
	if(fieldID == "LogOn") {
		memcpy( dataOut, &(dataFields.LogOn), sizeof(dataFields.LogOn));
	}
	return 0;
}

int OveroSyncSettings::UAVObjUnpack(const unsigned char *dataIn){
	memcpy(&dataFields, dataIn, NUMBYTES);
	return 0;
}

int OveroSyncSettings::UAVObjPack(unsigned char *dataOut) {
	memcpy(dataOut, &dataFields, NUMBYTES);
	return 0;
}

unsigned short OveroSyncSettings::UAVObjGetInstance() const {
	return instance;
}
unsigned short OveroSyncSettings::UAVObjGetNumBytes() const {
	return sizeof(dataFields);
}
unsigned short OveroSyncSettings::UAVObjGetNumInstances() const {
	return numInstances;
}

std::string OveroSyncSettings::prettyPrint() {
	std::stringstream ss;
	ss << "\nPrinting object: overosyncsettings" << std::endl;
	ss << "\tLogOn: " << dataFields.LogOn << std::endl;

	return ss.str();
}

/*/***/
/* * Initialize object fields with the default values.*/
/* * If a default value is not specified the object fields*/
/* * will be initialized to zero.*/
/* */
/*void OveroSyncSettings::setDefaultFieldValues()*/
/*{*/
/*    data.LogOn = 2;
*/
/*}*/

/*/***/
/* * Get the object data fields*/
/* */
/*OveroSyncSettings::DataFields OveroSyncSettings::getData()*/
/*{*/
/*    QMutexLocker locker(mutex);*/
/*    return data;*/
/*}*/

/*/***/
/* * Set the object data fields*/
/* */
/*void OveroSyncSettings::setData(const DataFields& data)*/
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

/*void OveroSyncSettings::emitNotifications()*/
/*{*/
/*            //if (data.LogOn != oldData.LogOn)
            emit LogOnChanged(data.LogOn);
*/
/*}*/

/*/***/
/* * Create a clone of this object, a new instance ID must be specified.*/
/* * Do not use this function directly to create new instances, the*/
/* * UAVObjectManager should be used instead.*/
/* */
/*UAVDataObject *OveroSyncSettings::clone(unsigned int instID)*/
/*{*/
/*    OveroSyncSettings *obj = new OveroSyncSettings();*/
/*    obj->initialize(instID, this->getMetaObject());*/
/*    return obj;*/
/*}*/

/*/***/
/* * Create a clone of this object only to be used to retrieve defaults*/
/* */
/*UAVDataObject *OveroSyncSettings::dirtyClone()*/
/*{*/
/*    OveroSyncSettings *obj = new OveroSyncSettings();*/
/*    return obj;*/
/*}*/

/*/***/
/* * Static function to retrieve an instance of the object.*/
/* */
/*OveroSyncSettings *OveroSyncSettings::GetInstance(UAVObjectManager *objMngr, unsigned int instID)*/
/*{*/
/*    return dynamic_cast<OveroSyncSettings *>(objMngr->getObject(OveroSyncSettings::OBJID, instID));*/
/*}*/

/*unsigned char OveroSyncSettings::getLogOn() const
{
   QMutexLocker locker(mutex);
   return data.LogOn;
}
void OveroSyncSettings::setLogOn(unsigned char value)
{
   mutex->lock();
   bool changed = data.LogOn != value;
   data.LogOn = value;
   mutex->unlock();
   if (changed) emit LogOnChanged(value);
}

*/
