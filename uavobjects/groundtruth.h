/**
 ******************************************************************************
 *
 * @file       groundtruth.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: groundtruth.xml. 
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
#ifndef GROUNDTRUTH_H
#define GROUNDTRUTH_H

#include <string>
#include <sstream>
#include <iostream>
#include <string.h>

#include "UAVObject.h"

    // Data Fields
typedef struct {
        float AccelerationXYZ[3];
        float PositionNED[3];
        float VelocityNED[3];
        float RPY[3];
        float AngularRates[3];
        float TrueAirspeed;
        float CalibratedAirspeed;
        float AngleOfAttack;
        float AngleOfSlip;

} __attribute__((packed)) DataFieldsGroundTruth;

class GroundTruth: public UAVObject
{

public:
	int instance;
	DataFieldsGroundTruth dataFields;
	static int numInstances;

    // Field information
    // Field AccelerationXYZ information
    /* Number of elements for field AccelerationXYZ */
    static const unsigned int ACCELERATIONXYZ_NUMELEM = 3;
    // Field PositionNED information
    /* Number of elements for field PositionNED */
    static const unsigned int POSITIONNED_NUMELEM = 3;
    // Field VelocityNED information
    /* Number of elements for field VelocityNED */
    static const unsigned int VELOCITYNED_NUMELEM = 3;
    // Field RPY information
    /* Number of elements for field RPY */
    static const unsigned int RPY_NUMELEM = 3;
    // Field AngularRates information
    /* Number of elements for field AngularRates */
    static const unsigned int ANGULARRATES_NUMELEM = 3;
    // Field TrueAirspeed information
    // Field CalibratedAirspeed information
    // Field AngleOfAttack information
    // Field AngleOfSlip information

  
    // Constants
    static const unsigned int NUMBYTES = sizeof(DataFieldsGroundTruth);

    // Functions
    GroundTruth(UAVObjManager* manager);
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
	
    static GroundTruth* GetInstance(UAVObjectManager* objMngr, unsigned int instID = 0);

    Q_INVOKABLE float getAccelerationXYZ(unsigned int index) const;
    Q_INVOKABLE float getPositionNED(unsigned int index) const;
    Q_INVOKABLE float getVelocityNED(unsigned int index) const;
    Q_INVOKABLE float getRPY(unsigned int index) const;
    Q_INVOKABLE float getAngularRates(unsigned int index) const;
    Q_INVOKABLE float getTrueAirspeed() const;
    Q_INVOKABLE float getCalibratedAirspeed() const;
    Q_INVOKABLE float getAngleOfAttack() const;
    Q_INVOKABLE float getAngleOfSlip() const;


public slots:
    void setAccelerationXYZ(unsigned int index, float value);
    void setPositionNED(unsigned int index, float value);
    void setVelocityNED(unsigned int index, float value);
    void setRPY(unsigned int index, float value);
    void setAngularRates(unsigned int index, float value);
    void setTrueAirspeed(float value);
    void setCalibratedAirspeed(float value);
    void setAngleOfAttack(float value);
    void setAngleOfSlip(float value);


signals:
    void AccelerationXYZChanged(unsigned int index, float value);
    void PositionNEDChanged(unsigned int index, float value);
    void VelocityNEDChanged(unsigned int index, float value);
    void RPYChanged(unsigned int index, float value);
    void AngularRatesChanged(unsigned int index, float value);
    void TrueAirspeedChanged(float value);
    void CalibratedAirspeedChanged(float value);
    void AngleOfAttackChanged(float value);
    void AngleOfSlipChanged(float value);


private slots:
    void emitNotifications();
	
private:
    DataFields data;

    void setDefaultFieldValues();*/

};

#endif // GROUNDTRUTH_H
