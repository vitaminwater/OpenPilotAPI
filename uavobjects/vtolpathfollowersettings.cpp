/**
 ******************************************************************************
 *
 * @file       vtolpathfollowersettings.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: vtolpathfollowersettings.xml.
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

#include "vtolpathfollowersettings.h"

int VtolPathFollowerSettings::numInstances = 0;

/**
 * Constructor
 */
VtolPathFollowerSettings::VtolPathFollowerSettings(UAVObjManager* manager): UAVObject(manager, 0x37C09102, "VtolPathFollowerSettings", "Settings for the @ref VtolPathFollowerModule", "Control", 1, 1, ACCESS_READWRITE, ACCESS_READWRITE, 1, 1, UPDATEMODE_ONCHANGE, UPDATEMODE_ONCHANGE, 0, 0, 0)
{

}

int VtolPathFollowerSettings::UAVObjSetDataField(const char *dataIn, const std::string fieldID){
	if(fieldID == "HorizontalVelMax") {
		memset( &(dataFields.HorizontalVelMax), 0, sizeof(dataFields.HorizontalVelMax));
		memcpy( &(dataFields.HorizontalVelMax), dataIn, sizeof(dataFields.HorizontalVelMax));
	} else if(fieldID == "VerticalVelMax") {
		memset( &(dataFields.VerticalVelMax), 0, sizeof(dataFields.VerticalVelMax));
		memcpy( &(dataFields.VerticalVelMax), dataIn, sizeof(dataFields.VerticalVelMax));
	} else if(fieldID == "CourseFeedForward") {
		memset( &(dataFields.CourseFeedForward), 0, sizeof(dataFields.CourseFeedForward));
		memcpy( &(dataFields.CourseFeedForward), dataIn, sizeof(dataFields.CourseFeedForward));
	} else if(fieldID == "HorizontalPosP") {
		memset( &(dataFields.HorizontalPosP), 0, sizeof(dataFields.HorizontalPosP));
		memcpy( &(dataFields.HorizontalPosP), dataIn, sizeof(dataFields.HorizontalPosP));
	} else if(fieldID == "VerticalPosP") {
		memset( &(dataFields.VerticalPosP), 0, sizeof(dataFields.VerticalPosP));
		memcpy( &(dataFields.VerticalPosP), dataIn, sizeof(dataFields.VerticalPosP));
	} else if(fieldID == "HorizontalVelPID") {
		memset( &(dataFields.HorizontalVelPID), 0, sizeof(dataFields.HorizontalVelPID));
		memcpy( &(dataFields.HorizontalVelPID), dataIn, sizeof(dataFields.HorizontalVelPID));
	} else if(fieldID == "VerticalVelPID") {
		memset( &(dataFields.VerticalVelPID), 0, sizeof(dataFields.VerticalVelPID));
		memcpy( &(dataFields.VerticalVelPID), dataIn, sizeof(dataFields.VerticalVelPID));
	} else if(fieldID == "ThrustLimits") {
		memset( &(dataFields.ThrustLimits), 0, sizeof(dataFields.ThrustLimits));
		memcpy( &(dataFields.ThrustLimits), dataIn, sizeof(dataFields.ThrustLimits));
	} else if(fieldID == "VelocityFeedforward") {
		memset( &(dataFields.VelocityFeedforward), 0, sizeof(dataFields.VelocityFeedforward));
		memcpy( &(dataFields.VelocityFeedforward), dataIn, sizeof(dataFields.VelocityFeedforward));
	} else if(fieldID == "FlyawayEmergencyFallbackTriggerTime") {
		memset( &(dataFields.FlyawayEmergencyFallbackTriggerTime), 0, sizeof(dataFields.FlyawayEmergencyFallbackTriggerTime));
		memcpy( &(dataFields.FlyawayEmergencyFallbackTriggerTime), dataIn, sizeof(dataFields.FlyawayEmergencyFallbackTriggerTime));
	} else if(fieldID == "EmergencyFallbackAttitude") {
		memset( &(dataFields.EmergencyFallbackAttitude), 0, sizeof(dataFields.EmergencyFallbackAttitude));
		memcpy( &(dataFields.EmergencyFallbackAttitude), dataIn, sizeof(dataFields.EmergencyFallbackAttitude));
	} else if(fieldID == "EmergencyFallbackYawRate") {
		memset( &(dataFields.EmergencyFallbackYawRate), 0, sizeof(dataFields.EmergencyFallbackYawRate));
		memcpy( &(dataFields.EmergencyFallbackYawRate), dataIn, sizeof(dataFields.EmergencyFallbackYawRate));
	} else if(fieldID == "MaxRollPitch") {
		memset( &(dataFields.MaxRollPitch), 0, sizeof(dataFields.MaxRollPitch));
		memcpy( &(dataFields.MaxRollPitch), dataIn, sizeof(dataFields.MaxRollPitch));
	} else if(fieldID == "BrakeRate") {
		memset( &(dataFields.BrakeRate), 0, sizeof(dataFields.BrakeRate));
		memcpy( &(dataFields.BrakeRate), dataIn, sizeof(dataFields.BrakeRate));
	} else if(fieldID == "BrakeMaxPitch") {
		memset( &(dataFields.BrakeMaxPitch), 0, sizeof(dataFields.BrakeMaxPitch));
		memcpy( &(dataFields.BrakeMaxPitch), dataIn, sizeof(dataFields.BrakeMaxPitch));
	} else if(fieldID == "BrakeHorizontalVelPID") {
		memset( &(dataFields.BrakeHorizontalVelPID), 0, sizeof(dataFields.BrakeHorizontalVelPID));
		memcpy( &(dataFields.BrakeHorizontalVelPID), dataIn, sizeof(dataFields.BrakeHorizontalVelPID));
	} else if(fieldID == "BrakeVelocityFeedforward") {
		memset( &(dataFields.BrakeVelocityFeedforward), 0, sizeof(dataFields.BrakeVelocityFeedforward));
		memcpy( &(dataFields.BrakeVelocityFeedforward), dataIn, sizeof(dataFields.BrakeVelocityFeedforward));
	} else if(fieldID == "UpdatePeriod") {
		memset( &(dataFields.UpdatePeriod), 0, sizeof(dataFields.UpdatePeriod));
		memcpy( &(dataFields.UpdatePeriod), dataIn, sizeof(dataFields.UpdatePeriod));
	} else if(fieldID == "TreatCustomCraftAs") {
		memset( &(dataFields.TreatCustomCraftAs), 0, sizeof(dataFields.TreatCustomCraftAs));
		memcpy( &(dataFields.TreatCustomCraftAs), dataIn, sizeof(dataFields.TreatCustomCraftAs));
	} else if(fieldID == "ThrustControl") {
		memset( &(dataFields.ThrustControl), 0, sizeof(dataFields.ThrustControl));
		memcpy( &(dataFields.ThrustControl), dataIn, sizeof(dataFields.ThrustControl));
	} else if(fieldID == "YawControl") {
		memset( &(dataFields.YawControl), 0, sizeof(dataFields.YawControl));
		memcpy( &(dataFields.YawControl), dataIn, sizeof(dataFields.YawControl));
	} else if(fieldID == "FlyawayEmergencyFallback") {
		memset( &(dataFields.FlyawayEmergencyFallback), 0, sizeof(dataFields.FlyawayEmergencyFallback));
		memcpy( &(dataFields.FlyawayEmergencyFallback), dataIn, sizeof(dataFields.FlyawayEmergencyFallback));
	}
	return 0;
}

int VtolPathFollowerSettings::UAVObjGetDataField(char *dataOut, const std::string fieldID){
	if(fieldID == "HorizontalVelMax") {
		memcpy( dataOut, &(dataFields.HorizontalVelMax), sizeof(dataFields.HorizontalVelMax));
	} else if(fieldID == "VerticalVelMax") {
		memcpy( dataOut, &(dataFields.VerticalVelMax), sizeof(dataFields.VerticalVelMax));
	} else if(fieldID == "CourseFeedForward") {
		memcpy( dataOut, &(dataFields.CourseFeedForward), sizeof(dataFields.CourseFeedForward));
	} else if(fieldID == "HorizontalPosP") {
		memcpy( dataOut, &(dataFields.HorizontalPosP), sizeof(dataFields.HorizontalPosP));
	} else if(fieldID == "VerticalPosP") {
		memcpy( dataOut, &(dataFields.VerticalPosP), sizeof(dataFields.VerticalPosP));
	} else if(fieldID == "HorizontalVelPID") {
		memcpy( dataOut, &(dataFields.HorizontalVelPID), sizeof(dataFields.HorizontalVelPID));
	} else if(fieldID == "VerticalVelPID") {
		memcpy( dataOut, &(dataFields.VerticalVelPID), sizeof(dataFields.VerticalVelPID));
	} else if(fieldID == "ThrustLimits") {
		memcpy( dataOut, &(dataFields.ThrustLimits), sizeof(dataFields.ThrustLimits));
	} else if(fieldID == "VelocityFeedforward") {
		memcpy( dataOut, &(dataFields.VelocityFeedforward), sizeof(dataFields.VelocityFeedforward));
	} else if(fieldID == "FlyawayEmergencyFallbackTriggerTime") {
		memcpy( dataOut, &(dataFields.FlyawayEmergencyFallbackTriggerTime), sizeof(dataFields.FlyawayEmergencyFallbackTriggerTime));
	} else if(fieldID == "EmergencyFallbackAttitude") {
		memcpy( dataOut, &(dataFields.EmergencyFallbackAttitude), sizeof(dataFields.EmergencyFallbackAttitude));
	} else if(fieldID == "EmergencyFallbackYawRate") {
		memcpy( dataOut, &(dataFields.EmergencyFallbackYawRate), sizeof(dataFields.EmergencyFallbackYawRate));
	} else if(fieldID == "MaxRollPitch") {
		memcpy( dataOut, &(dataFields.MaxRollPitch), sizeof(dataFields.MaxRollPitch));
	} else if(fieldID == "BrakeRate") {
		memcpy( dataOut, &(dataFields.BrakeRate), sizeof(dataFields.BrakeRate));
	} else if(fieldID == "BrakeMaxPitch") {
		memcpy( dataOut, &(dataFields.BrakeMaxPitch), sizeof(dataFields.BrakeMaxPitch));
	} else if(fieldID == "BrakeHorizontalVelPID") {
		memcpy( dataOut, &(dataFields.BrakeHorizontalVelPID), sizeof(dataFields.BrakeHorizontalVelPID));
	} else if(fieldID == "BrakeVelocityFeedforward") {
		memcpy( dataOut, &(dataFields.BrakeVelocityFeedforward), sizeof(dataFields.BrakeVelocityFeedforward));
	} else if(fieldID == "UpdatePeriod") {
		memcpy( dataOut, &(dataFields.UpdatePeriod), sizeof(dataFields.UpdatePeriod));
	} else if(fieldID == "TreatCustomCraftAs") {
		memcpy( dataOut, &(dataFields.TreatCustomCraftAs), sizeof(dataFields.TreatCustomCraftAs));
	} else if(fieldID == "ThrustControl") {
		memcpy( dataOut, &(dataFields.ThrustControl), sizeof(dataFields.ThrustControl));
	} else if(fieldID == "YawControl") {
		memcpy( dataOut, &(dataFields.YawControl), sizeof(dataFields.YawControl));
	} else if(fieldID == "FlyawayEmergencyFallback") {
		memcpy( dataOut, &(dataFields.FlyawayEmergencyFallback), sizeof(dataFields.FlyawayEmergencyFallback));
	}
	return 0;
}

int VtolPathFollowerSettings::UAVObjUnpack(const unsigned char *dataIn){
	memcpy(&dataFields, dataIn, NUMBYTES);
	return 0;
}

int VtolPathFollowerSettings::UAVObjPack(unsigned char *dataOut) {
	memcpy(dataOut, &dataFields, NUMBYTES);
	return 0;
}

unsigned short VtolPathFollowerSettings::UAVObjGetInstance() const {
	return instance;
}
unsigned short VtolPathFollowerSettings::UAVObjGetNumBytes() const {
	return sizeof(dataFields);
}
unsigned short VtolPathFollowerSettings::UAVObjGetNumInstances() const {
	return numInstances;
}

std::string VtolPathFollowerSettings::prettyPrint() {
	std::stringstream ss;
	ss << "\nPrinting object: vtolpathfollowersettings" << std::endl;
	ss << "\tHorizontalVelMax: " << dataFields.HorizontalVelMax << std::endl;
	ss << "\tVerticalVelMax: " << dataFields.VerticalVelMax << std::endl;
	ss << "\tCourseFeedForward: " << dataFields.CourseFeedForward << std::endl;
	ss << "\tHorizontalPosP: " << dataFields.HorizontalPosP << std::endl;
	ss << "\tVerticalPosP: " << dataFields.VerticalPosP << std::endl;
	ss << "\tHorizontalVelPID: " << dataFields.HorizontalVelPID << std::endl;
	ss << "\tVerticalVelPID: " << dataFields.VerticalVelPID << std::endl;
	ss << "\tThrustLimits: " << dataFields.ThrustLimits << std::endl;
	ss << "\tVelocityFeedforward: " << dataFields.VelocityFeedforward << std::endl;
	ss << "\tFlyawayEmergencyFallbackTriggerTime: " << dataFields.FlyawayEmergencyFallbackTriggerTime << std::endl;
	ss << "\tEmergencyFallbackAttitude: " << dataFields.EmergencyFallbackAttitude << std::endl;
	ss << "\tEmergencyFallbackYawRate: " << dataFields.EmergencyFallbackYawRate << std::endl;
	ss << "\tMaxRollPitch: " << dataFields.MaxRollPitch << std::endl;
	ss << "\tBrakeRate: " << dataFields.BrakeRate << std::endl;
	ss << "\tBrakeMaxPitch: " << dataFields.BrakeMaxPitch << std::endl;
	ss << "\tBrakeHorizontalVelPID: " << dataFields.BrakeHorizontalVelPID << std::endl;
	ss << "\tBrakeVelocityFeedforward: " << dataFields.BrakeVelocityFeedforward << std::endl;
	ss << "\tUpdatePeriod: " << dataFields.UpdatePeriod << std::endl;
	ss << "\tTreatCustomCraftAs: " << dataFields.TreatCustomCraftAs << std::endl;
	ss << "\tThrustControl: " << dataFields.ThrustControl << std::endl;
	ss << "\tYawControl: " << dataFields.YawControl << std::endl;
	ss << "\tFlyawayEmergencyFallback: " << dataFields.FlyawayEmergencyFallback << std::endl;

	return ss.str();
}

/*/***/
/* * Initialize object fields with the default values.*/
/* * If a default value is not specified the object fields*/
/* * will be initialized to zero.*/
/* */
/*void VtolPathFollowerSettings::setDefaultFieldValues()*/
/*{*/
/*    data.HorizontalVelMax = 10;
    data.VerticalVelMax = 4;
    data.CourseFeedForward = 1;
    data.HorizontalPosP = 0.25;
    data.VerticalPosP = 0.4;
    data.HorizontalVelPID[0] = 8;
    data.HorizontalVelPID[1] = 0.5;
    data.HorizontalVelPID[2] = 0;
    data.HorizontalVelPID[3] = 15;
    data.VerticalVelPID[0] = 0.1;
    data.VerticalVelPID[1] = 0.01;
    data.VerticalVelPID[2] = 0;
    data.VerticalVelPID[3] = 1;
    data.ThrustLimits[0] = 0.2;
    data.ThrustLimits[1] = 0.5;
    data.ThrustLimits[2] = 0.9;
    data.VelocityFeedforward = 2;
    data.FlyawayEmergencyFallbackTriggerTime = 10;
    data.EmergencyFallbackAttitude[0] = 0;
    data.EmergencyFallbackAttitude[1] = -20;
    data.EmergencyFallbackYawRate[0] = 2;
    data.EmergencyFallbackYawRate[1] = 30;
    data.MaxRollPitch = 25;
    data.BrakeRate = 2.5;
    data.BrakeMaxPitch = 25;
    data.BrakeHorizontalVelPID[0] = 12;
    data.BrakeHorizontalVelPID[1] = 0;
    data.BrakeHorizontalVelPID[2] = 0.03;
    data.BrakeHorizontalVelPID[3] = 15;
    data.BrakeVelocityFeedforward = 0;
    data.UpdatePeriod = 50;
    data.TreatCustomCraftAs = 0;
    data.ThrustControl = 0;
    data.YawControl = 0;
    data.FlyawayEmergencyFallback = 1;
*/
/*}*/

/*/***/
/* * Get the object data fields*/
/* */
/*VtolPathFollowerSettings::DataFields VtolPathFollowerSettings::getData()*/
/*{*/
/*    QMutexLocker locker(mutex);*/
/*    return data;*/
/*}*/

/*/***/
/* * Set the object data fields*/
/* */
/*void VtolPathFollowerSettings::setData(const DataFields& data)*/
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

/*void VtolPathFollowerSettings::emitNotifications()*/
/*{*/
/*            //if (data.HorizontalVelMax != oldData.HorizontalVelMax)
            emit HorizontalVelMaxChanged(data.HorizontalVelMax);
        //if (data.VerticalVelMax != oldData.VerticalVelMax)
            emit VerticalVelMaxChanged(data.VerticalVelMax);
        //if (data.CourseFeedForward != oldData.CourseFeedForward)
            emit CourseFeedForwardChanged(data.CourseFeedForward);
        //if (data.HorizontalPosP != oldData.HorizontalPosP)
            emit HorizontalPosPChanged(data.HorizontalPosP);
        //if (data.VerticalPosP != oldData.VerticalPosP)
            emit VerticalPosPChanged(data.VerticalPosP);
        //if (data.VelocityFeedforward != oldData.VelocityFeedforward)
            emit VelocityFeedforwardChanged(data.VelocityFeedforward);
        //if (data.FlyawayEmergencyFallbackTriggerTime != oldData.FlyawayEmergencyFallbackTriggerTime)
            emit FlyawayEmergencyFallbackTriggerTimeChanged(data.FlyawayEmergencyFallbackTriggerTime);
        //if (data.MaxRollPitch != oldData.MaxRollPitch)
            emit MaxRollPitchChanged(data.MaxRollPitch);
        //if (data.BrakeRate != oldData.BrakeRate)
            emit BrakeRateChanged(data.BrakeRate);
        //if (data.BrakeMaxPitch != oldData.BrakeMaxPitch)
            emit BrakeMaxPitchChanged(data.BrakeMaxPitch);
        //if (data.BrakeVelocityFeedforward != oldData.BrakeVelocityFeedforward)
            emit BrakeVelocityFeedforwardChanged(data.BrakeVelocityFeedforward);
        //if (data.UpdatePeriod != oldData.UpdatePeriod)
            emit UpdatePeriodChanged(data.UpdatePeriod);
        //if (data.TreatCustomCraftAs != oldData.TreatCustomCraftAs)
            emit TreatCustomCraftAsChanged(data.TreatCustomCraftAs);
        //if (data.ThrustControl != oldData.ThrustControl)
            emit ThrustControlChanged(data.ThrustControl);
        //if (data.YawControl != oldData.YawControl)
            emit YawControlChanged(data.YawControl);
        //if (data.FlyawayEmergencyFallback != oldData.FlyawayEmergencyFallback)
            emit FlyawayEmergencyFallbackChanged(data.FlyawayEmergencyFallback);
*/
/*}*/

/*/***/
/* * Create a clone of this object, a new instance ID must be specified.*/
/* * Do not use this function directly to create new instances, the*/
/* * UAVObjectManager should be used instead.*/
/* */
/*UAVDataObject *VtolPathFollowerSettings::clone(unsigned int instID)*/
/*{*/
/*    VtolPathFollowerSettings *obj = new VtolPathFollowerSettings();*/
/*    obj->initialize(instID, this->getMetaObject());*/
/*    return obj;*/
/*}*/

/*/***/
/* * Create a clone of this object only to be used to retrieve defaults*/
/* */
/*UAVDataObject *VtolPathFollowerSettings::dirtyClone()*/
/*{*/
/*    VtolPathFollowerSettings *obj = new VtolPathFollowerSettings();*/
/*    return obj;*/
/*}*/

/*/***/
/* * Static function to retrieve an instance of the object.*/
/* */
/*VtolPathFollowerSettings *VtolPathFollowerSettings::GetInstance(UAVObjectManager *objMngr, unsigned int instID)*/
/*{*/
/*    return dynamic_cast<VtolPathFollowerSettings *>(objMngr->getObject(VtolPathFollowerSettings::OBJID, instID));*/
/*}*/

/*float VtolPathFollowerSettings::getHorizontalVelMax() const
{
   QMutexLocker locker(mutex);
   return data.HorizontalVelMax;
}
void VtolPathFollowerSettings::setHorizontalVelMax(float value)
{
   mutex->lock();
   bool changed = data.HorizontalVelMax != value;
   data.HorizontalVelMax = value;
   mutex->unlock();
   if (changed) emit HorizontalVelMaxChanged(value);
}

float VtolPathFollowerSettings::getVerticalVelMax() const
{
   QMutexLocker locker(mutex);
   return data.VerticalVelMax;
}
void VtolPathFollowerSettings::setVerticalVelMax(float value)
{
   mutex->lock();
   bool changed = data.VerticalVelMax != value;
   data.VerticalVelMax = value;
   mutex->unlock();
   if (changed) emit VerticalVelMaxChanged(value);
}

float VtolPathFollowerSettings::getCourseFeedForward() const
{
   QMutexLocker locker(mutex);
   return data.CourseFeedForward;
}
void VtolPathFollowerSettings::setCourseFeedForward(float value)
{
   mutex->lock();
   bool changed = data.CourseFeedForward != value;
   data.CourseFeedForward = value;
   mutex->unlock();
   if (changed) emit CourseFeedForwardChanged(value);
}

float VtolPathFollowerSettings::getHorizontalPosP() const
{
   QMutexLocker locker(mutex);
   return data.HorizontalPosP;
}
void VtolPathFollowerSettings::setHorizontalPosP(float value)
{
   mutex->lock();
   bool changed = data.HorizontalPosP != value;
   data.HorizontalPosP = value;
   mutex->unlock();
   if (changed) emit HorizontalPosPChanged(value);
}

float VtolPathFollowerSettings::getVerticalPosP() const
{
   QMutexLocker locker(mutex);
   return data.VerticalPosP;
}
void VtolPathFollowerSettings::setVerticalPosP(float value)
{
   mutex->lock();
   bool changed = data.VerticalPosP != value;
   data.VerticalPosP = value;
   mutex->unlock();
   if (changed) emit VerticalPosPChanged(value);
}

float VtolPathFollowerSettings::getHorizontalVelPID(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.HorizontalVelPID[index];
}
void VtolPathFollowerSettings::setHorizontalVelPID(unsigned int index, float value)
{
   mutex->lock();
   bool changed = data.HorizontalVelPID[index] != value;
   data.HorizontalVelPID[index] = value;
   mutex->unlock();
   if (changed) emit HorizontalVelPIDChanged(index,value);
}

float VtolPathFollowerSettings::getVerticalVelPID(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.VerticalVelPID[index];
}
void VtolPathFollowerSettings::setVerticalVelPID(unsigned int index, float value)
{
   mutex->lock();
   bool changed = data.VerticalVelPID[index] != value;
   data.VerticalVelPID[index] = value;
   mutex->unlock();
   if (changed) emit VerticalVelPIDChanged(index,value);
}

float VtolPathFollowerSettings::getThrustLimits(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.ThrustLimits[index];
}
void VtolPathFollowerSettings::setThrustLimits(unsigned int index, float value)
{
   mutex->lock();
   bool changed = data.ThrustLimits[index] != value;
   data.ThrustLimits[index] = value;
   mutex->unlock();
   if (changed) emit ThrustLimitsChanged(index,value);
}

float VtolPathFollowerSettings::getVelocityFeedforward() const
{
   QMutexLocker locker(mutex);
   return data.VelocityFeedforward;
}
void VtolPathFollowerSettings::setVelocityFeedforward(float value)
{
   mutex->lock();
   bool changed = data.VelocityFeedforward != value;
   data.VelocityFeedforward = value;
   mutex->unlock();
   if (changed) emit VelocityFeedforwardChanged(value);
}

float VtolPathFollowerSettings::getFlyawayEmergencyFallbackTriggerTime() const
{
   QMutexLocker locker(mutex);
   return data.FlyawayEmergencyFallbackTriggerTime;
}
void VtolPathFollowerSettings::setFlyawayEmergencyFallbackTriggerTime(float value)
{
   mutex->lock();
   bool changed = data.FlyawayEmergencyFallbackTriggerTime != value;
   data.FlyawayEmergencyFallbackTriggerTime = value;
   mutex->unlock();
   if (changed) emit FlyawayEmergencyFallbackTriggerTimeChanged(value);
}

float VtolPathFollowerSettings::getEmergencyFallbackAttitude(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.EmergencyFallbackAttitude[index];
}
void VtolPathFollowerSettings::setEmergencyFallbackAttitude(unsigned int index, float value)
{
   mutex->lock();
   bool changed = data.EmergencyFallbackAttitude[index] != value;
   data.EmergencyFallbackAttitude[index] = value;
   mutex->unlock();
   if (changed) emit EmergencyFallbackAttitudeChanged(index,value);
}

float VtolPathFollowerSettings::getEmergencyFallbackYawRate(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.EmergencyFallbackYawRate[index];
}
void VtolPathFollowerSettings::setEmergencyFallbackYawRate(unsigned int index, float value)
{
   mutex->lock();
   bool changed = data.EmergencyFallbackYawRate[index] != value;
   data.EmergencyFallbackYawRate[index] = value;
   mutex->unlock();
   if (changed) emit EmergencyFallbackYawRateChanged(index,value);
}

float VtolPathFollowerSettings::getMaxRollPitch() const
{
   QMutexLocker locker(mutex);
   return data.MaxRollPitch;
}
void VtolPathFollowerSettings::setMaxRollPitch(float value)
{
   mutex->lock();
   bool changed = data.MaxRollPitch != value;
   data.MaxRollPitch = value;
   mutex->unlock();
   if (changed) emit MaxRollPitchChanged(value);
}

float VtolPathFollowerSettings::getBrakeRate() const
{
   QMutexLocker locker(mutex);
   return data.BrakeRate;
}
void VtolPathFollowerSettings::setBrakeRate(float value)
{
   mutex->lock();
   bool changed = data.BrakeRate != value;
   data.BrakeRate = value;
   mutex->unlock();
   if (changed) emit BrakeRateChanged(value);
}

float VtolPathFollowerSettings::getBrakeMaxPitch() const
{
   QMutexLocker locker(mutex);
   return data.BrakeMaxPitch;
}
void VtolPathFollowerSettings::setBrakeMaxPitch(float value)
{
   mutex->lock();
   bool changed = data.BrakeMaxPitch != value;
   data.BrakeMaxPitch = value;
   mutex->unlock();
   if (changed) emit BrakeMaxPitchChanged(value);
}

float VtolPathFollowerSettings::getBrakeHorizontalVelPID(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.BrakeHorizontalVelPID[index];
}
void VtolPathFollowerSettings::setBrakeHorizontalVelPID(unsigned int index, float value)
{
   mutex->lock();
   bool changed = data.BrakeHorizontalVelPID[index] != value;
   data.BrakeHorizontalVelPID[index] = value;
   mutex->unlock();
   if (changed) emit BrakeHorizontalVelPIDChanged(index,value);
}

float VtolPathFollowerSettings::getBrakeVelocityFeedforward() const
{
   QMutexLocker locker(mutex);
   return data.BrakeVelocityFeedforward;
}
void VtolPathFollowerSettings::setBrakeVelocityFeedforward(float value)
{
   mutex->lock();
   bool changed = data.BrakeVelocityFeedforward != value;
   data.BrakeVelocityFeedforward = value;
   mutex->unlock();
   if (changed) emit BrakeVelocityFeedforwardChanged(value);
}

unsigned short int VtolPathFollowerSettings::getUpdatePeriod() const
{
   QMutexLocker locker(mutex);
   return data.UpdatePeriod;
}
void VtolPathFollowerSettings::setUpdatePeriod(unsigned short int value)
{
   mutex->lock();
   bool changed = data.UpdatePeriod != value;
   data.UpdatePeriod = value;
   mutex->unlock();
   if (changed) emit UpdatePeriodChanged(value);
}

unsigned char VtolPathFollowerSettings::getTreatCustomCraftAs() const
{
   QMutexLocker locker(mutex);
   return data.TreatCustomCraftAs;
}
void VtolPathFollowerSettings::setTreatCustomCraftAs(unsigned char value)
{
   mutex->lock();
   bool changed = data.TreatCustomCraftAs != value;
   data.TreatCustomCraftAs = value;
   mutex->unlock();
   if (changed) emit TreatCustomCraftAsChanged(value);
}

unsigned char VtolPathFollowerSettings::getThrustControl() const
{
   QMutexLocker locker(mutex);
   return data.ThrustControl;
}
void VtolPathFollowerSettings::setThrustControl(unsigned char value)
{
   mutex->lock();
   bool changed = data.ThrustControl != value;
   data.ThrustControl = value;
   mutex->unlock();
   if (changed) emit ThrustControlChanged(value);
}

unsigned char VtolPathFollowerSettings::getYawControl() const
{
   QMutexLocker locker(mutex);
   return data.YawControl;
}
void VtolPathFollowerSettings::setYawControl(unsigned char value)
{
   mutex->lock();
   bool changed = data.YawControl != value;
   data.YawControl = value;
   mutex->unlock();
   if (changed) emit YawControlChanged(value);
}

unsigned char VtolPathFollowerSettings::getFlyawayEmergencyFallback() const
{
   QMutexLocker locker(mutex);
   return data.FlyawayEmergencyFallback;
}
void VtolPathFollowerSettings::setFlyawayEmergencyFallback(unsigned char value)
{
   mutex->lock();
   bool changed = data.FlyawayEmergencyFallback != value;
   data.FlyawayEmergencyFallback = value;
   mutex->unlock();
   if (changed) emit FlyawayEmergencyFallbackChanged(value);
}

*/
