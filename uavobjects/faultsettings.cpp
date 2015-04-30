/**
 ******************************************************************************
 *
 * @file       faultsettings.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: faultsettings.xml.
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

#include "faultsettings.h"

int FaultSettings::numInstances = 0;

/**
 * Constructor
 */
FaultSettings::FaultSettings(UAVObjManager* manager): UAVObject(manager, 0x2778BA3C, "FaultSettings", "Allows testers to simulate various fault scenarios.", "System", 1, 1, ACCESS_READWRITE, ACCESS_READWRITE, 1, 1, UPDATEMODE_ONCHANGE, UPDATEMODE_ONCHANGE, 0, 0, 0)
{

}

int FaultSettings::UAVObjSetDataField(const char *dataIn, const std::string fieldID){
	if(fieldID == "ActivateFault") {
		memset( &(dataFields.ActivateFault), 0, sizeof(dataFields.ActivateFault));
		memcpy( &(dataFields.ActivateFault), dataIn, sizeof(dataFields.ActivateFault));
	}
	return 0;
}

int FaultSettings::UAVObjGetDataField(char *dataOut, const std::string fieldID){
	if(fieldID == "ActivateFault") {
		memcpy( dataOut, &(dataFields.ActivateFault), sizeof(dataFields.ActivateFault));
	}
	return 0;
}

int FaultSettings::UAVObjUnpack(const unsigned char *dataIn){
	memcpy(&dataFields, dataIn, NUMBYTES);
	return 0;
}

int FaultSettings::UAVObjPack(unsigned char *dataOut) {
	memcpy(dataOut, &dataFields, NUMBYTES);
	return 0;
}

unsigned short FaultSettings::UAVObjGetInstance() const {
	return instance;
}
unsigned short FaultSettings::UAVObjGetNumBytes() const {
	return sizeof(dataFields);
}
unsigned short FaultSettings::UAVObjGetNumInstances() const {
	return numInstances;
}

std::string FaultSettings::prettyPrint() {
	std::stringstream ss;
	ss << "\nPrinting object: faultsettings" << std::endl;
	ss << "\tActivateFault: " << dataFields.ActivateFault << std::endl;

	return ss.str();
}

/*/***/
/* * Initialize object fields with the default values.*/
/* * If a default value is not specified the object fields*/
/* * will be initialized to zero.*/
/* */
/*void FaultSettings::setDefaultFieldValues()*/
/*{*/
/*    data.ActivateFault = 0;
*/
/*}*/

/*/***/
/* * Get the object data fields*/
/* */
/*FaultSettings::DataFields FaultSettings::getData()*/
/*{*/
/*    QMutexLocker locker(mutex);*/
/*    return data;*/
/*}*/

/*/***/
/* * Set the object data fields*/
/* */
/*void FaultSettings::setData(const DataFields& data)*/
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

/*void FaultSettings::emitNotifications()*/
/*{*/
/*            //if (data.ActivateFault != oldData.ActivateFault)
            emit ActivateFaultChanged(data.ActivateFault);
*/
/*}*/

/*/***/
/* * Create a clone of this object, a new instance ID must be specified.*/
/* * Do not use this function directly to create new instances, the*/
/* * UAVObjectManager should be used instead.*/
/* */
/*UAVDataObject *FaultSettings::clone(unsigned int instID)*/
/*{*/
/*    FaultSettings *obj = new FaultSettings();*/
/*    obj->initialize(instID, this->getMetaObject());*/
/*    return obj;*/
/*}*/

/*/***/
/* * Create a clone of this object only to be used to retrieve defaults*/
/* */
/*UAVDataObject *FaultSettings::dirtyClone()*/
/*{*/
/*    FaultSettings *obj = new FaultSettings();*/
/*    return obj;*/
/*}*/

/*/***/
/* * Static function to retrieve an instance of the object.*/
/* */
/*FaultSettings *FaultSettings::GetInstance(UAVObjectManager *objMngr, unsigned int instID)*/
/*{*/
/*    return dynamic_cast<FaultSettings *>(objMngr->getObject(FaultSettings::OBJID, instID));*/
/*}*/

/*unsigned char FaultSettings::getActivateFault() const
{
   QMutexLocker locker(mutex);
   return data.ActivateFault;
}
void FaultSettings::setActivateFault(unsigned char value)
{
   mutex->lock();
   bool changed = data.ActivateFault != value;
   data.ActivateFault = value;
   mutex->unlock();
   if (changed) emit ActivateFaultChanged(value);
}

*/
