/**
 ******************************************************************************
 *
 * @file       revosettings.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: revosettings.xml. 
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
#ifndef REVOSETTINGS_H
#define REVOSETTINGS_H

#include <string>
#include <sstream>
#include <iostream>
#include <string.h>

#include "UAVObject.h"

    // Data Fields
typedef struct {
        float BaroGPSOffsetCorrectionAlpha;
        float MagnetometerMaxDeviation[2];
        float BaroTempCorrectionPolynomial[4];
        float BaroTempCorrectionExtent[2];
        float VelocityPostProcessingLowPassAlpha;
        unsigned char FusionAlgorithm;

} __attribute__((packed)) DataFieldsRevoSettings;

class RevoSettings: public UAVObject
{

public:
	int instance;
	DataFieldsRevoSettings dataFields;
	static int numInstances;

    // Field information
    // Field BaroGPSOffsetCorrectionAlpha information
    // Field MagnetometerMaxDeviation information
    /* Array element names for field MagnetometerMaxDeviation */
    typedef enum { MAGNETOMETERMAXDEVIATION_WARNING=0, MAGNETOMETERMAXDEVIATION_ERROR=1 } MagnetometerMaxDeviationElem;
    /* Number of elements for field MagnetometerMaxDeviation */
    static const unsigned int MAGNETOMETERMAXDEVIATION_NUMELEM = 2;
    // Field BaroTempCorrectionPolynomial information
    /* Array element names for field BaroTempCorrectionPolynomial */
    typedef enum { BAROTEMPCORRECTIONPOLYNOMIAL_A=0, BAROTEMPCORRECTIONPOLYNOMIAL_B=1, BAROTEMPCORRECTIONPOLYNOMIAL_C=2, BAROTEMPCORRECTIONPOLYNOMIAL_D=3 } BaroTempCorrectionPolynomialElem;
    /* Number of elements for field BaroTempCorrectionPolynomial */
    static const unsigned int BAROTEMPCORRECTIONPOLYNOMIAL_NUMELEM = 4;
    // Field BaroTempCorrectionExtent information
    /* Array element names for field BaroTempCorrectionExtent */
    typedef enum { BAROTEMPCORRECTIONEXTENT_MIN=0, BAROTEMPCORRECTIONEXTENT_MAX=1 } BaroTempCorrectionExtentElem;
    /* Number of elements for field BaroTempCorrectionExtent */
    static const unsigned int BAROTEMPCORRECTIONEXTENT_NUMELEM = 2;
    // Field VelocityPostProcessingLowPassAlpha information
    // Field FusionAlgorithm information
    /* Enumeration options for field FusionAlgorithm */
    typedef enum { FUSIONALGORITHM_NONE=0, FUSIONALGORITHM_BASICCOMPLEMENTARY=1, FUSIONALGORITHM_COMPLEMENTARYMAG=2, FUSIONALGORITHM_COMPLEMENTARYMAGGPSOUTDOOR=3, FUSIONALGORITHM_INS13INDOOR=4, FUSIONALGORITHM_GPSNAVIGATIONINS13=5 } FusionAlgorithmOptions;

  
    // Constants
    static const unsigned int NUMBYTES = sizeof(DataFieldsRevoSettings);

    // Functions
    RevoSettings(UAVObjManager* manager);
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
	
    static RevoSettings* GetInstance(UAVObjectManager* objMngr, unsigned int instID = 0);

    Q_INVOKABLE float getBaroGPSOffsetCorrectionAlpha() const;
    Q_INVOKABLE float getMagnetometerMaxDeviation(unsigned int index) const;
    Q_INVOKABLE float getBaroTempCorrectionPolynomial(unsigned int index) const;
    Q_INVOKABLE float getBaroTempCorrectionExtent(unsigned int index) const;
    Q_INVOKABLE float getVelocityPostProcessingLowPassAlpha() const;
    Q_INVOKABLE unsigned char getFusionAlgorithm() const;


public slots:
    void setBaroGPSOffsetCorrectionAlpha(float value);
    void setMagnetometerMaxDeviation(unsigned int index, float value);
    void setBaroTempCorrectionPolynomial(unsigned int index, float value);
    void setBaroTempCorrectionExtent(unsigned int index, float value);
    void setVelocityPostProcessingLowPassAlpha(float value);
    void setFusionAlgorithm(unsigned char value);


signals:
    void BaroGPSOffsetCorrectionAlphaChanged(float value);
    void MagnetometerMaxDeviationChanged(unsigned int index, float value);
    void BaroTempCorrectionPolynomialChanged(unsigned int index, float value);
    void BaroTempCorrectionExtentChanged(unsigned int index, float value);
    void VelocityPostProcessingLowPassAlphaChanged(float value);
    void FusionAlgorithmChanged(unsigned char value);


private slots:
    void emitNotifications();
	
private:
    DataFields data;

    void setDefaultFieldValues();*/

};

#endif // REVOSETTINGS_H
