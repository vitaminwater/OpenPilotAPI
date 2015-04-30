/**
 ******************************************************************************
 *
 * @file       altitudefiltersettings.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: altitudefiltersettings.xml. 
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
#ifndef ALTITUDEFILTERSETTINGS_H
#define ALTITUDEFILTERSETTINGS_H

#include <string>
#include <sstream>
#include <iostream>
#include <string.h>

#include "UAVObject.h"

    // Data Fields
typedef struct {
        float AccelLowPassKp;
        float AccelDriftKi;
        float InitializationAccelDriftKi;
        float BaroKp;

} __attribute__((packed)) DataFieldsAltitudeFilterSettings;

class AltitudeFilterSettings: public UAVObject
{

public:
	int instance;
	DataFieldsAltitudeFilterSettings dataFields;
	static int numInstances;

    // Field information
    // Field AccelLowPassKp information
    // Field AccelDriftKi information
    // Field InitializationAccelDriftKi information
    // Field BaroKp information

  
    // Constants
    static const unsigned int NUMBYTES = sizeof(DataFieldsAltitudeFilterSettings);

    // Functions
    AltitudeFilterSettings(UAVObjManager* manager);
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
	
    static AltitudeFilterSettings* GetInstance(UAVObjectManager* objMngr, unsigned int instID = 0);

    Q_INVOKABLE float getAccelLowPassKp() const;
    Q_INVOKABLE float getAccelDriftKi() const;
    Q_INVOKABLE float getInitializationAccelDriftKi() const;
    Q_INVOKABLE float getBaroKp() const;


public slots:
    void setAccelLowPassKp(float value);
    void setAccelDriftKi(float value);
    void setInitializationAccelDriftKi(float value);
    void setBaroKp(float value);


signals:
    void AccelLowPassKpChanged(float value);
    void AccelDriftKiChanged(float value);
    void InitializationAccelDriftKiChanged(float value);
    void BaroKpChanged(float value);


private slots:
    void emitNotifications();
	
private:
    DataFields data;

    void setDefaultFieldValues();*/

};

#endif // ALTITUDEFILTERSETTINGS_H
