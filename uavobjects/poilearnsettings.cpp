/**
 ******************************************************************************
 *
 * @file       poilearnsettings.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: poilearnsettings.xml.
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

#include "poilearnsettings.h"

int PoiLearnSettings::numInstances = 0;

/**
 * Constructor
 */
PoiLearnSettings::PoiLearnSettings(UAVObjManager* manager): UAVObject(manager, 0x9E22E820, "PoiLearnSettings", "Settings for the @ref Point of Interest feature", "Control", 1, 1, ACCESS_READWRITE, ACCESS_READWRITE, 1, 1, UPDATEMODE_ONCHANGE, UPDATEMODE_ONCHANGE, 0, 0, 0)
{

}

int PoiLearnSettings::UAVObjSetDataField(const char *dataIn, const std::string fieldID){
	if(fieldID == "Input") {
		memset( &(dataFields.Input), 0, sizeof(dataFields.Input));
		memcpy( &(dataFields.Input), dataIn, sizeof(dataFields.Input));
	}
	return 0;
}

int PoiLearnSettings::UAVObjGetDataField(char *dataOut, const std::string fieldID){
	if(fieldID == "Input") {
		memcpy( dataOut, &(dataFields.Input), sizeof(dataFields.Input));
	}
	return 0;
}

int PoiLearnSettings::UAVObjUnpack(const unsigned char *dataIn){
	memcpy(&dataFields, dataIn, NUMBYTES);
	return 0;
}

int PoiLearnSettings::UAVObjPack(unsigned char *dataOut) {
	memcpy(dataOut, &dataFields, NUMBYTES);
	return 0;
}

unsigned short PoiLearnSettings::UAVObjGetInstance() const {
	return instance;
}
unsigned short PoiLearnSettings::UAVObjGetNumBytes() const {
	return sizeof(dataFields);
}
unsigned short PoiLearnSettings::UAVObjGetNumInstances() const {
	return numInstances;
}

std::string PoiLearnSettings::prettyPrint() {
	std::stringstream ss;
	ss << "\nPrinting object: poilearnsettings" << std::endl;
	ss << "\tInput: " << dataFields.Input << std::endl;

	return ss.str();
}

/*/***/
/* * Initialize object fields with the default values.*/
/* * If a default value is not specified the object fields*/
/* * will be initialized to zero.*/
/* */
/*void PoiLearnSettings::setDefaultFieldValues()*/
/*{*/
/*    data.Input = 6;
*/
/*}*/

/*/***/
/* * Get the object data fields*/
/* */
/*PoiLearnSettings::DataFields PoiLearnSettings::getData()*/
/*{*/
/*    QMutexLocker locker(mutex);*/
/*    return data;*/
/*}*/

/*/***/
/* * Set the object data fields*/
/* */
/*void PoiLearnSettings::setData(const DataFields& data)*/
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

/*void PoiLearnSettings::emitNotifications()*/
/*{*/
/*            //if (data.Input != oldData.Input)
            emit InputChanged(data.Input);
*/
/*}*/

/*/***/
/* * Create a clone of this object, a new instance ID must be specified.*/
/* * Do not use this function directly to create new instances, the*/
/* * UAVObjectManager should be used instead.*/
/* */
/*UAVDataObject *PoiLearnSettings::clone(unsigned int instID)*/
/*{*/
/*    PoiLearnSettings *obj = new PoiLearnSettings();*/
/*    obj->initialize(instID, this->getMetaObject());*/
/*    return obj;*/
/*}*/

/*/***/
/* * Create a clone of this object only to be used to retrieve defaults*/
/* */
/*UAVDataObject *PoiLearnSettings::dirtyClone()*/
/*{*/
/*    PoiLearnSettings *obj = new PoiLearnSettings();*/
/*    return obj;*/
/*}*/

/*/***/
/* * Static function to retrieve an instance of the object.*/
/* */
/*PoiLearnSettings *PoiLearnSettings::GetInstance(UAVObjectManager *objMngr, unsigned int instID)*/
/*{*/
/*    return dynamic_cast<PoiLearnSettings *>(objMngr->getObject(PoiLearnSettings::OBJID, instID));*/
/*}*/

/*unsigned char PoiLearnSettings::getInput() const
{
   QMutexLocker locker(mutex);
   return data.Input;
}
void PoiLearnSettings::setInput(unsigned char value)
{
   mutex->lock();
   bool changed = data.Input != value;
   data.Input = value;
   mutex->unlock();
   if (changed) emit InputChanged(value);
}

*/
