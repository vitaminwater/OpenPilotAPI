/**
 ******************************************************************************
 *
 * @file       mpu6000settings.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: mpu6000settings.xml. 
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
#ifndef MPU6000SETTINGS_H
#define MPU6000SETTINGS_H

#include <string>
#include <sstream>
#include <iostream>
#include <string.h>

#include "UAVObject.h"

    // Data Fields
typedef struct {
        unsigned char GyroScale;
        unsigned char AccelScale;
        unsigned char FilterSetting;

} __attribute__((packed)) DataFieldsMpu6000Settings;

class Mpu6000Settings: public UAVObject
{

public:
	int instance;
	DataFieldsMpu6000Settings dataFields;
	static int numInstances;

    // Field information
    // Field GyroScale information
    /* Enumeration options for field GyroScale */
    typedef enum { GYROSCALE_SCALE_250=0, GYROSCALE_SCALE_500=1, GYROSCALE_SCALE_1000=2, GYROSCALE_SCALE_2000=3 } GyroScaleOptions;
    // Field AccelScale information
    /* Enumeration options for field AccelScale */
    typedef enum { ACCELSCALE_SCALE_2G=0, ACCELSCALE_SCALE_4G=1, ACCELSCALE_SCALE_8G=2, ACCELSCALE_SCALE_16G=3 } AccelScaleOptions;
    // Field FilterSetting information
    /* Enumeration options for field FilterSetting */
    typedef enum { FILTERSETTING_LOWPASS_256_HZ=0, FILTERSETTING_LOWPASS_188_HZ=1, FILTERSETTING_LOWPASS_98_HZ=2, FILTERSETTING_LOWPASS_42_HZ=3, FILTERSETTING_LOWPASS_20_HZ=4, FILTERSETTING_LOWPASS_10_HZ=5, FILTERSETTING_LOWPASS_5_HZ=6 } FilterSettingOptions;

  
    // Constants
    static const unsigned int NUMBYTES = sizeof(DataFieldsMpu6000Settings);

    // Functions
    Mpu6000Settings(UAVObjManager* manager);
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
	
    static Mpu6000Settings* GetInstance(UAVObjectManager* objMngr, unsigned int instID = 0);

    Q_INVOKABLE unsigned char getGyroScale() const;
    Q_INVOKABLE unsigned char getAccelScale() const;
    Q_INVOKABLE unsigned char getFilterSetting() const;


public slots:
    void setGyroScale(unsigned char value);
    void setAccelScale(unsigned char value);
    void setFilterSetting(unsigned char value);


signals:
    void GyroScaleChanged(unsigned char value);
    void AccelScaleChanged(unsigned char value);
    void FilterSettingChanged(unsigned char value);


private slots:
    void emitNotifications();
	
private:
    DataFields data;

    void setDefaultFieldValues();*/

};

#endif // MPU6000SETTINGS_H
