/**
 ******************************************************************************
 *
 * @file       vtolselftuningstats.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: vtolselftuningstats.xml.
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

#include "vtolselftuningstats.h"

int VtolSelfTuningStats::numInstances = 0;

/**
 * Constructor
 */
VtolSelfTuningStats::VtolSelfTuningStats(UAVObjManager* manager): UAVObject(manager, 0x1B0B1B34, "VtolSelfTuningStats", "Automatically calculated adjustments to parameters used into vtol auto flight modes. Can come from @ref PathFollower ", "Navigation", 1, 0, ACCESS_READWRITE, ACCESS_READWRITE, 0, 0, UPDATEMODE_PERIODIC, UPDATEMODE_MANUAL, 1000, 0, 0)
{

}

int VtolSelfTuningStats::UAVObjSetDataField(const char *dataIn, const std::string fieldID){
	if(fieldID == "NeutralThrustOffset") {
		memset( &(dataFields.NeutralThrustOffset), 0, sizeof(dataFields.NeutralThrustOffset));
		memcpy( &(dataFields.NeutralThrustOffset), dataIn, sizeof(dataFields.NeutralThrustOffset));
	} else if(fieldID == "NeutralThrustCorrection") {
		memset( &(dataFields.NeutralThrustCorrection), 0, sizeof(dataFields.NeutralThrustCorrection));
		memcpy( &(dataFields.NeutralThrustCorrection), dataIn, sizeof(dataFields.NeutralThrustCorrection));
	} else if(fieldID == "NeutralThrustAccumulator") {
		memset( &(dataFields.NeutralThrustAccumulator), 0, sizeof(dataFields.NeutralThrustAccumulator));
		memcpy( &(dataFields.NeutralThrustAccumulator), dataIn, sizeof(dataFields.NeutralThrustAccumulator));
	} else if(fieldID == "NeutralThrustRange") {
		memset( &(dataFields.NeutralThrustRange), 0, sizeof(dataFields.NeutralThrustRange));
		memcpy( &(dataFields.NeutralThrustRange), dataIn, sizeof(dataFields.NeutralThrustRange));
	}
	return 0;
}

int VtolSelfTuningStats::UAVObjGetDataField(char *dataOut, const std::string fieldID){
	if(fieldID == "NeutralThrustOffset") {
		memcpy( dataOut, &(dataFields.NeutralThrustOffset), sizeof(dataFields.NeutralThrustOffset));
	} else if(fieldID == "NeutralThrustCorrection") {
		memcpy( dataOut, &(dataFields.NeutralThrustCorrection), sizeof(dataFields.NeutralThrustCorrection));
	} else if(fieldID == "NeutralThrustAccumulator") {
		memcpy( dataOut, &(dataFields.NeutralThrustAccumulator), sizeof(dataFields.NeutralThrustAccumulator));
	} else if(fieldID == "NeutralThrustRange") {
		memcpy( dataOut, &(dataFields.NeutralThrustRange), sizeof(dataFields.NeutralThrustRange));
	}
	return 0;
}

int VtolSelfTuningStats::UAVObjUnpack(const unsigned char *dataIn){
	memcpy(&dataFields, dataIn, NUMBYTES);
	return 0;
}

int VtolSelfTuningStats::UAVObjPack(unsigned char *dataOut) {
	memcpy(dataOut, &dataFields, NUMBYTES);
	return 0;
}

unsigned short VtolSelfTuningStats::UAVObjGetInstance() const {
	return instance;
}
unsigned short VtolSelfTuningStats::UAVObjGetNumBytes() const {
	return sizeof(dataFields);
}
unsigned short VtolSelfTuningStats::UAVObjGetNumInstances() const {
	return numInstances;
}

std::string VtolSelfTuningStats::prettyPrint() {
	std::stringstream ss;
	ss << "\nPrinting object: vtolselftuningstats" << std::endl;
	ss << "\tNeutralThrustOffset: " << dataFields.NeutralThrustOffset << std::endl;
	ss << "\tNeutralThrustCorrection: " << dataFields.NeutralThrustCorrection << std::endl;
	ss << "\tNeutralThrustAccumulator: " << dataFields.NeutralThrustAccumulator << std::endl;
	ss << "\tNeutralThrustRange: " << dataFields.NeutralThrustRange << std::endl;

	return ss.str();
}

/*/***/
/* * Initialize object fields with the default values.*/
/* * If a default value is not specified the object fields*/
/* * will be initialized to zero.*/
/* */
/*void VtolSelfTuningStats::setDefaultFieldValues()*/
/*{*/
/*    data.NeutralThrustOffset = 0;
    data.NeutralThrustCorrection = 0;
    data.NeutralThrustAccumulator = 0;
    data.NeutralThrustRange = 0;
*/
/*}*/

/*/***/
/* * Get the object data fields*/
/* */
/*VtolSelfTuningStats::DataFields VtolSelfTuningStats::getData()*/
/*{*/
/*    QMutexLocker locker(mutex);*/
/*    return data;*/
/*}*/

/*/***/
/* * Set the object data fields*/
/* */
/*void VtolSelfTuningStats::setData(const DataFields& data)*/
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

/*void VtolSelfTuningStats::emitNotifications()*/
/*{*/
/*            //if (data.NeutralThrustOffset != oldData.NeutralThrustOffset)
            emit NeutralThrustOffsetChanged(data.NeutralThrustOffset);
        //if (data.NeutralThrustCorrection != oldData.NeutralThrustCorrection)
            emit NeutralThrustCorrectionChanged(data.NeutralThrustCorrection);
        //if (data.NeutralThrustAccumulator != oldData.NeutralThrustAccumulator)
            emit NeutralThrustAccumulatorChanged(data.NeutralThrustAccumulator);
        //if (data.NeutralThrustRange != oldData.NeutralThrustRange)
            emit NeutralThrustRangeChanged(data.NeutralThrustRange);
*/
/*}*/

/*/***/
/* * Create a clone of this object, a new instance ID must be specified.*/
/* * Do not use this function directly to create new instances, the*/
/* * UAVObjectManager should be used instead.*/
/* */
/*UAVDataObject *VtolSelfTuningStats::clone(unsigned int instID)*/
/*{*/
/*    VtolSelfTuningStats *obj = new VtolSelfTuningStats();*/
/*    obj->initialize(instID, this->getMetaObject());*/
/*    return obj;*/
/*}*/

/*/***/
/* * Create a clone of this object only to be used to retrieve defaults*/
/* */
/*UAVDataObject *VtolSelfTuningStats::dirtyClone()*/
/*{*/
/*    VtolSelfTuningStats *obj = new VtolSelfTuningStats();*/
/*    return obj;*/
/*}*/

/*/***/
/* * Static function to retrieve an instance of the object.*/
/* */
/*VtolSelfTuningStats *VtolSelfTuningStats::GetInstance(UAVObjectManager *objMngr, unsigned int instID)*/
/*{*/
/*    return dynamic_cast<VtolSelfTuningStats *>(objMngr->getObject(VtolSelfTuningStats::OBJID, instID));*/
/*}*/

/*float VtolSelfTuningStats::getNeutralThrustOffset() const
{
   QMutexLocker locker(mutex);
   return data.NeutralThrustOffset;
}
void VtolSelfTuningStats::setNeutralThrustOffset(float value)
{
   mutex->lock();
   bool changed = data.NeutralThrustOffset != value;
   data.NeutralThrustOffset = value;
   mutex->unlock();
   if (changed) emit NeutralThrustOffsetChanged(value);
}

float VtolSelfTuningStats::getNeutralThrustCorrection() const
{
   QMutexLocker locker(mutex);
   return data.NeutralThrustCorrection;
}
void VtolSelfTuningStats::setNeutralThrustCorrection(float value)
{
   mutex->lock();
   bool changed = data.NeutralThrustCorrection != value;
   data.NeutralThrustCorrection = value;
   mutex->unlock();
   if (changed) emit NeutralThrustCorrectionChanged(value);
}

float VtolSelfTuningStats::getNeutralThrustAccumulator() const
{
   QMutexLocker locker(mutex);
   return data.NeutralThrustAccumulator;
}
void VtolSelfTuningStats::setNeutralThrustAccumulator(float value)
{
   mutex->lock();
   bool changed = data.NeutralThrustAccumulator != value;
   data.NeutralThrustAccumulator = value;
   mutex->unlock();
   if (changed) emit NeutralThrustAccumulatorChanged(value);
}

float VtolSelfTuningStats::getNeutralThrustRange() const
{
   QMutexLocker locker(mutex);
   return data.NeutralThrustRange;
}
void VtolSelfTuningStats::setNeutralThrustRange(float value)
{
   mutex->lock();
   bool changed = data.NeutralThrustRange != value;
   data.NeutralThrustRange = value;
   mutex->unlock();
   if (changed) emit NeutralThrustRangeChanged(value);
}

*/
