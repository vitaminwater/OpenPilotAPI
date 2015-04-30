/**
 ******************************************************************************
 *
 * @file       pathstatus.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: pathstatus.xml. 
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
#ifndef PATHSTATUS_H
#define PATHSTATUS_H

#include <string>
#include <sstream>
#include <iostream>
#include <string.h>

#include "UAVObject.h"

    // Data Fields
typedef struct {
        float fractional_progress;
        float error;
        float path_direction_north;
        float path_direction_east;
        float path_direction_down;
        float correction_direction_north;
        float correction_direction_east;
        float correction_direction_down;
        float path_time;
        short int UID;
        unsigned char Status;

} __attribute__((packed)) DataFieldsPathStatus;

class PathStatus: public UAVObject
{

public:
	int instance;
	DataFieldsPathStatus dataFields;
	static int numInstances;

    // Field information
    // Field fractional_progress information
    // Field error information
    // Field path_direction_north information
    // Field path_direction_east information
    // Field path_direction_down information
    // Field correction_direction_north information
    // Field correction_direction_east information
    // Field correction_direction_down information
    // Field path_time information
    // Field UID information
    // Field Status information
    /* Enumeration options for field Status */
    typedef enum { STATUS_INPROGRESS=0, STATUS_COMPLETED=1, STATUS_WARNING=2, STATUS_CRITICAL=3 } StatusOptions;

  
    // Constants
    static const unsigned int NUMBYTES = sizeof(DataFieldsPathStatus);

    // Functions
    PathStatus(UAVObjManager* manager);
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
	
    static PathStatus* GetInstance(UAVObjectManager* objMngr, unsigned int instID = 0);

    Q_INVOKABLE float getfractional_progress() const;
    Q_INVOKABLE float geterror() const;
    Q_INVOKABLE float getpath_direction_north() const;
    Q_INVOKABLE float getpath_direction_east() const;
    Q_INVOKABLE float getpath_direction_down() const;
    Q_INVOKABLE float getcorrection_direction_north() const;
    Q_INVOKABLE float getcorrection_direction_east() const;
    Q_INVOKABLE float getcorrection_direction_down() const;
    Q_INVOKABLE float getpath_time() const;
    Q_INVOKABLE short int getUID() const;
    Q_INVOKABLE unsigned char getStatus() const;


public slots:
    void setfractional_progress(float value);
    void seterror(float value);
    void setpath_direction_north(float value);
    void setpath_direction_east(float value);
    void setpath_direction_down(float value);
    void setcorrection_direction_north(float value);
    void setcorrection_direction_east(float value);
    void setcorrection_direction_down(float value);
    void setpath_time(float value);
    void setUID(short int value);
    void setStatus(unsigned char value);


signals:
    void fractional_progressChanged(float value);
    void errorChanged(float value);
    void path_direction_northChanged(float value);
    void path_direction_eastChanged(float value);
    void path_direction_downChanged(float value);
    void correction_direction_northChanged(float value);
    void correction_direction_eastChanged(float value);
    void correction_direction_downChanged(float value);
    void path_timeChanged(float value);
    void UIDChanged(short int value);
    void StatusChanged(unsigned char value);


private slots:
    void emitNotifications();
	
private:
    DataFields data;

    void setDefaultFieldValues();*/

};

#endif // PATHSTATUS_H
