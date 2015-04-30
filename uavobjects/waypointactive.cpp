/**
 ******************************************************************************
 *
 * @file       waypointactive.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: waypointactive.xml.
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

#include "waypointactive.h"

int WaypointActive::numInstances = 0;

/**
 * Constructor
 */
WaypointActive::WaypointActive(UAVObjManager* manager): UAVObject(manager, 0x1EA5B19C, "WaypointActive", "Indicates the currently active waypoint", "Navigation", 1, 0, ACCESS_READWRITE, ACCESS_READWRITE, 0, 0, UPDATEMODE_ONCHANGE, UPDATEMODE_MANUAL, 0, 0, 0)
{

}

int WaypointActive::UAVObjSetDataField(const char *dataIn, const std::string fieldID){
	if(fieldID == "Index") {
		memset( &(dataFields.Index), 0, sizeof(dataFields.Index));
		memcpy( &(dataFields.Index), dataIn, sizeof(dataFields.Index));
	}
	return 0;
}

int WaypointActive::UAVObjGetDataField(char *dataOut, const std::string fieldID){
	if(fieldID == "Index") {
		memcpy( dataOut, &(dataFields.Index), sizeof(dataFields.Index));
	}
	return 0;
}

int WaypointActive::UAVObjUnpack(const unsigned char *dataIn){
	memcpy(&dataFields, dataIn, NUMBYTES);
	return 0;
}

int WaypointActive::UAVObjPack(unsigned char *dataOut) {
	memcpy(dataOut, &dataFields, NUMBYTES);
	return 0;
}

unsigned short WaypointActive::UAVObjGetInstance() const {
	return instance;
}
unsigned short WaypointActive::UAVObjGetNumBytes() const {
	return sizeof(dataFields);
}
unsigned short WaypointActive::UAVObjGetNumInstances() const {
	return numInstances;
}

std::string WaypointActive::prettyPrint() {
	std::stringstream ss;
	ss << "\nPrinting object: waypointactive" << std::endl;
	ss << "\tIndex: " << dataFields.Index << std::endl;

	return ss.str();
}

/*/***/
/* * Initialize object fields with the default values.*/
/* * If a default value is not specified the object fields*/
/* * will be initialized to zero.*/
/* */
/*void WaypointActive::setDefaultFieldValues()*/
/*{*/
/**/
/*}*/

/*/***/
/* * Get the object data fields*/
/* */
/*WaypointActive::DataFields WaypointActive::getData()*/
/*{*/
/*    QMutexLocker locker(mutex);*/
/*    return data;*/
/*}*/

/*/***/
/* * Set the object data fields*/
/* */
/*void WaypointActive::setData(const DataFields& data)*/
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

/*void WaypointActive::emitNotifications()*/
/*{*/
/*            //if (data.Index != oldData.Index)
            emit IndexChanged(data.Index);
*/
/*}*/

/*/***/
/* * Create a clone of this object, a new instance ID must be specified.*/
/* * Do not use this function directly to create new instances, the*/
/* * UAVObjectManager should be used instead.*/
/* */
/*UAVDataObject *WaypointActive::clone(unsigned int instID)*/
/*{*/
/*    WaypointActive *obj = new WaypointActive();*/
/*    obj->initialize(instID, this->getMetaObject());*/
/*    return obj;*/
/*}*/

/*/***/
/* * Create a clone of this object only to be used to retrieve defaults*/
/* */
/*UAVDataObject *WaypointActive::dirtyClone()*/
/*{*/
/*    WaypointActive *obj = new WaypointActive();*/
/*    return obj;*/
/*}*/

/*/***/
/* * Static function to retrieve an instance of the object.*/
/* */
/*WaypointActive *WaypointActive::GetInstance(UAVObjectManager *objMngr, unsigned int instID)*/
/*{*/
/*    return dynamic_cast<WaypointActive *>(objMngr->getObject(WaypointActive::OBJID, instID));*/
/*}*/

/*short int WaypointActive::getIndex() const
{
   QMutexLocker locker(mutex);
   return data.Index;
}
void WaypointActive::setIndex(short int value)
{
   mutex->lock();
   bool changed = data.Index != value;
   data.Index = value;
   mutex->unlock();
   if (changed) emit IndexChanged(value);
}

*/
