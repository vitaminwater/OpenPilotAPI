/**
 ******************************************************************************
 *
 * @file       pathplan.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: pathplan.xml.
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

#include "pathplan.h"

int PathPlan::numInstances = 0;

/**
 * Constructor
 */
PathPlan::PathPlan(UAVObjManager* manager): UAVObject(manager, 0x82F5D500, "PathPlan", "Flight plan informations", "Navigation", 1, 0, ACCESS_READONLY, ACCESS_READWRITE, 1, 1, UPDATEMODE_MANUAL, UPDATEMODE_MANUAL, 0, 0, 0)
{

}

int PathPlan::UAVObjSetDataField(const char *dataIn, const std::string fieldID){
	if(fieldID == "WaypointCount") {
		memset( &(dataFields.WaypointCount), 0, sizeof(dataFields.WaypointCount));
		memcpy( &(dataFields.WaypointCount), dataIn, sizeof(dataFields.WaypointCount));
	} else if(fieldID == "PathActionCount") {
		memset( &(dataFields.PathActionCount), 0, sizeof(dataFields.PathActionCount));
		memcpy( &(dataFields.PathActionCount), dataIn, sizeof(dataFields.PathActionCount));
	} else if(fieldID == "Crc") {
		memset( &(dataFields.Crc), 0, sizeof(dataFields.Crc));
		memcpy( &(dataFields.Crc), dataIn, sizeof(dataFields.Crc));
	}
	return 0;
}

int PathPlan::UAVObjGetDataField(char *dataOut, const std::string fieldID){
	if(fieldID == "WaypointCount") {
		memcpy( dataOut, &(dataFields.WaypointCount), sizeof(dataFields.WaypointCount));
	} else if(fieldID == "PathActionCount") {
		memcpy( dataOut, &(dataFields.PathActionCount), sizeof(dataFields.PathActionCount));
	} else if(fieldID == "Crc") {
		memcpy( dataOut, &(dataFields.Crc), sizeof(dataFields.Crc));
	}
	return 0;
}

int PathPlan::UAVObjUnpack(const unsigned char *dataIn){
	memcpy(&dataFields, dataIn, NUMBYTES);
	return 0;
}

int PathPlan::UAVObjPack(unsigned char *dataOut) {
	memcpy(dataOut, &dataFields, NUMBYTES);
	return 0;
}

unsigned short PathPlan::UAVObjGetInstance() const {
	return instance;
}
unsigned short PathPlan::UAVObjGetNumBytes() const {
	return sizeof(dataFields);
}
unsigned short PathPlan::UAVObjGetNumInstances() const {
	return numInstances;
}

std::string PathPlan::prettyPrint() {
	std::stringstream ss;
	ss << "\nPrinting object: pathplan" << std::endl;
	ss << "\tWaypointCount: " << dataFields.WaypointCount << std::endl;
	ss << "\tPathActionCount: " << dataFields.PathActionCount << std::endl;
	ss << "\tCrc: " << dataFields.Crc << std::endl;

	return ss.str();
}

/*/***/
/* * Initialize object fields with the default values.*/
/* * If a default value is not specified the object fields*/
/* * will be initialized to zero.*/
/* */
/*void PathPlan::setDefaultFieldValues()*/
/*{*/
/**/
/*}*/

/*/***/
/* * Get the object data fields*/
/* */
/*PathPlan::DataFields PathPlan::getData()*/
/*{*/
/*    QMutexLocker locker(mutex);*/
/*    return data;*/
/*}*/

/*/***/
/* * Set the object data fields*/
/* */
/*void PathPlan::setData(const DataFields& data)*/
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

/*void PathPlan::emitNotifications()*/
/*{*/
/*            //if (data.WaypointCount != oldData.WaypointCount)
            emit WaypointCountChanged(data.WaypointCount);
        //if (data.PathActionCount != oldData.PathActionCount)
            emit PathActionCountChanged(data.PathActionCount);
        //if (data.Crc != oldData.Crc)
            emit CrcChanged(data.Crc);
*/
/*}*/

/*/***/
/* * Create a clone of this object, a new instance ID must be specified.*/
/* * Do not use this function directly to create new instances, the*/
/* * UAVObjectManager should be used instead.*/
/* */
/*UAVDataObject *PathPlan::clone(unsigned int instID)*/
/*{*/
/*    PathPlan *obj = new PathPlan();*/
/*    obj->initialize(instID, this->getMetaObject());*/
/*    return obj;*/
/*}*/

/*/***/
/* * Create a clone of this object only to be used to retrieve defaults*/
/* */
/*UAVDataObject *PathPlan::dirtyClone()*/
/*{*/
/*    PathPlan *obj = new PathPlan();*/
/*    return obj;*/
/*}*/

/*/***/
/* * Static function to retrieve an instance of the object.*/
/* */
/*PathPlan *PathPlan::GetInstance(UAVObjectManager *objMngr, unsigned int instID)*/
/*{*/
/*    return dynamic_cast<PathPlan *>(objMngr->getObject(PathPlan::OBJID, instID));*/
/*}*/

/*unsigned short int PathPlan::getWaypointCount() const
{
   QMutexLocker locker(mutex);
   return data.WaypointCount;
}
void PathPlan::setWaypointCount(unsigned short int value)
{
   mutex->lock();
   bool changed = data.WaypointCount != value;
   data.WaypointCount = value;
   mutex->unlock();
   if (changed) emit WaypointCountChanged(value);
}

unsigned short int PathPlan::getPathActionCount() const
{
   QMutexLocker locker(mutex);
   return data.PathActionCount;
}
void PathPlan::setPathActionCount(unsigned short int value)
{
   mutex->lock();
   bool changed = data.PathActionCount != value;
   data.PathActionCount = value;
   mutex->unlock();
   if (changed) emit PathActionCountChanged(value);
}

unsigned char PathPlan::getCrc() const
{
   QMutexLocker locker(mutex);
   return data.Crc;
}
void PathPlan::setCrc(unsigned char value)
{
   mutex->lock();
   bool changed = data.Crc != value;
   data.Crc = value;
   mutex->unlock();
   if (changed) emit CrcChanged(value);
}

*/
