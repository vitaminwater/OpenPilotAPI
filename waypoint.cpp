/**
 ******************************************************************************
 *
 * @file       waypoint.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: waypoint.xml.
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

#include "waypoint.h"

int Waypoint::numInstances = 0;

/**
 * Constructor
 */
Waypoint::Waypoint(UAVObjManager* manager): UAVObject(manager, 0xD23852DC, "Waypoint", "A waypoint the aircraft can try and hit.  Used by the @ref PathPlanner module", "Navigation", 0, 0, ACCESS_READWRITE, ACCESS_READWRITE, 1, 1, UPDATEMODE_MANUAL, UPDATEMODE_MANUAL, 0, 0, 0)
{

}

int Waypoint::UAVObjSetDataField(const char *dataIn, const std::string fieldID){
	if(fieldID == "Position") {
		memset( &(dataFields.Position), 0, sizeof(dataFields.Position));
		memcpy( &(dataFields.Position), dataIn, sizeof(dataFields.Position));
	} else if(fieldID == "Velocity") {
		memset( &(dataFields.Velocity), 0, sizeof(dataFields.Velocity));
		memcpy( &(dataFields.Velocity), dataIn, sizeof(dataFields.Velocity));
	} else if(fieldID == "Action") {
		memset( &(dataFields.Action), 0, sizeof(dataFields.Action));
		memcpy( &(dataFields.Action), dataIn, sizeof(dataFields.Action));
	}
	return 0;
}

int Waypoint::UAVObjGetDataField(char *dataOut, const std::string fieldID){
	if(fieldID == "Position") {
		memcpy( dataOut, &(dataFields.Position), sizeof(dataFields.Position));
	} else if(fieldID == "Velocity") {
		memcpy( dataOut, &(dataFields.Velocity), sizeof(dataFields.Velocity));
	} else if(fieldID == "Action") {
		memcpy( dataOut, &(dataFields.Action), sizeof(dataFields.Action));
	}
	return 0;
}

int Waypoint::UAVObjUnpack(const unsigned char *dataIn){
	memcpy(&dataFields, dataIn, NUMBYTES);
	return 0;
}

int Waypoint::UAVObjPack(unsigned char *dataOut) {
	memcpy(dataOut, &dataFields, NUMBYTES);
	return 0;
}

unsigned short Waypoint::UAVObjGetInstance() const {
	return instance;
}
unsigned short Waypoint::UAVObjGetNumBytes() const {
	return sizeof(dataFields);
}
unsigned short Waypoint::UAVObjGetNumInstances() const {
	return numInstances;
}

std::string Waypoint::prettyPrint() {
	std::stringstream ss;
	ss << "\nPrinting object: waypoint" << std::endl;
	ss << "\tPosition: " << dataFields.Position << std::endl;
	ss << "\tVelocity: " << dataFields.Velocity << std::endl;
	ss << "\tAction: " << dataFields.Action << std::endl;

	return ss.str();
}

/*/***/
/* * Initialize object fields with the default values.*/
/* * If a default value is not specified the object fields*/
/* * will be initialized to zero.*/
/* */
/*void Waypoint::setDefaultFieldValues()*/
/*{*/
/**/
/*}*/

/*/***/
/* * Get the object data fields*/
/* */
/*Waypoint::DataFields Waypoint::getData()*/
/*{*/
/*    QMutexLocker locker(mutex);*/
/*    return data;*/
/*}*/

/*/***/
/* * Set the object data fields*/
/* */
/*void Waypoint::setData(const DataFields& data)*/
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

/*void Waypoint::emitNotifications()*/
/*{*/
/*            //if (data.Velocity != oldData.Velocity)
            emit VelocityChanged(data.Velocity);
        //if (data.Action != oldData.Action)
            emit ActionChanged(data.Action);
*/
/*}*/

/*/***/
/* * Create a clone of this object, a new instance ID must be specified.*/
/* * Do not use this function directly to create new instances, the*/
/* * UAVObjectManager should be used instead.*/
/* */
/*UAVDataObject *Waypoint::clone(unsigned int instID)*/
/*{*/
/*    Waypoint *obj = new Waypoint();*/
/*    obj->initialize(instID, this->getMetaObject());*/
/*    return obj;*/
/*}*/

/*/***/
/* * Create a clone of this object only to be used to retrieve defaults*/
/* */
/*UAVDataObject *Waypoint::dirtyClone()*/
/*{*/
/*    Waypoint *obj = new Waypoint();*/
/*    return obj;*/
/*}*/

/*/***/
/* * Static function to retrieve an instance of the object.*/
/* */
/*Waypoint *Waypoint::GetInstance(UAVObjectManager *objMngr, unsigned int instID)*/
/*{*/
/*    return dynamic_cast<Waypoint *>(objMngr->getObject(Waypoint::OBJID, instID));*/
/*}*/

/*float Waypoint::getPosition(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.Position[index];
}
void Waypoint::setPosition(unsigned int index, float value)
{
   mutex->lock();
   bool changed = data.Position[index] != value;
   data.Position[index] = value;
   mutex->unlock();
   if (changed) emit PositionChanged(index,value);
}

float Waypoint::getVelocity() const
{
   QMutexLocker locker(mutex);
   return data.Velocity;
}
void Waypoint::setVelocity(float value)
{
   mutex->lock();
   bool changed = data.Velocity != value;
   data.Velocity = value;
   mutex->unlock();
   if (changed) emit VelocityChanged(value);
}

unsigned char Waypoint::getAction() const
{
   QMutexLocker locker(mutex);
   return data.Action;
}
void Waypoint::setAction(unsigned char value)
{
   mutex->lock();
   bool changed = data.Action != value;
   data.Action = value;
   mutex->unlock();
   if (changed) emit ActionChanged(value);
}

*/
