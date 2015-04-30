/**
 ******************************************************************************
 *
 * @file       oplinksettings.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: oplinksettings.xml.
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

#include "oplinksettings.h"

int OPLinkSettings::numInstances = 0;

/**
 * Constructor
 */
OPLinkSettings::OPLinkSettings(UAVObjManager* manager): UAVObject(manager, 0x8885F812, "OPLinkSettings", "OPLink configurations options.", "System", 1, 1, ACCESS_READWRITE, ACCESS_READWRITE, 1, 1, UPDATEMODE_ONCHANGE, UPDATEMODE_ONCHANGE, 0, 0, 0)
{

}

int OPLinkSettings::UAVObjSetDataField(const char *dataIn, const std::string fieldID){
	if(fieldID == "CoordID") {
		memset( &(dataFields.CoordID), 0, sizeof(dataFields.CoordID));
		memcpy( &(dataFields.CoordID), dataIn, sizeof(dataFields.CoordID));
	} else if(fieldID == "Coordinator") {
		memset( &(dataFields.Coordinator), 0, sizeof(dataFields.Coordinator));
		memcpy( &(dataFields.Coordinator), dataIn, sizeof(dataFields.Coordinator));
	} else if(fieldID == "OneWay") {
		memset( &(dataFields.OneWay), 0, sizeof(dataFields.OneWay));
		memcpy( &(dataFields.OneWay), dataIn, sizeof(dataFields.OneWay));
	} else if(fieldID == "PPM") {
		memset( &(dataFields.PPM), 0, sizeof(dataFields.PPM));
		memcpy( &(dataFields.PPM), dataIn, sizeof(dataFields.PPM));
	} else if(fieldID == "PPMOnly") {
		memset( &(dataFields.PPMOnly), 0, sizeof(dataFields.PPMOnly));
		memcpy( &(dataFields.PPMOnly), dataIn, sizeof(dataFields.PPMOnly));
	} else if(fieldID == "MainPort") {
		memset( &(dataFields.MainPort), 0, sizeof(dataFields.MainPort));
		memcpy( &(dataFields.MainPort), dataIn, sizeof(dataFields.MainPort));
	} else if(fieldID == "FlexiPort") {
		memset( &(dataFields.FlexiPort), 0, sizeof(dataFields.FlexiPort));
		memcpy( &(dataFields.FlexiPort), dataIn, sizeof(dataFields.FlexiPort));
	} else if(fieldID == "VCPPort") {
		memset( &(dataFields.VCPPort), 0, sizeof(dataFields.VCPPort));
		memcpy( &(dataFields.VCPPort), dataIn, sizeof(dataFields.VCPPort));
	} else if(fieldID == "ComSpeed") {
		memset( &(dataFields.ComSpeed), 0, sizeof(dataFields.ComSpeed));
		memcpy( &(dataFields.ComSpeed), dataIn, sizeof(dataFields.ComSpeed));
	} else if(fieldID == "MaxRFPower") {
		memset( &(dataFields.MaxRFPower), 0, sizeof(dataFields.MaxRFPower));
		memcpy( &(dataFields.MaxRFPower), dataIn, sizeof(dataFields.MaxRFPower));
	} else if(fieldID == "MinChannel") {
		memset( &(dataFields.MinChannel), 0, sizeof(dataFields.MinChannel));
		memcpy( &(dataFields.MinChannel), dataIn, sizeof(dataFields.MinChannel));
	} else if(fieldID == "MaxChannel") {
		memset( &(dataFields.MaxChannel), 0, sizeof(dataFields.MaxChannel));
		memcpy( &(dataFields.MaxChannel), dataIn, sizeof(dataFields.MaxChannel));
	}
	return 0;
}

int OPLinkSettings::UAVObjGetDataField(char *dataOut, const std::string fieldID){
	if(fieldID == "CoordID") {
		memcpy( dataOut, &(dataFields.CoordID), sizeof(dataFields.CoordID));
	} else if(fieldID == "Coordinator") {
		memcpy( dataOut, &(dataFields.Coordinator), sizeof(dataFields.Coordinator));
	} else if(fieldID == "OneWay") {
		memcpy( dataOut, &(dataFields.OneWay), sizeof(dataFields.OneWay));
	} else if(fieldID == "PPM") {
		memcpy( dataOut, &(dataFields.PPM), sizeof(dataFields.PPM));
	} else if(fieldID == "PPMOnly") {
		memcpy( dataOut, &(dataFields.PPMOnly), sizeof(dataFields.PPMOnly));
	} else if(fieldID == "MainPort") {
		memcpy( dataOut, &(dataFields.MainPort), sizeof(dataFields.MainPort));
	} else if(fieldID == "FlexiPort") {
		memcpy( dataOut, &(dataFields.FlexiPort), sizeof(dataFields.FlexiPort));
	} else if(fieldID == "VCPPort") {
		memcpy( dataOut, &(dataFields.VCPPort), sizeof(dataFields.VCPPort));
	} else if(fieldID == "ComSpeed") {
		memcpy( dataOut, &(dataFields.ComSpeed), sizeof(dataFields.ComSpeed));
	} else if(fieldID == "MaxRFPower") {
		memcpy( dataOut, &(dataFields.MaxRFPower), sizeof(dataFields.MaxRFPower));
	} else if(fieldID == "MinChannel") {
		memcpy( dataOut, &(dataFields.MinChannel), sizeof(dataFields.MinChannel));
	} else if(fieldID == "MaxChannel") {
		memcpy( dataOut, &(dataFields.MaxChannel), sizeof(dataFields.MaxChannel));
	}
	return 0;
}

int OPLinkSettings::UAVObjUnpack(const unsigned char *dataIn){
	memcpy(&dataFields, dataIn, NUMBYTES);
	return 0;
}

int OPLinkSettings::UAVObjPack(unsigned char *dataOut) {
	memcpy(dataOut, &dataFields, NUMBYTES);
	return 0;
}

unsigned short OPLinkSettings::UAVObjGetInstance() const {
	return instance;
}
unsigned short OPLinkSettings::UAVObjGetNumBytes() const {
	return sizeof(dataFields);
}
unsigned short OPLinkSettings::UAVObjGetNumInstances() const {
	return numInstances;
}

std::string OPLinkSettings::prettyPrint() {
	std::stringstream ss;
	ss << "\nPrinting object: oplinksettings" << std::endl;
	ss << "\tCoordID: " << dataFields.CoordID << std::endl;
	ss << "\tCoordinator: " << dataFields.Coordinator << std::endl;
	ss << "\tOneWay: " << dataFields.OneWay << std::endl;
	ss << "\tPPM: " << dataFields.PPM << std::endl;
	ss << "\tPPMOnly: " << dataFields.PPMOnly << std::endl;
	ss << "\tMainPort: " << dataFields.MainPort << std::endl;
	ss << "\tFlexiPort: " << dataFields.FlexiPort << std::endl;
	ss << "\tVCPPort: " << dataFields.VCPPort << std::endl;
	ss << "\tComSpeed: " << dataFields.ComSpeed << std::endl;
	ss << "\tMaxRFPower: " << dataFields.MaxRFPower << std::endl;
	ss << "\tMinChannel: " << dataFields.MinChannel << std::endl;
	ss << "\tMaxChannel: " << dataFields.MaxChannel << std::endl;

	return ss.str();
}

/*/***/
/* * Initialize object fields with the default values.*/
/* * If a default value is not specified the object fields*/
/* * will be initialized to zero.*/
/* */
/*void OPLinkSettings::setDefaultFieldValues()*/
/*{*/
/*    data.CoordID = 0;
    data.Coordinator = 0;
    data.OneWay = 0;
    data.PPM = 0;
    data.PPMOnly = 0;
    data.MainPort = 0;
    data.FlexiPort = 0;
    data.VCPPort = 0;
    data.ComSpeed = 3;
    data.MaxRFPower = 0;
    data.MinChannel = 0;
    data.MaxChannel = 250;
*/
/*}*/

/*/***/
/* * Get the object data fields*/
/* */
/*OPLinkSettings::DataFields OPLinkSettings::getData()*/
/*{*/
/*    QMutexLocker locker(mutex);*/
/*    return data;*/
/*}*/

/*/***/
/* * Set the object data fields*/
/* */
/*void OPLinkSettings::setData(const DataFields& data)*/
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

/*void OPLinkSettings::emitNotifications()*/
/*{*/
/*            //if (data.CoordID != oldData.CoordID)
            emit CoordIDChanged(data.CoordID);
        //if (data.Coordinator != oldData.Coordinator)
            emit CoordinatorChanged(data.Coordinator);
        //if (data.OneWay != oldData.OneWay)
            emit OneWayChanged(data.OneWay);
        //if (data.PPM != oldData.PPM)
            emit PPMChanged(data.PPM);
        //if (data.PPMOnly != oldData.PPMOnly)
            emit PPMOnlyChanged(data.PPMOnly);
        //if (data.MainPort != oldData.MainPort)
            emit MainPortChanged(data.MainPort);
        //if (data.FlexiPort != oldData.FlexiPort)
            emit FlexiPortChanged(data.FlexiPort);
        //if (data.VCPPort != oldData.VCPPort)
            emit VCPPortChanged(data.VCPPort);
        //if (data.ComSpeed != oldData.ComSpeed)
            emit ComSpeedChanged(data.ComSpeed);
        //if (data.MaxRFPower != oldData.MaxRFPower)
            emit MaxRFPowerChanged(data.MaxRFPower);
        //if (data.MinChannel != oldData.MinChannel)
            emit MinChannelChanged(data.MinChannel);
        //if (data.MaxChannel != oldData.MaxChannel)
            emit MaxChannelChanged(data.MaxChannel);
*/
/*}*/

/*/***/
/* * Create a clone of this object, a new instance ID must be specified.*/
/* * Do not use this function directly to create new instances, the*/
/* * UAVObjectManager should be used instead.*/
/* */
/*UAVDataObject *OPLinkSettings::clone(unsigned int instID)*/
/*{*/
/*    OPLinkSettings *obj = new OPLinkSettings();*/
/*    obj->initialize(instID, this->getMetaObject());*/
/*    return obj;*/
/*}*/

/*/***/
/* * Create a clone of this object only to be used to retrieve defaults*/
/* */
/*UAVDataObject *OPLinkSettings::dirtyClone()*/
/*{*/
/*    OPLinkSettings *obj = new OPLinkSettings();*/
/*    return obj;*/
/*}*/

/*/***/
/* * Static function to retrieve an instance of the object.*/
/* */
/*OPLinkSettings *OPLinkSettings::GetInstance(UAVObjectManager *objMngr, unsigned int instID)*/
/*{*/
/*    return dynamic_cast<OPLinkSettings *>(objMngr->getObject(OPLinkSettings::OBJID, instID));*/
/*}*/

/*unsigned int OPLinkSettings::getCoordID() const
{
   QMutexLocker locker(mutex);
   return data.CoordID;
}
void OPLinkSettings::setCoordID(unsigned int value)
{
   mutex->lock();
   bool changed = data.CoordID != value;
   data.CoordID = value;
   mutex->unlock();
   if (changed) emit CoordIDChanged(value);
}

unsigned char OPLinkSettings::getCoordinator() const
{
   QMutexLocker locker(mutex);
   return data.Coordinator;
}
void OPLinkSettings::setCoordinator(unsigned char value)
{
   mutex->lock();
   bool changed = data.Coordinator != value;
   data.Coordinator = value;
   mutex->unlock();
   if (changed) emit CoordinatorChanged(value);
}

unsigned char OPLinkSettings::getOneWay() const
{
   QMutexLocker locker(mutex);
   return data.OneWay;
}
void OPLinkSettings::setOneWay(unsigned char value)
{
   mutex->lock();
   bool changed = data.OneWay != value;
   data.OneWay = value;
   mutex->unlock();
   if (changed) emit OneWayChanged(value);
}

unsigned char OPLinkSettings::getPPM() const
{
   QMutexLocker locker(mutex);
   return data.PPM;
}
void OPLinkSettings::setPPM(unsigned char value)
{
   mutex->lock();
   bool changed = data.PPM != value;
   data.PPM = value;
   mutex->unlock();
   if (changed) emit PPMChanged(value);
}

unsigned char OPLinkSettings::getPPMOnly() const
{
   QMutexLocker locker(mutex);
   return data.PPMOnly;
}
void OPLinkSettings::setPPMOnly(unsigned char value)
{
   mutex->lock();
   bool changed = data.PPMOnly != value;
   data.PPMOnly = value;
   mutex->unlock();
   if (changed) emit PPMOnlyChanged(value);
}

unsigned char OPLinkSettings::getMainPort() const
{
   QMutexLocker locker(mutex);
   return data.MainPort;
}
void OPLinkSettings::setMainPort(unsigned char value)
{
   mutex->lock();
   bool changed = data.MainPort != value;
   data.MainPort = value;
   mutex->unlock();
   if (changed) emit MainPortChanged(value);
}

unsigned char OPLinkSettings::getFlexiPort() const
{
   QMutexLocker locker(mutex);
   return data.FlexiPort;
}
void OPLinkSettings::setFlexiPort(unsigned char value)
{
   mutex->lock();
   bool changed = data.FlexiPort != value;
   data.FlexiPort = value;
   mutex->unlock();
   if (changed) emit FlexiPortChanged(value);
}

unsigned char OPLinkSettings::getVCPPort() const
{
   QMutexLocker locker(mutex);
   return data.VCPPort;
}
void OPLinkSettings::setVCPPort(unsigned char value)
{
   mutex->lock();
   bool changed = data.VCPPort != value;
   data.VCPPort = value;
   mutex->unlock();
   if (changed) emit VCPPortChanged(value);
}

unsigned char OPLinkSettings::getComSpeed() const
{
   QMutexLocker locker(mutex);
   return data.ComSpeed;
}
void OPLinkSettings::setComSpeed(unsigned char value)
{
   mutex->lock();
   bool changed = data.ComSpeed != value;
   data.ComSpeed = value;
   mutex->unlock();
   if (changed) emit ComSpeedChanged(value);
}

unsigned char OPLinkSettings::getMaxRFPower() const
{
   QMutexLocker locker(mutex);
   return data.MaxRFPower;
}
void OPLinkSettings::setMaxRFPower(unsigned char value)
{
   mutex->lock();
   bool changed = data.MaxRFPower != value;
   data.MaxRFPower = value;
   mutex->unlock();
   if (changed) emit MaxRFPowerChanged(value);
}

unsigned char OPLinkSettings::getMinChannel() const
{
   QMutexLocker locker(mutex);
   return data.MinChannel;
}
void OPLinkSettings::setMinChannel(unsigned char value)
{
   mutex->lock();
   bool changed = data.MinChannel != value;
   data.MinChannel = value;
   mutex->unlock();
   if (changed) emit MinChannelChanged(value);
}

unsigned char OPLinkSettings::getMaxChannel() const
{
   QMutexLocker locker(mutex);
   return data.MaxChannel;
}
void OPLinkSettings::setMaxChannel(unsigned char value)
{
   mutex->lock();
   bool changed = data.MaxChannel != value;
   data.MaxChannel = value;
   mutex->unlock();
   if (changed) emit MaxChannelChanged(value);
}

*/
