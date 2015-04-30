/**
 ******************************************************************************
 *
 * @file       actuatorsettings.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: actuatorsettings.xml. 
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
#ifndef ACTUATORSETTINGS_H
#define ACTUATORSETTINGS_H

#include <string>
#include <sstream>
#include <iostream>
#include <string.h>

#include "UAVObject.h"

    // Data Fields
typedef struct {
        unsigned short int BankUpdateFreq[6];
        short int ChannelMax[12];
        short int ChannelNeutral[12];
        short int ChannelMin[12];
        unsigned char BankMode[6];
        unsigned char ChannelType[12];
        unsigned char ChannelAddr[12];
        unsigned char MotorsSpinWhileArmed;
        unsigned char LowThrottleZeroAxis[3];

} __attribute__((packed)) DataFieldsActuatorSettings;

class ActuatorSettings: public UAVObject
{

public:
	int instance;
	DataFieldsActuatorSettings dataFields;
	static int numInstances;

    // Field information
    // Field BankUpdateFreq information
    /* Number of elements for field BankUpdateFreq */
    static const unsigned int BANKUPDATEFREQ_NUMELEM = 6;
    // Field ChannelMax information
    /* Number of elements for field ChannelMax */
    static const unsigned int CHANNELMAX_NUMELEM = 12;
    // Field ChannelNeutral information
    /* Number of elements for field ChannelNeutral */
    static const unsigned int CHANNELNEUTRAL_NUMELEM = 12;
    // Field ChannelMin information
    /* Number of elements for field ChannelMin */
    static const unsigned int CHANNELMIN_NUMELEM = 12;
    // Field BankMode information
    /* Enumeration options for field BankMode */
    typedef enum { BANKMODE_PWM=0, BANKMODE_PWMSYNC=1, BANKMODE_ONESHOT125=2 } BankModeOptions;
    /* Number of elements for field BankMode */
    static const unsigned int BANKMODE_NUMELEM = 6;
    // Field ChannelType information
    /* Enumeration options for field ChannelType */
    typedef enum { CHANNELTYPE_PWM=0, CHANNELTYPE_MK=1, CHANNELTYPE_ASTEC4=2, CHANNELTYPE_PWMALARMBUZZER=3, CHANNELTYPE_ARMINGLED=4, CHANNELTYPE_INFOLED=5 } ChannelTypeOptions;
    /* Number of elements for field ChannelType */
    static const unsigned int CHANNELTYPE_NUMELEM = 12;
    // Field ChannelAddr information
    /* Number of elements for field ChannelAddr */
    static const unsigned int CHANNELADDR_NUMELEM = 12;
    // Field MotorsSpinWhileArmed information
    /* Enumeration options for field MotorsSpinWhileArmed */
    typedef enum { MOTORSSPINWHILEARMED_FALSE=0, MOTORSSPINWHILEARMED_TRUE=1 } MotorsSpinWhileArmedOptions;
    // Field LowThrottleZeroAxis information
    /* Enumeration options for field LowThrottleZeroAxis */
    typedef enum { LOWTHROTTLEZEROAXIS_FALSE=0, LOWTHROTTLEZEROAXIS_TRUE=1 } LowThrottleZeroAxisOptions;
    /* Array element names for field LowThrottleZeroAxis */
    typedef enum { LOWTHROTTLEZEROAXIS_ROLL=0, LOWTHROTTLEZEROAXIS_PITCH=1, LOWTHROTTLEZEROAXIS_YAW=2 } LowThrottleZeroAxisElem;
    /* Number of elements for field LowThrottleZeroAxis */
    static const unsigned int LOWTHROTTLEZEROAXIS_NUMELEM = 3;

  
    // Constants
    static const unsigned int NUMBYTES = sizeof(DataFieldsActuatorSettings);

    // Functions
    ActuatorSettings(UAVObjManager* manager);
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
	
    static ActuatorSettings* GetInstance(UAVObjectManager* objMngr, unsigned int instID = 0);

    Q_INVOKABLE unsigned short int getBankUpdateFreq(unsigned int index) const;
    Q_INVOKABLE short int getChannelMax(unsigned int index) const;
    Q_INVOKABLE short int getChannelNeutral(unsigned int index) const;
    Q_INVOKABLE short int getChannelMin(unsigned int index) const;
    Q_INVOKABLE unsigned char getBankMode(unsigned int index) const;
    Q_INVOKABLE unsigned char getChannelType(unsigned int index) const;
    Q_INVOKABLE unsigned char getChannelAddr(unsigned int index) const;
    Q_INVOKABLE unsigned char getMotorsSpinWhileArmed() const;
    Q_INVOKABLE unsigned char getLowThrottleZeroAxis(unsigned int index) const;


public slots:
    void setBankUpdateFreq(unsigned int index, unsigned short int value);
    void setChannelMax(unsigned int index, short int value);
    void setChannelNeutral(unsigned int index, short int value);
    void setChannelMin(unsigned int index, short int value);
    void setBankMode(unsigned int index, unsigned char value);
    void setChannelType(unsigned int index, unsigned char value);
    void setChannelAddr(unsigned int index, unsigned char value);
    void setMotorsSpinWhileArmed(unsigned char value);
    void setLowThrottleZeroAxis(unsigned int index, unsigned char value);


signals:
    void BankUpdateFreqChanged(unsigned int index, unsigned short int value);
    void ChannelMaxChanged(unsigned int index, short int value);
    void ChannelNeutralChanged(unsigned int index, short int value);
    void ChannelMinChanged(unsigned int index, short int value);
    void BankModeChanged(unsigned int index, unsigned char value);
    void ChannelTypeChanged(unsigned int index, unsigned char value);
    void ChannelAddrChanged(unsigned int index, unsigned char value);
    void MotorsSpinWhileArmedChanged(unsigned char value);
    void LowThrottleZeroAxisChanged(unsigned int index, unsigned char value);


private slots:
    void emitNotifications();
	
private:
    DataFields data;

    void setDefaultFieldValues();*/

};

#endif // ACTUATORSETTINGS_H
