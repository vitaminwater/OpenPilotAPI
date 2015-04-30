/**
 ******************************************************************************
 *
 * @file       debuglogsettings.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: debuglogsettings.xml.
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

#include "debuglogsettings.h"

int DebugLogSettings::numInstances = 0;

/**
 * Constructor
 */
DebugLogSettings::DebugLogSettings(UAVObjManager* manager): UAVObject(manager, 0x5E5903CC, "DebugLogSettings", "Configure On Board Logging Facilities", "System", 1, 1, ACCESS_READWRITE, ACCESS_READWRITE, 1, 1, UPDATEMODE_ONCHANGE, UPDATEMODE_ONCHANGE, 0, 0, 0)
{

}

int DebugLogSettings::UAVObjSetDataField(const char *dataIn, const std::string fieldID){
	if(fieldID == "LoggingEnabled") {
		memset( &(dataFields.LoggingEnabled), 0, sizeof(dataFields.LoggingEnabled));
		memcpy( &(dataFields.LoggingEnabled), dataIn, sizeof(dataFields.LoggingEnabled));
	}
	return 0;
}

int DebugLogSettings::UAVObjGetDataField(char *dataOut, const std::string fieldID){
	if(fieldID == "LoggingEnabled") {
		memcpy( dataOut, &(dataFields.LoggingEnabled), sizeof(dataFields.LoggingEnabled));
	}
	return 0;
}

int DebugLogSettings::UAVObjUnpack(const unsigned char *dataIn){
	memcpy(&dataFields, dataIn, NUMBYTES);
	return 0;
}

int DebugLogSettings::UAVObjPack(unsigned char *dataOut) {
	memcpy(dataOut, &dataFields, NUMBYTES);
	return 0;
}

unsigned short DebugLogSettings::UAVObjGetInstance() const {
	return instance;
}
unsigned short DebugLogSettings::UAVObjGetNumBytes() const {
	return sizeof(dataFields);
}
unsigned short DebugLogSettings::UAVObjGetNumInstances() const {
	return numInstances;
}

std::string DebugLogSettings::prettyPrint() {
	std::stringstream ss;
	ss << "\nPrinting object: debuglogsettings" << std::endl;
	ss << "\tLoggingEnabled: " << dataFields.LoggingEnabled << std::endl;

	return ss.str();
}

/*/***/
/* * Initialize object fields with the default values.*/
/* * If a default value is not specified the object fields*/
/* * will be initialized to zero.*/
/* */
/*void DebugLogSettings::setDefaultFieldValues()*/
/*{*/
/*    data.LoggingEnabled = 0;
*/
/*}*/

/*/***/
/* * Get the object data fields*/
/* */
/*DebugLogSettings::DataFields DebugLogSettings::getData()*/
/*{*/
/*    QMutexLocker locker(mutex);*/
/*    return data;*/
/*}*/

/*/***/
/* * Set the object data fields*/
/* */
/*void DebugLogSettings::setData(const DataFields& data)*/
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

/*void DebugLogSettings::emitNotifications()*/
/*{*/
/*            //if (data.LoggingEnabled != oldData.LoggingEnabled)
            emit LoggingEnabledChanged(data.LoggingEnabled);
*/
/*}*/

/*/***/
/* * Create a clone of this object, a new instance ID must be specified.*/
/* * Do not use this function directly to create new instances, the*/
/* * UAVObjectManager should be used instead.*/
/* */
/*UAVDataObject *DebugLogSettings::clone(unsigned int instID)*/
/*{*/
/*    DebugLogSettings *obj = new DebugLogSettings();*/
/*    obj->initialize(instID, this->getMetaObject());*/
/*    return obj;*/
/*}*/

/*/***/
/* * Create a clone of this object only to be used to retrieve defaults*/
/* */
/*UAVDataObject *DebugLogSettings::dirtyClone()*/
/*{*/
/*    DebugLogSettings *obj = new DebugLogSettings();*/
/*    return obj;*/
/*}*/

/*/***/
/* * Static function to retrieve an instance of the object.*/
/* */
/*DebugLogSettings *DebugLogSettings::GetInstance(UAVObjectManager *objMngr, unsigned int instID)*/
/*{*/
/*    return dynamic_cast<DebugLogSettings *>(objMngr->getObject(DebugLogSettings::OBJID, instID));*/
/*}*/

/*unsigned char DebugLogSettings::getLoggingEnabled() const
{
   QMutexLocker locker(mutex);
   return data.LoggingEnabled;
}
void DebugLogSettings::setLoggingEnabled(unsigned char value)
{
   mutex->lock();
   bool changed = data.LoggingEnabled != value;
   data.LoggingEnabled = value;
   mutex->unlock();
   if (changed) emit LoggingEnabledChanged(value);
}

*/
