/*
 * UAVObject.h
 *
 *  Created on: Sep 13, 2013
 *      Author: gustavo
 */

#ifndef UAVOBJECT_H_
#define UAVOBJECT_H_

#include <string>
#include <map>
#include <time.h>
#include <fstream>
#include <iostream>

#include "UAVObjMetadata.h"
#include "NotImplemented.h"

class UAVObjManager;

/**
 * A super class to each object.
 * 
 * The application required polymorphism in order to treat all the objects as equals.
 * In the rest of the documentation there are references to "datafields", this is a member only defined in the subclasses.
 */
class UAVObject {
private:
	unsigned int id; /** UAVObject unique identifier, generated by uavobjectsgenerator.*/
	std::string name, description, category;
	UAVObjMetadata metadata; /** A set of fields common to all objects. */
	time_t nextUpdateTime; /** If this object requires periodic updates on the gcs side, this objects represents the time of the next update.*/
	bool isSingleInstance, isSettings;
	UAVObjManager* manager; /** A pointer to the UAVObjManager that holds this object.*/

public:
	/**
	 * Empty constructor, does not initializa any members.
	 */
	UAVObject();

	/**
	 * The constructor used in each subclass.
	 */
	UAVObject(UAVObjManager* manager, unsigned int id, std::string name, std::string description, std::string category, int isSingleInstance, int isSettings, int flightAccess, int gcsAccess, int isFlightAckNeeded, int isGcsAckNeeded, int flightTelemetryUpdateMode, int gcsTelemetryUpdateMode, int flightTelemetryUpdatePeriod, int gcsTelemetryUpdatePeriod, int loggingUpdatePeriod);
	unsigned int UAVObjGetID() const;
	
	virtual unsigned short UAVObjGetInstance() const = 0;

	/**
	 * Function used to size an object.
	 * @return The size of the datafields.
	 */
	virtual unsigned short UAVObjGetNumBytes() const = 0;

	/**
	 * Useful for multi instance objects.
	 * @return The number of instances of a particular object already created.
	 */
	virtual unsigned short UAVObjGetNumInstances() const = 0;

	bool UAVObjIsSingleInstance() const;

	time_t UAVObjGetNextUpdateTime() const;

	void UAVObjSetNextUpdateTime(time_t lastUpdateTime);
	
	/**
	 * When the UAVObjectManager receives a new objects its data comes as a byte array, this functions retrieves that data into the datafields.
	 * @param dataIn The array containing the receives data.
	 * @return The number of bytes readed for the array.
	 */
	virtual int UAVObjUnpack(const unsigned char *dataIn) = 0;

	/**
	 * In order to transmit objects to the flight software the datafields have to be packed in a single byte array.
	 * @param dataOut A previous allocated array that after the function holds the object data.
	 * @return The number of valid bytes in dataOut.
	 */
	virtual int UAVObjPack(unsigned char *dataOut) = 0;

	int UAVObjSave(){throw NotImplemented();};

	int UAVObjLoad(std::string objectFilename){throw NotImplemented();};

	int UAVObjSetDataField(const char *dataIn, unsigned int offset, unsigned int size){throw NotImplemented();};

	/**
	 * Changes a fields on the datafields of each object.
	 * @param dataIn The new data to the field.
	 * @param fieldID The name of the field to be updated.
	 * @return Returns 0 on success.
	 */
	virtual int UAVObjSetDataField(const char *dataIn, const std::string fieldID) = 0;

	int UAVObjGetDataField(char *dataOut, unsigned int offset, unsigned int size){throw NotImplemented();};

	/**
	 * Retrieves the data on aspecific field of datafields.
	 * @param dataOut A byte array where the data is returned.
	 * @param fieldID The name of the field to retrieve.
	 * @return Returns 0 in success.
 	 */
	virtual int UAVObjGetDataField(char *dataOut, const std::string fieldID) = 0;
	
	int UAVObjSetMetadata(const UAVObjMetadata* dataIn);
	
	UAVObjMetadata UAVObjGetMetadata();

	bool UAVObjIsReadOnly() const;

	int UAVObjGetUpdateMode();
	
	/**
	 * Verifies if two objects have the same id and instance number.
	 */
	bool operator==(const UAVObject &other);

	/**
	 * Returns the datafields information as a string formatted for human understanding.
	 */
	virtual std::string prettyPrint(){return "";};

};

#endif /* UAVOBJECT_H_ */