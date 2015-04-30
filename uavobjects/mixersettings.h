/**
 ******************************************************************************
 *
 * @file       mixersettings.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: mixersettings.xml. 
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
#ifndef MIXERSETTINGS_H
#define MIXERSETTINGS_H

#include <string>
#include <sstream>
#include <iostream>
#include <string.h>

#include "UAVObject.h"

    // Data Fields
typedef struct {
        float MaxAccel;
        float FeedForward;
        float AccelTime;
        float DecelTime;
        float ThrottleCurve1[5];
        float ThrottleCurve2[5];
        char MixerValueRoll;
        char MixerValuePitch;
        char MixerValueYaw;
        unsigned char Curve2Source;
        unsigned char Mixer1Type;
        char Mixer1Vector[5];
        unsigned char Mixer2Type;
        char Mixer2Vector[5];
        unsigned char Mixer3Type;
        char Mixer3Vector[5];
        unsigned char Mixer4Type;
        char Mixer4Vector[5];
        unsigned char Mixer5Type;
        char Mixer5Vector[5];
        unsigned char Mixer6Type;
        char Mixer6Vector[5];
        unsigned char Mixer7Type;
        char Mixer7Vector[5];
        unsigned char Mixer8Type;
        char Mixer8Vector[5];
        unsigned char Mixer9Type;
        char Mixer9Vector[5];
        unsigned char Mixer10Type;
        char Mixer10Vector[5];
        unsigned char Mixer11Type;
        char Mixer11Vector[5];
        unsigned char Mixer12Type;
        char Mixer12Vector[5];

} __attribute__((packed)) DataFieldsMixerSettings;

class MixerSettings: public UAVObject
{

public:
	int instance;
	DataFieldsMixerSettings dataFields;
	static int numInstances;

    // Field information
    // Field MaxAccel information
    // Field FeedForward information
    // Field AccelTime information
    // Field DecelTime information
    // Field ThrottleCurve1 information
    /* Array element names for field ThrottleCurve1 */
    typedef enum { THROTTLECURVE1_0=0, THROTTLECURVE1_25=1, THROTTLECURVE1_50=2, THROTTLECURVE1_75=3, THROTTLECURVE1_100=4 } ThrottleCurve1Elem;
    /* Number of elements for field ThrottleCurve1 */
    static const unsigned int THROTTLECURVE1_NUMELEM = 5;
    // Field ThrottleCurve2 information
    /* Array element names for field ThrottleCurve2 */
    typedef enum { THROTTLECURVE2_0=0, THROTTLECURVE2_25=1, THROTTLECURVE2_50=2, THROTTLECURVE2_75=3, THROTTLECURVE2_100=4 } ThrottleCurve2Elem;
    /* Number of elements for field ThrottleCurve2 */
    static const unsigned int THROTTLECURVE2_NUMELEM = 5;
    // Field MixerValueRoll information
    // Field MixerValuePitch information
    // Field MixerValueYaw information
    // Field Curve2Source information
    /* Enumeration options for field Curve2Source */
    typedef enum { CURVE2SOURCE_THROTTLE=0, CURVE2SOURCE_ROLL=1, CURVE2SOURCE_PITCH=2, CURVE2SOURCE_YAW=3, CURVE2SOURCE_COLLECTIVE=4, CURVE2SOURCE_ACCESSORY0=5, CURVE2SOURCE_ACCESSORY1=6, CURVE2SOURCE_ACCESSORY2=7, CURVE2SOURCE_ACCESSORY3=8, CURVE2SOURCE_ACCESSORY4=9, CURVE2SOURCE_ACCESSORY5=10 } Curve2SourceOptions;
    // Field Mixer1Type information
    /* Enumeration options for field Mixer1Type */
    typedef enum { MIXER1TYPE_DISABLED=0, MIXER1TYPE_MOTOR=1, MIXER1TYPE_REVERSABLEMOTOR=2, MIXER1TYPE_SERVO=3, MIXER1TYPE_CAMERAROLLORSERVO1=4, MIXER1TYPE_CAMERAPITCHORSERVO2=5, MIXER1TYPE_CAMERAYAW=6, MIXER1TYPE_ACCESSORY0=7, MIXER1TYPE_ACCESSORY1=8, MIXER1TYPE_ACCESSORY2=9, MIXER1TYPE_ACCESSORY3=10, MIXER1TYPE_ACCESSORY4=11, MIXER1TYPE_ACCESSORY5=12 } Mixer1TypeOptions;
    // Field Mixer1Vector information
    /* Array element names for field Mixer1Vector */
    typedef enum { MIXER1VECTOR_THROTTLECURVE1=0, MIXER1VECTOR_THROTTLECURVE2=1, MIXER1VECTOR_ROLL=2, MIXER1VECTOR_PITCH=3, MIXER1VECTOR_YAW=4 } Mixer1VectorElem;
    /* Number of elements for field Mixer1Vector */
    static const unsigned int MIXER1VECTOR_NUMELEM = 5;
    // Field Mixer2Type information
    /* Enumeration options for field Mixer2Type */
    typedef enum { MIXER2TYPE_DISABLED=0, MIXER2TYPE_MOTOR=1, MIXER2TYPE_REVERSABLEMOTOR=2, MIXER2TYPE_SERVO=3, MIXER2TYPE_CAMERAROLLORSERVO1=4, MIXER2TYPE_CAMERAPITCHORSERVO2=5, MIXER2TYPE_CAMERAYAW=6, MIXER2TYPE_ACCESSORY0=7, MIXER2TYPE_ACCESSORY1=8, MIXER2TYPE_ACCESSORY2=9, MIXER2TYPE_ACCESSORY3=10, MIXER2TYPE_ACCESSORY4=11, MIXER2TYPE_ACCESSORY5=12 } Mixer2TypeOptions;
    // Field Mixer2Vector information
    /* Array element names for field Mixer2Vector */
    typedef enum { MIXER2VECTOR_THROTTLECURVE1=0, MIXER2VECTOR_THROTTLECURVE2=1, MIXER2VECTOR_ROLL=2, MIXER2VECTOR_PITCH=3, MIXER2VECTOR_YAW=4 } Mixer2VectorElem;
    /* Number of elements for field Mixer2Vector */
    static const unsigned int MIXER2VECTOR_NUMELEM = 5;
    // Field Mixer3Type information
    /* Enumeration options for field Mixer3Type */
    typedef enum { MIXER3TYPE_DISABLED=0, MIXER3TYPE_MOTOR=1, MIXER3TYPE_REVERSABLEMOTOR=2, MIXER3TYPE_SERVO=3, MIXER3TYPE_CAMERAROLLORSERVO1=4, MIXER3TYPE_CAMERAPITCHORSERVO2=5, MIXER3TYPE_CAMERAYAW=6, MIXER3TYPE_ACCESSORY0=7, MIXER3TYPE_ACCESSORY1=8, MIXER3TYPE_ACCESSORY2=9, MIXER3TYPE_ACCESSORY3=10, MIXER3TYPE_ACCESSORY4=11, MIXER3TYPE_ACCESSORY5=12 } Mixer3TypeOptions;
    // Field Mixer3Vector information
    /* Array element names for field Mixer3Vector */
    typedef enum { MIXER3VECTOR_THROTTLECURVE1=0, MIXER3VECTOR_THROTTLECURVE2=1, MIXER3VECTOR_ROLL=2, MIXER3VECTOR_PITCH=3, MIXER3VECTOR_YAW=4 } Mixer3VectorElem;
    /* Number of elements for field Mixer3Vector */
    static const unsigned int MIXER3VECTOR_NUMELEM = 5;
    // Field Mixer4Type information
    /* Enumeration options for field Mixer4Type */
    typedef enum { MIXER4TYPE_DISABLED=0, MIXER4TYPE_MOTOR=1, MIXER4TYPE_REVERSABLEMOTOR=2, MIXER4TYPE_SERVO=3, MIXER4TYPE_CAMERAROLLORSERVO1=4, MIXER4TYPE_CAMERAPITCHORSERVO2=5, MIXER4TYPE_CAMERAYAW=6, MIXER4TYPE_ACCESSORY0=7, MIXER4TYPE_ACCESSORY1=8, MIXER4TYPE_ACCESSORY2=9, MIXER4TYPE_ACCESSORY3=10, MIXER4TYPE_ACCESSORY4=11, MIXER4TYPE_ACCESSORY5=12 } Mixer4TypeOptions;
    // Field Mixer4Vector information
    /* Array element names for field Mixer4Vector */
    typedef enum { MIXER4VECTOR_THROTTLECURVE1=0, MIXER4VECTOR_THROTTLECURVE2=1, MIXER4VECTOR_ROLL=2, MIXER4VECTOR_PITCH=3, MIXER4VECTOR_YAW=4 } Mixer4VectorElem;
    /* Number of elements for field Mixer4Vector */
    static const unsigned int MIXER4VECTOR_NUMELEM = 5;
    // Field Mixer5Type information
    /* Enumeration options for field Mixer5Type */
    typedef enum { MIXER5TYPE_DISABLED=0, MIXER5TYPE_MOTOR=1, MIXER5TYPE_REVERSABLEMOTOR=2, MIXER5TYPE_SERVO=3, MIXER5TYPE_CAMERAROLLORSERVO1=4, MIXER5TYPE_CAMERAPITCHORSERVO2=5, MIXER5TYPE_CAMERAYAW=6, MIXER5TYPE_ACCESSORY0=7, MIXER5TYPE_ACCESSORY1=8, MIXER5TYPE_ACCESSORY2=9, MIXER5TYPE_ACCESSORY3=10, MIXER5TYPE_ACCESSORY4=11, MIXER5TYPE_ACCESSORY5=12 } Mixer5TypeOptions;
    // Field Mixer5Vector information
    /* Array element names for field Mixer5Vector */
    typedef enum { MIXER5VECTOR_THROTTLECURVE1=0, MIXER5VECTOR_THROTTLECURVE2=1, MIXER5VECTOR_ROLL=2, MIXER5VECTOR_PITCH=3, MIXER5VECTOR_YAW=4 } Mixer5VectorElem;
    /* Number of elements for field Mixer5Vector */
    static const unsigned int MIXER5VECTOR_NUMELEM = 5;
    // Field Mixer6Type information
    /* Enumeration options for field Mixer6Type */
    typedef enum { MIXER6TYPE_DISABLED=0, MIXER6TYPE_MOTOR=1, MIXER6TYPE_REVERSABLEMOTOR=2, MIXER6TYPE_SERVO=3, MIXER6TYPE_CAMERAROLLORSERVO1=4, MIXER6TYPE_CAMERAPITCHORSERVO2=5, MIXER6TYPE_CAMERAYAW=6, MIXER6TYPE_ACCESSORY0=7, MIXER6TYPE_ACCESSORY1=8, MIXER6TYPE_ACCESSORY2=9, MIXER6TYPE_ACCESSORY3=10, MIXER6TYPE_ACCESSORY4=11, MIXER6TYPE_ACCESSORY5=12 } Mixer6TypeOptions;
    // Field Mixer6Vector information
    /* Array element names for field Mixer6Vector */
    typedef enum { MIXER6VECTOR_THROTTLECURVE1=0, MIXER6VECTOR_THROTTLECURVE2=1, MIXER6VECTOR_ROLL=2, MIXER6VECTOR_PITCH=3, MIXER6VECTOR_YAW=4 } Mixer6VectorElem;
    /* Number of elements for field Mixer6Vector */
    static const unsigned int MIXER6VECTOR_NUMELEM = 5;
    // Field Mixer7Type information
    /* Enumeration options for field Mixer7Type */
    typedef enum { MIXER7TYPE_DISABLED=0, MIXER7TYPE_MOTOR=1, MIXER7TYPE_REVERSABLEMOTOR=2, MIXER7TYPE_SERVO=3, MIXER7TYPE_CAMERAROLLORSERVO1=4, MIXER7TYPE_CAMERAPITCHORSERVO2=5, MIXER7TYPE_CAMERAYAW=6, MIXER7TYPE_ACCESSORY0=7, MIXER7TYPE_ACCESSORY1=8, MIXER7TYPE_ACCESSORY2=9, MIXER7TYPE_ACCESSORY3=10, MIXER7TYPE_ACCESSORY4=11, MIXER7TYPE_ACCESSORY5=12 } Mixer7TypeOptions;
    // Field Mixer7Vector information
    /* Array element names for field Mixer7Vector */
    typedef enum { MIXER7VECTOR_THROTTLECURVE1=0, MIXER7VECTOR_THROTTLECURVE2=1, MIXER7VECTOR_ROLL=2, MIXER7VECTOR_PITCH=3, MIXER7VECTOR_YAW=4 } Mixer7VectorElem;
    /* Number of elements for field Mixer7Vector */
    static const unsigned int MIXER7VECTOR_NUMELEM = 5;
    // Field Mixer8Type information
    /* Enumeration options for field Mixer8Type */
    typedef enum { MIXER8TYPE_DISABLED=0, MIXER8TYPE_MOTOR=1, MIXER8TYPE_REVERSABLEMOTOR=2, MIXER8TYPE_SERVO=3, MIXER8TYPE_CAMERAROLLORSERVO1=4, MIXER8TYPE_CAMERAPITCHORSERVO2=5, MIXER8TYPE_CAMERAYAW=6, MIXER8TYPE_ACCESSORY0=7, MIXER8TYPE_ACCESSORY1=8, MIXER8TYPE_ACCESSORY2=9, MIXER8TYPE_ACCESSORY3=10, MIXER8TYPE_ACCESSORY4=11, MIXER8TYPE_ACCESSORY5=12 } Mixer8TypeOptions;
    // Field Mixer8Vector information
    /* Array element names for field Mixer8Vector */
    typedef enum { MIXER8VECTOR_THROTTLECURVE1=0, MIXER8VECTOR_THROTTLECURVE2=1, MIXER8VECTOR_ROLL=2, MIXER8VECTOR_PITCH=3, MIXER8VECTOR_YAW=4 } Mixer8VectorElem;
    /* Number of elements for field Mixer8Vector */
    static const unsigned int MIXER8VECTOR_NUMELEM = 5;
    // Field Mixer9Type information
    /* Enumeration options for field Mixer9Type */
    typedef enum { MIXER9TYPE_DISABLED=0, MIXER9TYPE_MOTOR=1, MIXER9TYPE_REVERSABLEMOTOR=2, MIXER9TYPE_SERVO=3, MIXER9TYPE_CAMERAROLLORSERVO1=4, MIXER9TYPE_CAMERAPITCHORSERVO2=5, MIXER9TYPE_CAMERAYAW=6, MIXER9TYPE_ACCESSORY0=7, MIXER9TYPE_ACCESSORY1=8, MIXER9TYPE_ACCESSORY2=9, MIXER9TYPE_ACCESSORY3=10, MIXER9TYPE_ACCESSORY4=11, MIXER9TYPE_ACCESSORY5=12 } Mixer9TypeOptions;
    // Field Mixer9Vector information
    /* Array element names for field Mixer9Vector */
    typedef enum { MIXER9VECTOR_THROTTLECURVE1=0, MIXER9VECTOR_THROTTLECURVE2=1, MIXER9VECTOR_ROLL=2, MIXER9VECTOR_PITCH=3, MIXER9VECTOR_YAW=4 } Mixer9VectorElem;
    /* Number of elements for field Mixer9Vector */
    static const unsigned int MIXER9VECTOR_NUMELEM = 5;
    // Field Mixer10Type information
    /* Enumeration options for field Mixer10Type */
    typedef enum { MIXER10TYPE_DISABLED=0, MIXER10TYPE_MOTOR=1, MIXER10TYPE_REVERSABLEMOTOR=2, MIXER10TYPE_SERVO=3, MIXER10TYPE_CAMERAROLLORSERVO1=4, MIXER10TYPE_CAMERAPITCHORSERVO2=5, MIXER10TYPE_CAMERAYAW=6, MIXER10TYPE_ACCESSORY0=7, MIXER10TYPE_ACCESSORY1=8, MIXER10TYPE_ACCESSORY2=9, MIXER10TYPE_ACCESSORY3=10, MIXER10TYPE_ACCESSORY4=11, MIXER10TYPE_ACCESSORY5=12 } Mixer10TypeOptions;
    // Field Mixer10Vector information
    /* Array element names for field Mixer10Vector */
    typedef enum { MIXER10VECTOR_THROTTLECURVE1=0, MIXER10VECTOR_THROTTLECURVE2=1, MIXER10VECTOR_ROLL=2, MIXER10VECTOR_PITCH=3, MIXER10VECTOR_YAW=4 } Mixer10VectorElem;
    /* Number of elements for field Mixer10Vector */
    static const unsigned int MIXER10VECTOR_NUMELEM = 5;
    // Field Mixer11Type information
    /* Enumeration options for field Mixer11Type */
    typedef enum { MIXER11TYPE_DISABLED=0, MIXER11TYPE_MOTOR=1, MIXER11TYPE_REVERSABLEMOTOR=2, MIXER11TYPE_SERVO=3, MIXER11TYPE_CAMERAROLLORSERVO1=4, MIXER11TYPE_CAMERAPITCHORSERVO2=5, MIXER11TYPE_CAMERAYAW=6, MIXER11TYPE_ACCESSORY0=7, MIXER11TYPE_ACCESSORY1=8, MIXER11TYPE_ACCESSORY2=9, MIXER11TYPE_ACCESSORY3=10, MIXER11TYPE_ACCESSORY4=11, MIXER11TYPE_ACCESSORY5=12 } Mixer11TypeOptions;
    // Field Mixer11Vector information
    /* Array element names for field Mixer11Vector */
    typedef enum { MIXER11VECTOR_THROTTLECURVE1=0, MIXER11VECTOR_THROTTLECURVE2=1, MIXER11VECTOR_ROLL=2, MIXER11VECTOR_PITCH=3, MIXER11VECTOR_YAW=4 } Mixer11VectorElem;
    /* Number of elements for field Mixer11Vector */
    static const unsigned int MIXER11VECTOR_NUMELEM = 5;
    // Field Mixer12Type information
    /* Enumeration options for field Mixer12Type */
    typedef enum { MIXER12TYPE_DISABLED=0, MIXER12TYPE_MOTOR=1, MIXER12TYPE_REVERSABLEMOTOR=2, MIXER12TYPE_SERVO=3, MIXER12TYPE_CAMERAROLLORSERVO1=4, MIXER12TYPE_CAMERAPITCHORSERVO2=5, MIXER12TYPE_CAMERAYAW=6, MIXER12TYPE_ACCESSORY0=7, MIXER12TYPE_ACCESSORY1=8, MIXER12TYPE_ACCESSORY2=9, MIXER12TYPE_ACCESSORY3=10, MIXER12TYPE_ACCESSORY4=11, MIXER12TYPE_ACCESSORY5=12 } Mixer12TypeOptions;
    // Field Mixer12Vector information
    /* Array element names for field Mixer12Vector */
    typedef enum { MIXER12VECTOR_THROTTLECURVE1=0, MIXER12VECTOR_THROTTLECURVE2=1, MIXER12VECTOR_ROLL=2, MIXER12VECTOR_PITCH=3, MIXER12VECTOR_YAW=4 } Mixer12VectorElem;
    /* Number of elements for field Mixer12Vector */
    static const unsigned int MIXER12VECTOR_NUMELEM = 5;

  
    // Constants
    static const unsigned int NUMBYTES = sizeof(DataFieldsMixerSettings);

    // Functions
    MixerSettings(UAVObjManager* manager);
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
	
    static MixerSettings* GetInstance(UAVObjectManager* objMngr, unsigned int instID = 0);

    Q_INVOKABLE float getMaxAccel() const;
    Q_INVOKABLE float getFeedForward() const;
    Q_INVOKABLE float getAccelTime() const;
    Q_INVOKABLE float getDecelTime() const;
    Q_INVOKABLE float getThrottleCurve1(unsigned int index) const;
    Q_INVOKABLE float getThrottleCurve2(unsigned int index) const;
    Q_INVOKABLE char getMixerValueRoll() const;
    Q_INVOKABLE char getMixerValuePitch() const;
    Q_INVOKABLE char getMixerValueYaw() const;
    Q_INVOKABLE unsigned char getCurve2Source() const;
    Q_INVOKABLE unsigned char getMixer1Type() const;
    Q_INVOKABLE char getMixer1Vector(unsigned int index) const;
    Q_INVOKABLE unsigned char getMixer2Type() const;
    Q_INVOKABLE char getMixer2Vector(unsigned int index) const;
    Q_INVOKABLE unsigned char getMixer3Type() const;
    Q_INVOKABLE char getMixer3Vector(unsigned int index) const;
    Q_INVOKABLE unsigned char getMixer4Type() const;
    Q_INVOKABLE char getMixer4Vector(unsigned int index) const;
    Q_INVOKABLE unsigned char getMixer5Type() const;
    Q_INVOKABLE char getMixer5Vector(unsigned int index) const;
    Q_INVOKABLE unsigned char getMixer6Type() const;
    Q_INVOKABLE char getMixer6Vector(unsigned int index) const;
    Q_INVOKABLE unsigned char getMixer7Type() const;
    Q_INVOKABLE char getMixer7Vector(unsigned int index) const;
    Q_INVOKABLE unsigned char getMixer8Type() const;
    Q_INVOKABLE char getMixer8Vector(unsigned int index) const;
    Q_INVOKABLE unsigned char getMixer9Type() const;
    Q_INVOKABLE char getMixer9Vector(unsigned int index) const;
    Q_INVOKABLE unsigned char getMixer10Type() const;
    Q_INVOKABLE char getMixer10Vector(unsigned int index) const;
    Q_INVOKABLE unsigned char getMixer11Type() const;
    Q_INVOKABLE char getMixer11Vector(unsigned int index) const;
    Q_INVOKABLE unsigned char getMixer12Type() const;
    Q_INVOKABLE char getMixer12Vector(unsigned int index) const;


public slots:
    void setMaxAccel(float value);
    void setFeedForward(float value);
    void setAccelTime(float value);
    void setDecelTime(float value);
    void setThrottleCurve1(unsigned int index, float value);
    void setThrottleCurve2(unsigned int index, float value);
    void setMixerValueRoll(char value);
    void setMixerValuePitch(char value);
    void setMixerValueYaw(char value);
    void setCurve2Source(unsigned char value);
    void setMixer1Type(unsigned char value);
    void setMixer1Vector(unsigned int index, char value);
    void setMixer2Type(unsigned char value);
    void setMixer2Vector(unsigned int index, char value);
    void setMixer3Type(unsigned char value);
    void setMixer3Vector(unsigned int index, char value);
    void setMixer4Type(unsigned char value);
    void setMixer4Vector(unsigned int index, char value);
    void setMixer5Type(unsigned char value);
    void setMixer5Vector(unsigned int index, char value);
    void setMixer6Type(unsigned char value);
    void setMixer6Vector(unsigned int index, char value);
    void setMixer7Type(unsigned char value);
    void setMixer7Vector(unsigned int index, char value);
    void setMixer8Type(unsigned char value);
    void setMixer8Vector(unsigned int index, char value);
    void setMixer9Type(unsigned char value);
    void setMixer9Vector(unsigned int index, char value);
    void setMixer10Type(unsigned char value);
    void setMixer10Vector(unsigned int index, char value);
    void setMixer11Type(unsigned char value);
    void setMixer11Vector(unsigned int index, char value);
    void setMixer12Type(unsigned char value);
    void setMixer12Vector(unsigned int index, char value);


signals:
    void MaxAccelChanged(float value);
    void FeedForwardChanged(float value);
    void AccelTimeChanged(float value);
    void DecelTimeChanged(float value);
    void ThrottleCurve1Changed(unsigned int index, float value);
    void ThrottleCurve2Changed(unsigned int index, float value);
    void MixerValueRollChanged(char value);
    void MixerValuePitchChanged(char value);
    void MixerValueYawChanged(char value);
    void Curve2SourceChanged(unsigned char value);
    void Mixer1TypeChanged(unsigned char value);
    void Mixer1VectorChanged(unsigned int index, char value);
    void Mixer2TypeChanged(unsigned char value);
    void Mixer2VectorChanged(unsigned int index, char value);
    void Mixer3TypeChanged(unsigned char value);
    void Mixer3VectorChanged(unsigned int index, char value);
    void Mixer4TypeChanged(unsigned char value);
    void Mixer4VectorChanged(unsigned int index, char value);
    void Mixer5TypeChanged(unsigned char value);
    void Mixer5VectorChanged(unsigned int index, char value);
    void Mixer6TypeChanged(unsigned char value);
    void Mixer6VectorChanged(unsigned int index, char value);
    void Mixer7TypeChanged(unsigned char value);
    void Mixer7VectorChanged(unsigned int index, char value);
    void Mixer8TypeChanged(unsigned char value);
    void Mixer8VectorChanged(unsigned int index, char value);
    void Mixer9TypeChanged(unsigned char value);
    void Mixer9VectorChanged(unsigned int index, char value);
    void Mixer10TypeChanged(unsigned char value);
    void Mixer10VectorChanged(unsigned int index, char value);
    void Mixer11TypeChanged(unsigned char value);
    void Mixer11VectorChanged(unsigned int index, char value);
    void Mixer12TypeChanged(unsigned char value);
    void Mixer12VectorChanged(unsigned int index, char value);


private slots:
    void emitNotifications();
	
private:
    DataFields data;

    void setDefaultFieldValues();*/

};

#endif // MIXERSETTINGS_H
