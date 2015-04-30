/**
 ******************************************************************************
 *
 * @file       systemsettings.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: systemsettings.xml. 
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
#ifndef SYSTEMSETTINGS_H
#define SYSTEMSETTINGS_H

#include <string>
#include <sstream>
#include <iostream>
#include <string.h>

#include "UAVObject.h"

    // Data Fields
typedef struct {
        unsigned int GUIConfigData[4];
        float AirSpeedMax;
        float AirSpeedMin;
        unsigned char AirframeType;
        unsigned char VehicleName[20];
        unsigned char ThrustControl;

} __attribute__((packed)) DataFieldsSystemSettings;

class SystemSettings: public UAVObject
{

public:
	int instance;
	DataFieldsSystemSettings dataFields;
	static int numInstances;

    // Field information
    // Field GUIConfigData information
    /* Number of elements for field GUIConfigData */
    static const unsigned int GUICONFIGDATA_NUMELEM = 4;
    // Field AirSpeedMax information
    // Field AirSpeedMin information
    // Field AirframeType information
    /* Enumeration options for field AirframeType */
    typedef enum { AIRFRAMETYPE_FIXEDWING=0, AIRFRAMETYPE_FIXEDWINGELEVON=1, AIRFRAMETYPE_FIXEDWINGVTAIL=2, AIRFRAMETYPE_VTOL=3, AIRFRAMETYPE_HELICP=4, AIRFRAMETYPE_QUADX=5, AIRFRAMETYPE_QUADP=6, AIRFRAMETYPE_HEXA=7, AIRFRAMETYPE_OCTO=8, AIRFRAMETYPE_CUSTOM=9, AIRFRAMETYPE_HEXAX=10, AIRFRAMETYPE_HEXAH=11, AIRFRAMETYPE_OCTOV=12, AIRFRAMETYPE_OCTOCOAXP=13, AIRFRAMETYPE_OCTOCOAXX=14, AIRFRAMETYPE_OCTOX=15, AIRFRAMETYPE_HEXACOAX=16, AIRFRAMETYPE_TRI=17, AIRFRAMETYPE_GROUNDVEHICLECAR=18, AIRFRAMETYPE_GROUNDVEHICLEDIFFERENTIAL=19, AIRFRAMETYPE_GROUNDVEHICLEMOTORCYCLE=20 } AirframeTypeOptions;
    // Field VehicleName information
    /* Number of elements for field VehicleName */
    static const unsigned int VEHICLENAME_NUMELEM = 20;
    // Field ThrustControl information
    /* Enumeration options for field ThrustControl */
    typedef enum { THRUSTCONTROL_THROTTLE=0, THRUSTCONTROL_COLLECTIVE=1, THRUSTCONTROL_NONE=2 } ThrustControlOptions;

  
    // Constants
    static const unsigned int NUMBYTES = sizeof(DataFieldsSystemSettings);

    // Functions
    SystemSettings(UAVObjManager* manager);
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
	
    static SystemSettings* GetInstance(UAVObjectManager* objMngr, unsigned int instID = 0);

    Q_INVOKABLE unsigned int getGUIConfigData(unsigned int index) const;
    Q_INVOKABLE float getAirSpeedMax() const;
    Q_INVOKABLE float getAirSpeedMin() const;
    Q_INVOKABLE unsigned char getAirframeType() const;
    Q_INVOKABLE unsigned char getVehicleName(unsigned int index) const;
    Q_INVOKABLE unsigned char getThrustControl() const;


public slots:
    void setGUIConfigData(unsigned int index, unsigned int value);
    void setAirSpeedMax(float value);
    void setAirSpeedMin(float value);
    void setAirframeType(unsigned char value);
    void setVehicleName(unsigned int index, unsigned char value);
    void setThrustControl(unsigned char value);


signals:
    void GUIConfigDataChanged(unsigned int index, unsigned int value);
    void AirSpeedMaxChanged(float value);
    void AirSpeedMinChanged(float value);
    void AirframeTypeChanged(unsigned char value);
    void VehicleNameChanged(unsigned int index, unsigned char value);
    void ThrustControlChanged(unsigned char value);


private slots:
    void emitNotifications();
	
private:
    DataFields data;

    void setDefaultFieldValues();*/

};

#endif // SYSTEMSETTINGS_H
