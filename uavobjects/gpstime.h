/**
 ******************************************************************************
 *
 * @file       gpstime.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: gpstime.xml. 
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
#ifndef GPSTIME_H
#define GPSTIME_H

#include <string>
#include <sstream>
#include <iostream>
#include <string.h>

#include "UAVObject.h"

    // Data Fields
typedef struct {
        short int Year;
        char Month;
        char Day;
        char Hour;
        char Minute;
        char Second;

} __attribute__((packed)) DataFieldsGPSTime;

class GPSTime: public UAVObject
{

public:
	int instance;
	DataFieldsGPSTime dataFields;
	static int numInstances;

    // Field information
    // Field Year information
    // Field Month information
    // Field Day information
    // Field Hour information
    // Field Minute information
    // Field Second information

  
    // Constants
    static const unsigned int NUMBYTES = sizeof(DataFieldsGPSTime);

    // Functions
    GPSTime(UAVObjManager* manager);
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
	
    static GPSTime* GetInstance(UAVObjectManager* objMngr, unsigned int instID = 0);

    Q_INVOKABLE short int getYear() const;
    Q_INVOKABLE char getMonth() const;
    Q_INVOKABLE char getDay() const;
    Q_INVOKABLE char getHour() const;
    Q_INVOKABLE char getMinute() const;
    Q_INVOKABLE char getSecond() const;


public slots:
    void setYear(short int value);
    void setMonth(char value);
    void setDay(char value);
    void setHour(char value);
    void setMinute(char value);
    void setSecond(char value);


signals:
    void YearChanged(short int value);
    void MonthChanged(char value);
    void DayChanged(char value);
    void HourChanged(char value);
    void MinuteChanged(char value);
    void SecondChanged(char value);


private slots:
    void emitNotifications();
	
private:
    DataFields data;

    void setDefaultFieldValues();*/

};

#endif // GPSTIME_H
