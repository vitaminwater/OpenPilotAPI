/**
 ******************************************************************************
 *
 * @file       auxmagsettings.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: auxmagsettings.xml. 
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
#ifndef AUXMAGSETTINGS_H
#define AUXMAGSETTINGS_H

#include <string>
#include <sstream>
#include <iostream>
#include <string.h>

#include "UAVObject.h"

    // Data Fields
typedef struct {
        float mag_bias[3];
        float mag_transform[9];
        float MagBiasNullingRate;
        float Orientation;
        unsigned char Type;
        unsigned char Usage;

} __attribute__((packed)) DataFieldsAuxMagSettings;

class AuxMagSettings: public UAVObject
{

public:
	int instance;
	DataFieldsAuxMagSettings dataFields;
	static int numInstances;

    // Field information
    // Field mag_bias information
    /* Array element names for field mag_bias */
    typedef enum { MAG_BIAS_X=0, MAG_BIAS_Y=1, MAG_BIAS_Z=2 } mag_biasElem;
    /* Number of elements for field mag_bias */
    static const unsigned int MAG_BIAS_NUMELEM = 3;
    // Field mag_transform information
    /* Array element names for field mag_transform */
    typedef enum { MAG_TRANSFORM_R0C0=0, MAG_TRANSFORM_R0C1=1, MAG_TRANSFORM_R0C2=2, MAG_TRANSFORM_R1C0=3, MAG_TRANSFORM_R1C1=4, MAG_TRANSFORM_R1C2=5, MAG_TRANSFORM_R2C0=6, MAG_TRANSFORM_R2C1=7, MAG_TRANSFORM_R2C2=8 } mag_transformElem;
    /* Number of elements for field mag_transform */
    static const unsigned int MAG_TRANSFORM_NUMELEM = 9;
    // Field MagBiasNullingRate information
    // Field Orientation information
    // Field Type information
    /* Enumeration options for field Type */
    typedef enum { TYPE_GPSV9=0, TYPE_EXT=1 } TypeOptions;
    // Field Usage information
    /* Enumeration options for field Usage */
    typedef enum { USAGE_BOTH=0, USAGE_ONBOARDONLY=1, USAGE_AUXONLY=2 } UsageOptions;

  
    // Constants
    static const unsigned int NUMBYTES = sizeof(DataFieldsAuxMagSettings);

    // Functions
    AuxMagSettings(UAVObjManager* manager);
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
	
    static AuxMagSettings* GetInstance(UAVObjectManager* objMngr, unsigned int instID = 0);

    Q_INVOKABLE float getmag_bias(unsigned int index) const;
    Q_INVOKABLE float getmag_transform(unsigned int index) const;
    Q_INVOKABLE float getMagBiasNullingRate() const;
    Q_INVOKABLE float getOrientation() const;
    Q_INVOKABLE unsigned char getType() const;
    Q_INVOKABLE unsigned char getUsage() const;


public slots:
    void setmag_bias(unsigned int index, float value);
    void setmag_transform(unsigned int index, float value);
    void setMagBiasNullingRate(float value);
    void setOrientation(float value);
    void setType(unsigned char value);
    void setUsage(unsigned char value);


signals:
    void mag_biasChanged(unsigned int index, float value);
    void mag_transformChanged(unsigned int index, float value);
    void MagBiasNullingRateChanged(float value);
    void OrientationChanged(float value);
    void TypeChanged(unsigned char value);
    void UsageChanged(unsigned char value);


private slots:
    void emitNotifications();
	
private:
    DataFields data;

    void setDefaultFieldValues();*/

};

#endif // AUXMAGSETTINGS_H
