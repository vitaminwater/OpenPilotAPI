/**
 ******************************************************************************
 *
 * @file       accelgyrosettings.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: accelgyrosettings.xml. 
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
#ifndef ACCELGYROSETTINGS_H
#define ACCELGYROSETTINGS_H

#include <string>
#include <sstream>
#include <iostream>
#include <string.h>

#include "UAVObject.h"

    // Data Fields
typedef struct {
        float accel_bias[3];
        float accel_scale[3];
        float accel_temp_coeff[3];
        float gyro_bias[3];
        float gyro_scale[3];
        float gyro_temp_coeff[6];
        float temp_calibrated_extent[2];

} __attribute__((packed)) DataFieldsAccelGyroSettings;

class AccelGyroSettings: public UAVObject
{

public:
	int instance;
	DataFieldsAccelGyroSettings dataFields;
	static int numInstances;

    // Field information
    // Field accel_bias information
    /* Array element names for field accel_bias */
    typedef enum { ACCEL_BIAS_X=0, ACCEL_BIAS_Y=1, ACCEL_BIAS_Z=2 } accel_biasElem;
    /* Number of elements for field accel_bias */
    static const unsigned int ACCEL_BIAS_NUMELEM = 3;
    // Field accel_scale information
    /* Array element names for field accel_scale */
    typedef enum { ACCEL_SCALE_X=0, ACCEL_SCALE_Y=1, ACCEL_SCALE_Z=2 } accel_scaleElem;
    /* Number of elements for field accel_scale */
    static const unsigned int ACCEL_SCALE_NUMELEM = 3;
    // Field accel_temp_coeff information
    /* Array element names for field accel_temp_coeff */
    typedef enum { ACCEL_TEMP_COEFF_X=0, ACCEL_TEMP_COEFF_Y=1, ACCEL_TEMP_COEFF_Z=2 } accel_temp_coeffElem;
    /* Number of elements for field accel_temp_coeff */
    static const unsigned int ACCEL_TEMP_COEFF_NUMELEM = 3;
    // Field gyro_bias information
    /* Array element names for field gyro_bias */
    typedef enum { GYRO_BIAS_X=0, GYRO_BIAS_Y=1, GYRO_BIAS_Z=2 } gyro_biasElem;
    /* Number of elements for field gyro_bias */
    static const unsigned int GYRO_BIAS_NUMELEM = 3;
    // Field gyro_scale information
    /* Array element names for field gyro_scale */
    typedef enum { GYRO_SCALE_X=0, GYRO_SCALE_Y=1, GYRO_SCALE_Z=2 } gyro_scaleElem;
    /* Number of elements for field gyro_scale */
    static const unsigned int GYRO_SCALE_NUMELEM = 3;
    // Field gyro_temp_coeff information
    /* Array element names for field gyro_temp_coeff */
    typedef enum { GYRO_TEMP_COEFF_X=0, GYRO_TEMP_COEFF_X2=1, GYRO_TEMP_COEFF_Y=2, GYRO_TEMP_COEFF_Y2=3, GYRO_TEMP_COEFF_Z=4, GYRO_TEMP_COEFF_Z2=5 } gyro_temp_coeffElem;
    /* Number of elements for field gyro_temp_coeff */
    static const unsigned int GYRO_TEMP_COEFF_NUMELEM = 6;
    // Field temp_calibrated_extent information
    /* Array element names for field temp_calibrated_extent */
    typedef enum { TEMP_CALIBRATED_EXTENT_MIN=0, TEMP_CALIBRATED_EXTENT_MAX=1 } temp_calibrated_extentElem;
    /* Number of elements for field temp_calibrated_extent */
    static const unsigned int TEMP_CALIBRATED_EXTENT_NUMELEM = 2;

  
    // Constants
    static const unsigned int NUMBYTES = sizeof(DataFieldsAccelGyroSettings);

    // Functions
    AccelGyroSettings(UAVObjManager* manager);
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
	
    static AccelGyroSettings* GetInstance(UAVObjectManager* objMngr, unsigned int instID = 0);

    Q_INVOKABLE float getaccel_bias(unsigned int index) const;
    Q_INVOKABLE float getaccel_scale(unsigned int index) const;
    Q_INVOKABLE float getaccel_temp_coeff(unsigned int index) const;
    Q_INVOKABLE float getgyro_bias(unsigned int index) const;
    Q_INVOKABLE float getgyro_scale(unsigned int index) const;
    Q_INVOKABLE float getgyro_temp_coeff(unsigned int index) const;
    Q_INVOKABLE float gettemp_calibrated_extent(unsigned int index) const;


public slots:
    void setaccel_bias(unsigned int index, float value);
    void setaccel_scale(unsigned int index, float value);
    void setaccel_temp_coeff(unsigned int index, float value);
    void setgyro_bias(unsigned int index, float value);
    void setgyro_scale(unsigned int index, float value);
    void setgyro_temp_coeff(unsigned int index, float value);
    void settemp_calibrated_extent(unsigned int index, float value);


signals:
    void accel_biasChanged(unsigned int index, float value);
    void accel_scaleChanged(unsigned int index, float value);
    void accel_temp_coeffChanged(unsigned int index, float value);
    void gyro_biasChanged(unsigned int index, float value);
    void gyro_scaleChanged(unsigned int index, float value);
    void gyro_temp_coeffChanged(unsigned int index, float value);
    void temp_calibrated_extentChanged(unsigned int index, float value);


private slots:
    void emitNotifications();
	
private:
    DataFields data;

    void setDefaultFieldValues();*/

};

#endif // ACCELGYROSETTINGS_H
