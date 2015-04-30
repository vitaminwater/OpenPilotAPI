/**
 ******************************************************************************
 *
 * @file       manualcontrolsettings.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: manualcontrolsettings.xml. 
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
#ifndef MANUALCONTROLSETTINGS_H
#define MANUALCONTROLSETTINGS_H

#include <string>
#include <sstream>
#include <iostream>
#include <string.h>

#include "UAVObject.h"

    // Data Fields
typedef struct {
        float Deadband;
        float DeadbandAssistedControl;
        float FailsafeChannel[8];
        short int ChannelMin[9];
        short int ChannelNeutral[9];
        short int ChannelMax[9];
        unsigned short int ResponseTime[7];
        unsigned char ChannelGroups[9];
        unsigned char ChannelNumber[9];
        unsigned char FlightModeNumber;
        char FailsafeFlightModeSwitchPosition;

} __attribute__((packed)) DataFieldsManualControlSettings;

class ManualControlSettings: public UAVObject
{

public:
	int instance;
	DataFieldsManualControlSettings dataFields;
	static int numInstances;

    // Field information
    // Field Deadband information
    // Field DeadbandAssistedControl information
    // Field FailsafeChannel information
    /* Array element names for field FailsafeChannel */
    typedef enum { FAILSAFECHANNEL_THROTTLE=0, FAILSAFECHANNEL_ROLL=1, FAILSAFECHANNEL_PITCH=2, FAILSAFECHANNEL_YAW=3, FAILSAFECHANNEL_COLLECTIVE=4, FAILSAFECHANNEL_ACCESSORY0=5, FAILSAFECHANNEL_ACCESSORY1=6, FAILSAFECHANNEL_ACCESSORY2=7 } FailsafeChannelElem;
    /* Number of elements for field FailsafeChannel */
    static const unsigned int FAILSAFECHANNEL_NUMELEM = 8;
    // Field ChannelMin information
    /* Array element names for field ChannelMin */
    typedef enum { CHANNELMIN_THROTTLE=0, CHANNELMIN_ROLL=1, CHANNELMIN_PITCH=2, CHANNELMIN_YAW=3, CHANNELMIN_FLIGHTMODE=4, CHANNELMIN_COLLECTIVE=5, CHANNELMIN_ACCESSORY0=6, CHANNELMIN_ACCESSORY1=7, CHANNELMIN_ACCESSORY2=8 } ChannelMinElem;
    /* Number of elements for field ChannelMin */
    static const unsigned int CHANNELMIN_NUMELEM = 9;
    // Field ChannelNeutral information
    /* Array element names for field ChannelNeutral */
    typedef enum { CHANNELNEUTRAL_THROTTLE=0, CHANNELNEUTRAL_ROLL=1, CHANNELNEUTRAL_PITCH=2, CHANNELNEUTRAL_YAW=3, CHANNELNEUTRAL_FLIGHTMODE=4, CHANNELNEUTRAL_COLLECTIVE=5, CHANNELNEUTRAL_ACCESSORY0=6, CHANNELNEUTRAL_ACCESSORY1=7, CHANNELNEUTRAL_ACCESSORY2=8 } ChannelNeutralElem;
    /* Number of elements for field ChannelNeutral */
    static const unsigned int CHANNELNEUTRAL_NUMELEM = 9;
    // Field ChannelMax information
    /* Array element names for field ChannelMax */
    typedef enum { CHANNELMAX_THROTTLE=0, CHANNELMAX_ROLL=1, CHANNELMAX_PITCH=2, CHANNELMAX_YAW=3, CHANNELMAX_FLIGHTMODE=4, CHANNELMAX_COLLECTIVE=5, CHANNELMAX_ACCESSORY0=6, CHANNELMAX_ACCESSORY1=7, CHANNELMAX_ACCESSORY2=8 } ChannelMaxElem;
    /* Number of elements for field ChannelMax */
    static const unsigned int CHANNELMAX_NUMELEM = 9;
    // Field ResponseTime information
    /* Array element names for field ResponseTime */
    typedef enum { RESPONSETIME_ROLL=0, RESPONSETIME_PITCH=1, RESPONSETIME_YAW=2, RESPONSETIME_COLLECTIVE=3, RESPONSETIME_ACCESSORY0=4, RESPONSETIME_ACCESSORY1=5, RESPONSETIME_ACCESSORY2=6 } ResponseTimeElem;
    /* Number of elements for field ResponseTime */
    static const unsigned int RESPONSETIME_NUMELEM = 7;
    // Field ChannelGroups information
    /* Enumeration options for field ChannelGroups */
    typedef enum { CHANNELGROUPS_PWM=0, CHANNELGROUPS_PPM=1, CHANNELGROUPS_DSMMAINPORT=2, CHANNELGROUPS_DSMFLEXIPORT=3, CHANNELGROUPS_SBUS=4, CHANNELGROUPS_GCS=5, CHANNELGROUPS_OPLINK=6, CHANNELGROUPS_NONE=7 } ChannelGroupsOptions;
    /* Array element names for field ChannelGroups */
    typedef enum { CHANNELGROUPS_THROTTLE=0, CHANNELGROUPS_ROLL=1, CHANNELGROUPS_PITCH=2, CHANNELGROUPS_YAW=3, CHANNELGROUPS_FLIGHTMODE=4, CHANNELGROUPS_COLLECTIVE=5, CHANNELGROUPS_ACCESSORY0=6, CHANNELGROUPS_ACCESSORY1=7, CHANNELGROUPS_ACCESSORY2=8 } ChannelGroupsElem;
    /* Number of elements for field ChannelGroups */
    static const unsigned int CHANNELGROUPS_NUMELEM = 9;
    // Field ChannelNumber information
    /* Array element names for field ChannelNumber */
    typedef enum { CHANNELNUMBER_THROTTLE=0, CHANNELNUMBER_ROLL=1, CHANNELNUMBER_PITCH=2, CHANNELNUMBER_YAW=3, CHANNELNUMBER_FLIGHTMODE=4, CHANNELNUMBER_COLLECTIVE=5, CHANNELNUMBER_ACCESSORY0=6, CHANNELNUMBER_ACCESSORY1=7, CHANNELNUMBER_ACCESSORY2=8 } ChannelNumberElem;
    /* Number of elements for field ChannelNumber */
    static const unsigned int CHANNELNUMBER_NUMELEM = 9;
    // Field FlightModeNumber information
    // Field FailsafeFlightModeSwitchPosition information

  
    // Constants
    static const unsigned int NUMBYTES = sizeof(DataFieldsManualControlSettings);

    // Functions
    ManualControlSettings(UAVObjManager* manager);
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
	
    static ManualControlSettings* GetInstance(UAVObjectManager* objMngr, unsigned int instID = 0);

    Q_INVOKABLE float getDeadband() const;
    Q_INVOKABLE float getDeadbandAssistedControl() const;
    Q_INVOKABLE float getFailsafeChannel(unsigned int index) const;
    Q_INVOKABLE short int getChannelMin(unsigned int index) const;
    Q_INVOKABLE short int getChannelNeutral(unsigned int index) const;
    Q_INVOKABLE short int getChannelMax(unsigned int index) const;
    Q_INVOKABLE unsigned short int getResponseTime(unsigned int index) const;
    Q_INVOKABLE unsigned char getChannelGroups(unsigned int index) const;
    Q_INVOKABLE unsigned char getChannelNumber(unsigned int index) const;
    Q_INVOKABLE unsigned char getFlightModeNumber() const;
    Q_INVOKABLE char getFailsafeFlightModeSwitchPosition() const;


public slots:
    void setDeadband(float value);
    void setDeadbandAssistedControl(float value);
    void setFailsafeChannel(unsigned int index, float value);
    void setChannelMin(unsigned int index, short int value);
    void setChannelNeutral(unsigned int index, short int value);
    void setChannelMax(unsigned int index, short int value);
    void setResponseTime(unsigned int index, unsigned short int value);
    void setChannelGroups(unsigned int index, unsigned char value);
    void setChannelNumber(unsigned int index, unsigned char value);
    void setFlightModeNumber(unsigned char value);
    void setFailsafeFlightModeSwitchPosition(char value);


signals:
    void DeadbandChanged(float value);
    void DeadbandAssistedControlChanged(float value);
    void FailsafeChannelChanged(unsigned int index, float value);
    void ChannelMinChanged(unsigned int index, short int value);
    void ChannelNeutralChanged(unsigned int index, short int value);
    void ChannelMaxChanged(unsigned int index, short int value);
    void ResponseTimeChanged(unsigned int index, unsigned short int value);
    void ChannelGroupsChanged(unsigned int index, unsigned char value);
    void ChannelNumberChanged(unsigned int index, unsigned char value);
    void FlightModeNumberChanged(unsigned char value);
    void FailsafeFlightModeSwitchPositionChanged(char value);


private slots:
    void emitNotifications();
	
private:
    DataFields data;

    void setDefaultFieldValues();*/

};

#endif // MANUALCONTROLSETTINGS_H
