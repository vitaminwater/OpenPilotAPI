/**
 ******************************************************************************
 *
 * @file       attitudesettings.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: attitudesettings.xml.
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

#include "attitudesettings.h"

int AttitudeSettings::numInstances = 0;

/**
 * Constructor
 */
AttitudeSettings::AttitudeSettings(UAVObjManager* manager): UAVObject(manager, 0x448954B8, "AttitudeSettings", "Settings for the @ref Attitude module used on CopterControl", "State", 1, 1, ACCESS_READWRITE, ACCESS_READWRITE, 1, 1, UPDATEMODE_ONCHANGE, UPDATEMODE_ONCHANGE, 0, 0, 0)
{

}

int AttitudeSettings::UAVObjSetDataField(const char *dataIn, const std::string fieldID){
	if(fieldID == "BoardRotation") {
		memset( &(dataFields.BoardRotation), 0, sizeof(dataFields.BoardRotation));
		memcpy( &(dataFields.BoardRotation), dataIn, sizeof(dataFields.BoardRotation));
	} else if(fieldID == "BoardLevelTrim") {
		memset( &(dataFields.BoardLevelTrim), 0, sizeof(dataFields.BoardLevelTrim));
		memcpy( &(dataFields.BoardLevelTrim), dataIn, sizeof(dataFields.BoardLevelTrim));
	} else if(fieldID == "AccelKp") {
		memset( &(dataFields.AccelKp), 0, sizeof(dataFields.AccelKp));
		memcpy( &(dataFields.AccelKp), dataIn, sizeof(dataFields.AccelKp));
	} else if(fieldID == "AccelKi") {
		memset( &(dataFields.AccelKi), 0, sizeof(dataFields.AccelKi));
		memcpy( &(dataFields.AccelKi), dataIn, sizeof(dataFields.AccelKi));
	} else if(fieldID == "MagKi") {
		memset( &(dataFields.MagKi), 0, sizeof(dataFields.MagKi));
		memcpy( &(dataFields.MagKi), dataIn, sizeof(dataFields.MagKi));
	} else if(fieldID == "MagKp") {
		memset( &(dataFields.MagKp), 0, sizeof(dataFields.MagKp));
		memcpy( &(dataFields.MagKp), dataIn, sizeof(dataFields.MagKp));
	} else if(fieldID == "AccelTau") {
		memset( &(dataFields.AccelTau), 0, sizeof(dataFields.AccelTau));
		memcpy( &(dataFields.AccelTau), dataIn, sizeof(dataFields.AccelTau));
	} else if(fieldID == "YawBiasRate") {
		memset( &(dataFields.YawBiasRate), 0, sizeof(dataFields.YawBiasRate));
		memcpy( &(dataFields.YawBiasRate), dataIn, sizeof(dataFields.YawBiasRate));
	} else if(fieldID == "ZeroDuringArming") {
		memset( &(dataFields.ZeroDuringArming), 0, sizeof(dataFields.ZeroDuringArming));
		memcpy( &(dataFields.ZeroDuringArming), dataIn, sizeof(dataFields.ZeroDuringArming));
	} else if(fieldID == "BiasCorrectGyro") {
		memset( &(dataFields.BiasCorrectGyro), 0, sizeof(dataFields.BiasCorrectGyro));
		memcpy( &(dataFields.BiasCorrectGyro), dataIn, sizeof(dataFields.BiasCorrectGyro));
	} else if(fieldID == "TrimFlight") {
		memset( &(dataFields.TrimFlight), 0, sizeof(dataFields.TrimFlight));
		memcpy( &(dataFields.TrimFlight), dataIn, sizeof(dataFields.TrimFlight));
	}
	return 0;
}

int AttitudeSettings::UAVObjGetDataField(char *dataOut, const std::string fieldID){
	if(fieldID == "BoardRotation") {
		memcpy( dataOut, &(dataFields.BoardRotation), sizeof(dataFields.BoardRotation));
	} else if(fieldID == "BoardLevelTrim") {
		memcpy( dataOut, &(dataFields.BoardLevelTrim), sizeof(dataFields.BoardLevelTrim));
	} else if(fieldID == "AccelKp") {
		memcpy( dataOut, &(dataFields.AccelKp), sizeof(dataFields.AccelKp));
	} else if(fieldID == "AccelKi") {
		memcpy( dataOut, &(dataFields.AccelKi), sizeof(dataFields.AccelKi));
	} else if(fieldID == "MagKi") {
		memcpy( dataOut, &(dataFields.MagKi), sizeof(dataFields.MagKi));
	} else if(fieldID == "MagKp") {
		memcpy( dataOut, &(dataFields.MagKp), sizeof(dataFields.MagKp));
	} else if(fieldID == "AccelTau") {
		memcpy( dataOut, &(dataFields.AccelTau), sizeof(dataFields.AccelTau));
	} else if(fieldID == "YawBiasRate") {
		memcpy( dataOut, &(dataFields.YawBiasRate), sizeof(dataFields.YawBiasRate));
	} else if(fieldID == "ZeroDuringArming") {
		memcpy( dataOut, &(dataFields.ZeroDuringArming), sizeof(dataFields.ZeroDuringArming));
	} else if(fieldID == "BiasCorrectGyro") {
		memcpy( dataOut, &(dataFields.BiasCorrectGyro), sizeof(dataFields.BiasCorrectGyro));
	} else if(fieldID == "TrimFlight") {
		memcpy( dataOut, &(dataFields.TrimFlight), sizeof(dataFields.TrimFlight));
	}
	return 0;
}

int AttitudeSettings::UAVObjUnpack(const unsigned char *dataIn){
	memcpy(&dataFields, dataIn, NUMBYTES);
	return 0;
}

int AttitudeSettings::UAVObjPack(unsigned char *dataOut) {
	memcpy(dataOut, &dataFields, NUMBYTES);
	return 0;
}

unsigned short AttitudeSettings::UAVObjGetInstance() const {
	return instance;
}
unsigned short AttitudeSettings::UAVObjGetNumBytes() const {
	return sizeof(dataFields);
}
unsigned short AttitudeSettings::UAVObjGetNumInstances() const {
	return numInstances;
}

std::string AttitudeSettings::prettyPrint() {
	std::stringstream ss;
	ss << "\nPrinting object: attitudesettings" << std::endl;
	ss << "\tBoardRotation: " << dataFields.BoardRotation << std::endl;
	ss << "\tBoardLevelTrim: " << dataFields.BoardLevelTrim << std::endl;
	ss << "\tAccelKp: " << dataFields.AccelKp << std::endl;
	ss << "\tAccelKi: " << dataFields.AccelKi << std::endl;
	ss << "\tMagKi: " << dataFields.MagKi << std::endl;
	ss << "\tMagKp: " << dataFields.MagKp << std::endl;
	ss << "\tAccelTau: " << dataFields.AccelTau << std::endl;
	ss << "\tYawBiasRate: " << dataFields.YawBiasRate << std::endl;
	ss << "\tZeroDuringArming: " << dataFields.ZeroDuringArming << std::endl;
	ss << "\tBiasCorrectGyro: " << dataFields.BiasCorrectGyro << std::endl;
	ss << "\tTrimFlight: " << dataFields.TrimFlight << std::endl;

	return ss.str();
}

/*/***/
/* * Initialize object fields with the default values.*/
/* * If a default value is not specified the object fields*/
/* * will be initialized to zero.*/
/* */
/*void AttitudeSettings::setDefaultFieldValues()*/
/*{*/
/*    data.BoardRotation[0] = 0;
    data.BoardRotation[1] = 0;
    data.BoardRotation[2] = 0;
    data.BoardLevelTrim[0] = 0;
    data.BoardLevelTrim[1] = 0;
    data.AccelKp = 0.05;
    data.AccelKi = 0.0001;
    data.MagKi = 1e-06;
    data.MagKp = 0.01;
    data.AccelTau = 0;
    data.YawBiasRate = 1e-06;
    data.ZeroDuringArming = 1;
    data.BiasCorrectGyro = 1;
    data.TrimFlight = 0;
*/
/*}*/

/*/***/
/* * Get the object data fields*/
/* */
/*AttitudeSettings::DataFields AttitudeSettings::getData()*/
/*{*/
/*    QMutexLocker locker(mutex);*/
/*    return data;*/
/*}*/

/*/***/
/* * Set the object data fields*/
/* */
/*void AttitudeSettings::setData(const DataFields& data)*/
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

/*void AttitudeSettings::emitNotifications()*/
/*{*/
/*            //if (data.AccelKp != oldData.AccelKp)
            emit AccelKpChanged(data.AccelKp);
        //if (data.AccelKi != oldData.AccelKi)
            emit AccelKiChanged(data.AccelKi);
        //if (data.MagKi != oldData.MagKi)
            emit MagKiChanged(data.MagKi);
        //if (data.MagKp != oldData.MagKp)
            emit MagKpChanged(data.MagKp);
        //if (data.AccelTau != oldData.AccelTau)
            emit AccelTauChanged(data.AccelTau);
        //if (data.YawBiasRate != oldData.YawBiasRate)
            emit YawBiasRateChanged(data.YawBiasRate);
        //if (data.ZeroDuringArming != oldData.ZeroDuringArming)
            emit ZeroDuringArmingChanged(data.ZeroDuringArming);
        //if (data.BiasCorrectGyro != oldData.BiasCorrectGyro)
            emit BiasCorrectGyroChanged(data.BiasCorrectGyro);
        //if (data.TrimFlight != oldData.TrimFlight)
            emit TrimFlightChanged(data.TrimFlight);
*/
/*}*/

/*/***/
/* * Create a clone of this object, a new instance ID must be specified.*/
/* * Do not use this function directly to create new instances, the*/
/* * UAVObjectManager should be used instead.*/
/* */
/*UAVDataObject *AttitudeSettings::clone(unsigned int instID)*/
/*{*/
/*    AttitudeSettings *obj = new AttitudeSettings();*/
/*    obj->initialize(instID, this->getMetaObject());*/
/*    return obj;*/
/*}*/

/*/***/
/* * Create a clone of this object only to be used to retrieve defaults*/
/* */
/*UAVDataObject *AttitudeSettings::dirtyClone()*/
/*{*/
/*    AttitudeSettings *obj = new AttitudeSettings();*/
/*    return obj;*/
/*}*/

/*/***/
/* * Static function to retrieve an instance of the object.*/
/* */
/*AttitudeSettings *AttitudeSettings::GetInstance(UAVObjectManager *objMngr, unsigned int instID)*/
/*{*/
/*    return dynamic_cast<AttitudeSettings *>(objMngr->getObject(AttitudeSettings::OBJID, instID));*/
/*}*/

/*float AttitudeSettings::getBoardRotation(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.BoardRotation[index];
}
void AttitudeSettings::setBoardRotation(unsigned int index, float value)
{
   mutex->lock();
   bool changed = data.BoardRotation[index] != value;
   data.BoardRotation[index] = value;
   mutex->unlock();
   if (changed) emit BoardRotationChanged(index,value);
}

float AttitudeSettings::getBoardLevelTrim(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.BoardLevelTrim[index];
}
void AttitudeSettings::setBoardLevelTrim(unsigned int index, float value)
{
   mutex->lock();
   bool changed = data.BoardLevelTrim[index] != value;
   data.BoardLevelTrim[index] = value;
   mutex->unlock();
   if (changed) emit BoardLevelTrimChanged(index,value);
}

float AttitudeSettings::getAccelKp() const
{
   QMutexLocker locker(mutex);
   return data.AccelKp;
}
void AttitudeSettings::setAccelKp(float value)
{
   mutex->lock();
   bool changed = data.AccelKp != value;
   data.AccelKp = value;
   mutex->unlock();
   if (changed) emit AccelKpChanged(value);
}

float AttitudeSettings::getAccelKi() const
{
   QMutexLocker locker(mutex);
   return data.AccelKi;
}
void AttitudeSettings::setAccelKi(float value)
{
   mutex->lock();
   bool changed = data.AccelKi != value;
   data.AccelKi = value;
   mutex->unlock();
   if (changed) emit AccelKiChanged(value);
}

float AttitudeSettings::getMagKi() const
{
   QMutexLocker locker(mutex);
   return data.MagKi;
}
void AttitudeSettings::setMagKi(float value)
{
   mutex->lock();
   bool changed = data.MagKi != value;
   data.MagKi = value;
   mutex->unlock();
   if (changed) emit MagKiChanged(value);
}

float AttitudeSettings::getMagKp() const
{
   QMutexLocker locker(mutex);
   return data.MagKp;
}
void AttitudeSettings::setMagKp(float value)
{
   mutex->lock();
   bool changed = data.MagKp != value;
   data.MagKp = value;
   mutex->unlock();
   if (changed) emit MagKpChanged(value);
}

float AttitudeSettings::getAccelTau() const
{
   QMutexLocker locker(mutex);
   return data.AccelTau;
}
void AttitudeSettings::setAccelTau(float value)
{
   mutex->lock();
   bool changed = data.AccelTau != value;
   data.AccelTau = value;
   mutex->unlock();
   if (changed) emit AccelTauChanged(value);
}

float AttitudeSettings::getYawBiasRate() const
{
   QMutexLocker locker(mutex);
   return data.YawBiasRate;
}
void AttitudeSettings::setYawBiasRate(float value)
{
   mutex->lock();
   bool changed = data.YawBiasRate != value;
   data.YawBiasRate = value;
   mutex->unlock();
   if (changed) emit YawBiasRateChanged(value);
}

unsigned char AttitudeSettings::getZeroDuringArming() const
{
   QMutexLocker locker(mutex);
   return data.ZeroDuringArming;
}
void AttitudeSettings::setZeroDuringArming(unsigned char value)
{
   mutex->lock();
   bool changed = data.ZeroDuringArming != value;
   data.ZeroDuringArming = value;
   mutex->unlock();
   if (changed) emit ZeroDuringArmingChanged(value);
}

unsigned char AttitudeSettings::getBiasCorrectGyro() const
{
   QMutexLocker locker(mutex);
   return data.BiasCorrectGyro;
}
void AttitudeSettings::setBiasCorrectGyro(unsigned char value)
{
   mutex->lock();
   bool changed = data.BiasCorrectGyro != value;
   data.BiasCorrectGyro = value;
   mutex->unlock();
   if (changed) emit BiasCorrectGyroChanged(value);
}

unsigned char AttitudeSettings::getTrimFlight() const
{
   QMutexLocker locker(mutex);
   return data.TrimFlight;
}
void AttitudeSettings::setTrimFlight(unsigned char value)
{
   mutex->lock();
   bool changed = data.TrimFlight != value;
   data.TrimFlight = value;
   mutex->unlock();
   if (changed) emit TrimFlightChanged(value);
}

*/
