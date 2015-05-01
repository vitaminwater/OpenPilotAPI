/**
 ******************************************************************************
 *
 * @file       homelocation.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: homelocation.xml. 
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
#ifndef HOMELOCATION_H
#define HOMELOCATION_H

#include <string>
#include <sstream>
#include <iostream>
#include <string.h>

#include "UAVObject.h"

    // Data Fields
typedef struct {
        int Latitude;
        int Longitude;
        float Altitude;
        float Be[3];
        float g_e;
        unsigned char Set;

} __attribute__((packed)) DataFieldsHomeLocation;

class HomeLocation: public UAVObject
{

public:
	int instance;
	DataFieldsHomeLocation dataFields;
	static int numInstances;

    // Field information
    // Field Latitude information
    // Field Longitude information
    // Field Altitude information
    // Field Be information
    /* Number of elements for field Be */
    static const unsigned int BE_NUMELEM = 3;
    // Field g_e information
    // Field Set information
    /* Enumeration options for field Set */
    typedef enum { SET_FALSE=0, SET_TRUE=1 } SetOptions;

  
    // Constants
    static const unsigned int NUMBYTES = sizeof(DataFieldsHomeLocation);

    // Functions
    HomeLocation(UAVObjManager* manager);
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
	
    static HomeLocation* GetInstance(UAVObjectManager* objMngr, unsigned int instID = 0);

    Q_INVOKABLE int getLatitude() const;
    Q_INVOKABLE int getLongitude() const;
    Q_INVOKABLE float getAltitude() const;
    Q_INVOKABLE float getBe(unsigned int index) const;
    Q_INVOKABLE float getg_e() const;
    Q_INVOKABLE unsigned char getSet() const;


public slots:
    void setLatitude(int value);
    void setLongitude(int value);
    void setAltitude(float value);
    void setBe(unsigned int index, float value);
    void setg_e(float value);
    void setSet(unsigned char value);


signals:
    void LatitudeChanged(int value);
    void LongitudeChanged(int value);
    void AltitudeChanged(float value);
    void BeChanged(unsigned int index, float value);
    void g_eChanged(float value);
    void SetChanged(unsigned char value);


private slots:
    void emitNotifications();
	
private:
    DataFields data;

    void setDefaultFieldValues();*/

};

#endif // HOMELOCATION_H
