/**
 ******************************************************************************
 *
 * @file       stabilizationsettingsbank3.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: stabilizationsettingsbank3.xml.
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

#include "stabilizationsettingsbank3.h"

int StabilizationSettingsBank3::numInstances = 0;

/**
 * Constructor
 */
StabilizationSettingsBank3::StabilizationSettingsBank3(UAVObjManager* manager): UAVObject(manager, 0xC02DAA6A, "StabilizationSettingsBank3", "Currently selected PID bank", "Control", 1, 1, ACCESS_READWRITE, ACCESS_READWRITE, 1, 1, UPDATEMODE_ONCHANGE, UPDATEMODE_ONCHANGE, 0, 0, 0)
{

}

int StabilizationSettingsBank3::UAVObjSetDataField(const char *dataIn, const std::string fieldID){
	if(fieldID == "ManualRate") {
		memset( &(dataFields.ManualRate), 0, sizeof(dataFields.ManualRate));
		memcpy( &(dataFields.ManualRate), dataIn, sizeof(dataFields.ManualRate));
	} else if(fieldID == "MaximumRate") {
		memset( &(dataFields.MaximumRate), 0, sizeof(dataFields.MaximumRate));
		memcpy( &(dataFields.MaximumRate), dataIn, sizeof(dataFields.MaximumRate));
	} else if(fieldID == "RollRatePID") {
		memset( &(dataFields.RollRatePID), 0, sizeof(dataFields.RollRatePID));
		memcpy( &(dataFields.RollRatePID), dataIn, sizeof(dataFields.RollRatePID));
	} else if(fieldID == "PitchRatePID") {
		memset( &(dataFields.PitchRatePID), 0, sizeof(dataFields.PitchRatePID));
		memcpy( &(dataFields.PitchRatePID), dataIn, sizeof(dataFields.PitchRatePID));
	} else if(fieldID == "YawRatePID") {
		memset( &(dataFields.YawRatePID), 0, sizeof(dataFields.YawRatePID));
		memcpy( &(dataFields.YawRatePID), dataIn, sizeof(dataFields.YawRatePID));
	} else if(fieldID == "RollPI") {
		memset( &(dataFields.RollPI), 0, sizeof(dataFields.RollPI));
		memcpy( &(dataFields.RollPI), dataIn, sizeof(dataFields.RollPI));
	} else if(fieldID == "PitchPI") {
		memset( &(dataFields.PitchPI), 0, sizeof(dataFields.PitchPI));
		memcpy( &(dataFields.PitchPI), dataIn, sizeof(dataFields.PitchPI));
	} else if(fieldID == "YawPI") {
		memset( &(dataFields.YawPI), 0, sizeof(dataFields.YawPI));
		memcpy( &(dataFields.YawPI), dataIn, sizeof(dataFields.YawPI));
	} else if(fieldID == "AcroInsanityFactor") {
		memset( &(dataFields.AcroInsanityFactor), 0, sizeof(dataFields.AcroInsanityFactor));
		memcpy( &(dataFields.AcroInsanityFactor), dataIn, sizeof(dataFields.AcroInsanityFactor));
	} else if(fieldID == "ThrustPIDScaleCurve") {
		memset( &(dataFields.ThrustPIDScaleCurve), 0, sizeof(dataFields.ThrustPIDScaleCurve));
		memcpy( &(dataFields.ThrustPIDScaleCurve), dataIn, sizeof(dataFields.ThrustPIDScaleCurve));
	} else if(fieldID == "RollMax") {
		memset( &(dataFields.RollMax), 0, sizeof(dataFields.RollMax));
		memcpy( &(dataFields.RollMax), dataIn, sizeof(dataFields.RollMax));
	} else if(fieldID == "PitchMax") {
		memset( &(dataFields.PitchMax), 0, sizeof(dataFields.PitchMax));
		memcpy( &(dataFields.PitchMax), dataIn, sizeof(dataFields.PitchMax));
	} else if(fieldID == "YawMax") {
		memset( &(dataFields.YawMax), 0, sizeof(dataFields.YawMax));
		memcpy( &(dataFields.YawMax), dataIn, sizeof(dataFields.YawMax));
	} else if(fieldID == "StickExpo") {
		memset( &(dataFields.StickExpo), 0, sizeof(dataFields.StickExpo));
		memcpy( &(dataFields.StickExpo), dataIn, sizeof(dataFields.StickExpo));
	} else if(fieldID == "EnablePiroComp") {
		memset( &(dataFields.EnablePiroComp), 0, sizeof(dataFields.EnablePiroComp));
		memcpy( &(dataFields.EnablePiroComp), dataIn, sizeof(dataFields.EnablePiroComp));
	} else if(fieldID == "EnableThrustPIDScaling") {
		memset( &(dataFields.EnableThrustPIDScaling), 0, sizeof(dataFields.EnableThrustPIDScaling));
		memcpy( &(dataFields.EnableThrustPIDScaling), dataIn, sizeof(dataFields.EnableThrustPIDScaling));
	} else if(fieldID == "ThrustPIDScaleSource") {
		memset( &(dataFields.ThrustPIDScaleSource), 0, sizeof(dataFields.ThrustPIDScaleSource));
		memcpy( &(dataFields.ThrustPIDScaleSource), dataIn, sizeof(dataFields.ThrustPIDScaleSource));
	} else if(fieldID == "ThrustPIDScaleTarget") {
		memset( &(dataFields.ThrustPIDScaleTarget), 0, sizeof(dataFields.ThrustPIDScaleTarget));
		memcpy( &(dataFields.ThrustPIDScaleTarget), dataIn, sizeof(dataFields.ThrustPIDScaleTarget));
	} else if(fieldID == "ThrustPIDScaleAxes") {
		memset( &(dataFields.ThrustPIDScaleAxes), 0, sizeof(dataFields.ThrustPIDScaleAxes));
		memcpy( &(dataFields.ThrustPIDScaleAxes), dataIn, sizeof(dataFields.ThrustPIDScaleAxes));
	}
	return 0;
}

int StabilizationSettingsBank3::UAVObjGetDataField(char *dataOut, const std::string fieldID){
	if(fieldID == "ManualRate") {
		memcpy( dataOut, &(dataFields.ManualRate), sizeof(dataFields.ManualRate));
	} else if(fieldID == "MaximumRate") {
		memcpy( dataOut, &(dataFields.MaximumRate), sizeof(dataFields.MaximumRate));
	} else if(fieldID == "RollRatePID") {
		memcpy( dataOut, &(dataFields.RollRatePID), sizeof(dataFields.RollRatePID));
	} else if(fieldID == "PitchRatePID") {
		memcpy( dataOut, &(dataFields.PitchRatePID), sizeof(dataFields.PitchRatePID));
	} else if(fieldID == "YawRatePID") {
		memcpy( dataOut, &(dataFields.YawRatePID), sizeof(dataFields.YawRatePID));
	} else if(fieldID == "RollPI") {
		memcpy( dataOut, &(dataFields.RollPI), sizeof(dataFields.RollPI));
	} else if(fieldID == "PitchPI") {
		memcpy( dataOut, &(dataFields.PitchPI), sizeof(dataFields.PitchPI));
	} else if(fieldID == "YawPI") {
		memcpy( dataOut, &(dataFields.YawPI), sizeof(dataFields.YawPI));
	} else if(fieldID == "AcroInsanityFactor") {
		memcpy( dataOut, &(dataFields.AcroInsanityFactor), sizeof(dataFields.AcroInsanityFactor));
	} else if(fieldID == "ThrustPIDScaleCurve") {
		memcpy( dataOut, &(dataFields.ThrustPIDScaleCurve), sizeof(dataFields.ThrustPIDScaleCurve));
	} else if(fieldID == "RollMax") {
		memcpy( dataOut, &(dataFields.RollMax), sizeof(dataFields.RollMax));
	} else if(fieldID == "PitchMax") {
		memcpy( dataOut, &(dataFields.PitchMax), sizeof(dataFields.PitchMax));
	} else if(fieldID == "YawMax") {
		memcpy( dataOut, &(dataFields.YawMax), sizeof(dataFields.YawMax));
	} else if(fieldID == "StickExpo") {
		memcpy( dataOut, &(dataFields.StickExpo), sizeof(dataFields.StickExpo));
	} else if(fieldID == "EnablePiroComp") {
		memcpy( dataOut, &(dataFields.EnablePiroComp), sizeof(dataFields.EnablePiroComp));
	} else if(fieldID == "EnableThrustPIDScaling") {
		memcpy( dataOut, &(dataFields.EnableThrustPIDScaling), sizeof(dataFields.EnableThrustPIDScaling));
	} else if(fieldID == "ThrustPIDScaleSource") {
		memcpy( dataOut, &(dataFields.ThrustPIDScaleSource), sizeof(dataFields.ThrustPIDScaleSource));
	} else if(fieldID == "ThrustPIDScaleTarget") {
		memcpy( dataOut, &(dataFields.ThrustPIDScaleTarget), sizeof(dataFields.ThrustPIDScaleTarget));
	} else if(fieldID == "ThrustPIDScaleAxes") {
		memcpy( dataOut, &(dataFields.ThrustPIDScaleAxes), sizeof(dataFields.ThrustPIDScaleAxes));
	}
	return 0;
}

int StabilizationSettingsBank3::UAVObjUnpack(const unsigned char *dataIn){
	memcpy(&dataFields, dataIn, NUMBYTES);
	return 0;
}

int StabilizationSettingsBank3::UAVObjPack(unsigned char *dataOut) {
	memcpy(dataOut, &dataFields, NUMBYTES);
	return 0;
}

unsigned short StabilizationSettingsBank3::UAVObjGetInstance() const {
	return instance;
}
unsigned short StabilizationSettingsBank3::UAVObjGetNumBytes() const {
	return sizeof(dataFields);
}
unsigned short StabilizationSettingsBank3::UAVObjGetNumInstances() const {
	return numInstances;
}

std::string StabilizationSettingsBank3::prettyPrint() {
	std::stringstream ss;
	ss << "\nPrinting object: stabilizationsettingsbank3" << std::endl;
	ss << "\tManualRate: " << dataFields.ManualRate << std::endl;
	ss << "\tMaximumRate: " << dataFields.MaximumRate << std::endl;
	ss << "\tRollRatePID: " << dataFields.RollRatePID << std::endl;
	ss << "\tPitchRatePID: " << dataFields.PitchRatePID << std::endl;
	ss << "\tYawRatePID: " << dataFields.YawRatePID << std::endl;
	ss << "\tRollPI: " << dataFields.RollPI << std::endl;
	ss << "\tPitchPI: " << dataFields.PitchPI << std::endl;
	ss << "\tYawPI: " << dataFields.YawPI << std::endl;
	ss << "\tAcroInsanityFactor: " << dataFields.AcroInsanityFactor << std::endl;
	ss << "\tThrustPIDScaleCurve: " << dataFields.ThrustPIDScaleCurve << std::endl;
	ss << "\tRollMax: " << dataFields.RollMax << std::endl;
	ss << "\tPitchMax: " << dataFields.PitchMax << std::endl;
	ss << "\tYawMax: " << dataFields.YawMax << std::endl;
	ss << "\tStickExpo: " << dataFields.StickExpo << std::endl;
	ss << "\tEnablePiroComp: " << dataFields.EnablePiroComp << std::endl;
	ss << "\tEnableThrustPIDScaling: " << dataFields.EnableThrustPIDScaling << std::endl;
	ss << "\tThrustPIDScaleSource: " << dataFields.ThrustPIDScaleSource << std::endl;
	ss << "\tThrustPIDScaleTarget: " << dataFields.ThrustPIDScaleTarget << std::endl;
	ss << "\tThrustPIDScaleAxes: " << dataFields.ThrustPIDScaleAxes << std::endl;

	return ss.str();
}

/*/***/
/* * Initialize object fields with the default values.*/
/* * If a default value is not specified the object fields*/
/* * will be initialized to zero.*/
/* */
/*void StabilizationSettingsBank3::setDefaultFieldValues()*/
/*{*/
/*    data.ManualRate[0] = 220;
    data.ManualRate[1] = 220;
    data.ManualRate[2] = 220;
    data.MaximumRate[0] = 300;
    data.MaximumRate[1] = 300;
    data.MaximumRate[2] = 300;
    data.RollRatePID[0] = 0.003;
    data.RollRatePID[1] = 0.0065;
    data.RollRatePID[2] = 3.3e-05;
    data.RollRatePID[3] = 0.3;
    data.PitchRatePID[0] = 0.003;
    data.PitchRatePID[1] = 0.0065;
    data.PitchRatePID[2] = 3.3e-05;
    data.PitchRatePID[3] = 0.3;
    data.YawRatePID[0] = 0.0062;
    data.YawRatePID[1] = 0.01;
    data.YawRatePID[2] = 5e-05;
    data.YawRatePID[3] = 0.3;
    data.RollPI[0] = 2.5;
    data.RollPI[1] = 0;
    data.RollPI[2] = 50;
    data.PitchPI[0] = 2.5;
    data.PitchPI[1] = 0;
    data.PitchPI[2] = 50;
    data.YawPI[0] = 2.5;
    data.YawPI[1] = 0;
    data.YawPI[2] = 50;
    data.AcroInsanityFactor = 0.4;
    data.ThrustPIDScaleCurve[0] = 0.3;
    data.ThrustPIDScaleCurve[1] = 0.15;
    data.ThrustPIDScaleCurve[2] = 0;
    data.ThrustPIDScaleCurve[3] = -0.15;
    data.ThrustPIDScaleCurve[4] = -0.3;
    data.RollMax = 55;
    data.PitchMax = 55;
    data.YawMax = 35;
    data.StickExpo[0] = 0;
    data.StickExpo[1] = 0;
    data.StickExpo[2] = 0;
    data.EnablePiroComp = 1;
    data.EnableThrustPIDScaling = 0;
    data.ThrustPIDScaleSource = 2;
    data.ThrustPIDScaleTarget = 0;
    data.ThrustPIDScaleAxes = 1;
*/
/*}*/

/*/***/
/* * Get the object data fields*/
/* */
/*StabilizationSettingsBank3::DataFields StabilizationSettingsBank3::getData()*/
/*{*/
/*    QMutexLocker locker(mutex);*/
/*    return data;*/
/*}*/

/*/***/
/* * Set the object data fields*/
/* */
/*void StabilizationSettingsBank3::setData(const DataFields& data)*/
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

/*void StabilizationSettingsBank3::emitNotifications()*/
/*{*/
/*            //if (data.AcroInsanityFactor != oldData.AcroInsanityFactor)
            emit AcroInsanityFactorChanged(data.AcroInsanityFactor);
        //if (data.RollMax != oldData.RollMax)
            emit RollMaxChanged(data.RollMax);
        //if (data.PitchMax != oldData.PitchMax)
            emit PitchMaxChanged(data.PitchMax);
        //if (data.YawMax != oldData.YawMax)
            emit YawMaxChanged(data.YawMax);
        //if (data.EnablePiroComp != oldData.EnablePiroComp)
            emit EnablePiroCompChanged(data.EnablePiroComp);
        //if (data.EnableThrustPIDScaling != oldData.EnableThrustPIDScaling)
            emit EnableThrustPIDScalingChanged(data.EnableThrustPIDScaling);
        //if (data.ThrustPIDScaleSource != oldData.ThrustPIDScaleSource)
            emit ThrustPIDScaleSourceChanged(data.ThrustPIDScaleSource);
        //if (data.ThrustPIDScaleTarget != oldData.ThrustPIDScaleTarget)
            emit ThrustPIDScaleTargetChanged(data.ThrustPIDScaleTarget);
        //if (data.ThrustPIDScaleAxes != oldData.ThrustPIDScaleAxes)
            emit ThrustPIDScaleAxesChanged(data.ThrustPIDScaleAxes);
*/
/*}*/

/*/***/
/* * Create a clone of this object, a new instance ID must be specified.*/
/* * Do not use this function directly to create new instances, the*/
/* * UAVObjectManager should be used instead.*/
/* */
/*UAVDataObject *StabilizationSettingsBank3::clone(unsigned int instID)*/
/*{*/
/*    StabilizationSettingsBank3 *obj = new StabilizationSettingsBank3();*/
/*    obj->initialize(instID, this->getMetaObject());*/
/*    return obj;*/
/*}*/

/*/***/
/* * Create a clone of this object only to be used to retrieve defaults*/
/* */
/*UAVDataObject *StabilizationSettingsBank3::dirtyClone()*/
/*{*/
/*    StabilizationSettingsBank3 *obj = new StabilizationSettingsBank3();*/
/*    return obj;*/
/*}*/

/*/***/
/* * Static function to retrieve an instance of the object.*/
/* */
/*StabilizationSettingsBank3 *StabilizationSettingsBank3::GetInstance(UAVObjectManager *objMngr, unsigned int instID)*/
/*{*/
/*    return dynamic_cast<StabilizationSettingsBank3 *>(objMngr->getObject(StabilizationSettingsBank3::OBJID, instID));*/
/*}*/

/*float StabilizationSettingsBank3::getManualRate(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.ManualRate[index];
}
void StabilizationSettingsBank3::setManualRate(unsigned int index, float value)
{
   mutex->lock();
   bool changed = data.ManualRate[index] != value;
   data.ManualRate[index] = value;
   mutex->unlock();
   if (changed) emit ManualRateChanged(index,value);
}

float StabilizationSettingsBank3::getMaximumRate(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.MaximumRate[index];
}
void StabilizationSettingsBank3::setMaximumRate(unsigned int index, float value)
{
   mutex->lock();
   bool changed = data.MaximumRate[index] != value;
   data.MaximumRate[index] = value;
   mutex->unlock();
   if (changed) emit MaximumRateChanged(index,value);
}

float StabilizationSettingsBank3::getRollRatePID(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.RollRatePID[index];
}
void StabilizationSettingsBank3::setRollRatePID(unsigned int index, float value)
{
   mutex->lock();
   bool changed = data.RollRatePID[index] != value;
   data.RollRatePID[index] = value;
   mutex->unlock();
   if (changed) emit RollRatePIDChanged(index,value);
}

float StabilizationSettingsBank3::getPitchRatePID(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.PitchRatePID[index];
}
void StabilizationSettingsBank3::setPitchRatePID(unsigned int index, float value)
{
   mutex->lock();
   bool changed = data.PitchRatePID[index] != value;
   data.PitchRatePID[index] = value;
   mutex->unlock();
   if (changed) emit PitchRatePIDChanged(index,value);
}

float StabilizationSettingsBank3::getYawRatePID(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.YawRatePID[index];
}
void StabilizationSettingsBank3::setYawRatePID(unsigned int index, float value)
{
   mutex->lock();
   bool changed = data.YawRatePID[index] != value;
   data.YawRatePID[index] = value;
   mutex->unlock();
   if (changed) emit YawRatePIDChanged(index,value);
}

float StabilizationSettingsBank3::getRollPI(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.RollPI[index];
}
void StabilizationSettingsBank3::setRollPI(unsigned int index, float value)
{
   mutex->lock();
   bool changed = data.RollPI[index] != value;
   data.RollPI[index] = value;
   mutex->unlock();
   if (changed) emit RollPIChanged(index,value);
}

float StabilizationSettingsBank3::getPitchPI(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.PitchPI[index];
}
void StabilizationSettingsBank3::setPitchPI(unsigned int index, float value)
{
   mutex->lock();
   bool changed = data.PitchPI[index] != value;
   data.PitchPI[index] = value;
   mutex->unlock();
   if (changed) emit PitchPIChanged(index,value);
}

float StabilizationSettingsBank3::getYawPI(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.YawPI[index];
}
void StabilizationSettingsBank3::setYawPI(unsigned int index, float value)
{
   mutex->lock();
   bool changed = data.YawPI[index] != value;
   data.YawPI[index] = value;
   mutex->unlock();
   if (changed) emit YawPIChanged(index,value);
}

float StabilizationSettingsBank3::getAcroInsanityFactor() const
{
   QMutexLocker locker(mutex);
   return data.AcroInsanityFactor;
}
void StabilizationSettingsBank3::setAcroInsanityFactor(float value)
{
   mutex->lock();
   bool changed = data.AcroInsanityFactor != value;
   data.AcroInsanityFactor = value;
   mutex->unlock();
   if (changed) emit AcroInsanityFactorChanged(value);
}

float StabilizationSettingsBank3::getThrustPIDScaleCurve(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.ThrustPIDScaleCurve[index];
}
void StabilizationSettingsBank3::setThrustPIDScaleCurve(unsigned int index, float value)
{
   mutex->lock();
   bool changed = data.ThrustPIDScaleCurve[index] != value;
   data.ThrustPIDScaleCurve[index] = value;
   mutex->unlock();
   if (changed) emit ThrustPIDScaleCurveChanged(index,value);
}

unsigned char StabilizationSettingsBank3::getRollMax() const
{
   QMutexLocker locker(mutex);
   return data.RollMax;
}
void StabilizationSettingsBank3::setRollMax(unsigned char value)
{
   mutex->lock();
   bool changed = data.RollMax != value;
   data.RollMax = value;
   mutex->unlock();
   if (changed) emit RollMaxChanged(value);
}

unsigned char StabilizationSettingsBank3::getPitchMax() const
{
   QMutexLocker locker(mutex);
   return data.PitchMax;
}
void StabilizationSettingsBank3::setPitchMax(unsigned char value)
{
   mutex->lock();
   bool changed = data.PitchMax != value;
   data.PitchMax = value;
   mutex->unlock();
   if (changed) emit PitchMaxChanged(value);
}

unsigned char StabilizationSettingsBank3::getYawMax() const
{
   QMutexLocker locker(mutex);
   return data.YawMax;
}
void StabilizationSettingsBank3::setYawMax(unsigned char value)
{
   mutex->lock();
   bool changed = data.YawMax != value;
   data.YawMax = value;
   mutex->unlock();
   if (changed) emit YawMaxChanged(value);
}

char StabilizationSettingsBank3::getStickExpo(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.StickExpo[index];
}
void StabilizationSettingsBank3::setStickExpo(unsigned int index, char value)
{
   mutex->lock();
   bool changed = data.StickExpo[index] != value;
   data.StickExpo[index] = value;
   mutex->unlock();
   if (changed) emit StickExpoChanged(index,value);
}

unsigned char StabilizationSettingsBank3::getEnablePiroComp() const
{
   QMutexLocker locker(mutex);
   return data.EnablePiroComp;
}
void StabilizationSettingsBank3::setEnablePiroComp(unsigned char value)
{
   mutex->lock();
   bool changed = data.EnablePiroComp != value;
   data.EnablePiroComp = value;
   mutex->unlock();
   if (changed) emit EnablePiroCompChanged(value);
}

unsigned char StabilizationSettingsBank3::getEnableThrustPIDScaling() const
{
   QMutexLocker locker(mutex);
   return data.EnableThrustPIDScaling;
}
void StabilizationSettingsBank3::setEnableThrustPIDScaling(unsigned char value)
{
   mutex->lock();
   bool changed = data.EnableThrustPIDScaling != value;
   data.EnableThrustPIDScaling = value;
   mutex->unlock();
   if (changed) emit EnableThrustPIDScalingChanged(value);
}

unsigned char StabilizationSettingsBank3::getThrustPIDScaleSource() const
{
   QMutexLocker locker(mutex);
   return data.ThrustPIDScaleSource;
}
void StabilizationSettingsBank3::setThrustPIDScaleSource(unsigned char value)
{
   mutex->lock();
   bool changed = data.ThrustPIDScaleSource != value;
   data.ThrustPIDScaleSource = value;
   mutex->unlock();
   if (changed) emit ThrustPIDScaleSourceChanged(value);
}

unsigned char StabilizationSettingsBank3::getThrustPIDScaleTarget() const
{
   QMutexLocker locker(mutex);
   return data.ThrustPIDScaleTarget;
}
void StabilizationSettingsBank3::setThrustPIDScaleTarget(unsigned char value)
{
   mutex->lock();
   bool changed = data.ThrustPIDScaleTarget != value;
   data.ThrustPIDScaleTarget = value;
   mutex->unlock();
   if (changed) emit ThrustPIDScaleTargetChanged(value);
}

unsigned char StabilizationSettingsBank3::getThrustPIDScaleAxes() const
{
   QMutexLocker locker(mutex);
   return data.ThrustPIDScaleAxes;
}
void StabilizationSettingsBank3::setThrustPIDScaleAxes(unsigned char value)
{
   mutex->lock();
   bool changed = data.ThrustPIDScaleAxes != value;
   data.ThrustPIDScaleAxes = value;
   mutex->unlock();
   if (changed) emit ThrustPIDScaleAxesChanged(value);
}

*/
