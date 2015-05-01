/**
 ******************************************************************************
 *
 * @file       fixedwingpathfollowersettings.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: fixedwingpathfollowersettings.xml. 
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
#ifndef FIXEDWINGPATHFOLLOWERSETTINGS_H
#define FIXEDWINGPATHFOLLOWERSETTINGS_H

#include <string>
#include <sstream>
#include <iostream>
#include <string.h>

#include "UAVObject.h"

    // Data Fields
typedef struct {
        float HorizontalVelMax;
        float HorizontalVelMin;
        float VerticalVelMax;
        float CourseFeedForward;
        float ReverseCourseOverlap;
        float HorizontalPosP;
        float VerticalPosP;
        float CoursePI[3];
        float SpeedPI[3];
        float VerticalToPitchCrossFeed[2];
        float AirspeedToPowerCrossFeed[2];
        float PowerPI[3];
        float RollLimit[3];
        float PitchLimit[3];
        float ThrustLimit[3];
        float Safetymargins[8];
        int UpdatePeriod;

} __attribute__((packed)) DataFieldsFixedWingPathFollowerSettings;

class FixedWingPathFollowerSettings: public UAVObject
{

public:
	int instance;
	DataFieldsFixedWingPathFollowerSettings dataFields;
	static int numInstances;

    // Field information
    // Field HorizontalVelMax information
    // Field HorizontalVelMin information
    // Field VerticalVelMax information
    // Field CourseFeedForward information
    // Field ReverseCourseOverlap information
    // Field HorizontalPosP information
    // Field VerticalPosP information
    // Field CoursePI information
    /* Array element names for field CoursePI */
    typedef enum { COURSEPI_KP=0, COURSEPI_KI=1, COURSEPI_ILIMIT=2 } CoursePIElem;
    /* Number of elements for field CoursePI */
    static const unsigned int COURSEPI_NUMELEM = 3;
    // Field SpeedPI information
    /* Array element names for field SpeedPI */
    typedef enum { SPEEDPI_KP=0, SPEEDPI_KI=1, SPEEDPI_ILIMIT=2 } SpeedPIElem;
    /* Number of elements for field SpeedPI */
    static const unsigned int SPEEDPI_NUMELEM = 3;
    // Field VerticalToPitchCrossFeed information
    /* Array element names for field VerticalToPitchCrossFeed */
    typedef enum { VERTICALTOPITCHCROSSFEED_KP=0, VERTICALTOPITCHCROSSFEED_MAX=1 } VerticalToPitchCrossFeedElem;
    /* Number of elements for field VerticalToPitchCrossFeed */
    static const unsigned int VERTICALTOPITCHCROSSFEED_NUMELEM = 2;
    // Field AirspeedToPowerCrossFeed information
    /* Array element names for field AirspeedToPowerCrossFeed */
    typedef enum { AIRSPEEDTOPOWERCROSSFEED_KP=0, AIRSPEEDTOPOWERCROSSFEED_MAX=1 } AirspeedToPowerCrossFeedElem;
    /* Number of elements for field AirspeedToPowerCrossFeed */
    static const unsigned int AIRSPEEDTOPOWERCROSSFEED_NUMELEM = 2;
    // Field PowerPI information
    /* Array element names for field PowerPI */
    typedef enum { POWERPI_KP=0, POWERPI_KI=1, POWERPI_ILIMIT=2 } PowerPIElem;
    /* Number of elements for field PowerPI */
    static const unsigned int POWERPI_NUMELEM = 3;
    // Field RollLimit information
    /* Array element names for field RollLimit */
    typedef enum { ROLLLIMIT_MIN=0, ROLLLIMIT_NEUTRAL=1, ROLLLIMIT_MAX=2 } RollLimitElem;
    /* Number of elements for field RollLimit */
    static const unsigned int ROLLLIMIT_NUMELEM = 3;
    // Field PitchLimit information
    /* Array element names for field PitchLimit */
    typedef enum { PITCHLIMIT_MIN=0, PITCHLIMIT_NEUTRAL=1, PITCHLIMIT_MAX=2 } PitchLimitElem;
    /* Number of elements for field PitchLimit */
    static const unsigned int PITCHLIMIT_NUMELEM = 3;
    // Field ThrustLimit information
    /* Array element names for field ThrustLimit */
    typedef enum { THRUSTLIMIT_MIN=0, THRUSTLIMIT_NEUTRAL=1, THRUSTLIMIT_MAX=2 } ThrustLimitElem;
    /* Number of elements for field ThrustLimit */
    static const unsigned int THRUSTLIMIT_NUMELEM = 3;
    // Field Safetymargins information
    /* Array element names for field Safetymargins */
    typedef enum { SAFETYMARGINS_WIND=0, SAFETYMARGINS_STALLSPEED=1, SAFETYMARGINS_LOWSPEED=2, SAFETYMARGINS_HIGHSPEED=3, SAFETYMARGINS_OVERSPEED=4, SAFETYMARGINS_LOWPOWER=5, SAFETYMARGINS_HIGHPOWER=6, SAFETYMARGINS_PITCHCONTROL=7 } SafetymarginsElem;
    /* Number of elements for field Safetymargins */
    static const unsigned int SAFETYMARGINS_NUMELEM = 8;
    // Field UpdatePeriod information

  
    // Constants
    static const unsigned int NUMBYTES = sizeof(DataFieldsFixedWingPathFollowerSettings);

    // Functions
    FixedWingPathFollowerSettings(UAVObjManager* manager);
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
	
    static FixedWingPathFollowerSettings* GetInstance(UAVObjectManager* objMngr, unsigned int instID = 0);

    Q_INVOKABLE float getHorizontalVelMax() const;
    Q_INVOKABLE float getHorizontalVelMin() const;
    Q_INVOKABLE float getVerticalVelMax() const;
    Q_INVOKABLE float getCourseFeedForward() const;
    Q_INVOKABLE float getReverseCourseOverlap() const;
    Q_INVOKABLE float getHorizontalPosP() const;
    Q_INVOKABLE float getVerticalPosP() const;
    Q_INVOKABLE float getCoursePI(unsigned int index) const;
    Q_INVOKABLE float getSpeedPI(unsigned int index) const;
    Q_INVOKABLE float getVerticalToPitchCrossFeed(unsigned int index) const;
    Q_INVOKABLE float getAirspeedToPowerCrossFeed(unsigned int index) const;
    Q_INVOKABLE float getPowerPI(unsigned int index) const;
    Q_INVOKABLE float getRollLimit(unsigned int index) const;
    Q_INVOKABLE float getPitchLimit(unsigned int index) const;
    Q_INVOKABLE float getThrustLimit(unsigned int index) const;
    Q_INVOKABLE float getSafetymargins(unsigned int index) const;
    Q_INVOKABLE int getUpdatePeriod() const;


public slots:
    void setHorizontalVelMax(float value);
    void setHorizontalVelMin(float value);
    void setVerticalVelMax(float value);
    void setCourseFeedForward(float value);
    void setReverseCourseOverlap(float value);
    void setHorizontalPosP(float value);
    void setVerticalPosP(float value);
    void setCoursePI(unsigned int index, float value);
    void setSpeedPI(unsigned int index, float value);
    void setVerticalToPitchCrossFeed(unsigned int index, float value);
    void setAirspeedToPowerCrossFeed(unsigned int index, float value);
    void setPowerPI(unsigned int index, float value);
    void setRollLimit(unsigned int index, float value);
    void setPitchLimit(unsigned int index, float value);
    void setThrustLimit(unsigned int index, float value);
    void setSafetymargins(unsigned int index, float value);
    void setUpdatePeriod(int value);


signals:
    void HorizontalVelMaxChanged(float value);
    void HorizontalVelMinChanged(float value);
    void VerticalVelMaxChanged(float value);
    void CourseFeedForwardChanged(float value);
    void ReverseCourseOverlapChanged(float value);
    void HorizontalPosPChanged(float value);
    void VerticalPosPChanged(float value);
    void CoursePIChanged(unsigned int index, float value);
    void SpeedPIChanged(unsigned int index, float value);
    void VerticalToPitchCrossFeedChanged(unsigned int index, float value);
    void AirspeedToPowerCrossFeedChanged(unsigned int index, float value);
    void PowerPIChanged(unsigned int index, float value);
    void RollLimitChanged(unsigned int index, float value);
    void PitchLimitChanged(unsigned int index, float value);
    void ThrustLimitChanged(unsigned int index, float value);
    void SafetymarginsChanged(unsigned int index, float value);
    void UpdatePeriodChanged(int value);


private slots:
    void emitNotifications();
	
private:
    DataFields data;

    void setDefaultFieldValues();*/

};

#endif // FIXEDWINGPATHFOLLOWERSETTINGS_H
