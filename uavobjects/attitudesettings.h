/**
 ******************************************************************************
 *
 * @file       attitudesettings.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: attitudesettings.xml. 
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
#ifndef ATTITUDESETTINGS_H
#define ATTITUDESETTINGS_H

#include <string>
#include <sstream>
#include <iostream>
#include <string.h>

#include "UAVObject.h"

    // Data Fields
typedef struct {
        float BoardRotation[3];
        float BoardLevelTrim[2];
        float AccelKp;
        float AccelKi;
        float MagKi;
        float MagKp;
        float AccelTau;
        float YawBiasRate;
        unsigned char ZeroDuringArming;
        unsigned char BiasCorrectGyro;
        unsigned char TrimFlight;

} __attribute__((packed)) DataFieldsAttitudeSettings;

class AttitudeSettings: public UAVObject
{

public:
	int instance;
	DataFieldsAttitudeSettings dataFields;
	static int numInstances;

    // Field information
    // Field BoardRotation information
    /* Array element names for field BoardRotation */
    typedef enum { BOARDROTATION_ROLL=0, BOARDROTATION_PITCH=1, BOARDROTATION_YAW=2 } BoardRotationElem;
    /* Number of elements for field BoardRotation */
    static const unsigned int BOARDROTATION_NUMELEM = 3;
    // Field BoardLevelTrim information
    /* Array element names for field BoardLevelTrim */
    typedef enum { BOARDLEVELTRIM_ROLL=0, BOARDLEVELTRIM_PITCH=1 } BoardLevelTrimElem;
    /* Number of elements for field BoardLevelTrim */
    static const unsigned int BOARDLEVELTRIM_NUMELEM = 2;
    // Field AccelKp information
    // Field AccelKi information
    // Field MagKi information
    // Field MagKp information
    // Field AccelTau information
    // Field YawBiasRate information
    // Field ZeroDuringArming information
    /* Enumeration options for field ZeroDuringArming */
    typedef enum { ZERODURINGARMING_FALSE=0, ZERODURINGARMING_TRUE=1 } ZeroDuringArmingOptions;
    // Field BiasCorrectGyro information
    /* Enumeration options for field BiasCorrectGyro */
    typedef enum { BIASCORRECTGYRO_FALSE=0, BIASCORRECTGYRO_TRUE=1 } BiasCorrectGyroOptions;
    // Field TrimFlight information
    /* Enumeration options for field TrimFlight */
    typedef enum { TRIMFLIGHT_NORMAL=0, TRIMFLIGHT_START=1, TRIMFLIGHT_LOAD=2 } TrimFlightOptions;

  
    // Constants
    static const unsigned int NUMBYTES = sizeof(DataFieldsAttitudeSettings);

    // Functions
    AttitudeSettings(UAVObjManager* manager);
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
	
    static AttitudeSettings* GetInstance(UAVObjectManager* objMngr, unsigned int instID = 0);

    Q_INVOKABLE float getBoardRotation(unsigned int index) const;
    Q_INVOKABLE float getBoardLevelTrim(unsigned int index) const;
    Q_INVOKABLE float getAccelKp() const;
    Q_INVOKABLE float getAccelKi() const;
    Q_INVOKABLE float getMagKi() const;
    Q_INVOKABLE float getMagKp() const;
    Q_INVOKABLE float getAccelTau() const;
    Q_INVOKABLE float getYawBiasRate() const;
    Q_INVOKABLE unsigned char getZeroDuringArming() const;
    Q_INVOKABLE unsigned char getBiasCorrectGyro() const;
    Q_INVOKABLE unsigned char getTrimFlight() const;


public slots:
    void setBoardRotation(unsigned int index, float value);
    void setBoardLevelTrim(unsigned int index, float value);
    void setAccelKp(float value);
    void setAccelKi(float value);
    void setMagKi(float value);
    void setMagKp(float value);
    void setAccelTau(float value);
    void setYawBiasRate(float value);
    void setZeroDuringArming(unsigned char value);
    void setBiasCorrectGyro(unsigned char value);
    void setTrimFlight(unsigned char value);


signals:
    void BoardRotationChanged(unsigned int index, float value);
    void BoardLevelTrimChanged(unsigned int index, float value);
    void AccelKpChanged(float value);
    void AccelKiChanged(float value);
    void MagKiChanged(float value);
    void MagKpChanged(float value);
    void AccelTauChanged(float value);
    void YawBiasRateChanged(float value);
    void ZeroDuringArmingChanged(unsigned char value);
    void BiasCorrectGyroChanged(unsigned char value);
    void TrimFlightChanged(unsigned char value);


private slots:
    void emitNotifications();
	
private:
    DataFields data;

    void setDefaultFieldValues();*/

};

#endif // ATTITUDESETTINGS_H
