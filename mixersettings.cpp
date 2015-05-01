/**
 ******************************************************************************
 *
 * @file       mixersettings.cpp
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

#include "mixersettings.h"

int MixerSettings::numInstances = 0;

/**
 * Constructor
 */
MixerSettings::MixerSettings(UAVObjManager* manager): UAVObject(manager, 0x7BF2CFA8, "MixerSettings", "Settings for the @ref ActuatorModule that controls the channel assignments for the mixer based on AircraftType", "Control", 1, 1, ACCESS_READWRITE, ACCESS_READWRITE, 1, 1, UPDATEMODE_ONCHANGE, UPDATEMODE_ONCHANGE, 0, 0, 0)
{

}

int MixerSettings::UAVObjSetDataField(const char *dataIn, const std::string fieldID){
	if(fieldID == "MaxAccel") {
		memset( &(dataFields.MaxAccel), 0, sizeof(dataFields.MaxAccel));
		memcpy( &(dataFields.MaxAccel), dataIn, sizeof(dataFields.MaxAccel));
	} else if(fieldID == "FeedForward") {
		memset( &(dataFields.FeedForward), 0, sizeof(dataFields.FeedForward));
		memcpy( &(dataFields.FeedForward), dataIn, sizeof(dataFields.FeedForward));
	} else if(fieldID == "AccelTime") {
		memset( &(dataFields.AccelTime), 0, sizeof(dataFields.AccelTime));
		memcpy( &(dataFields.AccelTime), dataIn, sizeof(dataFields.AccelTime));
	} else if(fieldID == "DecelTime") {
		memset( &(dataFields.DecelTime), 0, sizeof(dataFields.DecelTime));
		memcpy( &(dataFields.DecelTime), dataIn, sizeof(dataFields.DecelTime));
	} else if(fieldID == "ThrottleCurve1") {
		memset( &(dataFields.ThrottleCurve1), 0, sizeof(dataFields.ThrottleCurve1));
		memcpy( &(dataFields.ThrottleCurve1), dataIn, sizeof(dataFields.ThrottleCurve1));
	} else if(fieldID == "ThrottleCurve2") {
		memset( &(dataFields.ThrottleCurve2), 0, sizeof(dataFields.ThrottleCurve2));
		memcpy( &(dataFields.ThrottleCurve2), dataIn, sizeof(dataFields.ThrottleCurve2));
	} else if(fieldID == "MixerValueRoll") {
		memset( &(dataFields.MixerValueRoll), 0, sizeof(dataFields.MixerValueRoll));
		memcpy( &(dataFields.MixerValueRoll), dataIn, sizeof(dataFields.MixerValueRoll));
	} else if(fieldID == "MixerValuePitch") {
		memset( &(dataFields.MixerValuePitch), 0, sizeof(dataFields.MixerValuePitch));
		memcpy( &(dataFields.MixerValuePitch), dataIn, sizeof(dataFields.MixerValuePitch));
	} else if(fieldID == "MixerValueYaw") {
		memset( &(dataFields.MixerValueYaw), 0, sizeof(dataFields.MixerValueYaw));
		memcpy( &(dataFields.MixerValueYaw), dataIn, sizeof(dataFields.MixerValueYaw));
	} else if(fieldID == "Curve2Source") {
		memset( &(dataFields.Curve2Source), 0, sizeof(dataFields.Curve2Source));
		memcpy( &(dataFields.Curve2Source), dataIn, sizeof(dataFields.Curve2Source));
	} else if(fieldID == "Mixer1Type") {
		memset( &(dataFields.Mixer1Type), 0, sizeof(dataFields.Mixer1Type));
		memcpy( &(dataFields.Mixer1Type), dataIn, sizeof(dataFields.Mixer1Type));
	} else if(fieldID == "Mixer1Vector") {
		memset( &(dataFields.Mixer1Vector), 0, sizeof(dataFields.Mixer1Vector));
		memcpy( &(dataFields.Mixer1Vector), dataIn, sizeof(dataFields.Mixer1Vector));
	} else if(fieldID == "Mixer2Type") {
		memset( &(dataFields.Mixer2Type), 0, sizeof(dataFields.Mixer2Type));
		memcpy( &(dataFields.Mixer2Type), dataIn, sizeof(dataFields.Mixer2Type));
	} else if(fieldID == "Mixer2Vector") {
		memset( &(dataFields.Mixer2Vector), 0, sizeof(dataFields.Mixer2Vector));
		memcpy( &(dataFields.Mixer2Vector), dataIn, sizeof(dataFields.Mixer2Vector));
	} else if(fieldID == "Mixer3Type") {
		memset( &(dataFields.Mixer3Type), 0, sizeof(dataFields.Mixer3Type));
		memcpy( &(dataFields.Mixer3Type), dataIn, sizeof(dataFields.Mixer3Type));
	} else if(fieldID == "Mixer3Vector") {
		memset( &(dataFields.Mixer3Vector), 0, sizeof(dataFields.Mixer3Vector));
		memcpy( &(dataFields.Mixer3Vector), dataIn, sizeof(dataFields.Mixer3Vector));
	} else if(fieldID == "Mixer4Type") {
		memset( &(dataFields.Mixer4Type), 0, sizeof(dataFields.Mixer4Type));
		memcpy( &(dataFields.Mixer4Type), dataIn, sizeof(dataFields.Mixer4Type));
	} else if(fieldID == "Mixer4Vector") {
		memset( &(dataFields.Mixer4Vector), 0, sizeof(dataFields.Mixer4Vector));
		memcpy( &(dataFields.Mixer4Vector), dataIn, sizeof(dataFields.Mixer4Vector));
	} else if(fieldID == "Mixer5Type") {
		memset( &(dataFields.Mixer5Type), 0, sizeof(dataFields.Mixer5Type));
		memcpy( &(dataFields.Mixer5Type), dataIn, sizeof(dataFields.Mixer5Type));
	} else if(fieldID == "Mixer5Vector") {
		memset( &(dataFields.Mixer5Vector), 0, sizeof(dataFields.Mixer5Vector));
		memcpy( &(dataFields.Mixer5Vector), dataIn, sizeof(dataFields.Mixer5Vector));
	} else if(fieldID == "Mixer6Type") {
		memset( &(dataFields.Mixer6Type), 0, sizeof(dataFields.Mixer6Type));
		memcpy( &(dataFields.Mixer6Type), dataIn, sizeof(dataFields.Mixer6Type));
	} else if(fieldID == "Mixer6Vector") {
		memset( &(dataFields.Mixer6Vector), 0, sizeof(dataFields.Mixer6Vector));
		memcpy( &(dataFields.Mixer6Vector), dataIn, sizeof(dataFields.Mixer6Vector));
	} else if(fieldID == "Mixer7Type") {
		memset( &(dataFields.Mixer7Type), 0, sizeof(dataFields.Mixer7Type));
		memcpy( &(dataFields.Mixer7Type), dataIn, sizeof(dataFields.Mixer7Type));
	} else if(fieldID == "Mixer7Vector") {
		memset( &(dataFields.Mixer7Vector), 0, sizeof(dataFields.Mixer7Vector));
		memcpy( &(dataFields.Mixer7Vector), dataIn, sizeof(dataFields.Mixer7Vector));
	} else if(fieldID == "Mixer8Type") {
		memset( &(dataFields.Mixer8Type), 0, sizeof(dataFields.Mixer8Type));
		memcpy( &(dataFields.Mixer8Type), dataIn, sizeof(dataFields.Mixer8Type));
	} else if(fieldID == "Mixer8Vector") {
		memset( &(dataFields.Mixer8Vector), 0, sizeof(dataFields.Mixer8Vector));
		memcpy( &(dataFields.Mixer8Vector), dataIn, sizeof(dataFields.Mixer8Vector));
	} else if(fieldID == "Mixer9Type") {
		memset( &(dataFields.Mixer9Type), 0, sizeof(dataFields.Mixer9Type));
		memcpy( &(dataFields.Mixer9Type), dataIn, sizeof(dataFields.Mixer9Type));
	} else if(fieldID == "Mixer9Vector") {
		memset( &(dataFields.Mixer9Vector), 0, sizeof(dataFields.Mixer9Vector));
		memcpy( &(dataFields.Mixer9Vector), dataIn, sizeof(dataFields.Mixer9Vector));
	} else if(fieldID == "Mixer10Type") {
		memset( &(dataFields.Mixer10Type), 0, sizeof(dataFields.Mixer10Type));
		memcpy( &(dataFields.Mixer10Type), dataIn, sizeof(dataFields.Mixer10Type));
	} else if(fieldID == "Mixer10Vector") {
		memset( &(dataFields.Mixer10Vector), 0, sizeof(dataFields.Mixer10Vector));
		memcpy( &(dataFields.Mixer10Vector), dataIn, sizeof(dataFields.Mixer10Vector));
	} else if(fieldID == "Mixer11Type") {
		memset( &(dataFields.Mixer11Type), 0, sizeof(dataFields.Mixer11Type));
		memcpy( &(dataFields.Mixer11Type), dataIn, sizeof(dataFields.Mixer11Type));
	} else if(fieldID == "Mixer11Vector") {
		memset( &(dataFields.Mixer11Vector), 0, sizeof(dataFields.Mixer11Vector));
		memcpy( &(dataFields.Mixer11Vector), dataIn, sizeof(dataFields.Mixer11Vector));
	} else if(fieldID == "Mixer12Type") {
		memset( &(dataFields.Mixer12Type), 0, sizeof(dataFields.Mixer12Type));
		memcpy( &(dataFields.Mixer12Type), dataIn, sizeof(dataFields.Mixer12Type));
	} else if(fieldID == "Mixer12Vector") {
		memset( &(dataFields.Mixer12Vector), 0, sizeof(dataFields.Mixer12Vector));
		memcpy( &(dataFields.Mixer12Vector), dataIn, sizeof(dataFields.Mixer12Vector));
	}
	return 0;
}

int MixerSettings::UAVObjGetDataField(char *dataOut, const std::string fieldID){
	if(fieldID == "MaxAccel") {
		memcpy( dataOut, &(dataFields.MaxAccel), sizeof(dataFields.MaxAccel));
	} else if(fieldID == "FeedForward") {
		memcpy( dataOut, &(dataFields.FeedForward), sizeof(dataFields.FeedForward));
	} else if(fieldID == "AccelTime") {
		memcpy( dataOut, &(dataFields.AccelTime), sizeof(dataFields.AccelTime));
	} else if(fieldID == "DecelTime") {
		memcpy( dataOut, &(dataFields.DecelTime), sizeof(dataFields.DecelTime));
	} else if(fieldID == "ThrottleCurve1") {
		memcpy( dataOut, &(dataFields.ThrottleCurve1), sizeof(dataFields.ThrottleCurve1));
	} else if(fieldID == "ThrottleCurve2") {
		memcpy( dataOut, &(dataFields.ThrottleCurve2), sizeof(dataFields.ThrottleCurve2));
	} else if(fieldID == "MixerValueRoll") {
		memcpy( dataOut, &(dataFields.MixerValueRoll), sizeof(dataFields.MixerValueRoll));
	} else if(fieldID == "MixerValuePitch") {
		memcpy( dataOut, &(dataFields.MixerValuePitch), sizeof(dataFields.MixerValuePitch));
	} else if(fieldID == "MixerValueYaw") {
		memcpy( dataOut, &(dataFields.MixerValueYaw), sizeof(dataFields.MixerValueYaw));
	} else if(fieldID == "Curve2Source") {
		memcpy( dataOut, &(dataFields.Curve2Source), sizeof(dataFields.Curve2Source));
	} else if(fieldID == "Mixer1Type") {
		memcpy( dataOut, &(dataFields.Mixer1Type), sizeof(dataFields.Mixer1Type));
	} else if(fieldID == "Mixer1Vector") {
		memcpy( dataOut, &(dataFields.Mixer1Vector), sizeof(dataFields.Mixer1Vector));
	} else if(fieldID == "Mixer2Type") {
		memcpy( dataOut, &(dataFields.Mixer2Type), sizeof(dataFields.Mixer2Type));
	} else if(fieldID == "Mixer2Vector") {
		memcpy( dataOut, &(dataFields.Mixer2Vector), sizeof(dataFields.Mixer2Vector));
	} else if(fieldID == "Mixer3Type") {
		memcpy( dataOut, &(dataFields.Mixer3Type), sizeof(dataFields.Mixer3Type));
	} else if(fieldID == "Mixer3Vector") {
		memcpy( dataOut, &(dataFields.Mixer3Vector), sizeof(dataFields.Mixer3Vector));
	} else if(fieldID == "Mixer4Type") {
		memcpy( dataOut, &(dataFields.Mixer4Type), sizeof(dataFields.Mixer4Type));
	} else if(fieldID == "Mixer4Vector") {
		memcpy( dataOut, &(dataFields.Mixer4Vector), sizeof(dataFields.Mixer4Vector));
	} else if(fieldID == "Mixer5Type") {
		memcpy( dataOut, &(dataFields.Mixer5Type), sizeof(dataFields.Mixer5Type));
	} else if(fieldID == "Mixer5Vector") {
		memcpy( dataOut, &(dataFields.Mixer5Vector), sizeof(dataFields.Mixer5Vector));
	} else if(fieldID == "Mixer6Type") {
		memcpy( dataOut, &(dataFields.Mixer6Type), sizeof(dataFields.Mixer6Type));
	} else if(fieldID == "Mixer6Vector") {
		memcpy( dataOut, &(dataFields.Mixer6Vector), sizeof(dataFields.Mixer6Vector));
	} else if(fieldID == "Mixer7Type") {
		memcpy( dataOut, &(dataFields.Mixer7Type), sizeof(dataFields.Mixer7Type));
	} else if(fieldID == "Mixer7Vector") {
		memcpy( dataOut, &(dataFields.Mixer7Vector), sizeof(dataFields.Mixer7Vector));
	} else if(fieldID == "Mixer8Type") {
		memcpy( dataOut, &(dataFields.Mixer8Type), sizeof(dataFields.Mixer8Type));
	} else if(fieldID == "Mixer8Vector") {
		memcpy( dataOut, &(dataFields.Mixer8Vector), sizeof(dataFields.Mixer8Vector));
	} else if(fieldID == "Mixer9Type") {
		memcpy( dataOut, &(dataFields.Mixer9Type), sizeof(dataFields.Mixer9Type));
	} else if(fieldID == "Mixer9Vector") {
		memcpy( dataOut, &(dataFields.Mixer9Vector), sizeof(dataFields.Mixer9Vector));
	} else if(fieldID == "Mixer10Type") {
		memcpy( dataOut, &(dataFields.Mixer10Type), sizeof(dataFields.Mixer10Type));
	} else if(fieldID == "Mixer10Vector") {
		memcpy( dataOut, &(dataFields.Mixer10Vector), sizeof(dataFields.Mixer10Vector));
	} else if(fieldID == "Mixer11Type") {
		memcpy( dataOut, &(dataFields.Mixer11Type), sizeof(dataFields.Mixer11Type));
	} else if(fieldID == "Mixer11Vector") {
		memcpy( dataOut, &(dataFields.Mixer11Vector), sizeof(dataFields.Mixer11Vector));
	} else if(fieldID == "Mixer12Type") {
		memcpy( dataOut, &(dataFields.Mixer12Type), sizeof(dataFields.Mixer12Type));
	} else if(fieldID == "Mixer12Vector") {
		memcpy( dataOut, &(dataFields.Mixer12Vector), sizeof(dataFields.Mixer12Vector));
	}
	return 0;
}

int MixerSettings::UAVObjUnpack(const unsigned char *dataIn){
	memcpy(&dataFields, dataIn, NUMBYTES);
	return 0;
}

int MixerSettings::UAVObjPack(unsigned char *dataOut) {
	memcpy(dataOut, &dataFields, NUMBYTES);
	return 0;
}

unsigned short MixerSettings::UAVObjGetInstance() const {
	return instance;
}
unsigned short MixerSettings::UAVObjGetNumBytes() const {
	return sizeof(dataFields);
}
unsigned short MixerSettings::UAVObjGetNumInstances() const {
	return numInstances;
}

std::string MixerSettings::prettyPrint() {
	std::stringstream ss;
	ss << "\nPrinting object: mixersettings" << std::endl;
	ss << "\tMaxAccel: " << dataFields.MaxAccel << std::endl;
	ss << "\tFeedForward: " << dataFields.FeedForward << std::endl;
	ss << "\tAccelTime: " << dataFields.AccelTime << std::endl;
	ss << "\tDecelTime: " << dataFields.DecelTime << std::endl;
	ss << "\tThrottleCurve1: " << dataFields.ThrottleCurve1 << std::endl;
	ss << "\tThrottleCurve2: " << dataFields.ThrottleCurve2 << std::endl;
	ss << "\tMixerValueRoll: " << dataFields.MixerValueRoll << std::endl;
	ss << "\tMixerValuePitch: " << dataFields.MixerValuePitch << std::endl;
	ss << "\tMixerValueYaw: " << dataFields.MixerValueYaw << std::endl;
	ss << "\tCurve2Source: " << dataFields.Curve2Source << std::endl;
	ss << "\tMixer1Type: " << dataFields.Mixer1Type << std::endl;
	ss << "\tMixer1Vector: " << dataFields.Mixer1Vector << std::endl;
	ss << "\tMixer2Type: " << dataFields.Mixer2Type << std::endl;
	ss << "\tMixer2Vector: " << dataFields.Mixer2Vector << std::endl;
	ss << "\tMixer3Type: " << dataFields.Mixer3Type << std::endl;
	ss << "\tMixer3Vector: " << dataFields.Mixer3Vector << std::endl;
	ss << "\tMixer4Type: " << dataFields.Mixer4Type << std::endl;
	ss << "\tMixer4Vector: " << dataFields.Mixer4Vector << std::endl;
	ss << "\tMixer5Type: " << dataFields.Mixer5Type << std::endl;
	ss << "\tMixer5Vector: " << dataFields.Mixer5Vector << std::endl;
	ss << "\tMixer6Type: " << dataFields.Mixer6Type << std::endl;
	ss << "\tMixer6Vector: " << dataFields.Mixer6Vector << std::endl;
	ss << "\tMixer7Type: " << dataFields.Mixer7Type << std::endl;
	ss << "\tMixer7Vector: " << dataFields.Mixer7Vector << std::endl;
	ss << "\tMixer8Type: " << dataFields.Mixer8Type << std::endl;
	ss << "\tMixer8Vector: " << dataFields.Mixer8Vector << std::endl;
	ss << "\tMixer9Type: " << dataFields.Mixer9Type << std::endl;
	ss << "\tMixer9Vector: " << dataFields.Mixer9Vector << std::endl;
	ss << "\tMixer10Type: " << dataFields.Mixer10Type << std::endl;
	ss << "\tMixer10Vector: " << dataFields.Mixer10Vector << std::endl;
	ss << "\tMixer11Type: " << dataFields.Mixer11Type << std::endl;
	ss << "\tMixer11Vector: " << dataFields.Mixer11Vector << std::endl;
	ss << "\tMixer12Type: " << dataFields.Mixer12Type << std::endl;
	ss << "\tMixer12Vector: " << dataFields.Mixer12Vector << std::endl;

	return ss.str();
}

/*/***/
/* * Initialize object fields with the default values.*/
/* * If a default value is not specified the object fields*/
/* * will be initialized to zero.*/
/* */
/*void MixerSettings::setDefaultFieldValues()*/
/*{*/
/*    data.MaxAccel = 1000;
    data.FeedForward = 0;
    data.AccelTime = 0;
    data.DecelTime = 0;
    data.ThrottleCurve1[0] = 0;
    data.ThrottleCurve1[1] = 0;
    data.ThrottleCurve1[2] = 0;
    data.ThrottleCurve1[3] = 0;
    data.ThrottleCurve1[4] = 0;
    data.ThrottleCurve2[0] = 0;
    data.ThrottleCurve2[1] = 0.25;
    data.ThrottleCurve2[2] = 0.5;
    data.ThrottleCurve2[3] = 0.75;
    data.ThrottleCurve2[4] = 1;
    data.MixerValueRoll = 50;
    data.MixerValuePitch = 50;
    data.MixerValueYaw = 50;
    data.Curve2Source = 0;
    data.Mixer1Type = 0;
    data.Mixer1Vector[0] = 0;
    data.Mixer1Vector[1] = 0;
    data.Mixer1Vector[2] = 0;
    data.Mixer1Vector[3] = 0;
    data.Mixer1Vector[4] = 0;
    data.Mixer2Type = 0;
    data.Mixer2Vector[0] = 0;
    data.Mixer2Vector[1] = 0;
    data.Mixer2Vector[2] = 0;
    data.Mixer2Vector[3] = 0;
    data.Mixer2Vector[4] = 0;
    data.Mixer3Type = 0;
    data.Mixer3Vector[0] = 0;
    data.Mixer3Vector[1] = 0;
    data.Mixer3Vector[2] = 0;
    data.Mixer3Vector[3] = 0;
    data.Mixer3Vector[4] = 0;
    data.Mixer4Type = 0;
    data.Mixer4Vector[0] = 0;
    data.Mixer4Vector[1] = 0;
    data.Mixer4Vector[2] = 0;
    data.Mixer4Vector[3] = 0;
    data.Mixer4Vector[4] = 0;
    data.Mixer5Type = 0;
    data.Mixer5Vector[0] = 0;
    data.Mixer5Vector[1] = 0;
    data.Mixer5Vector[2] = 0;
    data.Mixer5Vector[3] = 0;
    data.Mixer5Vector[4] = 0;
    data.Mixer6Type = 0;
    data.Mixer6Vector[0] = 0;
    data.Mixer6Vector[1] = 0;
    data.Mixer6Vector[2] = 0;
    data.Mixer6Vector[3] = 0;
    data.Mixer6Vector[4] = 0;
    data.Mixer7Type = 0;
    data.Mixer7Vector[0] = 0;
    data.Mixer7Vector[1] = 0;
    data.Mixer7Vector[2] = 0;
    data.Mixer7Vector[3] = 0;
    data.Mixer7Vector[4] = 0;
    data.Mixer8Type = 0;
    data.Mixer8Vector[0] = 0;
    data.Mixer8Vector[1] = 0;
    data.Mixer8Vector[2] = 0;
    data.Mixer8Vector[3] = 0;
    data.Mixer8Vector[4] = 0;
    data.Mixer9Type = 0;
    data.Mixer9Vector[0] = 0;
    data.Mixer9Vector[1] = 0;
    data.Mixer9Vector[2] = 0;
    data.Mixer9Vector[3] = 0;
    data.Mixer9Vector[4] = 0;
    data.Mixer10Type = 0;
    data.Mixer10Vector[0] = 0;
    data.Mixer10Vector[1] = 0;
    data.Mixer10Vector[2] = 0;
    data.Mixer10Vector[3] = 0;
    data.Mixer10Vector[4] = 0;
    data.Mixer11Type = 0;
    data.Mixer11Vector[0] = 0;
    data.Mixer11Vector[1] = 0;
    data.Mixer11Vector[2] = 0;
    data.Mixer11Vector[3] = 0;
    data.Mixer11Vector[4] = 0;
    data.Mixer12Type = 0;
    data.Mixer12Vector[0] = 0;
    data.Mixer12Vector[1] = 0;
    data.Mixer12Vector[2] = 0;
    data.Mixer12Vector[3] = 0;
    data.Mixer12Vector[4] = 0;
*/
/*}*/

/*/***/
/* * Get the object data fields*/
/* */
/*MixerSettings::DataFields MixerSettings::getData()*/
/*{*/
/*    QMutexLocker locker(mutex);*/
/*    return data;*/
/*}*/

/*/***/
/* * Set the object data fields*/
/* */
/*void MixerSettings::setData(const DataFields& data)*/
/*{*/
/*    QMutexLocker locker(mutex);*/
/*    // Get metadata*/
/*    Metadata mdata = getMetadata();*/
/*    // Update object if the access mode permits*/
/*    if (UAVObject::GetGcsAccess(mdata) == ACCESS_READWRITE) {*/
/*        this->data = data;*/
/*        emit objectUpdatedAuto(this); // trigger object updated event*/
/*        emit objectUpdated(this);*/
/*    }*/
/*}*/

/*void MixerSettings::emitNotifications()*/
/*{*/
/*            //if (data.MaxAccel != oldData.MaxAccel)
            emit MaxAccelChanged(data.MaxAccel);
        //if (data.FeedForward != oldData.FeedForward)
            emit FeedForwardChanged(data.FeedForward);
        //if (data.AccelTime != oldData.AccelTime)
            emit AccelTimeChanged(data.AccelTime);
        //if (data.DecelTime != oldData.DecelTime)
            emit DecelTimeChanged(data.DecelTime);
        //if (data.MixerValueRoll != oldData.MixerValueRoll)
            emit MixerValueRollChanged(data.MixerValueRoll);
        //if (data.MixerValuePitch != oldData.MixerValuePitch)
            emit MixerValuePitchChanged(data.MixerValuePitch);
        //if (data.MixerValueYaw != oldData.MixerValueYaw)
            emit MixerValueYawChanged(data.MixerValueYaw);
        //if (data.Curve2Source != oldData.Curve2Source)
            emit Curve2SourceChanged(data.Curve2Source);
        //if (data.Mixer1Type != oldData.Mixer1Type)
            emit Mixer1TypeChanged(data.Mixer1Type);
        //if (data.Mixer2Type != oldData.Mixer2Type)
            emit Mixer2TypeChanged(data.Mixer2Type);
        //if (data.Mixer3Type != oldData.Mixer3Type)
            emit Mixer3TypeChanged(data.Mixer3Type);
        //if (data.Mixer4Type != oldData.Mixer4Type)
            emit Mixer4TypeChanged(data.Mixer4Type);
        //if (data.Mixer5Type != oldData.Mixer5Type)
            emit Mixer5TypeChanged(data.Mixer5Type);
        //if (data.Mixer6Type != oldData.Mixer6Type)
            emit Mixer6TypeChanged(data.Mixer6Type);
        //if (data.Mixer7Type != oldData.Mixer7Type)
            emit Mixer7TypeChanged(data.Mixer7Type);
        //if (data.Mixer8Type != oldData.Mixer8Type)
            emit Mixer8TypeChanged(data.Mixer8Type);
        //if (data.Mixer9Type != oldData.Mixer9Type)
            emit Mixer9TypeChanged(data.Mixer9Type);
        //if (data.Mixer10Type != oldData.Mixer10Type)
            emit Mixer10TypeChanged(data.Mixer10Type);
        //if (data.Mixer11Type != oldData.Mixer11Type)
            emit Mixer11TypeChanged(data.Mixer11Type);
        //if (data.Mixer12Type != oldData.Mixer12Type)
            emit Mixer12TypeChanged(data.Mixer12Type);
*/
/*}*/

/*/***/
/* * Create a clone of this object, a new instance ID must be specified.*/
/* * Do not use this function directly to create new instances, the*/
/* * UAVObjectManager should be used instead.*/
/* */
/*UAVDataObject *MixerSettings::clone(unsigned int instID)*/
/*{*/
/*    MixerSettings *obj = new MixerSettings();*/
/*    obj->initialize(instID, this->getMetaObject());*/
/*    return obj;*/
/*}*/

/*/***/
/* * Create a clone of this object only to be used to retrieve defaults*/
/* */
/*UAVDataObject *MixerSettings::dirtyClone()*/
/*{*/
/*    MixerSettings *obj = new MixerSettings();*/
/*    return obj;*/
/*}*/

/*/***/
/* * Static function to retrieve an instance of the object.*/
/* */
/*MixerSettings *MixerSettings::GetInstance(UAVObjectManager *objMngr, unsigned int instID)*/
/*{*/
/*    return dynamic_cast<MixerSettings *>(objMngr->getObject(MixerSettings::OBJID, instID));*/
/*}*/

/*float MixerSettings::getMaxAccel() const
{
   QMutexLocker locker(mutex);
   return data.MaxAccel;
}
void MixerSettings::setMaxAccel(float value)
{
   mutex->lock();
   bool changed = data.MaxAccel != value;
   data.MaxAccel = value;
   mutex->unlock();
   if (changed) emit MaxAccelChanged(value);
}

float MixerSettings::getFeedForward() const
{
   QMutexLocker locker(mutex);
   return data.FeedForward;
}
void MixerSettings::setFeedForward(float value)
{
   mutex->lock();
   bool changed = data.FeedForward != value;
   data.FeedForward = value;
   mutex->unlock();
   if (changed) emit FeedForwardChanged(value);
}

float MixerSettings::getAccelTime() const
{
   QMutexLocker locker(mutex);
   return data.AccelTime;
}
void MixerSettings::setAccelTime(float value)
{
   mutex->lock();
   bool changed = data.AccelTime != value;
   data.AccelTime = value;
   mutex->unlock();
   if (changed) emit AccelTimeChanged(value);
}

float MixerSettings::getDecelTime() const
{
   QMutexLocker locker(mutex);
   return data.DecelTime;
}
void MixerSettings::setDecelTime(float value)
{
   mutex->lock();
   bool changed = data.DecelTime != value;
   data.DecelTime = value;
   mutex->unlock();
   if (changed) emit DecelTimeChanged(value);
}

float MixerSettings::getThrottleCurve1(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.ThrottleCurve1[index];
}
void MixerSettings::setThrottleCurve1(unsigned int index, float value)
{
   mutex->lock();
   bool changed = data.ThrottleCurve1[index] != value;
   data.ThrottleCurve1[index] = value;
   mutex->unlock();
   if (changed) emit ThrottleCurve1Changed(index,value);
}

float MixerSettings::getThrottleCurve2(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.ThrottleCurve2[index];
}
void MixerSettings::setThrottleCurve2(unsigned int index, float value)
{
   mutex->lock();
   bool changed = data.ThrottleCurve2[index] != value;
   data.ThrottleCurve2[index] = value;
   mutex->unlock();
   if (changed) emit ThrottleCurve2Changed(index,value);
}

char MixerSettings::getMixerValueRoll() const
{
   QMutexLocker locker(mutex);
   return data.MixerValueRoll;
}
void MixerSettings::setMixerValueRoll(char value)
{
   mutex->lock();
   bool changed = data.MixerValueRoll != value;
   data.MixerValueRoll = value;
   mutex->unlock();
   if (changed) emit MixerValueRollChanged(value);
}

char MixerSettings::getMixerValuePitch() const
{
   QMutexLocker locker(mutex);
   return data.MixerValuePitch;
}
void MixerSettings::setMixerValuePitch(char value)
{
   mutex->lock();
   bool changed = data.MixerValuePitch != value;
   data.MixerValuePitch = value;
   mutex->unlock();
   if (changed) emit MixerValuePitchChanged(value);
}

char MixerSettings::getMixerValueYaw() const
{
   QMutexLocker locker(mutex);
   return data.MixerValueYaw;
}
void MixerSettings::setMixerValueYaw(char value)
{
   mutex->lock();
   bool changed = data.MixerValueYaw != value;
   data.MixerValueYaw = value;
   mutex->unlock();
   if (changed) emit MixerValueYawChanged(value);
}

unsigned char MixerSettings::getCurve2Source() const
{
   QMutexLocker locker(mutex);
   return data.Curve2Source;
}
void MixerSettings::setCurve2Source(unsigned char value)
{
   mutex->lock();
   bool changed = data.Curve2Source != value;
   data.Curve2Source = value;
   mutex->unlock();
   if (changed) emit Curve2SourceChanged(value);
}

unsigned char MixerSettings::getMixer1Type() const
{
   QMutexLocker locker(mutex);
   return data.Mixer1Type;
}
void MixerSettings::setMixer1Type(unsigned char value)
{
   mutex->lock();
   bool changed = data.Mixer1Type != value;
   data.Mixer1Type = value;
   mutex->unlock();
   if (changed) emit Mixer1TypeChanged(value);
}

char MixerSettings::getMixer1Vector(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.Mixer1Vector[index];
}
void MixerSettings::setMixer1Vector(unsigned int index, char value)
{
   mutex->lock();
   bool changed = data.Mixer1Vector[index] != value;
   data.Mixer1Vector[index] = value;
   mutex->unlock();
   if (changed) emit Mixer1VectorChanged(index,value);
}

unsigned char MixerSettings::getMixer2Type() const
{
   QMutexLocker locker(mutex);
   return data.Mixer2Type;
}
void MixerSettings::setMixer2Type(unsigned char value)
{
   mutex->lock();
   bool changed = data.Mixer2Type != value;
   data.Mixer2Type = value;
   mutex->unlock();
   if (changed) emit Mixer2TypeChanged(value);
}

char MixerSettings::getMixer2Vector(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.Mixer2Vector[index];
}
void MixerSettings::setMixer2Vector(unsigned int index, char value)
{
   mutex->lock();
   bool changed = data.Mixer2Vector[index] != value;
   data.Mixer2Vector[index] = value;
   mutex->unlock();
   if (changed) emit Mixer2VectorChanged(index,value);
}

unsigned char MixerSettings::getMixer3Type() const
{
   QMutexLocker locker(mutex);
   return data.Mixer3Type;
}
void MixerSettings::setMixer3Type(unsigned char value)
{
   mutex->lock();
   bool changed = data.Mixer3Type != value;
   data.Mixer3Type = value;
   mutex->unlock();
   if (changed) emit Mixer3TypeChanged(value);
}

char MixerSettings::getMixer3Vector(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.Mixer3Vector[index];
}
void MixerSettings::setMixer3Vector(unsigned int index, char value)
{
   mutex->lock();
   bool changed = data.Mixer3Vector[index] != value;
   data.Mixer3Vector[index] = value;
   mutex->unlock();
   if (changed) emit Mixer3VectorChanged(index,value);
}

unsigned char MixerSettings::getMixer4Type() const
{
   QMutexLocker locker(mutex);
   return data.Mixer4Type;
}
void MixerSettings::setMixer4Type(unsigned char value)
{
   mutex->lock();
   bool changed = data.Mixer4Type != value;
   data.Mixer4Type = value;
   mutex->unlock();
   if (changed) emit Mixer4TypeChanged(value);
}

char MixerSettings::getMixer4Vector(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.Mixer4Vector[index];
}
void MixerSettings::setMixer4Vector(unsigned int index, char value)
{
   mutex->lock();
   bool changed = data.Mixer4Vector[index] != value;
   data.Mixer4Vector[index] = value;
   mutex->unlock();
   if (changed) emit Mixer4VectorChanged(index,value);
}

unsigned char MixerSettings::getMixer5Type() const
{
   QMutexLocker locker(mutex);
   return data.Mixer5Type;
}
void MixerSettings::setMixer5Type(unsigned char value)
{
   mutex->lock();
   bool changed = data.Mixer5Type != value;
   data.Mixer5Type = value;
   mutex->unlock();
   if (changed) emit Mixer5TypeChanged(value);
}

char MixerSettings::getMixer5Vector(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.Mixer5Vector[index];
}
void MixerSettings::setMixer5Vector(unsigned int index, char value)
{
   mutex->lock();
   bool changed = data.Mixer5Vector[index] != value;
   data.Mixer5Vector[index] = value;
   mutex->unlock();
   if (changed) emit Mixer5VectorChanged(index,value);
}

unsigned char MixerSettings::getMixer6Type() const
{
   QMutexLocker locker(mutex);
   return data.Mixer6Type;
}
void MixerSettings::setMixer6Type(unsigned char value)
{
   mutex->lock();
   bool changed = data.Mixer6Type != value;
   data.Mixer6Type = value;
   mutex->unlock();
   if (changed) emit Mixer6TypeChanged(value);
}

char MixerSettings::getMixer6Vector(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.Mixer6Vector[index];
}
void MixerSettings::setMixer6Vector(unsigned int index, char value)
{
   mutex->lock();
   bool changed = data.Mixer6Vector[index] != value;
   data.Mixer6Vector[index] = value;
   mutex->unlock();
   if (changed) emit Mixer6VectorChanged(index,value);
}

unsigned char MixerSettings::getMixer7Type() const
{
   QMutexLocker locker(mutex);
   return data.Mixer7Type;
}
void MixerSettings::setMixer7Type(unsigned char value)
{
   mutex->lock();
   bool changed = data.Mixer7Type != value;
   data.Mixer7Type = value;
   mutex->unlock();
   if (changed) emit Mixer7TypeChanged(value);
}

char MixerSettings::getMixer7Vector(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.Mixer7Vector[index];
}
void MixerSettings::setMixer7Vector(unsigned int index, char value)
{
   mutex->lock();
   bool changed = data.Mixer7Vector[index] != value;
   data.Mixer7Vector[index] = value;
   mutex->unlock();
   if (changed) emit Mixer7VectorChanged(index,value);
}

unsigned char MixerSettings::getMixer8Type() const
{
   QMutexLocker locker(mutex);
   return data.Mixer8Type;
}
void MixerSettings::setMixer8Type(unsigned char value)
{
   mutex->lock();
   bool changed = data.Mixer8Type != value;
   data.Mixer8Type = value;
   mutex->unlock();
   if (changed) emit Mixer8TypeChanged(value);
}

char MixerSettings::getMixer8Vector(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.Mixer8Vector[index];
}
void MixerSettings::setMixer8Vector(unsigned int index, char value)
{
   mutex->lock();
   bool changed = data.Mixer8Vector[index] != value;
   data.Mixer8Vector[index] = value;
   mutex->unlock();
   if (changed) emit Mixer8VectorChanged(index,value);
}

unsigned char MixerSettings::getMixer9Type() const
{
   QMutexLocker locker(mutex);
   return data.Mixer9Type;
}
void MixerSettings::setMixer9Type(unsigned char value)
{
   mutex->lock();
   bool changed = data.Mixer9Type != value;
   data.Mixer9Type = value;
   mutex->unlock();
   if (changed) emit Mixer9TypeChanged(value);
}

char MixerSettings::getMixer9Vector(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.Mixer9Vector[index];
}
void MixerSettings::setMixer9Vector(unsigned int index, char value)
{
   mutex->lock();
   bool changed = data.Mixer9Vector[index] != value;
   data.Mixer9Vector[index] = value;
   mutex->unlock();
   if (changed) emit Mixer9VectorChanged(index,value);
}

unsigned char MixerSettings::getMixer10Type() const
{
   QMutexLocker locker(mutex);
   return data.Mixer10Type;
}
void MixerSettings::setMixer10Type(unsigned char value)
{
   mutex->lock();
   bool changed = data.Mixer10Type != value;
   data.Mixer10Type = value;
   mutex->unlock();
   if (changed) emit Mixer10TypeChanged(value);
}

char MixerSettings::getMixer10Vector(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.Mixer10Vector[index];
}
void MixerSettings::setMixer10Vector(unsigned int index, char value)
{
   mutex->lock();
   bool changed = data.Mixer10Vector[index] != value;
   data.Mixer10Vector[index] = value;
   mutex->unlock();
   if (changed) emit Mixer10VectorChanged(index,value);
}

unsigned char MixerSettings::getMixer11Type() const
{
   QMutexLocker locker(mutex);
   return data.Mixer11Type;
}
void MixerSettings::setMixer11Type(unsigned char value)
{
   mutex->lock();
   bool changed = data.Mixer11Type != value;
   data.Mixer11Type = value;
   mutex->unlock();
   if (changed) emit Mixer11TypeChanged(value);
}

char MixerSettings::getMixer11Vector(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.Mixer11Vector[index];
}
void MixerSettings::setMixer11Vector(unsigned int index, char value)
{
   mutex->lock();
   bool changed = data.Mixer11Vector[index] != value;
   data.Mixer11Vector[index] = value;
   mutex->unlock();
   if (changed) emit Mixer11VectorChanged(index,value);
}

unsigned char MixerSettings::getMixer12Type() const
{
   QMutexLocker locker(mutex);
   return data.Mixer12Type;
}
void MixerSettings::setMixer12Type(unsigned char value)
{
   mutex->lock();
   bool changed = data.Mixer12Type != value;
   data.Mixer12Type = value;
   mutex->unlock();
   if (changed) emit Mixer12TypeChanged(value);
}

char MixerSettings::getMixer12Vector(unsigned int index) const
{
   QMutexLocker locker(mutex);
   return data.Mixer12Vector[index];
}
void MixerSettings::setMixer12Vector(unsigned int index, char value)
{
   mutex->lock();
   bool changed = data.Mixer12Vector[index] != value;
   data.Mixer12Vector[index] = value;
   mutex->unlock();
   if (changed) emit Mixer12VectorChanged(index,value);
}

*/
