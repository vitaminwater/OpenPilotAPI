#General compiler flags
CC = g++
CFLAGS = -Wall -fpic -pthread -std=c++0x -c

#Flags to compile the HIDAPI - library for communication with HID devices.
CCC = gcc
CCFLAGS = -Wall -fpic -pthread -I. -I/usr/include/libusb-1.0 -lrt -c

#Flags to create the UAVTalk library
LIBFLAGS = -Wall -shared -I/usr/include/libusb-1.0 `pkg-config libusb-1.0 --cflags --libs` -o
LIBUAVSO = libUAVTalk.so
LIBUAV = UAVTalk

#List of the objects that are part of the UAVObjectManager, UAVTalk protocol and USB link
OBJS = UAVObjManager.o UAVTalkConnection.o UAVObject.o UAVObjMetadata.o UAVObjEvent.o UAVTalkStats.o hid.o USBStream.o

### Full library, has all objects available. Use for deployment.
UAVOBJECTS = gyrostate.o flightstatus.o flightbatterysettings.o altitudeholdsettings.o homelocation.o gcsreceiver.o attitudesettings.o overosyncstats.o gpssettings.o mixerstatus.o ratedesired.o flightbatterystate.o pathstatus.o stabilizationsettingsbank1.o flightplanstatus.o flightmodesettings.o auxmagsettings.o ekfstatevariance.o stabilizationstatus.o oplinkstatus.o stabilizationdesired.o nedaccel.o takeofflocation.o objectpersistence.o revosettings.o fixedwingpathfollowerstatus.o flightplancontrol.o actuatorsettings.o accelstate.o camerastabsettings.o gpspositionsensor.o ekfconfiguration.o barosensor.o osdsettings.o vtolselftuningstats.o attitudesimulated.o manualcontrolsettings.o pathaction.o oplinkreceiver.o airspeedsettings.o systemstats.o debuglogcontrol.o magsensor.o accessorydesired.o vtolpathfollowersettings.o attitudestate.o groundtruth.o auxmagsensor.o taskinfo.o stabilizationbank.o flightplansettings.o receiveractivity.o actuatordesired.o stabilizationsettingsbank3.o pathdesired.o positionstate.o gpstime.o mixersettings.o pathsummary.o sonaraltitude.o callbackinfo.o gpsextendedstatus.o airspeedsensor.o gcstelemetrystats.o debuglogentry.o actuatorcommand.o waypoint.o cameradesired.o altitudeholdstatus.o systemalarms.o revocalibration.o velocitydesired.o gpssatellites.o accelgyrosettings.o stabilizationsettings.o flighttelemetrystats.o gpsvelocitysensor.o waypointactive.o airspeedstate.o systemsettings.o manualcontrolcommand.o poilearnsettings.o overosyncsettings.o magstate.o perfcounter.o altitudefiltersettings.o poilocation.o fixedwingpathfollowersettings.o mpu6000settings.o firmwareiapobj.o velocitystate.o pathplan.o hwsettings.o faultsettings.o radiocombridgestats.o oplinksettings.o stabilizationsettingsbank2.o debuglogsettings.o i2cstats.o accelsensor.o debuglogstatus.o gyrosensor.o txpidsettings.o watchdogstatus.o 

### Selective library, has only some Objects. Use for DEBUG.
#UAVOBJECTS = flightstatus.o gcsreceiver.o manualcontrolcommand.o

#Flags to create a working program using the library
OUTPUTNAME = test
INPUTNAME = main.cpp
LFLAGS = -Wall -pthread -std=c++0x -L. -l$(LIBUAV)

all: $(OUTPUTNAME)

### Make the test program, the options can be set above. Should be changed to a dynamic script.
$(OUTPUTNAME): $(LIBUAVSO) $(INPUTNAME) $(UAVOBJECTS)
	$(CC) $(INPUTNAME) -o $(OUTPUTNAME) $(LFLAGS)

### Makes library Includes all the UAVObjects, usb connection, UAVObjectManager and UAVTalk protocol
$(LIBUAVSO): $(OBJS) $(UAVOBJECTS)
	$(CC) $(OBJS) $(UAVOBJECTS) $(LIBFLAGS) $(LIBUAVSO)

### Makes part of the library
UAVObjManager.o: UAVObjEvent.h UAVObjMngrStats.h UAVObject.h UAVTalkConnection.h UAVObjManager.h UAVObjManager.cpp
	$(CC) $(CFLAGS) UAVObjManager.cpp

UAVTalkConnection.o: UAVObject.h UAVObjEvent.h UAVTalkStats.h UAVObjManager.h UAVTalkConnection.h UAVTalkConnection.cpp
	$(CC) $(CFLAGS) UAVTalkConnection.cpp

UAVObject.o: UAVObjMetadata.h NotImplemented.h UAVObject.h UAVObject.cpp
	$(CC) $(CFLAGS) UAVObject.cpp

UAVObjMetadata.o: UAVObjMetadata.h UAVObjMetadata.cpp
	$(CC) $(CFLAGS) UAVObjMetadata.cpp

UAVObjEvent.o: UAVObjEvent.h UAVObjEvent.cpp
	$(CC) $(CFLAGS) UAVObjEvent.cpp

UAVTalkStats.o: UAVTalkStats.h UAVTalkStats.cpp
	$(CC) $(CFLAGS) UAVTalkStats.cpp

USBStream.o: USBStream.cpp USBStream.h
	$(CC) $(CFLAGS) USBStream.cpp

hid.o: hid.c hidapi.h
	$(CCC) $(CCFLAGS) hid.c
### 

######################
# Compile UAVOBJECTS #
######################

gyrostate.o:gyrostate.cpp gyrostate.h
	$(CC) $(CFLAGS) gyrostate.cpp

flightstatus.o:flightstatus.cpp flightstatus.h
	$(CC) $(CFLAGS) flightstatus.cpp

flightbatterysettings.o:flightbatterysettings.cpp flightbatterysettings.h
	$(CC) $(CFLAGS) flightbatterysettings.cpp

altitudeholdsettings.o:altitudeholdsettings.cpp altitudeholdsettings.h
	$(CC) $(CFLAGS) altitudeholdsettings.cpp

homelocation.o:homelocation.cpp homelocation.h
	$(CC) $(CFLAGS) homelocation.cpp

gcsreceiver.o:gcsreceiver.cpp gcsreceiver.h
	$(CC) $(CFLAGS) gcsreceiver.cpp

attitudesettings.o:attitudesettings.cpp attitudesettings.h
	$(CC) $(CFLAGS) attitudesettings.cpp

overosyncstats.o:overosyncstats.cpp overosyncstats.h
	$(CC) $(CFLAGS) overosyncstats.cpp

gpssettings.o:gpssettings.cpp gpssettings.h
	$(CC) $(CFLAGS) gpssettings.cpp

mixerstatus.o:mixerstatus.cpp mixerstatus.h
	$(CC) $(CFLAGS) mixerstatus.cpp

ratedesired.o:ratedesired.cpp ratedesired.h
	$(CC) $(CFLAGS) ratedesired.cpp

flightbatterystate.o:flightbatterystate.cpp flightbatterystate.h
	$(CC) $(CFLAGS) flightbatterystate.cpp

pathstatus.o:pathstatus.cpp pathstatus.h
	$(CC) $(CFLAGS) pathstatus.cpp

stabilizationsettingsbank1.o:stabilizationsettingsbank1.cpp stabilizationsettingsbank1.h
	$(CC) $(CFLAGS) stabilizationsettingsbank1.cpp

flightplanstatus.o:flightplanstatus.cpp flightplanstatus.h
	$(CC) $(CFLAGS) flightplanstatus.cpp

flightmodesettings.o:flightmodesettings.cpp flightmodesettings.h
	$(CC) $(CFLAGS) flightmodesettings.cpp

auxmagsettings.o:auxmagsettings.cpp auxmagsettings.h
	$(CC) $(CFLAGS) auxmagsettings.cpp

ekfstatevariance.o:ekfstatevariance.cpp ekfstatevariance.h
	$(CC) $(CFLAGS) ekfstatevariance.cpp

stabilizationstatus.o:stabilizationstatus.cpp stabilizationstatus.h
	$(CC) $(CFLAGS) stabilizationstatus.cpp

oplinkstatus.o:oplinkstatus.cpp oplinkstatus.h
	$(CC) $(CFLAGS) oplinkstatus.cpp

stabilizationdesired.o:stabilizationdesired.cpp stabilizationdesired.h
	$(CC) $(CFLAGS) stabilizationdesired.cpp

nedaccel.o:nedaccel.cpp nedaccel.h
	$(CC) $(CFLAGS) nedaccel.cpp

takeofflocation.o:takeofflocation.cpp takeofflocation.h
	$(CC) $(CFLAGS) takeofflocation.cpp

objectpersistence.o:objectpersistence.cpp objectpersistence.h
	$(CC) $(CFLAGS) objectpersistence.cpp

revosettings.o:revosettings.cpp revosettings.h
	$(CC) $(CFLAGS) revosettings.cpp

fixedwingpathfollowerstatus.o:fixedwingpathfollowerstatus.cpp fixedwingpathfollowerstatus.h
	$(CC) $(CFLAGS) fixedwingpathfollowerstatus.cpp

flightplancontrol.o:flightplancontrol.cpp flightplancontrol.h
	$(CC) $(CFLAGS) flightplancontrol.cpp

actuatorsettings.o:actuatorsettings.cpp actuatorsettings.h
	$(CC) $(CFLAGS) actuatorsettings.cpp

accelstate.o:accelstate.cpp accelstate.h
	$(CC) $(CFLAGS) accelstate.cpp

camerastabsettings.o:camerastabsettings.cpp camerastabsettings.h
	$(CC) $(CFLAGS) camerastabsettings.cpp

gpspositionsensor.o:gpspositionsensor.cpp gpspositionsensor.h
	$(CC) $(CFLAGS) gpspositionsensor.cpp

ekfconfiguration.o:ekfconfiguration.cpp ekfconfiguration.h
	$(CC) $(CFLAGS) ekfconfiguration.cpp

barosensor.o:barosensor.cpp barosensor.h
	$(CC) $(CFLAGS) barosensor.cpp

osdsettings.o:osdsettings.cpp osdsettings.h
	$(CC) $(CFLAGS) osdsettings.cpp

vtolselftuningstats.o:vtolselftuningstats.cpp vtolselftuningstats.h
	$(CC) $(CFLAGS) vtolselftuningstats.cpp

attitudesimulated.o:attitudesimulated.cpp attitudesimulated.h
	$(CC) $(CFLAGS) attitudesimulated.cpp

manualcontrolsettings.o:manualcontrolsettings.cpp manualcontrolsettings.h
	$(CC) $(CFLAGS) manualcontrolsettings.cpp

pathaction.o:pathaction.cpp pathaction.h
	$(CC) $(CFLAGS) pathaction.cpp

oplinkreceiver.o:oplinkreceiver.cpp oplinkreceiver.h
	$(CC) $(CFLAGS) oplinkreceiver.cpp

airspeedsettings.o:airspeedsettings.cpp airspeedsettings.h
	$(CC) $(CFLAGS) airspeedsettings.cpp

systemstats.o:systemstats.cpp systemstats.h
	$(CC) $(CFLAGS) systemstats.cpp

debuglogcontrol.o:debuglogcontrol.cpp debuglogcontrol.h
	$(CC) $(CFLAGS) debuglogcontrol.cpp

magsensor.o:magsensor.cpp magsensor.h
	$(CC) $(CFLAGS) magsensor.cpp

accessorydesired.o:accessorydesired.cpp accessorydesired.h
	$(CC) $(CFLAGS) accessorydesired.cpp

vtolpathfollowersettings.o:vtolpathfollowersettings.cpp vtolpathfollowersettings.h
	$(CC) $(CFLAGS) vtolpathfollowersettings.cpp

attitudestate.o:attitudestate.cpp attitudestate.h
	$(CC) $(CFLAGS) attitudestate.cpp

groundtruth.o:groundtruth.cpp groundtruth.h
	$(CC) $(CFLAGS) groundtruth.cpp

auxmagsensor.o:auxmagsensor.cpp auxmagsensor.h
	$(CC) $(CFLAGS) auxmagsensor.cpp

taskinfo.o:taskinfo.cpp taskinfo.h
	$(CC) $(CFLAGS) taskinfo.cpp

stabilizationbank.o:stabilizationbank.cpp stabilizationbank.h
	$(CC) $(CFLAGS) stabilizationbank.cpp

flightplansettings.o:flightplansettings.cpp flightplansettings.h
	$(CC) $(CFLAGS) flightplansettings.cpp

receiveractivity.o:receiveractivity.cpp receiveractivity.h
	$(CC) $(CFLAGS) receiveractivity.cpp

actuatordesired.o:actuatordesired.cpp actuatordesired.h
	$(CC) $(CFLAGS) actuatordesired.cpp

stabilizationsettingsbank3.o:stabilizationsettingsbank3.cpp stabilizationsettingsbank3.h
	$(CC) $(CFLAGS) stabilizationsettingsbank3.cpp

pathdesired.o:pathdesired.cpp pathdesired.h
	$(CC) $(CFLAGS) pathdesired.cpp

positionstate.o:positionstate.cpp positionstate.h
	$(CC) $(CFLAGS) positionstate.cpp

gpstime.o:gpstime.cpp gpstime.h
	$(CC) $(CFLAGS) gpstime.cpp

mixersettings.o:mixersettings.cpp mixersettings.h
	$(CC) $(CFLAGS) mixersettings.cpp

pathsummary.o:pathsummary.cpp pathsummary.h
	$(CC) $(CFLAGS) pathsummary.cpp

sonaraltitude.o:sonaraltitude.cpp sonaraltitude.h
	$(CC) $(CFLAGS) sonaraltitude.cpp

callbackinfo.o:callbackinfo.cpp callbackinfo.h
	$(CC) $(CFLAGS) callbackinfo.cpp

gpsextendedstatus.o:gpsextendedstatus.cpp gpsextendedstatus.h
	$(CC) $(CFLAGS) gpsextendedstatus.cpp

airspeedsensor.o:airspeedsensor.cpp airspeedsensor.h
	$(CC) $(CFLAGS) airspeedsensor.cpp

gcstelemetrystats.o:gcstelemetrystats.cpp gcstelemetrystats.h
	$(CC) $(CFLAGS) gcstelemetrystats.cpp

debuglogentry.o:debuglogentry.cpp debuglogentry.h
	$(CC) $(CFLAGS) debuglogentry.cpp

actuatorcommand.o:actuatorcommand.cpp actuatorcommand.h
	$(CC) $(CFLAGS) actuatorcommand.cpp

waypoint.o:waypoint.cpp waypoint.h
	$(CC) $(CFLAGS) waypoint.cpp

cameradesired.o:cameradesired.cpp cameradesired.h
	$(CC) $(CFLAGS) cameradesired.cpp

altitudeholdstatus.o:altitudeholdstatus.cpp altitudeholdstatus.h
	$(CC) $(CFLAGS) altitudeholdstatus.cpp

systemalarms.o:systemalarms.cpp systemalarms.h
	$(CC) $(CFLAGS) systemalarms.cpp

revocalibration.o:revocalibration.cpp revocalibration.h
	$(CC) $(CFLAGS) revocalibration.cpp

velocitydesired.o:velocitydesired.cpp velocitydesired.h
	$(CC) $(CFLAGS) velocitydesired.cpp

gpssatellites.o:gpssatellites.cpp gpssatellites.h
	$(CC) $(CFLAGS) gpssatellites.cpp

accelgyrosettings.o:accelgyrosettings.cpp accelgyrosettings.h
	$(CC) $(CFLAGS) accelgyrosettings.cpp

stabilizationsettings.o:stabilizationsettings.cpp stabilizationsettings.h
	$(CC) $(CFLAGS) stabilizationsettings.cpp

flighttelemetrystats.o:flighttelemetrystats.cpp flighttelemetrystats.h
	$(CC) $(CFLAGS) flighttelemetrystats.cpp

gpsvelocitysensor.o:gpsvelocitysensor.cpp gpsvelocitysensor.h
	$(CC) $(CFLAGS) gpsvelocitysensor.cpp

waypointactive.o:waypointactive.cpp waypointactive.h
	$(CC) $(CFLAGS) waypointactive.cpp

airspeedstate.o:airspeedstate.cpp airspeedstate.h
	$(CC) $(CFLAGS) airspeedstate.cpp

systemsettings.o:systemsettings.cpp systemsettings.h
	$(CC) $(CFLAGS) systemsettings.cpp

manualcontrolcommand.o:manualcontrolcommand.cpp manualcontrolcommand.h
	$(CC) $(CFLAGS) manualcontrolcommand.cpp

poilearnsettings.o:poilearnsettings.cpp poilearnsettings.h
	$(CC) $(CFLAGS) poilearnsettings.cpp

overosyncsettings.o:overosyncsettings.cpp overosyncsettings.h
	$(CC) $(CFLAGS) overosyncsettings.cpp

magstate.o:magstate.cpp magstate.h
	$(CC) $(CFLAGS) magstate.cpp

perfcounter.o:perfcounter.cpp perfcounter.h
	$(CC) $(CFLAGS) perfcounter.cpp

altitudefiltersettings.o:altitudefiltersettings.cpp altitudefiltersettings.h
	$(CC) $(CFLAGS) altitudefiltersettings.cpp

poilocation.o:poilocation.cpp poilocation.h
	$(CC) $(CFLAGS) poilocation.cpp

fixedwingpathfollowersettings.o:fixedwingpathfollowersettings.cpp fixedwingpathfollowersettings.h
	$(CC) $(CFLAGS) fixedwingpathfollowersettings.cpp

mpu6000settings.o:mpu6000settings.cpp mpu6000settings.h
	$(CC) $(CFLAGS) mpu6000settings.cpp

firmwareiapobj.o:firmwareiapobj.cpp firmwareiapobj.h
	$(CC) $(CFLAGS) firmwareiapobj.cpp

velocitystate.o:velocitystate.cpp velocitystate.h
	$(CC) $(CFLAGS) velocitystate.cpp

pathplan.o:pathplan.cpp pathplan.h
	$(CC) $(CFLAGS) pathplan.cpp

hwsettings.o:hwsettings.cpp hwsettings.h
	$(CC) $(CFLAGS) hwsettings.cpp

faultsettings.o:faultsettings.cpp faultsettings.h
	$(CC) $(CFLAGS) faultsettings.cpp

radiocombridgestats.o:radiocombridgestats.cpp radiocombridgestats.h
	$(CC) $(CFLAGS) radiocombridgestats.cpp

oplinksettings.o:oplinksettings.cpp oplinksettings.h
	$(CC) $(CFLAGS) oplinksettings.cpp

stabilizationsettingsbank2.o:stabilizationsettingsbank2.cpp stabilizationsettingsbank2.h
	$(CC) $(CFLAGS) stabilizationsettingsbank2.cpp

debuglogsettings.o:debuglogsettings.cpp debuglogsettings.h
	$(CC) $(CFLAGS) debuglogsettings.cpp

i2cstats.o:i2cstats.cpp i2cstats.h
	$(CC) $(CFLAGS) i2cstats.cpp

accelsensor.o:accelsensor.cpp accelsensor.h
	$(CC) $(CFLAGS) accelsensor.cpp

debuglogstatus.o:debuglogstatus.cpp debuglogstatus.h
	$(CC) $(CFLAGS) debuglogstatus.cpp

gyrosensor.o:gyrosensor.cpp gyrosensor.h
	$(CC) $(CFLAGS) gyrosensor.cpp

txpidsettings.o:txpidsettings.cpp txpidsettings.h
	$(CC) $(CFLAGS) txpidsettings.cpp

watchdogstatus.o:watchdogstatus.cpp watchdogstatus.h
	$(CC) $(CFLAGS) watchdogstatus.cpp



######################

### Install rule for embedded linux systems. It was easier in my system, change to fit.
#install:$(LIBUAVSO)
#	cp *.h /opt/UAVTalkLib
#	cp $(LIBUAVSO) /opt/UAVTalkLib

clean:
	rm -rf *~ *.o *.so *.txt $(OUTPUTNAME)
