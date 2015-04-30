/**
 ******************************************************************************
 *
 * @file       groundtruth.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: groundtruth.xml.
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

#include "groundtruth.h"

int GroundTruth::numInstances = 0;

/**
 * Constructor
 */
GroundTruth::GroundTruth(UAVObjManager* manager): UAVObject(manager, 0xF178DCA8, "GroundTruth", "Ground truth data output by a simulator.", "State", 1, 0, ACCESS_READONLY, ACCESS_READWRITE, 0, 0, UPDATEMODE_MANUAL, UPDATEMODE_MANUAL, 0, 0, 0)
{

}

int GroundTruth::UAVObjSetDataField(const char *dataIn, const std::string fieldID){
	if(fieldID == "AccelerationXYZ") {
		memset( &(dataFields.AccelerationXYZ), 0, sizeof(dataFields.AccelerationXYZ));
		memcpy( &(dataFields.AccelerationXYZ), dataIn, sizeof(dataFields.AccelerationXYZ));
	} else if(fieldID == "PositionNED") {
		memset( &(dataFields.PositionNED), 0, sizeof(dataFields.PositionNED));
		memcpy( &(dataFields.PositionNED), dataIn, sizeof(dataFields.PositionNED));
	} else if(fieldID == "VelocityNED") {
		memset( &(dataFields.VelocityNED), 0, sizeof(dataFields.VelocityNED));
		memcpy( &(dataFields.VelocityNED), dataIn, sizeof(dataFields.VelocityNED));
	} else if(fieldID == "RPY") {
		memset( &(dataFields.RPY), 0, sizeof(dataFields.RPY));
		memcpy( &(dataFields.RPY), dataIn, sizeof(dataFields.RPY));
	} else if(fieldID == "AngularRates") {
		memset( &(dataFields.AngularRates), 0, sizeof(dataFields.AngularRates));
		memcpy( &(dataFields.AngularRates), dataIn, sizeof(dataFields.AngularRates));
	} else if(fieldID == "TrueAirspeed") {
		memset( &(dataFields.TrueAirspeed), 0, sizeof(dataFields.TrueAirspeed));
		memcpy( &(dataFields.TrueAirspeed), dataIn, sizeof(dataFields.TrueAirspeed));
	} else if(fieldID == "CalibratedAirspeed") {
		memset( &(dataFields.CalibratedAirspeed), 0, sizeof(dataFields.CalibratedAirspeed));
		memcpy( &(dataFields.CalibratedAirspeed), dataIn, sizeof(dataFields.CalibratedAirspeed));
	} else if(fieldID == "AngleOfAttack") {
		memset( &(dataFields.AngleOfAttack), 0, sizeof(dataFields.AngleOfAttack));
		memcpy( &(dataFields.AngleOfAttack), dataIn, sizeof(dataFields.AngleOfAttack));
	} else if(fieldID == "AngleOfSlip") {
		memset( &(dataFields.AngleOfSlip), 0, sizeof(dataFields.AngleOfSlip));
		memcpy( &(dataFields.AngleOfSlip), dataIn, sizeof(dataFields.AngleOfSlip));
	}
	return 0;
}

int GroundTruth::UAVObjGetDataField(char *dataOut, const std::string fieldID){
	if(fieldID == "AccelerationXYZ") {
		memcpy( dataOut, &(dataFields.AccelerationXYZ), sizeof(dataFields.AccelerationXYZ));
	} else if(fieldID == "PositionNED") {
		memcpy( dataOut, &(dataFields.PositionNED), sizeof(dataFields.PositionNED));
	} else if(fieldID == "VelocityNED") {
		memcpy( dataOut, &(dataFields.VelocityNED), sizeof(dataFields.VelocityNED));
	} else if(fieldID == "RPY") {
		memcpy( dataOut, &(dataFields.RPY), sizeof(dataFields.RPY));
	} else if(fieldID == "AngularRates") {
		memcpy( dataOut, &(dataFields.AngularRates), sizeof(dataFields.AngularRates));
	} else if(fieldID == "TrueAirspeed") {
		memcpy( dataOut, &(dataFields.TrueAirspeed), sizeof(dataFields.TrueAirspeed));
	} else if(fieldID == "CalibratedAirspeed") {
		memcpy( dataOut, &(dataFields.CalibratedAirspeed), sizeof(dataFields.CalibratedAirspeed));
	} else if(fieldID == "AngleOfAttack") {
		memcpy( dataOut, &(dataFields.AngleOfAttack), sizeof(dataFields.AngleOfAttack));
	} else if(fieldID == "AngleOfSlip") {
		memcpy( dataOut, &(dataFields.AngleOfSlip), sizeof(dataFields.AngleOfSlip));
	}
	return 0;
}

int GroundTruth::UAVObjUnpack(const unsigned char *dataIn){
	memcpy(&dataFields, dataIn, NUMBYTES);
	return 0;
}

int GroundTruth::UAVObjPack(unsigned char *dataOut) {
	memcpy(dataOut, &dataFields, NUMBYTES);
	return 0;
}

unsigned short GroundTruth::UAVObjGetInstance() const {
	return instance;
}
unsigned short GroundTruth::UAVObjGetNumBytes() const {
	return sizeof(dataFields);
}
unsigned short GroundTruth::UAVObjGetNumInstances() const {
	return numInstances;
}

std::string GroundTruth::prettyPrint() {
	std::stringstream ss;
	ss << "\nPrinting object: groundtruth" << std::endl;
	ss << "\tAccelerationXYZ: " << dataFields.AccelerationXYZ << std::endl;
	ss << "\tPositionNED: " << dataFields.PositionNED << std::endl;
	ss << "\tVelocityNED: " << dataFields.VelocityNED << std::endl;
	ss << "\tRPY: " << dataFields.RPY << std::endl;
	ss << "\tAngularRates: " << dataFields.AngularRates << std::endl;
	ss << "\tTrueAirspeed: " << dataFields.TrueAirspeed << std::endl;
	ss << "\tCalibratedAirspeed: " << dataFields.CalibratedAirspeed << std::endl;
	ss << "\tAngleOfAttack: " << dataFields.AngleOfAttack << std::endl;
	ss << "\tAngleOfSlip: " << dataFields.AngleOfSlip << std::endl;

	return ss.str();
}

/*/***/
/* * Initialize object fields with the default values.*/
/* * If a default value is not specified the object fields*/
/* * will be initialized to zero.*/
/* */
/*void GroundTruth::setDefaultFieldValues()*/
/*{*/
/**/
/*}*/

/*/***/
/* * Get the object data fields*/
/* */
/*GroundTruth::DataFields GroundTruth::getData()*/
/*{*/
/*    QMutexLocker locker(mutex);*/
/*    return data;*/
/*}*/

/*/***/
/* * Set the object data fields*/
/* */
/*void GroundTruth::setData(const DataFields& data)*/
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

/*void GroundTruth::emitNotifications()*/
/*{*/
/*            //if (data.TrueAirspeed != oldData.TrueAirspeed)
            emit TrueAirspeedChanged(data.TrueAirspeed);
        //if (data.CalibratedAirspeed != oldData.CalibratedAirspeed)
            emit CalibratedAirspeedChanged(data.CalibratedAirspeed);
        //if (data.AngleOfAttack != oldData.AngleOfAttack)
            emit AngleOfAttackChanged(data.AngleOfAttack);
        //if (data.AngleOfSlip != oldData.AngleOfSlip)
            emit AngleOfSlipChanged(data.AngleOfSlip);
*/
/*}*/

/*/***/
/* * Create a clone of this object, a new instance ID must be specified.*/
/* * Do not use this function directly to create new instances, the*/
/* * UAVObjectManager should be used instead.*/
/* */
/*UAVDataObject *GroundTruth::clone(unsigned int instID)*/
/*{*/
/*    GroundTruth *obj = new GroundTruth();*/
/*    obj->initialize(instID, this->getMetaObject());*/
/*    return obj;*/
/*}*/

/*/***/
/* * Create a clone of this object only to be used to retrieve defaults*/
/* */
/*UAVDataObject *GroundTruth::dirtyClone()*/
/*{*/
/*    GroundTruth *obj = new GroundTruth();*/
/*    return obj;*/
/*}*/

/*/***/
/* * Static function to retrieve an instance of the object.*/
/* */
/*GroundTruth *GroundTruth::GetInstance(UAVObjectManager *objMngr, unsigned int instID)*/
/*{*/
/*    return dynamic_cast<GroundTruth *>(objMngr->getObject(GroundTruth::OBJID, instID));*/
/*}*/

/*float GroundTruth::getAccelerationXYZ(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.AccelerationXYZ[index];
}
void GroundTruth::setAccelerationXYZ(unsigned int index, float value)
{
   mutex->lock();
   bool changed = data.AccelerationXYZ[index] != value;
   data.AccelerationXYZ[index] = value;
   mutex->unlock();
   if (changed) emit AccelerationXYZChanged(index,value);
}

float GroundTruth::getPositionNED(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.PositionNED[index];
}
void GroundTruth::setPositionNED(unsigned int index, float value)
{
   mutex->lock();
   bool changed = data.PositionNED[index] != value;
   data.PositionNED[index] = value;
   mutex->unlock();
   if (changed) emit PositionNEDChanged(index,value);
}

float GroundTruth::getVelocityNED(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.VelocityNED[index];
}
void GroundTruth::setVelocityNED(unsigned int index, float value)
{
   mutex->lock();
   bool changed = data.VelocityNED[index] != value;
   data.VelocityNED[index] = value;
   mutex->unlock();
   if (changed) emit VelocityNEDChanged(index,value);
}

float GroundTruth::getRPY(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.RPY[index];
}
void GroundTruth::setRPY(unsigned int index, float value)
{
   mutex->lock();
   bool changed = data.RPY[index] != value;
   data.RPY[index] = value;
   mutex->unlock();
   if (changed) emit RPYChanged(index,value);
}

float GroundTruth::getAngularRates(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.AngularRates[index];
}
void GroundTruth::setAngularRates(unsigned int index, float value)
{
   mutex->lock();
   bool changed = data.AngularRates[index] != value;
   data.AngularRates[index] = value;
   mutex->unlock();
   if (changed) emit AngularRatesChanged(index,value);
}

float GroundTruth::getTrueAirspeed() const
{
   QMutexLocker locker(mutex);
   return data.TrueAirspeed;
}
void GroundTruth::setTrueAirspeed(float value)
{
   mutex->lock();
   bool changed = data.TrueAirspeed != value;
   data.TrueAirspeed = value;
   mutex->unlock();
   if (changed) emit TrueAirspeedChanged(value);
}

float GroundTruth::getCalibratedAirspeed() const
{
   QMutexLocker locker(mutex);
   return data.CalibratedAirspeed;
}
void GroundTruth::setCalibratedAirspeed(float value)
{
   mutex->lock();
   bool changed = data.CalibratedAirspeed != value;
   data.CalibratedAirspeed = value;
   mutex->unlock();
   if (changed) emit CalibratedAirspeedChanged(value);
}

float GroundTruth::getAngleOfAttack() const
{
   QMutexLocker locker(mutex);
   return data.AngleOfAttack;
}
void GroundTruth::setAngleOfAttack(float value)
{
   mutex->lock();
   bool changed = data.AngleOfAttack != value;
   data.AngleOfAttack = value;
   mutex->unlock();
   if (changed) emit AngleOfAttackChanged(value);
}

float GroundTruth::getAngleOfSlip() const
{
   QMutexLocker locker(mutex);
   return data.AngleOfSlip;
}
void GroundTruth::setAngleOfSlip(float value)
{
   mutex->lock();
   bool changed = data.AngleOfSlip != value;
   data.AngleOfSlip = value;
   mutex->unlock();
   if (changed) emit AngleOfSlipChanged(value);
}

*/
