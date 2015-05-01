/**
 ******************************************************************************
 *
 * @file       hwsettings.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: hwsettings.xml.
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

#include "hwsettings.h"

int HwSettings::numInstances = 0;

/**
 * Constructor
 */
HwSettings::HwSettings(UAVObjManager* manager): UAVObject(manager, 0xA65C5CD0, "HwSettings", "Selection of optional hardware configurations.", "System", 1, 1, ACCESS_READWRITE, ACCESS_READWRITE, 1, 1, UPDATEMODE_ONCHANGE, UPDATEMODE_ONCHANGE, 0, 0, 0)
{

}

int HwSettings::UAVObjSetDataField(const char *dataIn, const std::string fieldID){
	if(fieldID == "CC_RcvrPort") {
		memset( &(dataFields.CC_RcvrPort), 0, sizeof(dataFields.CC_RcvrPort));
		memcpy( &(dataFields.CC_RcvrPort), dataIn, sizeof(dataFields.CC_RcvrPort));
	} else if(fieldID == "CC_MainPort") {
		memset( &(dataFields.CC_MainPort), 0, sizeof(dataFields.CC_MainPort));
		memcpy( &(dataFields.CC_MainPort), dataIn, sizeof(dataFields.CC_MainPort));
	} else if(fieldID == "CC_FlexiPort") {
		memset( &(dataFields.CC_FlexiPort), 0, sizeof(dataFields.CC_FlexiPort));
		memcpy( &(dataFields.CC_FlexiPort), dataIn, sizeof(dataFields.CC_FlexiPort));
	} else if(fieldID == "RV_RcvrPort") {
		memset( &(dataFields.RV_RcvrPort), 0, sizeof(dataFields.RV_RcvrPort));
		memcpy( &(dataFields.RV_RcvrPort), dataIn, sizeof(dataFields.RV_RcvrPort));
	} else if(fieldID == "RV_AuxPort") {
		memset( &(dataFields.RV_AuxPort), 0, sizeof(dataFields.RV_AuxPort));
		memcpy( &(dataFields.RV_AuxPort), dataIn, sizeof(dataFields.RV_AuxPort));
	} else if(fieldID == "RV_AuxSBusPort") {
		memset( &(dataFields.RV_AuxSBusPort), 0, sizeof(dataFields.RV_AuxSBusPort));
		memcpy( &(dataFields.RV_AuxSBusPort), dataIn, sizeof(dataFields.RV_AuxSBusPort));
	} else if(fieldID == "RV_FlexiPort") {
		memset( &(dataFields.RV_FlexiPort), 0, sizeof(dataFields.RV_FlexiPort));
		memcpy( &(dataFields.RV_FlexiPort), dataIn, sizeof(dataFields.RV_FlexiPort));
	} else if(fieldID == "RV_TelemetryPort") {
		memset( &(dataFields.RV_TelemetryPort), 0, sizeof(dataFields.RV_TelemetryPort));
		memcpy( &(dataFields.RV_TelemetryPort), dataIn, sizeof(dataFields.RV_TelemetryPort));
	} else if(fieldID == "RV_GPSPort") {
		memset( &(dataFields.RV_GPSPort), 0, sizeof(dataFields.RV_GPSPort));
		memcpy( &(dataFields.RV_GPSPort), dataIn, sizeof(dataFields.RV_GPSPort));
	} else if(fieldID == "RM_RcvrPort") {
		memset( &(dataFields.RM_RcvrPort), 0, sizeof(dataFields.RM_RcvrPort));
		memcpy( &(dataFields.RM_RcvrPort), dataIn, sizeof(dataFields.RM_RcvrPort));
	} else if(fieldID == "RM_MainPort") {
		memset( &(dataFields.RM_MainPort), 0, sizeof(dataFields.RM_MainPort));
		memcpy( &(dataFields.RM_MainPort), dataIn, sizeof(dataFields.RM_MainPort));
	} else if(fieldID == "RM_FlexiPort") {
		memset( &(dataFields.RM_FlexiPort), 0, sizeof(dataFields.RM_FlexiPort));
		memcpy( &(dataFields.RM_FlexiPort), dataIn, sizeof(dataFields.RM_FlexiPort));
	} else if(fieldID == "TelemetrySpeed") {
		memset( &(dataFields.TelemetrySpeed), 0, sizeof(dataFields.TelemetrySpeed));
		memcpy( &(dataFields.TelemetrySpeed), dataIn, sizeof(dataFields.TelemetrySpeed));
	} else if(fieldID == "GPSSpeed") {
		memset( &(dataFields.GPSSpeed), 0, sizeof(dataFields.GPSSpeed));
		memcpy( &(dataFields.GPSSpeed), dataIn, sizeof(dataFields.GPSSpeed));
	} else if(fieldID == "ComUsbBridgeSpeed") {
		memset( &(dataFields.ComUsbBridgeSpeed), 0, sizeof(dataFields.ComUsbBridgeSpeed));
		memcpy( &(dataFields.ComUsbBridgeSpeed), dataIn, sizeof(dataFields.ComUsbBridgeSpeed));
	} else if(fieldID == "USB_HIDPort") {
		memset( &(dataFields.USB_HIDPort), 0, sizeof(dataFields.USB_HIDPort));
		memcpy( &(dataFields.USB_HIDPort), dataIn, sizeof(dataFields.USB_HIDPort));
	} else if(fieldID == "USB_VCPPort") {
		memset( &(dataFields.USB_VCPPort), 0, sizeof(dataFields.USB_VCPPort));
		memcpy( &(dataFields.USB_VCPPort), dataIn, sizeof(dataFields.USB_VCPPort));
	} else if(fieldID == "OptionalModules") {
		memset( &(dataFields.OptionalModules), 0, sizeof(dataFields.OptionalModules));
		memcpy( &(dataFields.OptionalModules), dataIn, sizeof(dataFields.OptionalModules));
	} else if(fieldID == "ADCRouting") {
		memset( &(dataFields.ADCRouting), 0, sizeof(dataFields.ADCRouting));
		memcpy( &(dataFields.ADCRouting), dataIn, sizeof(dataFields.ADCRouting));
	} else if(fieldID == "DSMxBind") {
		memset( &(dataFields.DSMxBind), 0, sizeof(dataFields.DSMxBind));
		memcpy( &(dataFields.DSMxBind), dataIn, sizeof(dataFields.DSMxBind));
	} else if(fieldID == "WS2811LED_Out") {
		memset( &(dataFields.WS2811LED_Out), 0, sizeof(dataFields.WS2811LED_Out));
		memcpy( &(dataFields.WS2811LED_Out), dataIn, sizeof(dataFields.WS2811LED_Out));
	}
	return 0;
}

int HwSettings::UAVObjGetDataField(char *dataOut, const std::string fieldID){
	if(fieldID == "CC_RcvrPort") {
		memcpy( dataOut, &(dataFields.CC_RcvrPort), sizeof(dataFields.CC_RcvrPort));
	} else if(fieldID == "CC_MainPort") {
		memcpy( dataOut, &(dataFields.CC_MainPort), sizeof(dataFields.CC_MainPort));
	} else if(fieldID == "CC_FlexiPort") {
		memcpy( dataOut, &(dataFields.CC_FlexiPort), sizeof(dataFields.CC_FlexiPort));
	} else if(fieldID == "RV_RcvrPort") {
		memcpy( dataOut, &(dataFields.RV_RcvrPort), sizeof(dataFields.RV_RcvrPort));
	} else if(fieldID == "RV_AuxPort") {
		memcpy( dataOut, &(dataFields.RV_AuxPort), sizeof(dataFields.RV_AuxPort));
	} else if(fieldID == "RV_AuxSBusPort") {
		memcpy( dataOut, &(dataFields.RV_AuxSBusPort), sizeof(dataFields.RV_AuxSBusPort));
	} else if(fieldID == "RV_FlexiPort") {
		memcpy( dataOut, &(dataFields.RV_FlexiPort), sizeof(dataFields.RV_FlexiPort));
	} else if(fieldID == "RV_TelemetryPort") {
		memcpy( dataOut, &(dataFields.RV_TelemetryPort), sizeof(dataFields.RV_TelemetryPort));
	} else if(fieldID == "RV_GPSPort") {
		memcpy( dataOut, &(dataFields.RV_GPSPort), sizeof(dataFields.RV_GPSPort));
	} else if(fieldID == "RM_RcvrPort") {
		memcpy( dataOut, &(dataFields.RM_RcvrPort), sizeof(dataFields.RM_RcvrPort));
	} else if(fieldID == "RM_MainPort") {
		memcpy( dataOut, &(dataFields.RM_MainPort), sizeof(dataFields.RM_MainPort));
	} else if(fieldID == "RM_FlexiPort") {
		memcpy( dataOut, &(dataFields.RM_FlexiPort), sizeof(dataFields.RM_FlexiPort));
	} else if(fieldID == "TelemetrySpeed") {
		memcpy( dataOut, &(dataFields.TelemetrySpeed), sizeof(dataFields.TelemetrySpeed));
	} else if(fieldID == "GPSSpeed") {
		memcpy( dataOut, &(dataFields.GPSSpeed), sizeof(dataFields.GPSSpeed));
	} else if(fieldID == "ComUsbBridgeSpeed") {
		memcpy( dataOut, &(dataFields.ComUsbBridgeSpeed), sizeof(dataFields.ComUsbBridgeSpeed));
	} else if(fieldID == "USB_HIDPort") {
		memcpy( dataOut, &(dataFields.USB_HIDPort), sizeof(dataFields.USB_HIDPort));
	} else if(fieldID == "USB_VCPPort") {
		memcpy( dataOut, &(dataFields.USB_VCPPort), sizeof(dataFields.USB_VCPPort));
	} else if(fieldID == "OptionalModules") {
		memcpy( dataOut, &(dataFields.OptionalModules), sizeof(dataFields.OptionalModules));
	} else if(fieldID == "ADCRouting") {
		memcpy( dataOut, &(dataFields.ADCRouting), sizeof(dataFields.ADCRouting));
	} else if(fieldID == "DSMxBind") {
		memcpy( dataOut, &(dataFields.DSMxBind), sizeof(dataFields.DSMxBind));
	} else if(fieldID == "WS2811LED_Out") {
		memcpy( dataOut, &(dataFields.WS2811LED_Out), sizeof(dataFields.WS2811LED_Out));
	}
	return 0;
}

int HwSettings::UAVObjUnpack(const unsigned char *dataIn){
	memcpy(&dataFields, dataIn, NUMBYTES);
	return 0;
}

int HwSettings::UAVObjPack(unsigned char *dataOut) {
	memcpy(dataOut, &dataFields, NUMBYTES);
	return 0;
}

unsigned short HwSettings::UAVObjGetInstance() const {
	return instance;
}
unsigned short HwSettings::UAVObjGetNumBytes() const {
	return sizeof(dataFields);
}
unsigned short HwSettings::UAVObjGetNumInstances() const {
	return numInstances;
}

std::string HwSettings::prettyPrint() {
	std::stringstream ss;
	ss << "\nPrinting object: hwsettings" << std::endl;
	ss << "\tCC_RcvrPort: " << dataFields.CC_RcvrPort << std::endl;
	ss << "\tCC_MainPort: " << dataFields.CC_MainPort << std::endl;
	ss << "\tCC_FlexiPort: " << dataFields.CC_FlexiPort << std::endl;
	ss << "\tRV_RcvrPort: " << dataFields.RV_RcvrPort << std::endl;
	ss << "\tRV_AuxPort: " << dataFields.RV_AuxPort << std::endl;
	ss << "\tRV_AuxSBusPort: " << dataFields.RV_AuxSBusPort << std::endl;
	ss << "\tRV_FlexiPort: " << dataFields.RV_FlexiPort << std::endl;
	ss << "\tRV_TelemetryPort: " << dataFields.RV_TelemetryPort << std::endl;
	ss << "\tRV_GPSPort: " << dataFields.RV_GPSPort << std::endl;
	ss << "\tRM_RcvrPort: " << dataFields.RM_RcvrPort << std::endl;
	ss << "\tRM_MainPort: " << dataFields.RM_MainPort << std::endl;
	ss << "\tRM_FlexiPort: " << dataFields.RM_FlexiPort << std::endl;
	ss << "\tTelemetrySpeed: " << dataFields.TelemetrySpeed << std::endl;
	ss << "\tGPSSpeed: " << dataFields.GPSSpeed << std::endl;
	ss << "\tComUsbBridgeSpeed: " << dataFields.ComUsbBridgeSpeed << std::endl;
	ss << "\tUSB_HIDPort: " << dataFields.USB_HIDPort << std::endl;
	ss << "\tUSB_VCPPort: " << dataFields.USB_VCPPort << std::endl;
	ss << "\tOptionalModules: " << dataFields.OptionalModules << std::endl;
	ss << "\tADCRouting: " << dataFields.ADCRouting << std::endl;
	ss << "\tDSMxBind: " << dataFields.DSMxBind << std::endl;
	ss << "\tWS2811LED_Out: " << dataFields.WS2811LED_Out << std::endl;

	return ss.str();
}

/*/***/
/* * Initialize object fields with the default values.*/
/* * If a default value is not specified the object fields*/
/* * will be initialized to zero.*/
/* */
/*void HwSettings::setDefaultFieldValues()*/
/*{*/
/*    data.CC_RcvrPort = 1;
    data.CC_MainPort = 1;
    data.CC_FlexiPort = 0;
    data.RV_RcvrPort = 1;
    data.RV_AuxPort = 0;
    data.RV_AuxSBusPort = 0;
    data.RV_FlexiPort = 0;
    data.RV_TelemetryPort = 1;
    data.RV_GPSPort = 2;
    data.RM_RcvrPort = 1;
    data.RM_MainPort = 0;
    data.RM_FlexiPort = 0;
    data.TelemetrySpeed = 5;
    data.GPSSpeed = 5;
    data.ComUsbBridgeSpeed = 5;
    data.USB_HIDPort = 0;
    data.USB_VCPPort = 3;
    data.OptionalModules[0] = 0;
    data.OptionalModules[1] = 0;
    data.OptionalModules[2] = 0;
    data.OptionalModules[3] = 0;
    data.OptionalModules[4] = 0;
    data.OptionalModules[5] = 0;
    data.OptionalModules[6] = 0;
    data.OptionalModules[7] = 0;
    data.OptionalModules[8] = 0;
    data.OptionalModules[9] = 0;
    data.ADCRouting[0] = 0;
    data.ADCRouting[1] = 0;
    data.ADCRouting[2] = 0;
    data.ADCRouting[3] = 0;
    data.DSMxBind = 0;
    data.WS2811LED_Out = 8;
*/
/*}*/

/*/***/
/* * Get the object data fields*/
/* */
/*HwSettings::DataFields HwSettings::getData()*/
/*{*/
/*    QMutexLocker locker(mutex);*/
/*    return data;*/
/*}*/

/*/***/
/* * Set the object data fields*/
/* */
/*void HwSettings::setData(const DataFields& data)*/
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

/*void HwSettings::emitNotifications()*/
/*{*/
/*            //if (data.CC_RcvrPort != oldData.CC_RcvrPort)
            emit CC_RcvrPortChanged(data.CC_RcvrPort);
        //if (data.CC_MainPort != oldData.CC_MainPort)
            emit CC_MainPortChanged(data.CC_MainPort);
        //if (data.CC_FlexiPort != oldData.CC_FlexiPort)
            emit CC_FlexiPortChanged(data.CC_FlexiPort);
        //if (data.RV_RcvrPort != oldData.RV_RcvrPort)
            emit RV_RcvrPortChanged(data.RV_RcvrPort);
        //if (data.RV_AuxPort != oldData.RV_AuxPort)
            emit RV_AuxPortChanged(data.RV_AuxPort);
        //if (data.RV_AuxSBusPort != oldData.RV_AuxSBusPort)
            emit RV_AuxSBusPortChanged(data.RV_AuxSBusPort);
        //if (data.RV_FlexiPort != oldData.RV_FlexiPort)
            emit RV_FlexiPortChanged(data.RV_FlexiPort);
        //if (data.RV_TelemetryPort != oldData.RV_TelemetryPort)
            emit RV_TelemetryPortChanged(data.RV_TelemetryPort);
        //if (data.RV_GPSPort != oldData.RV_GPSPort)
            emit RV_GPSPortChanged(data.RV_GPSPort);
        //if (data.RM_RcvrPort != oldData.RM_RcvrPort)
            emit RM_RcvrPortChanged(data.RM_RcvrPort);
        //if (data.RM_MainPort != oldData.RM_MainPort)
            emit RM_MainPortChanged(data.RM_MainPort);
        //if (data.RM_FlexiPort != oldData.RM_FlexiPort)
            emit RM_FlexiPortChanged(data.RM_FlexiPort);
        //if (data.TelemetrySpeed != oldData.TelemetrySpeed)
            emit TelemetrySpeedChanged(data.TelemetrySpeed);
        //if (data.GPSSpeed != oldData.GPSSpeed)
            emit GPSSpeedChanged(data.GPSSpeed);
        //if (data.ComUsbBridgeSpeed != oldData.ComUsbBridgeSpeed)
            emit ComUsbBridgeSpeedChanged(data.ComUsbBridgeSpeed);
        //if (data.USB_HIDPort != oldData.USB_HIDPort)
            emit USB_HIDPortChanged(data.USB_HIDPort);
        //if (data.USB_VCPPort != oldData.USB_VCPPort)
            emit USB_VCPPortChanged(data.USB_VCPPort);
        //if (data.DSMxBind != oldData.DSMxBind)
            emit DSMxBindChanged(data.DSMxBind);
        //if (data.WS2811LED_Out != oldData.WS2811LED_Out)
            emit WS2811LED_OutChanged(data.WS2811LED_Out);
*/
/*}*/

/*/***/
/* * Create a clone of this object, a new instance ID must be specified.*/
/* * Do not use this function directly to create new instances, the*/
/* * UAVObjectManager should be used instead.*/
/* */
/*UAVDataObject *HwSettings::clone(unsigned int instID)*/
/*{*/
/*    HwSettings *obj = new HwSettings();*/
/*    obj->initialize(instID, this->getMetaObject());*/
/*    return obj;*/
/*}*/

/*/***/
/* * Create a clone of this object only to be used to retrieve defaults*/
/* */
/*UAVDataObject *HwSettings::dirtyClone()*/
/*{*/
/*    HwSettings *obj = new HwSettings();*/
/*    return obj;*/
/*}*/

/*/***/
/* * Static function to retrieve an instance of the object.*/
/* */
/*HwSettings *HwSettings::GetInstance(UAVObjectManager *objMngr, unsigned int instID)*/
/*{*/
/*    return dynamic_cast<HwSettings *>(objMngr->getObject(HwSettings::OBJID, instID));*/
/*}*/

/*unsigned char HwSettings::getCC_RcvrPort() const
{
   QMutexLocker locker(mutex);
   return data.CC_RcvrPort;
}
void HwSettings::setCC_RcvrPort(unsigned char value)
{
   mutex->lock();
   bool changed = data.CC_RcvrPort != value;
   data.CC_RcvrPort = value;
   mutex->unlock();
   if (changed) emit CC_RcvrPortChanged(value);
}

unsigned char HwSettings::getCC_MainPort() const
{
   QMutexLocker locker(mutex);
   return data.CC_MainPort;
}
void HwSettings::setCC_MainPort(unsigned char value)
{
   mutex->lock();
   bool changed = data.CC_MainPort != value;
   data.CC_MainPort = value;
   mutex->unlock();
   if (changed) emit CC_MainPortChanged(value);
}

unsigned char HwSettings::getCC_FlexiPort() const
{
   QMutexLocker locker(mutex);
   return data.CC_FlexiPort;
}
void HwSettings::setCC_FlexiPort(unsigned char value)
{
   mutex->lock();
   bool changed = data.CC_FlexiPort != value;
   data.CC_FlexiPort = value;
   mutex->unlock();
   if (changed) emit CC_FlexiPortChanged(value);
}

unsigned char HwSettings::getRV_RcvrPort() const
{
   QMutexLocker locker(mutex);
   return data.RV_RcvrPort;
}
void HwSettings::setRV_RcvrPort(unsigned char value)
{
   mutex->lock();
   bool changed = data.RV_RcvrPort != value;
   data.RV_RcvrPort = value;
   mutex->unlock();
   if (changed) emit RV_RcvrPortChanged(value);
}

unsigned char HwSettings::getRV_AuxPort() const
{
   QMutexLocker locker(mutex);
   return data.RV_AuxPort;
}
void HwSettings::setRV_AuxPort(unsigned char value)
{
   mutex->lock();
   bool changed = data.RV_AuxPort != value;
   data.RV_AuxPort = value;
   mutex->unlock();
   if (changed) emit RV_AuxPortChanged(value);
}

unsigned char HwSettings::getRV_AuxSBusPort() const
{
   QMutexLocker locker(mutex);
   return data.RV_AuxSBusPort;
}
void HwSettings::setRV_AuxSBusPort(unsigned char value)
{
   mutex->lock();
   bool changed = data.RV_AuxSBusPort != value;
   data.RV_AuxSBusPort = value;
   mutex->unlock();
   if (changed) emit RV_AuxSBusPortChanged(value);
}

unsigned char HwSettings::getRV_FlexiPort() const
{
   QMutexLocker locker(mutex);
   return data.RV_FlexiPort;
}
void HwSettings::setRV_FlexiPort(unsigned char value)
{
   mutex->lock();
   bool changed = data.RV_FlexiPort != value;
   data.RV_FlexiPort = value;
   mutex->unlock();
   if (changed) emit RV_FlexiPortChanged(value);
}

unsigned char HwSettings::getRV_TelemetryPort() const
{
   QMutexLocker locker(mutex);
   return data.RV_TelemetryPort;
}
void HwSettings::setRV_TelemetryPort(unsigned char value)
{
   mutex->lock();
   bool changed = data.RV_TelemetryPort != value;
   data.RV_TelemetryPort = value;
   mutex->unlock();
   if (changed) emit RV_TelemetryPortChanged(value);
}

unsigned char HwSettings::getRV_GPSPort() const
{
   QMutexLocker locker(mutex);
   return data.RV_GPSPort;
}
void HwSettings::setRV_GPSPort(unsigned char value)
{
   mutex->lock();
   bool changed = data.RV_GPSPort != value;
   data.RV_GPSPort = value;
   mutex->unlock();
   if (changed) emit RV_GPSPortChanged(value);
}

unsigned char HwSettings::getRM_RcvrPort() const
{
   QMutexLocker locker(mutex);
   return data.RM_RcvrPort;
}
void HwSettings::setRM_RcvrPort(unsigned char value)
{
   mutex->lock();
   bool changed = data.RM_RcvrPort != value;
   data.RM_RcvrPort = value;
   mutex->unlock();
   if (changed) emit RM_RcvrPortChanged(value);
}

unsigned char HwSettings::getRM_MainPort() const
{
   QMutexLocker locker(mutex);
   return data.RM_MainPort;
}
void HwSettings::setRM_MainPort(unsigned char value)
{
   mutex->lock();
   bool changed = data.RM_MainPort != value;
   data.RM_MainPort = value;
   mutex->unlock();
   if (changed) emit RM_MainPortChanged(value);
}

unsigned char HwSettings::getRM_FlexiPort() const
{
   QMutexLocker locker(mutex);
   return data.RM_FlexiPort;
}
void HwSettings::setRM_FlexiPort(unsigned char value)
{
   mutex->lock();
   bool changed = data.RM_FlexiPort != value;
   data.RM_FlexiPort = value;
   mutex->unlock();
   if (changed) emit RM_FlexiPortChanged(value);
}

unsigned char HwSettings::getTelemetrySpeed() const
{
   QMutexLocker locker(mutex);
   return data.TelemetrySpeed;
}
void HwSettings::setTelemetrySpeed(unsigned char value)
{
   mutex->lock();
   bool changed = data.TelemetrySpeed != value;
   data.TelemetrySpeed = value;
   mutex->unlock();
   if (changed) emit TelemetrySpeedChanged(value);
}

unsigned char HwSettings::getGPSSpeed() const
{
   QMutexLocker locker(mutex);
   return data.GPSSpeed;
}
void HwSettings::setGPSSpeed(unsigned char value)
{
   mutex->lock();
   bool changed = data.GPSSpeed != value;
   data.GPSSpeed = value;
   mutex->unlock();
   if (changed) emit GPSSpeedChanged(value);
}

unsigned char HwSettings::getComUsbBridgeSpeed() const
{
   QMutexLocker locker(mutex);
   return data.ComUsbBridgeSpeed;
}
void HwSettings::setComUsbBridgeSpeed(unsigned char value)
{
   mutex->lock();
   bool changed = data.ComUsbBridgeSpeed != value;
   data.ComUsbBridgeSpeed = value;
   mutex->unlock();
   if (changed) emit ComUsbBridgeSpeedChanged(value);
}

unsigned char HwSettings::getUSB_HIDPort() const
{
   QMutexLocker locker(mutex);
   return data.USB_HIDPort;
}
void HwSettings::setUSB_HIDPort(unsigned char value)
{
   mutex->lock();
   bool changed = data.USB_HIDPort != value;
   data.USB_HIDPort = value;
   mutex->unlock();
   if (changed) emit USB_HIDPortChanged(value);
}

unsigned char HwSettings::getUSB_VCPPort() const
{
   QMutexLocker locker(mutex);
   return data.USB_VCPPort;
}
void HwSettings::setUSB_VCPPort(unsigned char value)
{
   mutex->lock();
   bool changed = data.USB_VCPPort != value;
   data.USB_VCPPort = value;
   mutex->unlock();
   if (changed) emit USB_VCPPortChanged(value);
}

unsigned char HwSettings::getOptionalModules(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.OptionalModules[index];
}
void HwSettings::setOptionalModules(unsigned int index, unsigned char value)
{
   mutex->lock();
   bool changed = data.OptionalModules[index] != value;
   data.OptionalModules[index] = value;
   mutex->unlock();
   if (changed) emit OptionalModulesChanged(index,value);
}

unsigned char HwSettings::getADCRouting(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.ADCRouting[index];
}
void HwSettings::setADCRouting(unsigned int index, unsigned char value)
{
   mutex->lock();
   bool changed = data.ADCRouting[index] != value;
   data.ADCRouting[index] = value;
   mutex->unlock();
   if (changed) emit ADCRoutingChanged(index,value);
}

unsigned char HwSettings::getDSMxBind() const
{
   QMutexLocker locker(mutex);
   return data.DSMxBind;
}
void HwSettings::setDSMxBind(unsigned char value)
{
   mutex->lock();
   bool changed = data.DSMxBind != value;
   data.DSMxBind = value;
   mutex->unlock();
   if (changed) emit DSMxBindChanged(value);
}

unsigned char HwSettings::getWS2811LED_Out() const
{
   QMutexLocker locker(mutex);
   return data.WS2811LED_Out;
}
void HwSettings::setWS2811LED_Out(unsigned char value)
{
   mutex->lock();
   bool changed = data.WS2811LED_Out != value;
   data.WS2811LED_Out = value;
   mutex->unlock();
   if (changed) emit WS2811LED_OutChanged(value);
}

*/
