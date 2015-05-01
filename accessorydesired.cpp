/**
 ******************************************************************************
 *
 * @file       accessorydesired.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: accessorydesired.xml.
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

#include "accessorydesired.h"

int AccessoryDesired::numInstances = 0;

/**
 * Constructor
 */
AccessoryDesired::AccessoryDesired(UAVObjManager* manager): UAVObject(manager, 0xC409985A, "AccessoryDesired", "Desired Auxillary actuator settings.  Comes from @ref ManualControlModule.", "Control", 0, 0, ACCESS_READWRITE, ACCESS_READWRITE, 0, 0, UPDATEMODE_PERIODIC, UPDATEMODE_MANUAL, 1000, 0, 0)
{

}

int AccessoryDesired::UAVObjSetDataField(const char *dataIn, const std::string fieldID){
	if(fieldID == "AccessoryVal") {
		memset( &(dataFields.AccessoryVal), 0, sizeof(dataFields.AccessoryVal));
		memcpy( &(dataFields.AccessoryVal), dataIn, sizeof(dataFields.AccessoryVal));
	}
	return 0;
}

int AccessoryDesired::UAVObjGetDataField(char *dataOut, const std::string fieldID){
	if(fieldID == "AccessoryVal") {
		memcpy( dataOut, &(dataFields.AccessoryVal), sizeof(dataFields.AccessoryVal));
	}
	return 0;
}

int AccessoryDesired::UAVObjUnpack(const unsigned char *dataIn){
	memcpy(&dataFields, dataIn, NUMBYTES);
	return 0;
}

int AccessoryDesired::UAVObjPack(unsigned char *dataOut) {
	memcpy(dataOut, &dataFields, NUMBYTES);
	return 0;
}

unsigned short AccessoryDesired::UAVObjGetInstance() const {
	return instance;
}
unsigned short AccessoryDesired::UAVObjGetNumBytes() const {
	return sizeof(dataFields);
}
unsigned short AccessoryDesired::UAVObjGetNumInstances() const {
	return numInstances;
}

std::string AccessoryDesired::prettyPrint() {
	std::stringstream ss;
	ss << "\nPrinting object: accessorydesired" << std::endl;
	ss << "\tAccessoryVal: " << dataFields.AccessoryVal << std::endl;

	return ss.str();
}

/*/***/
/* * Initialize object fields with the default values.*/
/* * If a default value is not specified the object fields*/
/* * will be initialized to zero.*/
/* */
/*void AccessoryDesired::setDefaultFieldValues()*/
/*{*/
/**/
/*}*/

/*/***/
/* * Get the object data fields*/
/* */
/*AccessoryDesired::DataFields AccessoryDesired::getData()*/
/*{*/
/*    QMutexLocker locker(mutex);*/
/*    return data;*/
/*}*/

/*/***/
/* * Set the object data fields*/
/* */
/*void AccessoryDesired::setData(const DataFields& data)*/
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

/*void AccessoryDesired::emitNotifications()*/
/*{*/
/*            //if (data.AccessoryVal != oldData.AccessoryVal)
            emit AccessoryValChanged(data.AccessoryVal);
*/
/*}*/

/*/***/
/* * Create a clone of this object, a new instance ID must be specified.*/
/* * Do not use this function directly to create new instances, the*/
/* * UAVObjectManager should be used instead.*/
/* */
/*UAVDataObject *AccessoryDesired::clone(unsigned int instID)*/
/*{*/
/*    AccessoryDesired *obj = new AccessoryDesired();*/
/*    obj->initialize(instID, this->getMetaObject());*/
/*    return obj;*/
/*}*/

/*/***/
/* * Create a clone of this object only to be used to retrieve defaults*/
/* */
/*UAVDataObject *AccessoryDesired::dirtyClone()*/
/*{*/
/*    AccessoryDesired *obj = new AccessoryDesired();*/
/*    return obj;*/
/*}*/

/*/***/
/* * Static function to retrieve an instance of the object.*/
/* */
/*AccessoryDesired *AccessoryDesired::GetInstance(UAVObjectManager *objMngr, unsigned int instID)*/
/*{*/
/*    return dynamic_cast<AccessoryDesired *>(objMngr->getObject(AccessoryDesired::OBJID, instID));*/
/*}*/

/*float AccessoryDesired::getAccessoryVal() const
{
   QMutexLocker locker(mutex);
   return data.AccessoryVal;
}
void AccessoryDesired::setAccessoryVal(float value)
{
   mutex->lock();
   bool changed = data.AccessoryVal != value;
   data.AccessoryVal = value;
   mutex->unlock();
   if (changed) emit AccessoryValChanged(value);
}

*/
