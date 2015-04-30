/**
 ******************************************************************************
 *
 * @file       vtolpathfollowersettings.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: vtolpathfollowersettings.xml. 
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
#ifndef VTOLPATHFOLLOWERSETTINGS_H
#define VTOLPATHFOLLOWERSETTINGS_H

#include <string>
#include <sstream>
#include <iostream>
#include <string.h>

#include "UAVObject.h"

    // Data Fields
typedef struct {
        float HorizontalVelMax;
        float VerticalVelMax;
        float CourseFeedForward;
        float HorizontalPosP;
        float VerticalPosP;
        float HorizontalVelPID[4];
        float VerticalVelPID[4];
        float ThrustLimits[3];
        float VelocityFeedforward;
        float FlyawayEmergencyFallbackTriggerTime;
        float EmergencyFallbackAttitude[2];
        float EmergencyFallbackYawRate[2];
        float MaxRollPitch;
        float BrakeRate;
        float BrakeMaxPitch;
        float BrakeHorizontalVelPID[4];
        float BrakeVelocityFeedforward;
        unsigned short int UpdatePeriod;
        unsigned char TreatCustomCraftAs;
        unsigned char ThrustControl;
        unsigned char YawControl;
        unsigned char FlyawayEmergencyFallback;

} __attribute__((packed)) DataFieldsVtolPathFollowerSettings;

class VtolPathFollowerSettings: public UAVObject
{

public:
	int instance;
	DataFieldsVtolPathFollowerSettings dataFields;
	static int numInstances;

    // Field information
    // Field HorizontalVelMax information
    // Field VerticalVelMax information
    // Field CourseFeedForward information
    // Field HorizontalPosP information
    // Field VerticalPosP information
    // Field HorizontalVelPID information
    /* Array element names for field HorizontalVelPID */
    typedef enum { HORIZONTALVELPID_KP=0, HORIZONTALVELPID_KI=1, HORIZONTALVELPID_KD=2, HORIZONTALVELPID_ILIMIT=3 } HorizontalVelPIDElem;
    /* Number of elements for field HorizontalVelPID */
    static const unsigned int HORIZONTALVELPID_NUMELEM = 4;
    // Field VerticalVelPID information
    /* Array element names for field VerticalVelPID */
    typedef enum { VERTICALVELPID_KP=0, VERTICALVELPID_KI=1, VERTICALVELPID_KD=2, VERTICALVELPID_ILIMIT=3 } VerticalVelPIDElem;
    /* Number of elements for field VerticalVelPID */
    static const unsigned int VERTICALVELPID_NUMELEM = 4;
    // Field ThrustLimits information
    /* Array element names for field ThrustLimits */
    typedef enum { THRUSTLIMITS_MIN=0, THRUSTLIMITS_NEUTRAL=1, THRUSTLIMITS_MAX=2 } ThrustLimitsElem;
    /* Number of elements for field ThrustLimits */
    static const unsigned int THRUSTLIMITS_NUMELEM = 3;
    // Field VelocityFeedforward information
    // Field FlyawayEmergencyFallbackTriggerTime information
    // Field EmergencyFallbackAttitude information
    /* Array element names for field EmergencyFallbackAttitude */
    typedef enum { EMERGENCYFALLBACKATTITUDE_ROLL=0, EMERGENCYFALLBACKATTITUDE_PITCH=1 } EmergencyFallbackAttitudeElem;
    /* Number of elements for field EmergencyFallbackAttitude */
    static const unsigned int EMERGENCYFALLBACKATTITUDE_NUMELEM = 2;
    // Field EmergencyFallbackYawRate information
    /* Array element names for field EmergencyFallbackYawRate */
    typedef enum { EMERGENCYFALLBACKYAWRATE_KP=0, EMERGENCYFALLBACKYAWRATE_MAX=1 } EmergencyFallbackYawRateElem;
    /* Number of elements for field EmergencyFallbackYawRate */
    static const unsigned int EMERGENCYFALLBACKYAWRATE_NUMELEM = 2;
    // Field MaxRollPitch information
    // Field BrakeRate information
    // Field BrakeMaxPitch information
    // Field BrakeHorizontalVelPID information
    /* Array element names for field BrakeHorizontalVelPID */
    typedef enum { BRAKEHORIZONTALVELPID_KP=0, BRAKEHORIZONTALVELPID_KI=1, BRAKEHORIZONTALVELPID_KD=2, BRAKEHORIZONTALVELPID_ILIMIT=3 } BrakeHorizontalVelPIDElem;
    /* Number of elements for field BrakeHorizontalVelPID */
    static const unsigned int BRAKEHORIZONTALVELPID_NUMELEM = 4;
    // Field BrakeVelocityFeedforward information
    // Field UpdatePeriod information
    // Field TreatCustomCraftAs information
    /* Enumeration options for field TreatCustomCraftAs */
    typedef enum { TREATCUSTOMCRAFTAS_FIXEDWING=0, TREATCUSTOMCRAFTAS_VTOL=1 } TreatCustomCraftAsOptions;
    // Field ThrustControl information
    /* Enumeration options for field ThrustControl */
    typedef enum { THRUSTCONTROL_MANUAL=0, THRUSTCONTROL_AUTO=1 } ThrustControlOptions;
    // Field YawControl information
    /* Enumeration options for field YawControl */
    typedef enum { YAWCONTROL_MANUAL=0, YAWCONTROL_TAILIN=1, YAWCONTROL_MOVEMENTDIRECTION=2, YAWCONTROL_PATHDIRECTION=3, YAWCONTROL_POI=4 } YawControlOptions;
    // Field FlyawayEmergencyFallback information
    /* Enumeration options for field FlyawayEmergencyFallback */
    typedef enum { FLYAWAYEMERGENCYFALLBACK_DISABLED=0, FLYAWAYEMERGENCYFALLBACK_ENABLED=1, FLYAWAYEMERGENCYFALLBACK_ALWAYS=2, FLYAWAYEMERGENCYFALLBACK_DEBUGTEST=3 } FlyawayEmergencyFallbackOptions;

  
    // Constants
    static const unsigned int NUMBYTES = sizeof(DataFieldsVtolPathFollowerSettings);

    // Functions
    VtolPathFollowerSettings(UAVObjManager* manager);
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
	
    static VtolPathFollowerSettings* GetInstance(UAVObjectManager* objMngr, unsigned int instID = 0);

    Q_INVOKABLE float getHorizontalVelMax() const;
    Q_INVOKABLE float getVerticalVelMax() const;
    Q_INVOKABLE float getCourseFeedForward() const;
    Q_INVOKABLE float getHorizontalPosP() const;
    Q_INVOKABLE float getVerticalPosP() const;
    Q_INVOKABLE float getHorizontalVelPID(unsigned int index) const;
    Q_INVOKABLE float getVerticalVelPID(unsigned int index) const;
    Q_INVOKABLE float getThrustLimits(unsigned int index) const;
    Q_INVOKABLE float getVelocityFeedforward() const;
    Q_INVOKABLE float getFlyawayEmergencyFallbackTriggerTime() const;
    Q_INVOKABLE float getEmergencyFallbackAttitude(unsigned int index) const;
    Q_INVOKABLE float getEmergencyFallbackYawRate(unsigned int index) const;
    Q_INVOKABLE float getMaxRollPitch() const;
    Q_INVOKABLE float getBrakeRate() const;
    Q_INVOKABLE float getBrakeMaxPitch() const;
    Q_INVOKABLE float getBrakeHorizontalVelPID(unsigned int index) const;
    Q_INVOKABLE float getBrakeVelocityFeedforward() const;
    Q_INVOKABLE unsigned short int getUpdatePeriod() const;
    Q_INVOKABLE unsigned char getTreatCustomCraftAs() const;
    Q_INVOKABLE unsigned char getThrustControl() const;
    Q_INVOKABLE unsigned char getYawControl() const;
    Q_INVOKABLE unsigned char getFlyawayEmergencyFallback() const;


public slots:
    void setHorizontalVelMax(float value);
    void setVerticalVelMax(float value);
    void setCourseFeedForward(float value);
    void setHorizontalPosP(float value);
    void setVerticalPosP(float value);
    void setHorizontalVelPID(unsigned int index, float value);
    void setVerticalVelPID(unsigned int index, float value);
    void setThrustLimits(unsigned int index, float value);
    void setVelocityFeedforward(float value);
    void setFlyawayEmergencyFallbackTriggerTime(float value);
    void setEmergencyFallbackAttitude(unsigned int index, float value);
    void setEmergencyFallbackYawRate(unsigned int index, float value);
    void setMaxRollPitch(float value);
    void setBrakeRate(float value);
    void setBrakeMaxPitch(float value);
    void setBrakeHorizontalVelPID(unsigned int index, float value);
    void setBrakeVelocityFeedforward(float value);
    void setUpdatePeriod(unsigned short int value);
    void setTreatCustomCraftAs(unsigned char value);
    void setThrustControl(unsigned char value);
    void setYawControl(unsigned char value);
    void setFlyawayEmergencyFallback(unsigned char value);


signals:
    void HorizontalVelMaxChanged(float value);
    void VerticalVelMaxChanged(float value);
    void CourseFeedForwardChanged(float value);
    void HorizontalPosPChanged(float value);
    void VerticalPosPChanged(float value);
    void HorizontalVelPIDChanged(unsigned int index, float value);
    void VerticalVelPIDChanged(unsigned int index, float value);
    void ThrustLimitsChanged(unsigned int index, float value);
    void VelocityFeedforwardChanged(float value);
    void FlyawayEmergencyFallbackTriggerTimeChanged(float value);
    void EmergencyFallbackAttitudeChanged(unsigned int index, float value);
    void EmergencyFallbackYawRateChanged(unsigned int index, float value);
    void MaxRollPitchChanged(float value);
    void BrakeRateChanged(float value);
    void BrakeMaxPitchChanged(float value);
    void BrakeHorizontalVelPIDChanged(unsigned int index, float value);
    void BrakeVelocityFeedforwardChanged(float value);
    void UpdatePeriodChanged(unsigned short int value);
    void TreatCustomCraftAsChanged(unsigned char value);
    void ThrustControlChanged(unsigned char value);
    void YawControlChanged(unsigned char value);
    void FlyawayEmergencyFallbackChanged(unsigned char value);


private slots:
    void emitNotifications();
	
private:
    DataFields data;

    void setDefaultFieldValues();*/

};

#endif // VTOLPATHFOLLOWERSETTINGS_H
