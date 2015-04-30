/**
 ******************************************************************************
 *
 * @file       magstate.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: magstate.xml. 
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
#ifndef MAGSTATE_H
#define MAGSTATE_H

#include <string>
#include <sstream>
#include <iostream>
#include <string.h>

#include "UAVObject.h"

    // Data Fields
typedef struct {
        float x;
        float y;
        float z;
        unsigned char Source;

} __attribute__((packed)) DataFieldsMagState;

class MagState: public UAVObject
{

public:
	int instance;
	DataFieldsMagState dataFields;
	static int numInstances;

    // Field information
    // Field x information
    // Field y information
    // Field z information
    // Field Source information
    /* Enumeration options for field Source */
    typedef enum { SOURCE_INVALID=0, SOURCE_ONBOARD=1, SOURCE_AUX=2 } SourceOptions;

  
    // Constants
    static const unsigned int NUMBYTES = sizeof(DataFieldsMagState);

    // Functions
    MagState(UAVObjManager* manager);
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
	
    static MagState* GetInstance(UAVObjectManager* objMngr, unsigned int instID = 0);

    Q_INVOKABLE float getx() const;
    Q_INVOKABLE float gety() const;
    Q_INVOKABLE float getz() const;
    Q_INVOKABLE unsigned char getSource() const;


public slots:
    void setx(float value);
    void sety(float value);
    void setz(float value);
    void setSource(unsigned char value);


signals:
    void xChanged(float value);
    void yChanged(float value);
    void zChanged(float value);
    void SourceChanged(unsigned char value);


private slots:
    void emitNotifications();
	
private:
    DataFields data;

    void setDefaultFieldValues();*/

};

#endif // MAGSTATE_H
