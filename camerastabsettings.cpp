/**
 ******************************************************************************
 *
 * @file       camerastabsettings.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: camerastabsettings.xml.
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

#include "camerastabsettings.h"

int CameraStabSettings::numInstances = 0;

/**
 * Constructor
 */
CameraStabSettings::CameraStabSettings(UAVObjManager* manager): UAVObject(manager, 0xEA58E53A, "CameraStabSettings", "Settings for the @ref CameraStab module", "Control", 1, 1, ACCESS_READWRITE, ACCESS_READWRITE, 1, 1, UPDATEMODE_ONCHANGE, UPDATEMODE_ONCHANGE, 0, 0, 0)
{

}

int CameraStabSettings::UAVObjSetDataField(const char *dataIn, const std::string fieldID){
	if(fieldID == "MaxAxisLockRate") {
		memset( &(dataFields.MaxAxisLockRate), 0, sizeof(dataFields.MaxAxisLockRate));
		memcpy( &(dataFields.MaxAxisLockRate), dataIn, sizeof(dataFields.MaxAxisLockRate));
	} else if(fieldID == "MaxAccel") {
		memset( &(dataFields.MaxAccel), 0, sizeof(dataFields.MaxAccel));
		memcpy( &(dataFields.MaxAccel), dataIn, sizeof(dataFields.MaxAccel));
	} else if(fieldID == "Input") {
		memset( &(dataFields.Input), 0, sizeof(dataFields.Input));
		memcpy( &(dataFields.Input), dataIn, sizeof(dataFields.Input));
	} else if(fieldID == "InputRange") {
		memset( &(dataFields.InputRange), 0, sizeof(dataFields.InputRange));
		memcpy( &(dataFields.InputRange), dataIn, sizeof(dataFields.InputRange));
	} else if(fieldID == "InputRate") {
		memset( &(dataFields.InputRate), 0, sizeof(dataFields.InputRate));
		memcpy( &(dataFields.InputRate), dataIn, sizeof(dataFields.InputRate));
	} else if(fieldID == "StabilizationMode") {
		memset( &(dataFields.StabilizationMode), 0, sizeof(dataFields.StabilizationMode));
		memcpy( &(dataFields.StabilizationMode), dataIn, sizeof(dataFields.StabilizationMode));
	} else if(fieldID == "OutputRange") {
		memset( &(dataFields.OutputRange), 0, sizeof(dataFields.OutputRange));
		memcpy( &(dataFields.OutputRange), dataIn, sizeof(dataFields.OutputRange));
	} else if(fieldID == "ResponseTime") {
		memset( &(dataFields.ResponseTime), 0, sizeof(dataFields.ResponseTime));
		memcpy( &(dataFields.ResponseTime), dataIn, sizeof(dataFields.ResponseTime));
	} else if(fieldID == "GimbalType") {
		memset( &(dataFields.GimbalType), 0, sizeof(dataFields.GimbalType));
		memcpy( &(dataFields.GimbalType), dataIn, sizeof(dataFields.GimbalType));
	} else if(fieldID == "FeedForward") {
		memset( &(dataFields.FeedForward), 0, sizeof(dataFields.FeedForward));
		memcpy( &(dataFields.FeedForward), dataIn, sizeof(dataFields.FeedForward));
	} else if(fieldID == "AccelTime") {
		memset( &(dataFields.AccelTime), 0, sizeof(dataFields.AccelTime));
		memcpy( &(dataFields.AccelTime), dataIn, sizeof(dataFields.AccelTime));
	} else if(fieldID == "DecelTime") {
		memset( &(dataFields.DecelTime), 0, sizeof(dataFields.DecelTime));
		memcpy( &(dataFields.DecelTime), dataIn, sizeof(dataFields.DecelTime));
	} else if(fieldID == "Servo1PitchReverse") {
		memset( &(dataFields.Servo1PitchReverse), 0, sizeof(dataFields.Servo1PitchReverse));
		memcpy( &(dataFields.Servo1PitchReverse), dataIn, sizeof(dataFields.Servo1PitchReverse));
	} else if(fieldID == "Servo2PitchReverse") {
		memset( &(dataFields.Servo2PitchReverse), 0, sizeof(dataFields.Servo2PitchReverse));
		memcpy( &(dataFields.Servo2PitchReverse), dataIn, sizeof(dataFields.Servo2PitchReverse));
	}
	return 0;
}

int CameraStabSettings::UAVObjGetDataField(char *dataOut, const std::string fieldID){
	if(fieldID == "MaxAxisLockRate") {
		memcpy( dataOut, &(dataFields.MaxAxisLockRate), sizeof(dataFields.MaxAxisLockRate));
	} else if(fieldID == "MaxAccel") {
		memcpy( dataOut, &(dataFields.MaxAccel), sizeof(dataFields.MaxAccel));
	} else if(fieldID == "Input") {
		memcpy( dataOut, &(dataFields.Input), sizeof(dataFields.Input));
	} else if(fieldID == "InputRange") {
		memcpy( dataOut, &(dataFields.InputRange), sizeof(dataFields.InputRange));
	} else if(fieldID == "InputRate") {
		memcpy( dataOut, &(dataFields.InputRate), sizeof(dataFields.InputRate));
	} else if(fieldID == "StabilizationMode") {
		memcpy( dataOut, &(dataFields.StabilizationMode), sizeof(dataFields.StabilizationMode));
	} else if(fieldID == "OutputRange") {
		memcpy( dataOut, &(dataFields.OutputRange), sizeof(dataFields.OutputRange));
	} else if(fieldID == "ResponseTime") {
		memcpy( dataOut, &(dataFields.ResponseTime), sizeof(dataFields.ResponseTime));
	} else if(fieldID == "GimbalType") {
		memcpy( dataOut, &(dataFields.GimbalType), sizeof(dataFields.GimbalType));
	} else if(fieldID == "FeedForward") {
		memcpy( dataOut, &(dataFields.FeedForward), sizeof(dataFields.FeedForward));
	} else if(fieldID == "AccelTime") {
		memcpy( dataOut, &(dataFields.AccelTime), sizeof(dataFields.AccelTime));
	} else if(fieldID == "DecelTime") {
		memcpy( dataOut, &(dataFields.DecelTime), sizeof(dataFields.DecelTime));
	} else if(fieldID == "Servo1PitchReverse") {
		memcpy( dataOut, &(dataFields.Servo1PitchReverse), sizeof(dataFields.Servo1PitchReverse));
	} else if(fieldID == "Servo2PitchReverse") {
		memcpy( dataOut, &(dataFields.Servo2PitchReverse), sizeof(dataFields.Servo2PitchReverse));
	}
	return 0;
}

int CameraStabSettings::UAVObjUnpack(const unsigned char *dataIn){
	memcpy(&dataFields, dataIn, NUMBYTES);
	return 0;
}

int CameraStabSettings::UAVObjPack(unsigned char *dataOut) {
	memcpy(dataOut, &dataFields, NUMBYTES);
	return 0;
}

unsigned short CameraStabSettings::UAVObjGetInstance() const {
	return instance;
}
unsigned short CameraStabSettings::UAVObjGetNumBytes() const {
	return sizeof(dataFields);
}
unsigned short CameraStabSettings::UAVObjGetNumInstances() const {
	return numInstances;
}

std::string CameraStabSettings::prettyPrint() {
	std::stringstream ss;
	ss << "\nPrinting object: camerastabsettings" << std::endl;
	ss << "\tMaxAxisLockRate: " << dataFields.MaxAxisLockRate << std::endl;
	ss << "\tMaxAccel: " << dataFields.MaxAccel << std::endl;
	ss << "\tInput: " << dataFields.Input << std::endl;
	ss << "\tInputRange: " << dataFields.InputRange << std::endl;
	ss << "\tInputRate: " << dataFields.InputRate << std::endl;
	ss << "\tStabilizationMode: " << dataFields.StabilizationMode << std::endl;
	ss << "\tOutputRange: " << dataFields.OutputRange << std::endl;
	ss << "\tResponseTime: " << dataFields.ResponseTime << std::endl;
	ss << "\tGimbalType: " << dataFields.GimbalType << std::endl;
	ss << "\tFeedForward: " << dataFields.FeedForward << std::endl;
	ss << "\tAccelTime: " << dataFields.AccelTime << std::endl;
	ss << "\tDecelTime: " << dataFields.DecelTime << std::endl;
	ss << "\tServo1PitchReverse: " << dataFields.Servo1PitchReverse << std::endl;
	ss << "\tServo2PitchReverse: " << dataFields.Servo2PitchReverse << std::endl;

	return ss.str();
}

/*/***/
/* * Initialize object fields with the default values.*/
/* * If a default value is not specified the object fields*/
/* * will be initialized to zero.*/
/* */
/*void CameraStabSettings::setDefaultFieldValues()*/
/*{*/
/*    data.MaxAxisLockRate = 1;
    data.MaxAccel = 500;
    data.Input[0] = 6;
    data.Input[1] = 6;
    data.Input[2] = 6;
    data.InputRange[0] = 20;
    data.InputRange[1] = 20;
    data.InputRange[2] = 20;
    data.InputRate[0] = 50;
    data.InputRate[1] = 50;
    data.InputRate[2] = 50;
    data.StabilizationMode[0] = 0;
    data.StabilizationMode[1] = 0;
    data.StabilizationMode[2] = 0;
    data.OutputRange[0] = 20;
    data.OutputRange[1] = 20;
    data.OutputRange[2] = 20;
    data.ResponseTime[0] = 0;
    data.ResponseTime[1] = 0;
    data.ResponseTime[2] = 0;
    data.GimbalType = 0;
    data.FeedForward[0] = 0;
    data.FeedForward[1] = 0;
    data.FeedForward[2] = 0;
    data.AccelTime[0] = 5;
    data.AccelTime[1] = 5;
    data.AccelTime[2] = 5;
    data.DecelTime[0] = 5;
    data.DecelTime[1] = 5;
    data.DecelTime[2] = 5;
    data.Servo1PitchReverse = 0;
    data.Servo2PitchReverse = 0;
*/
/*}*/

/*/***/
/* * Get the object data fields*/
/* */
/*CameraStabSettings::DataFields CameraStabSettings::getData()*/
/*{*/
/*    QMutexLocker locker(mutex);*/
/*    return data;*/
/*}*/

/*/***/
/* * Set the object data fields*/
/* */
/*void CameraStabSettings::setData(const DataFields& data)*/
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

/*void CameraStabSettings::emitNotifications()*/
/*{*/
/*            //if (data.MaxAxisLockRate != oldData.MaxAxisLockRate)
            emit MaxAxisLockRateChanged(data.MaxAxisLockRate);
        //if (data.MaxAccel != oldData.MaxAccel)
            emit MaxAccelChanged(data.MaxAccel);
        //if (data.GimbalType != oldData.GimbalType)
            emit GimbalTypeChanged(data.GimbalType);
        //if (data.Servo1PitchReverse != oldData.Servo1PitchReverse)
            emit Servo1PitchReverseChanged(data.Servo1PitchReverse);
        //if (data.Servo2PitchReverse != oldData.Servo2PitchReverse)
            emit Servo2PitchReverseChanged(data.Servo2PitchReverse);
*/
/*}*/

/*/***/
/* * Create a clone of this object, a new instance ID must be specified.*/
/* * Do not use this function directly to create new instances, the*/
/* * UAVObjectManager should be used instead.*/
/* */
/*UAVDataObject *CameraStabSettings::clone(unsigned int instID)*/
/*{*/
/*    CameraStabSettings *obj = new CameraStabSettings();*/
/*    obj->initialize(instID, this->getMetaObject());*/
/*    return obj;*/
/*}*/

/*/***/
/* * Create a clone of this object only to be used to retrieve defaults*/
/* */
/*UAVDataObject *CameraStabSettings::dirtyClone()*/
/*{*/
/*    CameraStabSettings *obj = new CameraStabSettings();*/
/*    return obj;*/
/*}*/

/*/***/
/* * Static function to retrieve an instance of the object.*/
/* */
/*CameraStabSettings *CameraStabSettings::GetInstance(UAVObjectManager *objMngr, unsigned int instID)*/
/*{*/
/*    return dynamic_cast<CameraStabSettings *>(objMngr->getObject(CameraStabSettings::OBJID, instID));*/
/*}*/

/*float CameraStabSettings::getMaxAxisLockRate() const
{
   QMutexLocker locker(mutex);
   return data.MaxAxisLockRate;
}
void CameraStabSettings::setMaxAxisLockRate(float value)
{
   mutex->lock();
   bool changed = data.MaxAxisLockRate != value;
   data.MaxAxisLockRate = value;
   mutex->unlock();
   if (changed) emit MaxAxisLockRateChanged(value);
}

unsigned short int CameraStabSettings::getMaxAccel() const
{
   QMutexLocker locker(mutex);
   return data.MaxAccel;
}
void CameraStabSettings::setMaxAccel(unsigned short int value)
{
   mutex->lock();
   bool changed = data.MaxAccel != value;
   data.MaxAccel = value;
   mutex->unlock();
   if (changed) emit MaxAccelChanged(value);
}

unsigned char CameraStabSettings::getInput(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.Input[index];
}
void CameraStabSettings::setInput(unsigned int index, unsigned char value)
{
   mutex->lock();
   bool changed = data.Input[index] != value;
   data.Input[index] = value;
   mutex->unlock();
   if (changed) emit InputChanged(index,value);
}

unsigned char CameraStabSettings::getInputRange(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.InputRange[index];
}
void CameraStabSettings::setInputRange(unsigned int index, unsigned char value)
{
   mutex->lock();
   bool changed = data.InputRange[index] != value;
   data.InputRange[index] = value;
   mutex->unlock();
   if (changed) emit InputRangeChanged(index,value);
}

unsigned char CameraStabSettings::getInputRate(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.InputRate[index];
}
void CameraStabSettings::setInputRate(unsigned int index, unsigned char value)
{
   mutex->lock();
   bool changed = data.InputRate[index] != value;
   data.InputRate[index] = value;
   mutex->unlock();
   if (changed) emit InputRateChanged(index,value);
}

unsigned char CameraStabSettings::getStabilizationMode(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.StabilizationMode[index];
}
void CameraStabSettings::setStabilizationMode(unsigned int index, unsigned char value)
{
   mutex->lock();
   bool changed = data.StabilizationMode[index] != value;
   data.StabilizationMode[index] = value;
   mutex->unlock();
   if (changed) emit StabilizationModeChanged(index,value);
}

unsigned char CameraStabSettings::getOutputRange(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.OutputRange[index];
}
void CameraStabSettings::setOutputRange(unsigned int index, unsigned char value)
{
   mutex->lock();
   bool changed = data.OutputRange[index] != value;
   data.OutputRange[index] = value;
   mutex->unlock();
   if (changed) emit OutputRangeChanged(index,value);
}

unsigned char CameraStabSettings::getResponseTime(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.ResponseTime[index];
}
void CameraStabSettings::setResponseTime(unsigned int index, unsigned char value)
{
   mutex->lock();
   bool changed = data.ResponseTime[index] != value;
   data.ResponseTime[index] = value;
   mutex->unlock();
   if (changed) emit ResponseTimeChanged(index,value);
}

unsigned char CameraStabSettings::getGimbalType() const
{
   QMutexLocker locker(mutex);
   return data.GimbalType;
}
void CameraStabSettings::setGimbalType(unsigned char value)
{
   mutex->lock();
   bool changed = data.GimbalType != value;
   data.GimbalType = value;
   mutex->unlock();
   if (changed) emit GimbalTypeChanged(value);
}

unsigned char CameraStabSettings::getFeedForward(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.FeedForward[index];
}
void CameraStabSettings::setFeedForward(unsigned int index, unsigned char value)
{
   mutex->lock();
   bool changed = data.FeedForward[index] != value;
   data.FeedForward[index] = value;
   mutex->unlock();
   if (changed) emit FeedForwardChanged(index,value);
}

unsigned char CameraStabSettings::getAccelTime(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.AccelTime[index];
}
void CameraStabSettings::setAccelTime(unsigned int index, unsigned char value)
{
   mutex->lock();
   bool changed = data.AccelTime[index] != value;
   data.AccelTime[index] = value;
   mutex->unlock();
   if (changed) emit AccelTimeChanged(index,value);
}

unsigned char CameraStabSettings::getDecelTime(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.DecelTime[index];
}
void CameraStabSettings::setDecelTime(unsigned int index, unsigned char value)
{
   mutex->lock();
   bool changed = data.DecelTime[index] != value;
   data.DecelTime[index] = value;
   mutex->unlock();
   if (changed) emit DecelTimeChanged(index,value);
}

unsigned char CameraStabSettings::getServo1PitchReverse() const
{
   QMutexLocker locker(mutex);
   return data.Servo1PitchReverse;
}
void CameraStabSettings::setServo1PitchReverse(unsigned char value)
{
   mutex->lock();
   bool changed = data.Servo1PitchReverse != value;
   data.Servo1PitchReverse = value;
   mutex->unlock();
   if (changed) emit Servo1PitchReverseChanged(value);
}

unsigned char CameraStabSettings::getServo2PitchReverse() const
{
   QMutexLocker locker(mutex);
   return data.Servo2PitchReverse;
}
void CameraStabSettings::setServo2PitchReverse(unsigned char value)
{
   mutex->lock();
   bool changed = data.Servo2PitchReverse != value;
   data.Servo2PitchReverse = value;
   mutex->unlock();
   if (changed) emit Servo2PitchReverseChanged(value);
}

*/
