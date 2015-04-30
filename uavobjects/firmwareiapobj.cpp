/**
 ******************************************************************************
 *
 * @file       firmwareiapobj.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: firmwareiapobj.xml.
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

#include "firmwareiapobj.h"

int FirmwareIAPObj::numInstances = 0;

/**
 * Constructor
 */
FirmwareIAPObj::FirmwareIAPObj(UAVObjManager* manager): UAVObject(manager, 0x8328F252, "FirmwareIAPObj", "Queries board for SN, model, revision, and sends reset command", "System", 1, 0, ACCESS_READWRITE, ACCESS_READWRITE, 1, 1, UPDATEMODE_ONCHANGE, UPDATEMODE_MANUAL, 0, 0, 0)
{

}

int FirmwareIAPObj::UAVObjSetDataField(const char *dataIn, const std::string fieldID){
	if(fieldID == "crc") {
		memset( &(dataFields.crc), 0, sizeof(dataFields.crc));
		memcpy( &(dataFields.crc), dataIn, sizeof(dataFields.crc));
	} else if(fieldID == "Command") {
		memset( &(dataFields.Command), 0, sizeof(dataFields.Command));
		memcpy( &(dataFields.Command), dataIn, sizeof(dataFields.Command));
	} else if(fieldID == "BoardRevision") {
		memset( &(dataFields.BoardRevision), 0, sizeof(dataFields.BoardRevision));
		memcpy( &(dataFields.BoardRevision), dataIn, sizeof(dataFields.BoardRevision));
	} else if(fieldID == "Description") {
		memset( &(dataFields.Description), 0, sizeof(dataFields.Description));
		memcpy( &(dataFields.Description), dataIn, sizeof(dataFields.Description));
	} else if(fieldID == "CPUSerial") {
		memset( &(dataFields.CPUSerial), 0, sizeof(dataFields.CPUSerial));
		memcpy( &(dataFields.CPUSerial), dataIn, sizeof(dataFields.CPUSerial));
	} else if(fieldID == "BoardType") {
		memset( &(dataFields.BoardType), 0, sizeof(dataFields.BoardType));
		memcpy( &(dataFields.BoardType), dataIn, sizeof(dataFields.BoardType));
	} else if(fieldID == "BootloaderRevision") {
		memset( &(dataFields.BootloaderRevision), 0, sizeof(dataFields.BootloaderRevision));
		memcpy( &(dataFields.BootloaderRevision), dataIn, sizeof(dataFields.BootloaderRevision));
	} else if(fieldID == "ArmReset") {
		memset( &(dataFields.ArmReset), 0, sizeof(dataFields.ArmReset));
		memcpy( &(dataFields.ArmReset), dataIn, sizeof(dataFields.ArmReset));
	}
	return 0;
}

int FirmwareIAPObj::UAVObjGetDataField(char *dataOut, const std::string fieldID){
	if(fieldID == "crc") {
		memcpy( dataOut, &(dataFields.crc), sizeof(dataFields.crc));
	} else if(fieldID == "Command") {
		memcpy( dataOut, &(dataFields.Command), sizeof(dataFields.Command));
	} else if(fieldID == "BoardRevision") {
		memcpy( dataOut, &(dataFields.BoardRevision), sizeof(dataFields.BoardRevision));
	} else if(fieldID == "Description") {
		memcpy( dataOut, &(dataFields.Description), sizeof(dataFields.Description));
	} else if(fieldID == "CPUSerial") {
		memcpy( dataOut, &(dataFields.CPUSerial), sizeof(dataFields.CPUSerial));
	} else if(fieldID == "BoardType") {
		memcpy( dataOut, &(dataFields.BoardType), sizeof(dataFields.BoardType));
	} else if(fieldID == "BootloaderRevision") {
		memcpy( dataOut, &(dataFields.BootloaderRevision), sizeof(dataFields.BootloaderRevision));
	} else if(fieldID == "ArmReset") {
		memcpy( dataOut, &(dataFields.ArmReset), sizeof(dataFields.ArmReset));
	}
	return 0;
}

int FirmwareIAPObj::UAVObjUnpack(const unsigned char *dataIn){
	memcpy(&dataFields, dataIn, NUMBYTES);
	return 0;
}

int FirmwareIAPObj::UAVObjPack(unsigned char *dataOut) {
	memcpy(dataOut, &dataFields, NUMBYTES);
	return 0;
}

unsigned short FirmwareIAPObj::UAVObjGetInstance() const {
	return instance;
}
unsigned short FirmwareIAPObj::UAVObjGetNumBytes() const {
	return sizeof(dataFields);
}
unsigned short FirmwareIAPObj::UAVObjGetNumInstances() const {
	return numInstances;
}

std::string FirmwareIAPObj::prettyPrint() {
	std::stringstream ss;
	ss << "\nPrinting object: firmwareiapobj" << std::endl;
	ss << "\tcrc: " << dataFields.crc << std::endl;
	ss << "\tCommand: " << dataFields.Command << std::endl;
	ss << "\tBoardRevision: " << dataFields.BoardRevision << std::endl;
	ss << "\tDescription: " << dataFields.Description << std::endl;
	ss << "\tCPUSerial: " << dataFields.CPUSerial << std::endl;
	ss << "\tBoardType: " << dataFields.BoardType << std::endl;
	ss << "\tBootloaderRevision: " << dataFields.BootloaderRevision << std::endl;
	ss << "\tArmReset: " << dataFields.ArmReset << std::endl;

	return ss.str();
}

/*/***/
/* * Initialize object fields with the default values.*/
/* * If a default value is not specified the object fields*/
/* * will be initialized to zero.*/
/* */
/*void FirmwareIAPObj::setDefaultFieldValues()*/
/*{*/
/**/
/*}*/

/*/***/
/* * Get the object data fields*/
/* */
/*FirmwareIAPObj::DataFields FirmwareIAPObj::getData()*/
/*{*/
/*    QMutexLocker locker(mutex);*/
/*    return data;*/
/*}*/

/*/***/
/* * Set the object data fields*/
/* */
/*void FirmwareIAPObj::setData(const DataFields& data)*/
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

/*void FirmwareIAPObj::emitNotifications()*/
/*{*/
/*            //if (data.crc != oldData.crc)
            emit crcChanged(data.crc);
        //if (data.Command != oldData.Command)
            emit CommandChanged(data.Command);
        //if (data.BoardRevision != oldData.BoardRevision)
            emit BoardRevisionChanged(data.BoardRevision);
        //if (data.BoardType != oldData.BoardType)
            emit BoardTypeChanged(data.BoardType);
        //if (data.BootloaderRevision != oldData.BootloaderRevision)
            emit BootloaderRevisionChanged(data.BootloaderRevision);
        //if (data.ArmReset != oldData.ArmReset)
            emit ArmResetChanged(data.ArmReset);
*/
/*}*/

/*/***/
/* * Create a clone of this object, a new instance ID must be specified.*/
/* * Do not use this function directly to create new instances, the*/
/* * UAVObjectManager should be used instead.*/
/* */
/*UAVDataObject *FirmwareIAPObj::clone(unsigned int instID)*/
/*{*/
/*    FirmwareIAPObj *obj = new FirmwareIAPObj();*/
/*    obj->initialize(instID, this->getMetaObject());*/
/*    return obj;*/
/*}*/

/*/***/
/* * Create a clone of this object only to be used to retrieve defaults*/
/* */
/*UAVDataObject *FirmwareIAPObj::dirtyClone()*/
/*{*/
/*    FirmwareIAPObj *obj = new FirmwareIAPObj();*/
/*    return obj;*/
/*}*/

/*/***/
/* * Static function to retrieve an instance of the object.*/
/* */
/*FirmwareIAPObj *FirmwareIAPObj::GetInstance(UAVObjectManager *objMngr, unsigned int instID)*/
/*{*/
/*    return dynamic_cast<FirmwareIAPObj *>(objMngr->getObject(FirmwareIAPObj::OBJID, instID));*/
/*}*/

/*unsigned int FirmwareIAPObj::getcrc() const
{
   QMutexLocker locker(mutex);
   return data.crc;
}
void FirmwareIAPObj::setcrc(unsigned int value)
{
   mutex->lock();
   bool changed = data.crc != value;
   data.crc = value;
   mutex->unlock();
   if (changed) emit crcChanged(value);
}

unsigned short int FirmwareIAPObj::getCommand() const
{
   QMutexLocker locker(mutex);
   return data.Command;
}
void FirmwareIAPObj::setCommand(unsigned short int value)
{
   mutex->lock();
   bool changed = data.Command != value;
   data.Command = value;
   mutex->unlock();
   if (changed) emit CommandChanged(value);
}

unsigned short int FirmwareIAPObj::getBoardRevision() const
{
   QMutexLocker locker(mutex);
   return data.BoardRevision;
}
void FirmwareIAPObj::setBoardRevision(unsigned short int value)
{
   mutex->lock();
   bool changed = data.BoardRevision != value;
   data.BoardRevision = value;
   mutex->unlock();
   if (changed) emit BoardRevisionChanged(value);
}

unsigned char FirmwareIAPObj::getCPUSerial(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.CPUSerial[index];
}
void FirmwareIAPObj::setCPUSerial(unsigned int index, unsigned char value)
{
   mutex->lock();
   bool changed = data.CPUSerial[index] != value;
   data.CPUSerial[index] = value;
   mutex->unlock();
   if (changed) emit CPUSerialChanged(index,value);
}

unsigned char FirmwareIAPObj::getBoardType() const
{
   QMutexLocker locker(mutex);
   return data.BoardType;
}
void FirmwareIAPObj::setBoardType(unsigned char value)
{
   mutex->lock();
   bool changed = data.BoardType != value;
   data.BoardType = value;
   mutex->unlock();
   if (changed) emit BoardTypeChanged(value);
}

unsigned char FirmwareIAPObj::getBootloaderRevision() const
{
   QMutexLocker locker(mutex);
   return data.BootloaderRevision;
}
void FirmwareIAPObj::setBootloaderRevision(unsigned char value)
{
   mutex->lock();
   bool changed = data.BootloaderRevision != value;
   data.BootloaderRevision = value;
   mutex->unlock();
   if (changed) emit BootloaderRevisionChanged(value);
}

unsigned char FirmwareIAPObj::getArmReset() const
{
   QMutexLocker locker(mutex);
   return data.ArmReset;
}
void FirmwareIAPObj::setArmReset(unsigned char value)
{
   mutex->lock();
   bool changed = data.ArmReset != value;
   data.ArmReset = value;
   mutex->unlock();
   if (changed) emit ArmResetChanged(value);
}

*/
