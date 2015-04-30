/**
 ******************************************************************************
 *
 * @file       mixerstatus.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: mixerstatus.xml.
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

#include "mixerstatus.h"

int MixerStatus::numInstances = 0;

/**
 * Constructor
 */
MixerStatus::MixerStatus(UAVObjManager* manager): UAVObject(manager, 0x354C0F40, "MixerStatus", "Status for the matrix mixer showing the output of each mixer after all scaling", "Control", 1, 0, ACCESS_READWRITE, ACCESS_READWRITE, 0, 0, UPDATEMODE_PERIODIC, UPDATEMODE_MANUAL, 1000, 0, 0)
{

}

int MixerStatus::UAVObjSetDataField(const char *dataIn, const std::string fieldID){
	if(fieldID == "Mixer1") {
		memset( &(dataFields.Mixer1), 0, sizeof(dataFields.Mixer1));
		memcpy( &(dataFields.Mixer1), dataIn, sizeof(dataFields.Mixer1));
	} else if(fieldID == "Mixer2") {
		memset( &(dataFields.Mixer2), 0, sizeof(dataFields.Mixer2));
		memcpy( &(dataFields.Mixer2), dataIn, sizeof(dataFields.Mixer2));
	} else if(fieldID == "Mixer3") {
		memset( &(dataFields.Mixer3), 0, sizeof(dataFields.Mixer3));
		memcpy( &(dataFields.Mixer3), dataIn, sizeof(dataFields.Mixer3));
	} else if(fieldID == "Mixer4") {
		memset( &(dataFields.Mixer4), 0, sizeof(dataFields.Mixer4));
		memcpy( &(dataFields.Mixer4), dataIn, sizeof(dataFields.Mixer4));
	} else if(fieldID == "Mixer5") {
		memset( &(dataFields.Mixer5), 0, sizeof(dataFields.Mixer5));
		memcpy( &(dataFields.Mixer5), dataIn, sizeof(dataFields.Mixer5));
	} else if(fieldID == "Mixer6") {
		memset( &(dataFields.Mixer6), 0, sizeof(dataFields.Mixer6));
		memcpy( &(dataFields.Mixer6), dataIn, sizeof(dataFields.Mixer6));
	} else if(fieldID == "Mixer7") {
		memset( &(dataFields.Mixer7), 0, sizeof(dataFields.Mixer7));
		memcpy( &(dataFields.Mixer7), dataIn, sizeof(dataFields.Mixer7));
	} else if(fieldID == "Mixer8") {
		memset( &(dataFields.Mixer8), 0, sizeof(dataFields.Mixer8));
		memcpy( &(dataFields.Mixer8), dataIn, sizeof(dataFields.Mixer8));
	} else if(fieldID == "Mixer9") {
		memset( &(dataFields.Mixer9), 0, sizeof(dataFields.Mixer9));
		memcpy( &(dataFields.Mixer9), dataIn, sizeof(dataFields.Mixer9));
	} else if(fieldID == "Mixer10") {
		memset( &(dataFields.Mixer10), 0, sizeof(dataFields.Mixer10));
		memcpy( &(dataFields.Mixer10), dataIn, sizeof(dataFields.Mixer10));
	} else if(fieldID == "Mixer11") {
		memset( &(dataFields.Mixer11), 0, sizeof(dataFields.Mixer11));
		memcpy( &(dataFields.Mixer11), dataIn, sizeof(dataFields.Mixer11));
	} else if(fieldID == "Mixer12") {
		memset( &(dataFields.Mixer12), 0, sizeof(dataFields.Mixer12));
		memcpy( &(dataFields.Mixer12), dataIn, sizeof(dataFields.Mixer12));
	}
	return 0;
}

int MixerStatus::UAVObjGetDataField(char *dataOut, const std::string fieldID){
	if(fieldID == "Mixer1") {
		memcpy( dataOut, &(dataFields.Mixer1), sizeof(dataFields.Mixer1));
	} else if(fieldID == "Mixer2") {
		memcpy( dataOut, &(dataFields.Mixer2), sizeof(dataFields.Mixer2));
	} else if(fieldID == "Mixer3") {
		memcpy( dataOut, &(dataFields.Mixer3), sizeof(dataFields.Mixer3));
	} else if(fieldID == "Mixer4") {
		memcpy( dataOut, &(dataFields.Mixer4), sizeof(dataFields.Mixer4));
	} else if(fieldID == "Mixer5") {
		memcpy( dataOut, &(dataFields.Mixer5), sizeof(dataFields.Mixer5));
	} else if(fieldID == "Mixer6") {
		memcpy( dataOut, &(dataFields.Mixer6), sizeof(dataFields.Mixer6));
	} else if(fieldID == "Mixer7") {
		memcpy( dataOut, &(dataFields.Mixer7), sizeof(dataFields.Mixer7));
	} else if(fieldID == "Mixer8") {
		memcpy( dataOut, &(dataFields.Mixer8), sizeof(dataFields.Mixer8));
	} else if(fieldID == "Mixer9") {
		memcpy( dataOut, &(dataFields.Mixer9), sizeof(dataFields.Mixer9));
	} else if(fieldID == "Mixer10") {
		memcpy( dataOut, &(dataFields.Mixer10), sizeof(dataFields.Mixer10));
	} else if(fieldID == "Mixer11") {
		memcpy( dataOut, &(dataFields.Mixer11), sizeof(dataFields.Mixer11));
	} else if(fieldID == "Mixer12") {
		memcpy( dataOut, &(dataFields.Mixer12), sizeof(dataFields.Mixer12));
	}
	return 0;
}

int MixerStatus::UAVObjUnpack(const unsigned char *dataIn){
	memcpy(&dataFields, dataIn, NUMBYTES);
	return 0;
}

int MixerStatus::UAVObjPack(unsigned char *dataOut) {
	memcpy(dataOut, &dataFields, NUMBYTES);
	return 0;
}

unsigned short MixerStatus::UAVObjGetInstance() const {
	return instance;
}
unsigned short MixerStatus::UAVObjGetNumBytes() const {
	return sizeof(dataFields);
}
unsigned short MixerStatus::UAVObjGetNumInstances() const {
	return numInstances;
}

std::string MixerStatus::prettyPrint() {
	std::stringstream ss;
	ss << "\nPrinting object: mixerstatus" << std::endl;
	ss << "\tMixer1: " << dataFields.Mixer1 << std::endl;
	ss << "\tMixer2: " << dataFields.Mixer2 << std::endl;
	ss << "\tMixer3: " << dataFields.Mixer3 << std::endl;
	ss << "\tMixer4: " << dataFields.Mixer4 << std::endl;
	ss << "\tMixer5: " << dataFields.Mixer5 << std::endl;
	ss << "\tMixer6: " << dataFields.Mixer6 << std::endl;
	ss << "\tMixer7: " << dataFields.Mixer7 << std::endl;
	ss << "\tMixer8: " << dataFields.Mixer8 << std::endl;
	ss << "\tMixer9: " << dataFields.Mixer9 << std::endl;
	ss << "\tMixer10: " << dataFields.Mixer10 << std::endl;
	ss << "\tMixer11: " << dataFields.Mixer11 << std::endl;
	ss << "\tMixer12: " << dataFields.Mixer12 << std::endl;

	return ss.str();
}

/*/***/
/* * Initialize object fields with the default values.*/
/* * If a default value is not specified the object fields*/
/* * will be initialized to zero.*/
/* */
/*void MixerStatus::setDefaultFieldValues()*/
/*{*/
/**/
/*}*/

/*/***/
/* * Get the object data fields*/
/* */
/*MixerStatus::DataFields MixerStatus::getData()*/
/*{*/
/*    QMutexLocker locker(mutex);*/
/*    return data;*/
/*}*/

/*/***/
/* * Set the object data fields*/
/* */
/*void MixerStatus::setData(const DataFields& data)*/
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

/*void MixerStatus::emitNotifications()*/
/*{*/
/*            //if (data.Mixer1 != oldData.Mixer1)
            emit Mixer1Changed(data.Mixer1);
        //if (data.Mixer2 != oldData.Mixer2)
            emit Mixer2Changed(data.Mixer2);
        //if (data.Mixer3 != oldData.Mixer3)
            emit Mixer3Changed(data.Mixer3);
        //if (data.Mixer4 != oldData.Mixer4)
            emit Mixer4Changed(data.Mixer4);
        //if (data.Mixer5 != oldData.Mixer5)
            emit Mixer5Changed(data.Mixer5);
        //if (data.Mixer6 != oldData.Mixer6)
            emit Mixer6Changed(data.Mixer6);
        //if (data.Mixer7 != oldData.Mixer7)
            emit Mixer7Changed(data.Mixer7);
        //if (data.Mixer8 != oldData.Mixer8)
            emit Mixer8Changed(data.Mixer8);
        //if (data.Mixer9 != oldData.Mixer9)
            emit Mixer9Changed(data.Mixer9);
        //if (data.Mixer10 != oldData.Mixer10)
            emit Mixer10Changed(data.Mixer10);
        //if (data.Mixer11 != oldData.Mixer11)
            emit Mixer11Changed(data.Mixer11);
        //if (data.Mixer12 != oldData.Mixer12)
            emit Mixer12Changed(data.Mixer12);
*/
/*}*/

/*/***/
/* * Create a clone of this object, a new instance ID must be specified.*/
/* * Do not use this function directly to create new instances, the*/
/* * UAVObjectManager should be used instead.*/
/* */
/*UAVDataObject *MixerStatus::clone(unsigned int instID)*/
/*{*/
/*    MixerStatus *obj = new MixerStatus();*/
/*    obj->initialize(instID, this->getMetaObject());*/
/*    return obj;*/
/*}*/

/*/***/
/* * Create a clone of this object only to be used to retrieve defaults*/
/* */
/*UAVDataObject *MixerStatus::dirtyClone()*/
/*{*/
/*    MixerStatus *obj = new MixerStatus();*/
/*    return obj;*/
/*}*/

/*/***/
/* * Static function to retrieve an instance of the object.*/
/* */
/*MixerStatus *MixerStatus::GetInstance(UAVObjectManager *objMngr, unsigned int instID)*/
/*{*/
/*    return dynamic_cast<MixerStatus *>(objMngr->getObject(MixerStatus::OBJID, instID));*/
/*}*/

/*float MixerStatus::getMixer1() const
{
   QMutexLocker locker(mutex);
   return data.Mixer1;
}
void MixerStatus::setMixer1(float value)
{
   mutex->lock();
   bool changed = data.Mixer1 != value;
   data.Mixer1 = value;
   mutex->unlock();
   if (changed) emit Mixer1Changed(value);
}

float MixerStatus::getMixer2() const
{
   QMutexLocker locker(mutex);
   return data.Mixer2;
}
void MixerStatus::setMixer2(float value)
{
   mutex->lock();
   bool changed = data.Mixer2 != value;
   data.Mixer2 = value;
   mutex->unlock();
   if (changed) emit Mixer2Changed(value);
}

float MixerStatus::getMixer3() const
{
   QMutexLocker locker(mutex);
   return data.Mixer3;
}
void MixerStatus::setMixer3(float value)
{
   mutex->lock();
   bool changed = data.Mixer3 != value;
   data.Mixer3 = value;
   mutex->unlock();
   if (changed) emit Mixer3Changed(value);
}

float MixerStatus::getMixer4() const
{
   QMutexLocker locker(mutex);
   return data.Mixer4;
}
void MixerStatus::setMixer4(float value)
{
   mutex->lock();
   bool changed = data.Mixer4 != value;
   data.Mixer4 = value;
   mutex->unlock();
   if (changed) emit Mixer4Changed(value);
}

float MixerStatus::getMixer5() const
{
   QMutexLocker locker(mutex);
   return data.Mixer5;
}
void MixerStatus::setMixer5(float value)
{
   mutex->lock();
   bool changed = data.Mixer5 != value;
   data.Mixer5 = value;
   mutex->unlock();
   if (changed) emit Mixer5Changed(value);
}

float MixerStatus::getMixer6() const
{
   QMutexLocker locker(mutex);
   return data.Mixer6;
}
void MixerStatus::setMixer6(float value)
{
   mutex->lock();
   bool changed = data.Mixer6 != value;
   data.Mixer6 = value;
   mutex->unlock();
   if (changed) emit Mixer6Changed(value);
}

float MixerStatus::getMixer7() const
{
   QMutexLocker locker(mutex);
   return data.Mixer7;
}
void MixerStatus::setMixer7(float value)
{
   mutex->lock();
   bool changed = data.Mixer7 != value;
   data.Mixer7 = value;
   mutex->unlock();
   if (changed) emit Mixer7Changed(value);
}

float MixerStatus::getMixer8() const
{
   QMutexLocker locker(mutex);
   return data.Mixer8;
}
void MixerStatus::setMixer8(float value)
{
   mutex->lock();
   bool changed = data.Mixer8 != value;
   data.Mixer8 = value;
   mutex->unlock();
   if (changed) emit Mixer8Changed(value);
}

float MixerStatus::getMixer9() const
{
   QMutexLocker locker(mutex);
   return data.Mixer9;
}
void MixerStatus::setMixer9(float value)
{
   mutex->lock();
   bool changed = data.Mixer9 != value;
   data.Mixer9 = value;
   mutex->unlock();
   if (changed) emit Mixer9Changed(value);
}

float MixerStatus::getMixer10() const
{
   QMutexLocker locker(mutex);
   return data.Mixer10;
}
void MixerStatus::setMixer10(float value)
{
   mutex->lock();
   bool changed = data.Mixer10 != value;
   data.Mixer10 = value;
   mutex->unlock();
   if (changed) emit Mixer10Changed(value);
}

float MixerStatus::getMixer11() const
{
   QMutexLocker locker(mutex);
   return data.Mixer11;
}
void MixerStatus::setMixer11(float value)
{
   mutex->lock();
   bool changed = data.Mixer11 != value;
   data.Mixer11 = value;
   mutex->unlock();
   if (changed) emit Mixer11Changed(value);
}

float MixerStatus::getMixer12() const
{
   QMutexLocker locker(mutex);
   return data.Mixer12;
}
void MixerStatus::setMixer12(float value)
{
   mutex->lock();
   bool changed = data.Mixer12 != value;
   data.Mixer12 = value;
   mutex->unlock();
   if (changed) emit Mixer12Changed(value);
}

*/
