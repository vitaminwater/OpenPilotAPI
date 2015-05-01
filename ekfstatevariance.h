/**
 ******************************************************************************
 *
 * @file       ekfstatevariance.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: ekfstatevariance.xml. 
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
#ifndef EKFSTATEVARIANCE_H
#define EKFSTATEVARIANCE_H

#include <string>
#include <sstream>
#include <iostream>
#include <string.h>

#include "UAVObject.h"

    // Data Fields
typedef struct {
        float P[13];

} __attribute__((packed)) DataFieldsEKFStateVariance;

class EKFStateVariance: public UAVObject
{

public:
	int instance;
	DataFieldsEKFStateVariance dataFields;
	static int numInstances;

    // Field information
    // Field P information
    /* Array element names for field P */
    typedef enum { P_POSITIONNORTH=0, P_POSITIONEAST=1, P_POSITIONDOWN=2, P_VELOCITYNORTH=3, P_VELOCITYEAST=4, P_VELOCITYDOWN=5, P_ATTITUDEQ1=6, P_ATTITUDEQ2=7, P_ATTITUDEQ3=8, P_ATTITUDEQ4=9, P_GYRODRIFTX=10, P_GYRODRIFTY=11, P_GYRODRIFTZ=12 } PElem;
    /* Number of elements for field P */
    static const unsigned int P_NUMELEM = 13;

  
    // Constants
    static const unsigned int NUMBYTES = sizeof(DataFieldsEKFStateVariance);

    // Functions
    EKFStateVariance(UAVObjManager* manager);
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
	
    static EKFStateVariance* GetInstance(UAVObjectManager* objMngr, unsigned int instID = 0);

    Q_INVOKABLE float getP(unsigned int index) const;


public slots:
    void setP(unsigned int index, float value);


signals:
    void PChanged(unsigned int index, float value);


private slots:
    void emitNotifications();
	
private:
    DataFields data;

    void setDefaultFieldValues();*/

};

#endif // EKFSTATEVARIANCE_H
