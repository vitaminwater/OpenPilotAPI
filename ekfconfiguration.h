/**
 ******************************************************************************
 *
 * @file       ekfconfiguration.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: ekfconfiguration.xml. 
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
#ifndef EKFCONFIGURATION_H
#define EKFCONFIGURATION_H

#include <string>
#include <sstream>
#include <iostream>
#include <string.h>

#include "UAVObject.h"

    // Data Fields
typedef struct {
        float P[13];
        float Q[9];
        float R[10];
        float FakeR[3];

} __attribute__((packed)) DataFieldsEKFConfiguration;

class EKFConfiguration: public UAVObject
{

public:
	int instance;
	DataFieldsEKFConfiguration dataFields;
	static int numInstances;

    // Field information
    // Field P information
    /* Array element names for field P */
    typedef enum { P_POSITIONNORTH=0, P_POSITIONEAST=1, P_POSITIONDOWN=2, P_VELOCITYNORTH=3, P_VELOCITYEAST=4, P_VELOCITYDOWN=5, P_ATTITUDEQ1=6, P_ATTITUDEQ2=7, P_ATTITUDEQ3=8, P_ATTITUDEQ4=9, P_GYRODRIFTX=10, P_GYRODRIFTY=11, P_GYRODRIFTZ=12 } PElem;
    /* Number of elements for field P */
    static const unsigned int P_NUMELEM = 13;
    // Field Q information
    /* Array element names for field Q */
    typedef enum { Q_GYROX=0, Q_GYROY=1, Q_GYROZ=2, Q_ACCELX=3, Q_ACCELY=4, Q_ACCELZ=5, Q_GYRODRIFTX=6, Q_GYRODRIFTY=7, Q_GYRODRIFTZ=8 } QElem;
    /* Number of elements for field Q */
    static const unsigned int Q_NUMELEM = 9;
    // Field R information
    /* Array element names for field R */
    typedef enum { R_GPSPOSNORTH=0, R_GPSPOSEAST=1, R_GPSPOSDOWN=2, R_GPSVELNORTH=3, R_GPSVELEAST=4, R_GPSVELDOWN=5, R_MAGX=6, R_MAGY=7, R_MAGZ=8, R_BAROZ=9 } RElem;
    /* Number of elements for field R */
    static const unsigned int R_NUMELEM = 10;
    // Field FakeR information
    /* Array element names for field FakeR */
    typedef enum { FAKER_FAKEGPSPOSINDOOR=0, FAKER_FAKEGPSVELINDOOR=1, FAKER_FAKEGPSVELAIRSPEED=2 } FakeRElem;
    /* Number of elements for field FakeR */
    static const unsigned int FAKER_NUMELEM = 3;

  
    // Constants
    static const unsigned int NUMBYTES = sizeof(DataFieldsEKFConfiguration);

    // Functions
    EKFConfiguration(UAVObjManager* manager);
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
	
    static EKFConfiguration* GetInstance(UAVObjectManager* objMngr, unsigned int instID = 0);

    Q_INVOKABLE float getP(unsigned int index) const;
    Q_INVOKABLE float getQ(unsigned int index) const;
    Q_INVOKABLE float getR(unsigned int index) const;
    Q_INVOKABLE float getFakeR(unsigned int index) const;


public slots:
    void setP(unsigned int index, float value);
    void setQ(unsigned int index, float value);
    void setR(unsigned int index, float value);
    void setFakeR(unsigned int index, float value);


signals:
    void PChanged(unsigned int index, float value);
    void QChanged(unsigned int index, float value);
    void RChanged(unsigned int index, float value);
    void FakeRChanged(unsigned int index, float value);


private slots:
    void emitNotifications();
	
private:
    DataFields data;

    void setDefaultFieldValues();*/

};

#endif // EKFCONFIGURATION_H
