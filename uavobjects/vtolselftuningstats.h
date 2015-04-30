/**
 ******************************************************************************
 *
 * @file       vtolselftuningstats.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: vtolselftuningstats.xml. 
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
#ifndef VTOLSELFTUNINGSTATS_H
#define VTOLSELFTUNINGSTATS_H

#include <string>
#include <sstream>
#include <iostream>
#include <string.h>

#include "UAVObject.h"

    // Data Fields
typedef struct {
        float NeutralThrustOffset;
        float NeutralThrustCorrection;
        float NeutralThrustAccumulator;
        float NeutralThrustRange;

} __attribute__((packed)) DataFieldsVtolSelfTuningStats;

class VtolSelfTuningStats: public UAVObject
{

public:
	int instance;
	DataFieldsVtolSelfTuningStats dataFields;
	static int numInstances;

    // Field information
    // Field NeutralThrustOffset information
    // Field NeutralThrustCorrection information
    // Field NeutralThrustAccumulator information
    // Field NeutralThrustRange information

  
    // Constants
    static const unsigned int NUMBYTES = sizeof(DataFieldsVtolSelfTuningStats);

    // Functions
    VtolSelfTuningStats(UAVObjManager* manager);
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
	
    static VtolSelfTuningStats* GetInstance(UAVObjectManager* objMngr, unsigned int instID = 0);

    Q_INVOKABLE float getNeutralThrustOffset() const;
    Q_INVOKABLE float getNeutralThrustCorrection() const;
    Q_INVOKABLE float getNeutralThrustAccumulator() const;
    Q_INVOKABLE float getNeutralThrustRange() const;


public slots:
    void setNeutralThrustOffset(float value);
    void setNeutralThrustCorrection(float value);
    void setNeutralThrustAccumulator(float value);
    void setNeutralThrustRange(float value);


signals:
    void NeutralThrustOffsetChanged(float value);
    void NeutralThrustCorrectionChanged(float value);
    void NeutralThrustAccumulatorChanged(float value);
    void NeutralThrustRangeChanged(float value);


private slots:
    void emitNotifications();
	
private:
    DataFields data;

    void setDefaultFieldValues();*/

};

#endif // VTOLSELFTUNINGSTATS_H
