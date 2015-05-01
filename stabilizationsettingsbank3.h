/**
 ******************************************************************************
 *
 * @file       stabilizationsettingsbank3.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: stabilizationsettingsbank3.xml. 
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
#ifndef STABILIZATIONSETTINGSBANK3_H
#define STABILIZATIONSETTINGSBANK3_H

#include <string>
#include <sstream>
#include <iostream>
#include <string.h>

#include "UAVObject.h"

    // Data Fields
typedef struct {
        float ManualRate[3];
        float MaximumRate[3];
        float RollRatePID[4];
        float PitchRatePID[4];
        float YawRatePID[4];
        float RollPI[3];
        float PitchPI[3];
        float YawPI[3];
        float AcroInsanityFactor;
        float ThrustPIDScaleCurve[5];
        unsigned char RollMax;
        unsigned char PitchMax;
        unsigned char YawMax;
        char StickExpo[3];
        unsigned char EnablePiroComp;
        unsigned char EnableThrustPIDScaling;
        unsigned char ThrustPIDScaleSource;
        unsigned char ThrustPIDScaleTarget;
        unsigned char ThrustPIDScaleAxes;

} __attribute__((packed)) DataFieldsStabilizationSettingsBank3;

class StabilizationSettingsBank3: public UAVObject
{

public:
	int instance;
	DataFieldsStabilizationSettingsBank3 dataFields;
	static int numInstances;

    // Field information
    // Field ManualRate information
    /* Array element names for field ManualRate */
    typedef enum { MANUALRATE_ROLL=0, MANUALRATE_PITCH=1, MANUALRATE_YAW=2 } ManualRateElem;
    /* Number of elements for field ManualRate */
    static const unsigned int MANUALRATE_NUMELEM = 3;
    // Field MaximumRate information
    /* Array element names for field MaximumRate */
    typedef enum { MAXIMUMRATE_ROLL=0, MAXIMUMRATE_PITCH=1, MAXIMUMRATE_YAW=2 } MaximumRateElem;
    /* Number of elements for field MaximumRate */
    static const unsigned int MAXIMUMRATE_NUMELEM = 3;
    // Field RollRatePID information
    /* Array element names for field RollRatePID */
    typedef enum { ROLLRATEPID_KP=0, ROLLRATEPID_KI=1, ROLLRATEPID_KD=2, ROLLRATEPID_ILIMIT=3 } RollRatePIDElem;
    /* Number of elements for field RollRatePID */
    static const unsigned int ROLLRATEPID_NUMELEM = 4;
    // Field PitchRatePID information
    /* Array element names for field PitchRatePID */
    typedef enum { PITCHRATEPID_KP=0, PITCHRATEPID_KI=1, PITCHRATEPID_KD=2, PITCHRATEPID_ILIMIT=3 } PitchRatePIDElem;
    /* Number of elements for field PitchRatePID */
    static const unsigned int PITCHRATEPID_NUMELEM = 4;
    // Field YawRatePID information
    /* Array element names for field YawRatePID */
    typedef enum { YAWRATEPID_KP=0, YAWRATEPID_KI=1, YAWRATEPID_KD=2, YAWRATEPID_ILIMIT=3 } YawRatePIDElem;
    /* Number of elements for field YawRatePID */
    static const unsigned int YAWRATEPID_NUMELEM = 4;
    // Field RollPI information
    /* Array element names for field RollPI */
    typedef enum { ROLLPI_KP=0, ROLLPI_KI=1, ROLLPI_ILIMIT=2 } RollPIElem;
    /* Number of elements for field RollPI */
    static const unsigned int ROLLPI_NUMELEM = 3;
    // Field PitchPI information
    /* Array element names for field PitchPI */
    typedef enum { PITCHPI_KP=0, PITCHPI_KI=1, PITCHPI_ILIMIT=2 } PitchPIElem;
    /* Number of elements for field PitchPI */
    static const unsigned int PITCHPI_NUMELEM = 3;
    // Field YawPI information
    /* Array element names for field YawPI */
    typedef enum { YAWPI_KP=0, YAWPI_KI=1, YAWPI_ILIMIT=2 } YawPIElem;
    /* Number of elements for field YawPI */
    static const unsigned int YAWPI_NUMELEM = 3;
    // Field AcroInsanityFactor information
    // Field ThrustPIDScaleCurve information
    /* Array element names for field ThrustPIDScaleCurve */
    typedef enum { THRUSTPIDSCALECURVE_0=0, THRUSTPIDSCALECURVE_25=1, THRUSTPIDSCALECURVE_50=2, THRUSTPIDSCALECURVE_75=3, THRUSTPIDSCALECURVE_100=4 } ThrustPIDScaleCurveElem;
    /* Number of elements for field ThrustPIDScaleCurve */
    static const unsigned int THRUSTPIDSCALECURVE_NUMELEM = 5;
    // Field RollMax information
    // Field PitchMax information
    // Field YawMax information
    // Field StickExpo information
    /* Array element names for field StickExpo */
    typedef enum { STICKEXPO_ROLL=0, STICKEXPO_PITCH=1, STICKEXPO_YAW=2 } StickExpoElem;
    /* Number of elements for field StickExpo */
    static const unsigned int STICKEXPO_NUMELEM = 3;
    // Field EnablePiroComp information
    /* Enumeration options for field EnablePiroComp */
    typedef enum { ENABLEPIROCOMP_FALSE=0, ENABLEPIROCOMP_TRUE=1 } EnablePiroCompOptions;
    // Field EnableThrustPIDScaling information
    /* Enumeration options for field EnableThrustPIDScaling */
    typedef enum { ENABLETHRUSTPIDSCALING_FALSE=0, ENABLETHRUSTPIDSCALING_TRUE=1 } EnableThrustPIDScalingOptions;
    // Field ThrustPIDScaleSource information
    /* Enumeration options for field ThrustPIDScaleSource */
    typedef enum { THRUSTPIDSCALESOURCE_MANUALCONTROLTHROTTLE=0, THRUSTPIDSCALESOURCE_STABILIZATIONDESIREDTHRUST=1, THRUSTPIDSCALESOURCE_ACTUATORDESIREDTHRUST=2 } ThrustPIDScaleSourceOptions;
    // Field ThrustPIDScaleTarget information
    /* Enumeration options for field ThrustPIDScaleTarget */
    typedef enum { THRUSTPIDSCALETARGET_PID=0, THRUSTPIDSCALETARGET_PI=1, THRUSTPIDSCALETARGET_PD=2, THRUSTPIDSCALETARGET_ID=3, THRUSTPIDSCALETARGET_P=4, THRUSTPIDSCALETARGET_I=5, THRUSTPIDSCALETARGET_D=6 } ThrustPIDScaleTargetOptions;
    // Field ThrustPIDScaleAxes information
    /* Enumeration options for field ThrustPIDScaleAxes */
    typedef enum { THRUSTPIDSCALEAXES_ROLLPITCHYAW=0, THRUSTPIDSCALEAXES_ROLLPITCH=1, THRUSTPIDSCALEAXES_ROLLYAW=2, THRUSTPIDSCALEAXES_ROLL=3, THRUSTPIDSCALEAXES_PITCHYAW=4, THRUSTPIDSCALEAXES_PITCH=5, THRUSTPIDSCALEAXES_YAW=6 } ThrustPIDScaleAxesOptions;

  
    // Constants
    static const unsigned int NUMBYTES = sizeof(DataFieldsStabilizationSettingsBank3);

    // Functions
    StabilizationSettingsBank3(UAVObjManager* manager);
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
	
    static StabilizationSettingsBank3* GetInstance(UAVObjectManager* objMngr, unsigned int instID = 0);

    Q_INVOKABLE float getManualRate(unsigned int index) const;
    Q_INVOKABLE float getMaximumRate(unsigned int index) const;
    Q_INVOKABLE float getRollRatePID(unsigned int index) const;
    Q_INVOKABLE float getPitchRatePID(unsigned int index) const;
    Q_INVOKABLE float getYawRatePID(unsigned int index) const;
    Q_INVOKABLE float getRollPI(unsigned int index) const;
    Q_INVOKABLE float getPitchPI(unsigned int index) const;
    Q_INVOKABLE float getYawPI(unsigned int index) const;
    Q_INVOKABLE float getAcroInsanityFactor() const;
    Q_INVOKABLE float getThrustPIDScaleCurve(unsigned int index) const;
    Q_INVOKABLE unsigned char getRollMax() const;
    Q_INVOKABLE unsigned char getPitchMax() const;
    Q_INVOKABLE unsigned char getYawMax() const;
    Q_INVOKABLE char getStickExpo(unsigned int index) const;
    Q_INVOKABLE unsigned char getEnablePiroComp() const;
    Q_INVOKABLE unsigned char getEnableThrustPIDScaling() const;
    Q_INVOKABLE unsigned char getThrustPIDScaleSource() const;
    Q_INVOKABLE unsigned char getThrustPIDScaleTarget() const;
    Q_INVOKABLE unsigned char getThrustPIDScaleAxes() const;


public slots:
    void setManualRate(unsigned int index, float value);
    void setMaximumRate(unsigned int index, float value);
    void setRollRatePID(unsigned int index, float value);
    void setPitchRatePID(unsigned int index, float value);
    void setYawRatePID(unsigned int index, float value);
    void setRollPI(unsigned int index, float value);
    void setPitchPI(unsigned int index, float value);
    void setYawPI(unsigned int index, float value);
    void setAcroInsanityFactor(float value);
    void setThrustPIDScaleCurve(unsigned int index, float value);
    void setRollMax(unsigned char value);
    void setPitchMax(unsigned char value);
    void setYawMax(unsigned char value);
    void setStickExpo(unsigned int index, char value);
    void setEnablePiroComp(unsigned char value);
    void setEnableThrustPIDScaling(unsigned char value);
    void setThrustPIDScaleSource(unsigned char value);
    void setThrustPIDScaleTarget(unsigned char value);
    void setThrustPIDScaleAxes(unsigned char value);


signals:
    void ManualRateChanged(unsigned int index, float value);
    void MaximumRateChanged(unsigned int index, float value);
    void RollRatePIDChanged(unsigned int index, float value);
    void PitchRatePIDChanged(unsigned int index, float value);
    void YawRatePIDChanged(unsigned int index, float value);
    void RollPIChanged(unsigned int index, float value);
    void PitchPIChanged(unsigned int index, float value);
    void YawPIChanged(unsigned int index, float value);
    void AcroInsanityFactorChanged(float value);
    void ThrustPIDScaleCurveChanged(unsigned int index, float value);
    void RollMaxChanged(unsigned char value);
    void PitchMaxChanged(unsigned char value);
    void YawMaxChanged(unsigned char value);
    void StickExpoChanged(unsigned int index, char value);
    void EnablePiroCompChanged(unsigned char value);
    void EnableThrustPIDScalingChanged(unsigned char value);
    void ThrustPIDScaleSourceChanged(unsigned char value);
    void ThrustPIDScaleTargetChanged(unsigned char value);
    void ThrustPIDScaleAxesChanged(unsigned char value);


private slots:
    void emitNotifications();
	
private:
    DataFields data;

    void setDefaultFieldValues();*/

};

#endif // STABILIZATIONSETTINGSBANK3_H
