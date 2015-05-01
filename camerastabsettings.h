/**
 ******************************************************************************
 *
 * @file       camerastabsettings.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: camerastabsettings.xml. 
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
#ifndef CAMERASTABSETTINGS_H
#define CAMERASTABSETTINGS_H

#include <string>
#include <sstream>
#include <iostream>
#include <string.h>

#include "UAVObject.h"

    // Data Fields
typedef struct {
        float MaxAxisLockRate;
        unsigned short int MaxAccel;
        unsigned char Input[3];
        unsigned char InputRange[3];
        unsigned char InputRate[3];
        unsigned char StabilizationMode[3];
        unsigned char OutputRange[3];
        unsigned char ResponseTime[3];
        unsigned char GimbalType;
        unsigned char FeedForward[3];
        unsigned char AccelTime[3];
        unsigned char DecelTime[3];
        unsigned char Servo1PitchReverse;
        unsigned char Servo2PitchReverse;

} __attribute__((packed)) DataFieldsCameraStabSettings;

class CameraStabSettings: public UAVObject
{

public:
	int instance;
	DataFieldsCameraStabSettings dataFields;
	static int numInstances;

    // Field information
    // Field MaxAxisLockRate information
    // Field MaxAccel information
    // Field Input information
    /* Enumeration options for field Input */
    typedef enum { INPUT_ACCESSORY0=0, INPUT_ACCESSORY1=1, INPUT_ACCESSORY2=2, INPUT_ACCESSORY3=3, INPUT_ACCESSORY4=4, INPUT_ACCESSORY5=5, INPUT_NONE=6 } InputOptions;
    /* Array element names for field Input */
    typedef enum { INPUT_ROLL=0, INPUT_PITCH=1, INPUT_YAW=2 } InputElem;
    /* Number of elements for field Input */
    static const unsigned int INPUT_NUMELEM = 3;
    // Field InputRange information
    /* Array element names for field InputRange */
    typedef enum { INPUTRANGE_ROLL=0, INPUTRANGE_PITCH=1, INPUTRANGE_YAW=2 } InputRangeElem;
    /* Number of elements for field InputRange */
    static const unsigned int INPUTRANGE_NUMELEM = 3;
    // Field InputRate information
    /* Array element names for field InputRate */
    typedef enum { INPUTRATE_ROLL=0, INPUTRATE_PITCH=1, INPUTRATE_YAW=2 } InputRateElem;
    /* Number of elements for field InputRate */
    static const unsigned int INPUTRATE_NUMELEM = 3;
    // Field StabilizationMode information
    /* Enumeration options for field StabilizationMode */
    typedef enum { STABILIZATIONMODE_ATTITUDE=0, STABILIZATIONMODE_AXISLOCK=1 } StabilizationModeOptions;
    /* Array element names for field StabilizationMode */
    typedef enum { STABILIZATIONMODE_ROLL=0, STABILIZATIONMODE_PITCH=1, STABILIZATIONMODE_YAW=2 } StabilizationModeElem;
    /* Number of elements for field StabilizationMode */
    static const unsigned int STABILIZATIONMODE_NUMELEM = 3;
    // Field OutputRange information
    /* Array element names for field OutputRange */
    typedef enum { OUTPUTRANGE_ROLL=0, OUTPUTRANGE_PITCH=1, OUTPUTRANGE_YAW=2 } OutputRangeElem;
    /* Number of elements for field OutputRange */
    static const unsigned int OUTPUTRANGE_NUMELEM = 3;
    // Field ResponseTime information
    /* Array element names for field ResponseTime */
    typedef enum { RESPONSETIME_ROLL=0, RESPONSETIME_PITCH=1, RESPONSETIME_YAW=2 } ResponseTimeElem;
    /* Number of elements for field ResponseTime */
    static const unsigned int RESPONSETIME_NUMELEM = 3;
    // Field GimbalType information
    /* Enumeration options for field GimbalType */
    typedef enum { GIMBALTYPE_GENERIC=0, GIMBALTYPE_YAWROLLPITCH=1, GIMBALTYPE_YAWPITCHROLL=2, GIMBALTYPE_ROLLPITCHMIXED=3 } GimbalTypeOptions;
    // Field FeedForward information
    /* Array element names for field FeedForward */
    typedef enum { FEEDFORWARD_ROLL=0, FEEDFORWARD_PITCH=1, FEEDFORWARD_YAW=2 } FeedForwardElem;
    /* Number of elements for field FeedForward */
    static const unsigned int FEEDFORWARD_NUMELEM = 3;
    // Field AccelTime information
    /* Array element names for field AccelTime */
    typedef enum { ACCELTIME_ROLL=0, ACCELTIME_PITCH=1, ACCELTIME_YAW=2 } AccelTimeElem;
    /* Number of elements for field AccelTime */
    static const unsigned int ACCELTIME_NUMELEM = 3;
    // Field DecelTime information
    /* Array element names for field DecelTime */
    typedef enum { DECELTIME_ROLL=0, DECELTIME_PITCH=1, DECELTIME_YAW=2 } DecelTimeElem;
    /* Number of elements for field DecelTime */
    static const unsigned int DECELTIME_NUMELEM = 3;
    // Field Servo1PitchReverse information
    /* Enumeration options for field Servo1PitchReverse */
    typedef enum { SERVO1PITCHREVERSE_FALSE=0, SERVO1PITCHREVERSE_TRUE=1 } Servo1PitchReverseOptions;
    // Field Servo2PitchReverse information
    /* Enumeration options for field Servo2PitchReverse */
    typedef enum { SERVO2PITCHREVERSE_FALSE=0, SERVO2PITCHREVERSE_TRUE=1 } Servo2PitchReverseOptions;

  
    // Constants
    static const unsigned int NUMBYTES = sizeof(DataFieldsCameraStabSettings);

    // Functions
    CameraStabSettings(UAVObjManager* manager);
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
	
    static CameraStabSettings* GetInstance(UAVObjectManager* objMngr, unsigned int instID = 0);

    Q_INVOKABLE float getMaxAxisLockRate() const;
    Q_INVOKABLE unsigned short int getMaxAccel() const;
    Q_INVOKABLE unsigned char getInput(unsigned int index) const;
    Q_INVOKABLE unsigned char getInputRange(unsigned int index) const;
    Q_INVOKABLE unsigned char getInputRate(unsigned int index) const;
    Q_INVOKABLE unsigned char getStabilizationMode(unsigned int index) const;
    Q_INVOKABLE unsigned char getOutputRange(unsigned int index) const;
    Q_INVOKABLE unsigned char getResponseTime(unsigned int index) const;
    Q_INVOKABLE unsigned char getGimbalType() const;
    Q_INVOKABLE unsigned char getFeedForward(unsigned int index) const;
    Q_INVOKABLE unsigned char getAccelTime(unsigned int index) const;
    Q_INVOKABLE unsigned char getDecelTime(unsigned int index) const;
    Q_INVOKABLE unsigned char getServo1PitchReverse() const;
    Q_INVOKABLE unsigned char getServo2PitchReverse() const;


public slots:
    void setMaxAxisLockRate(float value);
    void setMaxAccel(unsigned short int value);
    void setInput(unsigned int index, unsigned char value);
    void setInputRange(unsigned int index, unsigned char value);
    void setInputRate(unsigned int index, unsigned char value);
    void setStabilizationMode(unsigned int index, unsigned char value);
    void setOutputRange(unsigned int index, unsigned char value);
    void setResponseTime(unsigned int index, unsigned char value);
    void setGimbalType(unsigned char value);
    void setFeedForward(unsigned int index, unsigned char value);
    void setAccelTime(unsigned int index, unsigned char value);
    void setDecelTime(unsigned int index, unsigned char value);
    void setServo1PitchReverse(unsigned char value);
    void setServo2PitchReverse(unsigned char value);


signals:
    void MaxAxisLockRateChanged(float value);
    void MaxAccelChanged(unsigned short int value);
    void InputChanged(unsigned int index, unsigned char value);
    void InputRangeChanged(unsigned int index, unsigned char value);
    void InputRateChanged(unsigned int index, unsigned char value);
    void StabilizationModeChanged(unsigned int index, unsigned char value);
    void OutputRangeChanged(unsigned int index, unsigned char value);
    void ResponseTimeChanged(unsigned int index, unsigned char value);
    void GimbalTypeChanged(unsigned char value);
    void FeedForwardChanged(unsigned int index, unsigned char value);
    void AccelTimeChanged(unsigned int index, unsigned char value);
    void DecelTimeChanged(unsigned int index, unsigned char value);
    void Servo1PitchReverseChanged(unsigned char value);
    void Servo2PitchReverseChanged(unsigned char value);


private slots:
    void emitNotifications();
	
private:
    DataFields data;

    void setDefaultFieldValues();*/

};

#endif // CAMERASTABSETTINGS_H
