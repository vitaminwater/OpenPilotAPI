/**
 ******************************************************************************
 *
 * @file       txpidsettings.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: txpidsettings.xml. 
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
#ifndef TXPIDSETTINGS_H
#define TXPIDSETTINGS_H

#include <string>
#include <sstream>
#include <iostream>
#include <string.h>

#include "UAVObject.h"

    // Data Fields
typedef struct {
        float ThrottleRange[2];
        float MinPID[3];
        float MaxPID[3];
        unsigned char UpdateMode;
        unsigned char BankNumber;
        unsigned char Inputs[3];
        unsigned char PIDs[3];

} __attribute__((packed)) DataFieldsTxPIDSettings;

class TxPIDSettings: public UAVObject
{

public:
	int instance;
	DataFieldsTxPIDSettings dataFields;
	static int numInstances;

    // Field information
    // Field ThrottleRange information
    /* Array element names for field ThrottleRange */
    typedef enum { THROTTLERANGE_MIN=0, THROTTLERANGE_MAX=1 } ThrottleRangeElem;
    /* Number of elements for field ThrottleRange */
    static const unsigned int THROTTLERANGE_NUMELEM = 2;
    // Field MinPID information
    /* Array element names for field MinPID */
    typedef enum { MINPID_INSTANCE1=0, MINPID_INSTANCE2=1, MINPID_INSTANCE3=2 } MinPIDElem;
    /* Number of elements for field MinPID */
    static const unsigned int MINPID_NUMELEM = 3;
    // Field MaxPID information
    /* Array element names for field MaxPID */
    typedef enum { MAXPID_INSTANCE1=0, MAXPID_INSTANCE2=1, MAXPID_INSTANCE3=2 } MaxPIDElem;
    /* Number of elements for field MaxPID */
    static const unsigned int MAXPID_NUMELEM = 3;
    // Field UpdateMode information
    /* Enumeration options for field UpdateMode */
    typedef enum { UPDATEMODE_NEVER=0, UPDATEMODE_WHENARMED=1, UPDATEMODE_ALWAYS=2 } UpdateModeOptions;
    // Field BankNumber information
    /* Enumeration options for field BankNumber */
    typedef enum { BANKNUMBER_BANK1=0, BANKNUMBER_BANK2=1, BANKNUMBER_BANK3=2 } BankNumberOptions;
    // Field Inputs information
    /* Enumeration options for field Inputs */
    typedef enum { INPUTS_THROTTLE=0, INPUTS_ACCESSORY0=1, INPUTS_ACCESSORY1=2, INPUTS_ACCESSORY2=3, INPUTS_ACCESSORY3=4, INPUTS_ACCESSORY4=5, INPUTS_ACCESSORY5=6 } InputsOptions;
    /* Array element names for field Inputs */
    typedef enum { INPUTS_INSTANCE1=0, INPUTS_INSTANCE2=1, INPUTS_INSTANCE3=2 } InputsElem;
    /* Number of elements for field Inputs */
    static const unsigned int INPUTS_NUMELEM = 3;
    // Field PIDs information
    /* Enumeration options for field PIDs */
    typedef enum { PIDS_DISABLED=0, PIDS_ROLLRATEKP=1, PIDS_ROLLRATEKI=2, PIDS_ROLLRATEKD=3, PIDS_ROLLRATEILIMIT=4, PIDS_ROLLRATERESP=5, PIDS_PITCHRATEKP=6, PIDS_PITCHRATEKI=7, PIDS_PITCHRATEKD=8, PIDS_PITCHRATEILIMIT=9, PIDS_PITCHRATERESP=10, PIDS_ROLLPITCHRATEKP=11, PIDS_ROLLPITCHRATEKI=12, PIDS_ROLLPITCHRATEKD=13, PIDS_ROLLPITCHRATEILIMIT=14, PIDS_ROLLPITCHRATERESP=15, PIDS_YAWRATEKP=16, PIDS_YAWRATEKI=17, PIDS_YAWRATEKD=18, PIDS_YAWRATEILIMIT=19, PIDS_YAWRATERESP=20, PIDS_ROLLATTITUDEKP=21, PIDS_ROLLATTITUDEKI=22, PIDS_ROLLATTITUDEILIMIT=23, PIDS_ROLLATTITUDERESP=24, PIDS_PITCHATTITUDEKP=25, PIDS_PITCHATTITUDEKI=26, PIDS_PITCHATTITUDEILIMIT=27, PIDS_PITCHATTITUDERESP=28, PIDS_ROLLPITCHATTITUDEKP=29, PIDS_ROLLPITCHATTITUDEKI=30, PIDS_ROLLPITCHATTITUDEILIMIT=31, PIDS_ROLLPITCHATTITUDERESP=32, PIDS_YAWATTITUDEKP=33, PIDS_YAWATTITUDEKI=34, PIDS_YAWATTITUDEILIMIT=35, PIDS_YAWATTITUDERESP=36, PIDS_ROLLEXPO=37, PIDS_PITCHEXPO=38, PIDS_ROLLPITCHEXPO=39, PIDS_YAWEXPO=40, PIDS_GYROTAU=41, PIDS_ACROPLUSFACTOR=42 } PIDsOptions;
    /* Array element names for field PIDs */
    typedef enum { PIDS_INSTANCE1=0, PIDS_INSTANCE2=1, PIDS_INSTANCE3=2 } PIDsElem;
    /* Number of elements for field PIDs */
    static const unsigned int PIDS_NUMELEM = 3;

  
    // Constants
    static const unsigned int NUMBYTES = sizeof(DataFieldsTxPIDSettings);

    // Functions
    TxPIDSettings(UAVObjManager* manager);
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
	
    static TxPIDSettings* GetInstance(UAVObjectManager* objMngr, unsigned int instID = 0);

    Q_INVOKABLE float getThrottleRange(unsigned int index) const;
    Q_INVOKABLE float getMinPID(unsigned int index) const;
    Q_INVOKABLE float getMaxPID(unsigned int index) const;
    Q_INVOKABLE unsigned char getUpdateMode() const;
    Q_INVOKABLE unsigned char getBankNumber() const;
    Q_INVOKABLE unsigned char getInputs(unsigned int index) const;
    Q_INVOKABLE unsigned char getPIDs(unsigned int index) const;


public slots:
    void setThrottleRange(unsigned int index, float value);
    void setMinPID(unsigned int index, float value);
    void setMaxPID(unsigned int index, float value);
    void setUpdateMode(unsigned char value);
    void setBankNumber(unsigned char value);
    void setInputs(unsigned int index, unsigned char value);
    void setPIDs(unsigned int index, unsigned char value);


signals:
    void ThrottleRangeChanged(unsigned int index, float value);
    void MinPIDChanged(unsigned int index, float value);
    void MaxPIDChanged(unsigned int index, float value);
    void UpdateModeChanged(unsigned char value);
    void BankNumberChanged(unsigned char value);
    void InputsChanged(unsigned int index, unsigned char value);
    void PIDsChanged(unsigned int index, unsigned char value);


private slots:
    void emitNotifications();
	
private:
    DataFields data;

    void setDefaultFieldValues();*/

};

#endif // TXPIDSETTINGS_H
