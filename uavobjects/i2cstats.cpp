/**
 ******************************************************************************
 *
 * @file       i2cstats.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: i2cstats.xml.
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

#include "i2cstats.h"

int I2CStats::numInstances = 0;

/**
 * Constructor
 */
I2CStats::I2CStats(UAVObjManager* manager): UAVObject(manager, 0xB714823E, "I2CStats", "Tracks statistics on the I2C bus.", "System", 1, 0, ACCESS_READWRITE, ACCESS_READWRITE, 0, 0, UPDATEMODE_PERIODIC, UPDATEMODE_MANUAL, 10000, 0, 0)
{

}

int I2CStats::UAVObjSetDataField(const char *dataIn, const std::string fieldID){
	if(fieldID == "evirq_log") {
		memset( &(dataFields.evirq_log), 0, sizeof(dataFields.evirq_log));
		memcpy( &(dataFields.evirq_log), dataIn, sizeof(dataFields.evirq_log));
	} else if(fieldID == "erirq_log") {
		memset( &(dataFields.erirq_log), 0, sizeof(dataFields.erirq_log));
		memcpy( &(dataFields.erirq_log), dataIn, sizeof(dataFields.erirq_log));
	} else if(fieldID == "event_errors") {
		memset( &(dataFields.event_errors), 0, sizeof(dataFields.event_errors));
		memcpy( &(dataFields.event_errors), dataIn, sizeof(dataFields.event_errors));
	} else if(fieldID == "fsm_errors") {
		memset( &(dataFields.fsm_errors), 0, sizeof(dataFields.fsm_errors));
		memcpy( &(dataFields.fsm_errors), dataIn, sizeof(dataFields.fsm_errors));
	} else if(fieldID == "irq_errors") {
		memset( &(dataFields.irq_errors), 0, sizeof(dataFields.irq_errors));
		memcpy( &(dataFields.irq_errors), dataIn, sizeof(dataFields.irq_errors));
	} else if(fieldID == "nacks") {
		memset( &(dataFields.nacks), 0, sizeof(dataFields.nacks));
		memcpy( &(dataFields.nacks), dataIn, sizeof(dataFields.nacks));
	} else if(fieldID == "timeouts") {
		memset( &(dataFields.timeouts), 0, sizeof(dataFields.timeouts));
		memcpy( &(dataFields.timeouts), dataIn, sizeof(dataFields.timeouts));
	} else if(fieldID == "last_error_type") {
		memset( &(dataFields.last_error_type), 0, sizeof(dataFields.last_error_type));
		memcpy( &(dataFields.last_error_type), dataIn, sizeof(dataFields.last_error_type));
	} else if(fieldID == "event_log") {
		memset( &(dataFields.event_log), 0, sizeof(dataFields.event_log));
		memcpy( &(dataFields.event_log), dataIn, sizeof(dataFields.event_log));
	} else if(fieldID == "state_log") {
		memset( &(dataFields.state_log), 0, sizeof(dataFields.state_log));
		memcpy( &(dataFields.state_log), dataIn, sizeof(dataFields.state_log));
	}
	return 0;
}

int I2CStats::UAVObjGetDataField(char *dataOut, const std::string fieldID){
	if(fieldID == "evirq_log") {
		memcpy( dataOut, &(dataFields.evirq_log), sizeof(dataFields.evirq_log));
	} else if(fieldID == "erirq_log") {
		memcpy( dataOut, &(dataFields.erirq_log), sizeof(dataFields.erirq_log));
	} else if(fieldID == "event_errors") {
		memcpy( dataOut, &(dataFields.event_errors), sizeof(dataFields.event_errors));
	} else if(fieldID == "fsm_errors") {
		memcpy( dataOut, &(dataFields.fsm_errors), sizeof(dataFields.fsm_errors));
	} else if(fieldID == "irq_errors") {
		memcpy( dataOut, &(dataFields.irq_errors), sizeof(dataFields.irq_errors));
	} else if(fieldID == "nacks") {
		memcpy( dataOut, &(dataFields.nacks), sizeof(dataFields.nacks));
	} else if(fieldID == "timeouts") {
		memcpy( dataOut, &(dataFields.timeouts), sizeof(dataFields.timeouts));
	} else if(fieldID == "last_error_type") {
		memcpy( dataOut, &(dataFields.last_error_type), sizeof(dataFields.last_error_type));
	} else if(fieldID == "event_log") {
		memcpy( dataOut, &(dataFields.event_log), sizeof(dataFields.event_log));
	} else if(fieldID == "state_log") {
		memcpy( dataOut, &(dataFields.state_log), sizeof(dataFields.state_log));
	}
	return 0;
}

int I2CStats::UAVObjUnpack(const unsigned char *dataIn){
	memcpy(&dataFields, dataIn, NUMBYTES);
	return 0;
}

int I2CStats::UAVObjPack(unsigned char *dataOut) {
	memcpy(dataOut, &dataFields, NUMBYTES);
	return 0;
}

unsigned short I2CStats::UAVObjGetInstance() const {
	return instance;
}
unsigned short I2CStats::UAVObjGetNumBytes() const {
	return sizeof(dataFields);
}
unsigned short I2CStats::UAVObjGetNumInstances() const {
	return numInstances;
}

std::string I2CStats::prettyPrint() {
	std::stringstream ss;
	ss << "\nPrinting object: i2cstats" << std::endl;
	ss << "\tevirq_log: " << dataFields.evirq_log << std::endl;
	ss << "\terirq_log: " << dataFields.erirq_log << std::endl;
	ss << "\tevent_errors: " << dataFields.event_errors << std::endl;
	ss << "\tfsm_errors: " << dataFields.fsm_errors << std::endl;
	ss << "\tirq_errors: " << dataFields.irq_errors << std::endl;
	ss << "\tnacks: " << dataFields.nacks << std::endl;
	ss << "\ttimeouts: " << dataFields.timeouts << std::endl;
	ss << "\tlast_error_type: " << dataFields.last_error_type << std::endl;
	ss << "\tevent_log: " << dataFields.event_log << std::endl;
	ss << "\tstate_log: " << dataFields.state_log << std::endl;

	return ss.str();
}

/*/***/
/* * Initialize object fields with the default values.*/
/* * If a default value is not specified the object fields*/
/* * will be initialized to zero.*/
/* */
/*void I2CStats::setDefaultFieldValues()*/
/*{*/
/**/
/*}*/

/*/***/
/* * Get the object data fields*/
/* */
/*I2CStats::DataFields I2CStats::getData()*/
/*{*/
/*    QMutexLocker locker(mutex);*/
/*    return data;*/
/*}*/

/*/***/
/* * Set the object data fields*/
/* */
/*void I2CStats::setData(const DataFields& data)*/
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

/*void I2CStats::emitNotifications()*/
/*{*/
/*            //if (data.event_errors != oldData.event_errors)
            emit event_errorsChanged(data.event_errors);
        //if (data.fsm_errors != oldData.fsm_errors)
            emit fsm_errorsChanged(data.fsm_errors);
        //if (data.irq_errors != oldData.irq_errors)
            emit irq_errorsChanged(data.irq_errors);
        //if (data.nacks != oldData.nacks)
            emit nacksChanged(data.nacks);
        //if (data.timeouts != oldData.timeouts)
            emit timeoutsChanged(data.timeouts);
        //if (data.last_error_type != oldData.last_error_type)
            emit last_error_typeChanged(data.last_error_type);
*/
/*}*/

/*/***/
/* * Create a clone of this object, a new instance ID must be specified.*/
/* * Do not use this function directly to create new instances, the*/
/* * UAVObjectManager should be used instead.*/
/* */
/*UAVDataObject *I2CStats::clone(unsigned int instID)*/
/*{*/
/*    I2CStats *obj = new I2CStats();*/
/*    obj->initialize(instID, this->getMetaObject());*/
/*    return obj;*/
/*}*/

/*/***/
/* * Create a clone of this object only to be used to retrieve defaults*/
/* */
/*UAVDataObject *I2CStats::dirtyClone()*/
/*{*/
/*    I2CStats *obj = new I2CStats();*/
/*    return obj;*/
/*}*/

/*/***/
/* * Static function to retrieve an instance of the object.*/
/* */
/*I2CStats *I2CStats::GetInstance(UAVObjectManager *objMngr, unsigned int instID)*/
/*{*/
/*    return dynamic_cast<I2CStats *>(objMngr->getObject(I2CStats::OBJID, instID));*/
/*}*/

/*unsigned int I2CStats::getevirq_log(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.evirq_log[index];
}
void I2CStats::setevirq_log(unsigned int index, unsigned int value)
{
   mutex->lock();
   bool changed = data.evirq_log[index] != value;
   data.evirq_log[index] = value;
   mutex->unlock();
   if (changed) emit evirq_logChanged(index,value);
}

unsigned int I2CStats::geterirq_log(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.erirq_log[index];
}
void I2CStats::seterirq_log(unsigned int index, unsigned int value)
{
   mutex->lock();
   bool changed = data.erirq_log[index] != value;
   data.erirq_log[index] = value;
   mutex->unlock();
   if (changed) emit erirq_logChanged(index,value);
}

unsigned char I2CStats::getevent_errors() const
{
   QMutexLocker locker(mutex);
   return data.event_errors;
}
void I2CStats::setevent_errors(unsigned char value)
{
   mutex->lock();
   bool changed = data.event_errors != value;
   data.event_errors = value;
   mutex->unlock();
   if (changed) emit event_errorsChanged(value);
}

unsigned char I2CStats::getfsm_errors() const
{
   QMutexLocker locker(mutex);
   return data.fsm_errors;
}
void I2CStats::setfsm_errors(unsigned char value)
{
   mutex->lock();
   bool changed = data.fsm_errors != value;
   data.fsm_errors = value;
   mutex->unlock();
   if (changed) emit fsm_errorsChanged(value);
}

unsigned char I2CStats::getirq_errors() const
{
   QMutexLocker locker(mutex);
   return data.irq_errors;
}
void I2CStats::setirq_errors(unsigned char value)
{
   mutex->lock();
   bool changed = data.irq_errors != value;
   data.irq_errors = value;
   mutex->unlock();
   if (changed) emit irq_errorsChanged(value);
}

unsigned char I2CStats::getnacks() const
{
   QMutexLocker locker(mutex);
   return data.nacks;
}
void I2CStats::setnacks(unsigned char value)
{
   mutex->lock();
   bool changed = data.nacks != value;
   data.nacks = value;
   mutex->unlock();
   if (changed) emit nacksChanged(value);
}

unsigned char I2CStats::gettimeouts() const
{
   QMutexLocker locker(mutex);
   return data.timeouts;
}
void I2CStats::settimeouts(unsigned char value)
{
   mutex->lock();
   bool changed = data.timeouts != value;
   data.timeouts = value;
   mutex->unlock();
   if (changed) emit timeoutsChanged(value);
}

unsigned char I2CStats::getlast_error_type() const
{
   QMutexLocker locker(mutex);
   return data.last_error_type;
}
void I2CStats::setlast_error_type(unsigned char value)
{
   mutex->lock();
   bool changed = data.last_error_type != value;
   data.last_error_type = value;
   mutex->unlock();
   if (changed) emit last_error_typeChanged(value);
}

unsigned char I2CStats::getevent_log(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.event_log[index];
}
void I2CStats::setevent_log(unsigned int index, unsigned char value)
{
   mutex->lock();
   bool changed = data.event_log[index] != value;
   data.event_log[index] = value;
   mutex->unlock();
   if (changed) emit event_logChanged(index,value);
}

unsigned char I2CStats::getstate_log(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.state_log[index];
}
void I2CStats::setstate_log(unsigned int index, unsigned char value)
{
   mutex->lock();
   bool changed = data.state_log[index] != value;
   data.state_log[index] = value;
   mutex->unlock();
   if (changed) emit state_logChanged(index,value);
}

*/
