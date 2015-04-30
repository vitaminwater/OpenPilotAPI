/**
 ******************************************************************************
 *
 * @file       hwsettings.h
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
#ifndef HWSETTINGS_H
#define HWSETTINGS_H

#include <string>
#include <sstream>
#include <iostream>
#include <string.h>

#include "UAVObject.h"

    // Data Fields
typedef struct {
        unsigned char CC_RcvrPort;
        unsigned char CC_MainPort;
        unsigned char CC_FlexiPort;
        unsigned char RV_RcvrPort;
        unsigned char RV_AuxPort;
        unsigned char RV_AuxSBusPort;
        unsigned char RV_FlexiPort;
        unsigned char RV_TelemetryPort;
        unsigned char RV_GPSPort;
        unsigned char RM_RcvrPort;
        unsigned char RM_MainPort;
        unsigned char RM_FlexiPort;
        unsigned char TelemetrySpeed;
        unsigned char GPSSpeed;
        unsigned char ComUsbBridgeSpeed;
        unsigned char USB_HIDPort;
        unsigned char USB_VCPPort;
        unsigned char OptionalModules[10];
        unsigned char ADCRouting[4];
        unsigned char DSMxBind;
        unsigned char WS2811LED_Out;

} __attribute__((packed)) DataFieldsHwSettings;

class HwSettings: public UAVObject
{

public:
	int instance;
	DataFieldsHwSettings dataFields;
	static int numInstances;

    // Field information
    // Field CC_RcvrPort information
    /* Enumeration options for field CC_RcvrPort */
    typedef enum { CC_RCVRPORT_DISABLEDONESHOT=0, CC_RCVRPORT_PWMNOONESHOT=1, CC_RCVRPORT_PPMNOONESHOT=2, CC_RCVRPORT_PPMPWMNOONESHOT=3, CC_RCVRPORT_PPMOUTPUTSNOONESHOT=4, CC_RCVRPORT_PPM_PIN8ONESHOT=5, CC_RCVRPORT_OUTPUTSONESHOT=6 } CC_RcvrPortOptions;
    // Field CC_MainPort information
    /* Enumeration options for field CC_MainPort */
    typedef enum { CC_MAINPORT_DISABLED=0, CC_MAINPORT_TELEMETRY=1, CC_MAINPORT_GPS=2, CC_MAINPORT_SBUS=3, CC_MAINPORT_DSM=4, CC_MAINPORT_DEBUGCONSOLE=5, CC_MAINPORT_COMBRIDGE=6, CC_MAINPORT_OSDHK=7 } CC_MainPortOptions;
    // Field CC_FlexiPort information
    /* Enumeration options for field CC_FlexiPort */
    typedef enum { CC_FLEXIPORT_DISABLED=0, CC_FLEXIPORT_TELEMETRY=1, CC_FLEXIPORT_GPS=2, CC_FLEXIPORT_I2C=3, CC_FLEXIPORT_PPM=4, CC_FLEXIPORT_DSM=5, CC_FLEXIPORT_DEBUGCONSOLE=6, CC_FLEXIPORT_COMBRIDGE=7, CC_FLEXIPORT_OSDHK=8 } CC_FlexiPortOptions;
    // Field RV_RcvrPort information
    /* Enumeration options for field RV_RcvrPort */
    typedef enum { RV_RCVRPORT_DISABLED=0, RV_RCVRPORT_PWM=1, RV_RCVRPORT_PPM=2, RV_RCVRPORT_PPMOUTPUTS=3, RV_RCVRPORT_OUTPUTS=4 } RV_RcvrPortOptions;
    // Field RV_AuxPort information
    /* Enumeration options for field RV_AuxPort */
    typedef enum { RV_AUXPORT_DISABLED=0, RV_AUXPORT_TELEMETRY=1, RV_AUXPORT_DSM=2, RV_AUXPORT_COMAUX=3, RV_AUXPORT_COMBRIDGE=4, RV_AUXPORT_OSDHK=5 } RV_AuxPortOptions;
    // Field RV_AuxSBusPort information
    /* Enumeration options for field RV_AuxSBusPort */
    typedef enum { RV_AUXSBUSPORT_DISABLED=0, RV_AUXSBUSPORT_SBUS=1, RV_AUXSBUSPORT_DSM=2, RV_AUXSBUSPORT_COMAUX=3, RV_AUXSBUSPORT_COMBRIDGE=4, RV_AUXSBUSPORT_OSDHK=5 } RV_AuxSBusPortOptions;
    // Field RV_FlexiPort information
    /* Enumeration options for field RV_FlexiPort */
    typedef enum { RV_FLEXIPORT_DISABLED=0, RV_FLEXIPORT_I2C=1, RV_FLEXIPORT_DSM=2, RV_FLEXIPORT_COMAUX=3, RV_FLEXIPORT_COMBRIDGE=4 } RV_FlexiPortOptions;
    // Field RV_TelemetryPort information
    /* Enumeration options for field RV_TelemetryPort */
    typedef enum { RV_TELEMETRYPORT_DISABLED=0, RV_TELEMETRYPORT_TELEMETRY=1, RV_TELEMETRYPORT_COMAUX=2, RV_TELEMETRYPORT_COMBRIDGE=3 } RV_TelemetryPortOptions;
    // Field RV_GPSPort information
    /* Enumeration options for field RV_GPSPort */
    typedef enum { RV_GPSPORT_DISABLED=0, RV_GPSPORT_TELEMETRY=1, RV_GPSPORT_GPS=2, RV_GPSPORT_COMAUX=3, RV_GPSPORT_COMBRIDGE=4 } RV_GPSPortOptions;
    // Field RM_RcvrPort information
    /* Enumeration options for field RM_RcvrPort */
    typedef enum { RM_RCVRPORT_DISABLED=0, RM_RCVRPORT_PWM=1, RM_RCVRPORT_PPM=2, RM_RCVRPORT_PPMPWM=3, RM_RCVRPORT_PPMTELEMETRY=4, RM_RCVRPORT_PPMOUTPUTS=5, RM_RCVRPORT_OUTPUTS=6, RM_RCVRPORT_TELEMETRY=7 } RM_RcvrPortOptions;
    // Field RM_MainPort information
    /* Enumeration options for field RM_MainPort */
    typedef enum { RM_MAINPORT_DISABLED=0, RM_MAINPORT_TELEMETRY=1, RM_MAINPORT_GPS=2, RM_MAINPORT_SBUS=3, RM_MAINPORT_DSM=4, RM_MAINPORT_DEBUGCONSOLE=5, RM_MAINPORT_COMBRIDGE=6, RM_MAINPORT_OSDHK=7 } RM_MainPortOptions;
    // Field RM_FlexiPort information
    /* Enumeration options for field RM_FlexiPort */
    typedef enum { RM_FLEXIPORT_DISABLED=0, RM_FLEXIPORT_TELEMETRY=1, RM_FLEXIPORT_GPS=2, RM_FLEXIPORT_I2C=3, RM_FLEXIPORT_DSM=4, RM_FLEXIPORT_DEBUGCONSOLE=5, RM_FLEXIPORT_COMBRIDGE=6, RM_FLEXIPORT_OSDHK=7 } RM_FlexiPortOptions;
    // Field TelemetrySpeed information
    /* Enumeration options for field TelemetrySpeed */
    typedef enum { TELEMETRYSPEED_2400=0, TELEMETRYSPEED_4800=1, TELEMETRYSPEED_9600=2, TELEMETRYSPEED_19200=3, TELEMETRYSPEED_38400=4, TELEMETRYSPEED_57600=5, TELEMETRYSPEED_115200=6 } TelemetrySpeedOptions;
    // Field GPSSpeed information
    /* Enumeration options for field GPSSpeed */
    typedef enum { GPSSPEED_2400=0, GPSSPEED_4800=1, GPSSPEED_9600=2, GPSSPEED_19200=3, GPSSPEED_38400=4, GPSSPEED_57600=5, GPSSPEED_115200=6, GPSSPEED_230400=7 } GPSSpeedOptions;
    // Field ComUsbBridgeSpeed information
    /* Enumeration options for field ComUsbBridgeSpeed */
    typedef enum { COMUSBBRIDGESPEED_2400=0, COMUSBBRIDGESPEED_4800=1, COMUSBBRIDGESPEED_9600=2, COMUSBBRIDGESPEED_19200=3, COMUSBBRIDGESPEED_38400=4, COMUSBBRIDGESPEED_57600=5, COMUSBBRIDGESPEED_115200=6 } ComUsbBridgeSpeedOptions;
    // Field USB_HIDPort information
    /* Enumeration options for field USB_HIDPort */
    typedef enum { USB_HIDPORT_USBTELEMETRY=0, USB_HIDPORT_RCTRANSMITTER=1, USB_HIDPORT_DISABLED=2 } USB_HIDPortOptions;
    // Field USB_VCPPort information
    /* Enumeration options for field USB_VCPPort */
    typedef enum { USB_VCPPORT_USBTELEMETRY=0, USB_VCPPORT_COMBRIDGE=1, USB_VCPPORT_DEBUGCONSOLE=2, USB_VCPPORT_DISABLED=3 } USB_VCPPortOptions;
    // Field OptionalModules information
    /* Enumeration options for field OptionalModules */
    typedef enum { OPTIONALMODULES_DISABLED=0, OPTIONALMODULES_ENABLED=1 } OptionalModulesOptions;
    /* Array element names for field OptionalModules */
    typedef enum { OPTIONALMODULES_CAMERASTAB=0, OPTIONALMODULES_GPS=1, OPTIONALMODULES_FAULT=2, OPTIONALMODULES_ALTITUDE=3, OPTIONALMODULES_AIRSPEED=4, OPTIONALMODULES_TXPID=5, OPTIONALMODULES_BATTERY=6, OPTIONALMODULES_OVERO=7, OPTIONALMODULES_MAGBARO=8, OPTIONALMODULES_OSDHK=9 } OptionalModulesElem;
    /* Number of elements for field OptionalModules */
    static const unsigned int OPTIONALMODULES_NUMELEM = 10;
    // Field ADCRouting information
    /* Enumeration options for field ADCRouting */
    typedef enum { ADCROUTING_DISABLED=0, ADCROUTING_BATTERYVOLTAGE=1, ADCROUTING_BATTERYCURRENT=2, ADCROUTING_ANALOGAIRSPEED=3, ADCROUTING_GENERIC=4 } ADCRoutingOptions;
    /* Array element names for field ADCRouting */
    typedef enum { ADCROUTING_ADC0=0, ADCROUTING_ADC1=1, ADCROUTING_ADC2=2, ADCROUTING_ADC3=3 } ADCRoutingElem;
    /* Number of elements for field ADCRouting */
    static const unsigned int ADCROUTING_NUMELEM = 4;
    // Field DSMxBind information
    // Field WS2811LED_Out information
    /* Enumeration options for field WS2811LED_Out */
    typedef enum { WS2811LED_OUT_SERVOOUT1=0, WS2811LED_OUT_SERVOOUT2=1, WS2811LED_OUT_SERVOOUT3=2, WS2811LED_OUT_SERVOOUT4=3, WS2811LED_OUT_SERVOOUT5=4, WS2811LED_OUT_SERVOOUT6=5, WS2811LED_OUT_FLEXIIOPIN3=6, WS2811LED_OUT_FLEXIIOPIN4=7, WS2811LED_OUT_DISABLED=8 } WS2811LED_OutOptions;

  
    // Constants
    static const unsigned int NUMBYTES = sizeof(DataFieldsHwSettings);

    // Functions
    HwSettings(UAVObjManager* manager);
	int UAVObjSetDataField(const char *dataIn, const std::string fieldID);
	int UAVObjGetDataField(char *dataOut, const std::string fieldID);
	int UAVObjUnpack(const unsigned char *dataIn);
	int UAVObjPack(unsigned char *dataOut);
	unsigned short UAVObjGetInstance() const;
	unsigned short UAVObjGetNumBytes() const;
	unsigned short UAVObjGetNumInstances() const;
	std::string prettyPrint();

    /*DataFields getData();
    void setData(const DataFields& data);
    Metadata getDefaultMetadata();
    UAVDataObject* clone(unsigned int instID);
	UAVDataObject* dirtyClone();
	
    static HwSettings* GetInstance(UAVObjectManager* objMngr, unsigned int instID = 0);

    Q_INVOKABLE unsigned char getCC_RcvrPort() const;
    Q_INVOKABLE unsigned char getCC_MainPort() const;
    Q_INVOKABLE unsigned char getCC_FlexiPort() const;
    Q_INVOKABLE unsigned char getRV_RcvrPort() const;
    Q_INVOKABLE unsigned char getRV_AuxPort() const;
    Q_INVOKABLE unsigned char getRV_AuxSBusPort() const;
    Q_INVOKABLE unsigned char getRV_FlexiPort() const;
    Q_INVOKABLE unsigned char getRV_TelemetryPort() const;
    Q_INVOKABLE unsigned char getRV_GPSPort() const;
    Q_INVOKABLE unsigned char getRM_RcvrPort() const;
    Q_INVOKABLE unsigned char getRM_MainPort() const;
    Q_INVOKABLE unsigned char getRM_FlexiPort() const;
    Q_INVOKABLE unsigned char getTelemetrySpeed() const;
    Q_INVOKABLE unsigned char getGPSSpeed() const;
    Q_INVOKABLE unsigned char getComUsbBridgeSpeed() const;
    Q_INVOKABLE unsigned char getUSB_HIDPort() const;
    Q_INVOKABLE unsigned char getUSB_VCPPort() const;
    Q_INVOKABLE unsigned char getOptionalModules(unsigned int index) const;
    Q_INVOKABLE unsigned char getADCRouting(unsigned int index) const;
    Q_INVOKABLE unsigned char getDSMxBind() const;
    Q_INVOKABLE unsigned char getWS2811LED_Out() const;


public slots:
    void setCC_RcvrPort(unsigned char value);
    void setCC_MainPort(unsigned char value);
    void setCC_FlexiPort(unsigned char value);
    void setRV_RcvrPort(unsigned char value);
    void setRV_AuxPort(unsigned char value);
    void setRV_AuxSBusPort(unsigned char value);
    void setRV_FlexiPort(unsigned char value);
    void setRV_TelemetryPort(unsigned char value);
    void setRV_GPSPort(unsigned char value);
    void setRM_RcvrPort(unsigned char value);
    void setRM_MainPort(unsigned char value);
    void setRM_FlexiPort(unsigned char value);
    void setTelemetrySpeed(unsigned char value);
    void setGPSSpeed(unsigned char value);
    void setComUsbBridgeSpeed(unsigned char value);
    void setUSB_HIDPort(unsigned char value);
    void setUSB_VCPPort(unsigned char value);
    void setOptionalModules(unsigned int index, unsigned char value);
    void setADCRouting(unsigned int index, unsigned char value);
    void setDSMxBind(unsigned char value);
    void setWS2811LED_Out(unsigned char value);


signals:
    void CC_RcvrPortChanged(unsigned char value);
    void CC_MainPortChanged(unsigned char value);
    void CC_FlexiPortChanged(unsigned char value);
    void RV_RcvrPortChanged(unsigned char value);
    void RV_AuxPortChanged(unsigned char value);
    void RV_AuxSBusPortChanged(unsigned char value);
    void RV_FlexiPortChanged(unsigned char value);
    void RV_TelemetryPortChanged(unsigned char value);
    void RV_GPSPortChanged(unsigned char value);
    void RM_RcvrPortChanged(unsigned char value);
    void RM_MainPortChanged(unsigned char value);
    void RM_FlexiPortChanged(unsigned char value);
    void TelemetrySpeedChanged(unsigned char value);
    void GPSSpeedChanged(unsigned char value);
    void ComUsbBridgeSpeedChanged(unsigned char value);
    void USB_HIDPortChanged(unsigned char value);
    void USB_VCPPortChanged(unsigned char value);
    void OptionalModulesChanged(unsigned int index, unsigned char value);
    void ADCRoutingChanged(unsigned int index, unsigned char value);
    void DSMxBindChanged(unsigned char value);
    void WS2811LED_OutChanged(unsigned char value);


private slots:
    void emitNotifications();
	
private:
    DataFields data;

    void setDefaultFieldValues();*/

};

#endif // HWSETTINGS_H
