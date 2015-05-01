/**
 ******************************************************************************
 *
 * @file       oplinksettings.h
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
#ifndef OPLINKSETTINGS_H
#define OPLINKSETTINGS_H

#include <string>
#include <sstream>
#include <iostream>
#include <string.h>

#include "UAVObject.h"

    // Data Fields
typedef struct {
        unsigned int CoordID;
        unsigned char Coordinator;
        unsigned char OneWay;
        unsigned char PPM;
        unsigned char PPMOnly;
        unsigned char MainPort;
        unsigned char FlexiPort;
        unsigned char VCPPort;
        unsigned char ComSpeed;
        unsigned char MaxRFPower;
        unsigned char MinChannel;
        unsigned char MaxChannel;

} __attribute__((packed)) DataFieldsOPLinkSettings;

class OPLinkSettings: public UAVObject
{

public:
	int instance;
	DataFieldsOPLinkSettings dataFields;
	static int numInstances;

    // Field information
    // Field CoordID information
    // Field Coordinator information
    /* Enumeration options for field Coordinator */
    typedef enum { COORDINATOR_FALSE=0, COORDINATOR_TRUE=1 } CoordinatorOptions;
    // Field OneWay information
    /* Enumeration options for field OneWay */
    typedef enum { ONEWAY_FALSE=0, ONEWAY_TRUE=1 } OneWayOptions;
    // Field PPM information
    /* Enumeration options for field PPM */
    typedef enum { PPM_FALSE=0, PPM_TRUE=1 } PPMOptions;
    // Field PPMOnly information
    /* Enumeration options for field PPMOnly */
    typedef enum { PPMONLY_FALSE=0, PPMONLY_TRUE=1 } PPMOnlyOptions;
    // Field MainPort information
    /* Enumeration options for field MainPort */
    typedef enum { MAINPORT_DISABLED=0, MAINPORT_TELEMETRY=1, MAINPORT_SERIAL=2, MAINPORT_PPM=3, MAINPORT_PWM=4 } MainPortOptions;
    // Field FlexiPort information
    /* Enumeration options for field FlexiPort */
    typedef enum { FLEXIPORT_DISABLED=0, FLEXIPORT_TELEMETRY=1, FLEXIPORT_SERIAL=2, FLEXIPORT_PPM=3, FLEXIPORT_PWM=4 } FlexiPortOptions;
    // Field VCPPort information
    /* Enumeration options for field VCPPort */
    typedef enum { VCPPORT_DISABLED=0, VCPPORT_SERIAL=1 } VCPPortOptions;
    // Field ComSpeed information
    /* Enumeration options for field ComSpeed */
    typedef enum { COMSPEED_4800=0, COMSPEED_9600=1, COMSPEED_19200=2, COMSPEED_38400=3, COMSPEED_57600=4, COMSPEED_115200=5 } ComSpeedOptions;
    // Field MaxRFPower information
    /* Enumeration options for field MaxRFPower */
    typedef enum { MAXRFPOWER_0=0, MAXRFPOWER_125=1, MAXRFPOWER_16=2, MAXRFPOWER_316=3, MAXRFPOWER_63=4, MAXRFPOWER_126=5, MAXRFPOWER_25=6, MAXRFPOWER_50=7, MAXRFPOWER_100=8 } MaxRFPowerOptions;
    // Field MinChannel information
    // Field MaxChannel information

  
    // Constants
    static const unsigned int NUMBYTES = sizeof(DataFieldsOPLinkSettings);

    // Functions
    OPLinkSettings(UAVObjManager* manager);
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
	
    static OPLinkSettings* GetInstance(UAVObjectManager* objMngr, unsigned int instID = 0);

    Q_INVOKABLE unsigned int getCoordID() const;
    Q_INVOKABLE unsigned char getCoordinator() const;
    Q_INVOKABLE unsigned char getOneWay() const;
    Q_INVOKABLE unsigned char getPPM() const;
    Q_INVOKABLE unsigned char getPPMOnly() const;
    Q_INVOKABLE unsigned char getMainPort() const;
    Q_INVOKABLE unsigned char getFlexiPort() const;
    Q_INVOKABLE unsigned char getVCPPort() const;
    Q_INVOKABLE unsigned char getComSpeed() const;
    Q_INVOKABLE unsigned char getMaxRFPower() const;
    Q_INVOKABLE unsigned char getMinChannel() const;
    Q_INVOKABLE unsigned char getMaxChannel() const;


public slots:
    void setCoordID(unsigned int value);
    void setCoordinator(unsigned char value);
    void setOneWay(unsigned char value);
    void setPPM(unsigned char value);
    void setPPMOnly(unsigned char value);
    void setMainPort(unsigned char value);
    void setFlexiPort(unsigned char value);
    void setVCPPort(unsigned char value);
    void setComSpeed(unsigned char value);
    void setMaxRFPower(unsigned char value);
    void setMinChannel(unsigned char value);
    void setMaxChannel(unsigned char value);


signals:
    void CoordIDChanged(unsigned int value);
    void CoordinatorChanged(unsigned char value);
    void OneWayChanged(unsigned char value);
    void PPMChanged(unsigned char value);
    void PPMOnlyChanged(unsigned char value);
    void MainPortChanged(unsigned char value);
    void FlexiPortChanged(unsigned char value);
    void VCPPortChanged(unsigned char value);
    void ComSpeedChanged(unsigned char value);
    void MaxRFPowerChanged(unsigned char value);
    void MinChannelChanged(unsigned char value);
    void MaxChannelChanged(unsigned char value);


private slots:
    void emitNotifications();
	
private:
    DataFields data;

    void setDefaultFieldValues();*/

};

#endif // OPLINKSETTINGS_H
