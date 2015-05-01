/*
############################################################################
################ Don't run without reading all the comments ################
########################## REMOVE YOUR PROPELLERS ##########################
############################################################################
*/

#include <iostream>
#include <fstream>
#include <cstdio>
#include <stdio.h>
#include <sys/time.h>
#include <ctime>
#include <unistd.h>

#include "USBStream.h"
#include "UAVObjManager.h"

#include "flightplanstatus.h"
#include "mixerstatus.h"
#include "barosensor.h"
#include "gpsvelocitysensor.h"
#include "pathdesired.h"
#include "actuatorcommand.h"
#include "manualcontrolcommand.h"
#include "velocitydesired.h"
#include "firmwareiapobj.h"
#include "poilearnsettings.h"
#include "accelstate.h"
#include "flighttelemetrystats.h"
#include "stabilizationsettingsbank3.h"
#include "gcstelemetrystats.h"
#include "receiveractivity.h"
#include "attitudesettings.h"
#include "gpsextendedstatus.h"
#include "camerastabsettings.h"
#include "gyrostate.h"
#include "ratedesired.h"
#include "groundtruth.h"
#include "fixedwingpathfollowersettings.h"
#include "flightplansettings.h"
#include "altitudeholdstatus.h"
#include "txpidsettings.h"
#include "poilocation.h"
#include "magstate.h"
#include "cameradesired.h"
#include "hwsettings.h"
#include "gcsreceiver.h"
#include "overosyncsettings.h"
#include "systemalarms.h"
#include "gpstime.h"
#include "altitudeholdsettings.h"
#include "sonaraltitude.h"
#include "nedaccel.h"
#include "flightstatus.h"
#include "accelsensor.h"
#include "airspeedsettings.h"
#include "ekfconfiguration.h"
#include "i2cstats.h"
#include "velocitystate.h"
#include "revosettings.h"
#include "fixedwingpathfollowerstatus.h"
#include "systemsettings.h"
#include "flightbatterystate.h"
#include "gpssettings.h"
#include "altitudefiltersettings.h"
#include "objectpersistence.h"
#include "auxmagsettings.h"
#include "revocalibration.h"
#include "debuglogentry.h"
#include "stabilizationsettingsbank2.h"
#include "auxmagsensor.h"
#include "callbackinfo.h"
#include "accessorydesired.h"
#include "flightbatterysettings.h"
#include "mpu6000settings.h"
#include "magsensor.h"
#include "homelocation.h"
#include "pathplan.h"
#include "ekfstatevariance.h"
#include "debuglogcontrol.h"
#include "oplinksettings.h"
#include "pathstatus.h"
#include "radiocombridgestats.h"
#include "oplinkreceiver.h"
#include "accelgyrosettings.h"
#include "vtolselftuningstats.h"
#include "attitudesimulated.h"
#include "stabilizationbank.h"
#include "overosyncstats.h"
#include "stabilizationsettings.h"
#include "stabilizationstatus.h"
#include "airspeedsensor.h"
#include "gyrosensor.h"
#include "oplinkstatus.h"
#include "actuatordesired.h"
#include "systemstats.h"
#include "gpspositionsensor.h"
#include "stabilizationdesired.h"
#include "pathaction.h"
#include "flightmodesettings.h"
#include "mixersettings.h"
#include "debuglogstatus.h"
#include "flightplancontrol.h"
#include "waypoint.h"
#include "takeofflocation.h"
#include "airspeedstate.h"
#include "stabilizationsettingsbank1.h"
#include "positionstate.h"
#include "faultsettings.h"
#include "debuglogsettings.h"
#include "osdsettings.h"
#include "perfcounter.h"
#include "taskinfo.h"
#include "watchdogstatus.h"
#include "pathsummary.h"
#include "actuatorsettings.h"
#include "manualcontrolsettings.h"
#include "gpssatellites.h"
#include "vtolpathfollowersettings.h"
#include "waypointactive.h"
#include "attitudestate.h"



int main() {

	//Creates a USBStream for the usb connected CC3D - this must be changed for revo and maybe different version of fw/bu.
	USBStream us(0x20a0, 0x415b);

    if (us.isOk() == false) {
        std::cout << "could not open CC" << std::endl;
        return 1;
    }

	UAVObjManager* manager = new UAVObjManager(&us, &us, TELEMETRY_USBHID); //important to tell which type of telemetry is being used.

    FlightPlanStatus* flightPlanStatus = new FlightPlanStatus(manager);
    manager->UAVObjRegister(flightPlanStatus);
    MixerStatus* mixerStatus = new MixerStatus(manager);
    manager->UAVObjRegister(mixerStatus);
    BaroSensor* baroSensor = new BaroSensor(manager);
    manager->UAVObjRegister(baroSensor);
    GPSVelocitySensor* gPSVelocitySensor = new GPSVelocitySensor(manager);
    manager->UAVObjRegister(gPSVelocitySensor);
    PathDesired* pathDesired = new PathDesired(manager);
    manager->UAVObjRegister(pathDesired);
    ActuatorCommand* actuatorCommand = new ActuatorCommand(manager);
    manager->UAVObjRegister(actuatorCommand);
    ManualControlCommand* manualControlCommand = new ManualControlCommand(manager);
    manager->UAVObjRegister(manualControlCommand);
    VelocityDesired* velocityDesired = new VelocityDesired(manager);
    manager->UAVObjRegister(velocityDesired);
    FirmwareIAPObj* firmwareIAPObj = new FirmwareIAPObj(manager);
    manager->UAVObjRegister(firmwareIAPObj);
    PoiLearnSettings* poiLearnSettings = new PoiLearnSettings(manager);
    manager->UAVObjRegister(poiLearnSettings);
    AccelState* accelState = new AccelState(manager);
    manager->UAVObjRegister(accelState);
    FlightTelemetryStats* flightTelemetryStats = new FlightTelemetryStats(manager);
    manager->UAVObjRegister(flightTelemetryStats);
    StabilizationSettingsBank3* stabilizationSettingsBank3 = new StabilizationSettingsBank3(manager);
    manager->UAVObjRegister(stabilizationSettingsBank3);
    GCSTelemetryStats* gCSTelemetryStats = new GCSTelemetryStats(manager);
    manager->UAVObjRegister(gCSTelemetryStats);
    ReceiverActivity* receiverActivity = new ReceiverActivity(manager);
    manager->UAVObjRegister(receiverActivity);
    AttitudeSettings* attitudeSettings = new AttitudeSettings(manager);
    manager->UAVObjRegister(attitudeSettings);
    GPSExtendedStatus* gPSExtendedStatus = new GPSExtendedStatus(manager);
    manager->UAVObjRegister(gPSExtendedStatus);
    CameraStabSettings* cameraStabSettings = new CameraStabSettings(manager);
    manager->UAVObjRegister(cameraStabSettings);
    GyroState* gyroState = new GyroState(manager);
    manager->UAVObjRegister(gyroState);
    RateDesired* rateDesired = new RateDesired(manager);
    manager->UAVObjRegister(rateDesired);
    GroundTruth* groundTruth = new GroundTruth(manager);
    manager->UAVObjRegister(groundTruth);
    FixedWingPathFollowerSettings* fixedWingPathFollowerSettings = new FixedWingPathFollowerSettings(manager);
    manager->UAVObjRegister(fixedWingPathFollowerSettings);
    FlightPlanSettings* flightPlanSettings = new FlightPlanSettings(manager);
    manager->UAVObjRegister(flightPlanSettings);
    AltitudeHoldStatus* altitudeHoldStatus = new AltitudeHoldStatus(manager);
    manager->UAVObjRegister(altitudeHoldStatus);
    TxPIDSettings* txPIDSettings = new TxPIDSettings(manager);
    manager->UAVObjRegister(txPIDSettings);
    PoiLocation* poiLocation = new PoiLocation(manager);
    manager->UAVObjRegister(poiLocation);
    MagState* magState = new MagState(manager);
    manager->UAVObjRegister(magState);
    CameraDesired* cameraDesired = new CameraDesired(manager);
    manager->UAVObjRegister(cameraDesired);
    HwSettings* hwSettings = new HwSettings(manager);
    manager->UAVObjRegister(hwSettings);
    GCSReceiver* gCSReceiver = new GCSReceiver(manager);
    manager->UAVObjRegister(gCSReceiver);
    OveroSyncSettings* overoSyncSettings = new OveroSyncSettings(manager);
    manager->UAVObjRegister(overoSyncSettings);
    SystemAlarms* systemAlarms = new SystemAlarms(manager);
    manager->UAVObjRegister(systemAlarms);
    GPSTime* gPSTime = new GPSTime(manager);
    manager->UAVObjRegister(gPSTime);
    AltitudeHoldSettings* altitudeHoldSettings = new AltitudeHoldSettings(manager);
    manager->UAVObjRegister(altitudeHoldSettings);
    SonarAltitude* sonarAltitude = new SonarAltitude(manager);
    manager->UAVObjRegister(sonarAltitude);
    NedAccel* nedAccel = new NedAccel(manager);
    manager->UAVObjRegister(nedAccel);
    FlightStatus* flightStatus = new FlightStatus(manager);
    manager->UAVObjRegister(flightStatus);
    AccelSensor* accelSensor = new AccelSensor(manager);
    manager->UAVObjRegister(accelSensor);
    AirspeedSettings* airspeedSettings = new AirspeedSettings(manager);
    manager->UAVObjRegister(airspeedSettings);
    EKFConfiguration* eKFConfiguration = new EKFConfiguration(manager);
    manager->UAVObjRegister(eKFConfiguration);
    I2CStats* i2CStats = new I2CStats(manager);
    manager->UAVObjRegister(i2CStats);
    VelocityState* velocityState = new VelocityState(manager);
    manager->UAVObjRegister(velocityState);
    RevoSettings* revoSettings = new RevoSettings(manager);
    manager->UAVObjRegister(revoSettings);
    FixedWingPathFollowerStatus* fixedWingPathFollowerStatus = new FixedWingPathFollowerStatus(manager);
    manager->UAVObjRegister(fixedWingPathFollowerStatus);
    SystemSettings* systemSettings = new SystemSettings(manager);
    manager->UAVObjRegister(systemSettings);
    FlightBatteryState* flightBatteryState = new FlightBatteryState(manager);
    manager->UAVObjRegister(flightBatteryState);
    GPSSettings* gPSSettings = new GPSSettings(manager);
    manager->UAVObjRegister(gPSSettings);
    AltitudeFilterSettings* altitudeFilterSettings = new AltitudeFilterSettings(manager);
    manager->UAVObjRegister(altitudeFilterSettings);
    ObjectPersistence* objectPersistence = new ObjectPersistence(manager);
    manager->UAVObjRegister(objectPersistence);
    AuxMagSettings* auxMagSettings = new AuxMagSettings(manager);
    manager->UAVObjRegister(auxMagSettings);
    RevoCalibration* revoCalibration = new RevoCalibration(manager);
    manager->UAVObjRegister(revoCalibration);
    DebugLogEntry* debugLogEntry = new DebugLogEntry(manager);
    manager->UAVObjRegister(debugLogEntry);
    StabilizationSettingsBank2* stabilizationSettingsBank2 = new StabilizationSettingsBank2(manager);
    manager->UAVObjRegister(stabilizationSettingsBank2);
    AuxMagSensor* auxMagSensor = new AuxMagSensor(manager);
    manager->UAVObjRegister(auxMagSensor);
    CallbackInfo* callbackInfo = new CallbackInfo(manager);
    manager->UAVObjRegister(callbackInfo);
    AccessoryDesired* accessoryDesired = new AccessoryDesired(manager);
    manager->UAVObjRegister(accessoryDesired);
    FlightBatterySettings* flightBatterySettings = new FlightBatterySettings(manager);
    manager->UAVObjRegister(flightBatterySettings);
    Mpu6000Settings* mpu6000Settings = new Mpu6000Settings(manager);
    manager->UAVObjRegister(mpu6000Settings);
    MagSensor* magSensor = new MagSensor(manager);
    manager->UAVObjRegister(magSensor);
    HomeLocation* homeLocation = new HomeLocation(manager);
    manager->UAVObjRegister(homeLocation);
    PathPlan* pathPlan = new PathPlan(manager);
    manager->UAVObjRegister(pathPlan);
    EKFStateVariance* eKFStateVariance = new EKFStateVariance(manager);
    manager->UAVObjRegister(eKFStateVariance);
    DebugLogControl* debugLogControl = new DebugLogControl(manager);
    manager->UAVObjRegister(debugLogControl);
    OPLinkSettings* oPLinkSettings = new OPLinkSettings(manager);
    manager->UAVObjRegister(oPLinkSettings);
    PathStatus* pathStatus = new PathStatus(manager);
    manager->UAVObjRegister(pathStatus);
    RadioComBridgeStats* radioComBridgeStats = new RadioComBridgeStats(manager);
    manager->UAVObjRegister(radioComBridgeStats);
    OPLinkReceiver* oPLinkReceiver = new OPLinkReceiver(manager);
    manager->UAVObjRegister(oPLinkReceiver);
    AccelGyroSettings* accelGyroSettings = new AccelGyroSettings(manager);
    manager->UAVObjRegister(accelGyroSettings);
    VtolSelfTuningStats* vtolSelfTuningStats = new VtolSelfTuningStats(manager);
    manager->UAVObjRegister(vtolSelfTuningStats);
    AttitudeSimulated* attitudeSimulated = new AttitudeSimulated(manager);
    manager->UAVObjRegister(attitudeSimulated);
    StabilizationBank* stabilizationBank = new StabilizationBank(manager);
    manager->UAVObjRegister(stabilizationBank);
    OveroSyncStats* overoSyncStats = new OveroSyncStats(manager);
    manager->UAVObjRegister(overoSyncStats);
    StabilizationSettings* stabilizationSettings = new StabilizationSettings(manager);
    manager->UAVObjRegister(stabilizationSettings);
    StabilizationStatus* stabilizationStatus = new StabilizationStatus(manager);
    manager->UAVObjRegister(stabilizationStatus);
    AirspeedSensor* airspeedSensor = new AirspeedSensor(manager);
    manager->UAVObjRegister(airspeedSensor);
    GyroSensor* gyroSensor = new GyroSensor(manager);
    manager->UAVObjRegister(gyroSensor);
    OPLinkStatus* oPLinkStatus = new OPLinkStatus(manager);
    manager->UAVObjRegister(oPLinkStatus);
    ActuatorDesired* actuatorDesired = new ActuatorDesired(manager);
    manager->UAVObjRegister(actuatorDesired);
    SystemStats* systemStats = new SystemStats(manager);
    manager->UAVObjRegister(systemStats);
    GPSPositionSensor* gPSPositionSensor = new GPSPositionSensor(manager);
    manager->UAVObjRegister(gPSPositionSensor);
    StabilizationDesired* stabilizationDesired = new StabilizationDesired(manager);
    manager->UAVObjRegister(stabilizationDesired);
    PathAction* pathAction = new PathAction(manager);
    manager->UAVObjRegister(pathAction);
    FlightModeSettings* flightModeSettings = new FlightModeSettings(manager);
    manager->UAVObjRegister(flightModeSettings);
    MixerSettings* mixerSettings = new MixerSettings(manager);
    manager->UAVObjRegister(mixerSettings);
    DebugLogStatus* debugLogStatus = new DebugLogStatus(manager);
    manager->UAVObjRegister(debugLogStatus);
    FlightPlanControl* flightPlanControl = new FlightPlanControl(manager);
    manager->UAVObjRegister(flightPlanControl);
    Waypoint* waypoint = new Waypoint(manager);
    manager->UAVObjRegister(waypoint);
    TakeOffLocation* takeOffLocation = new TakeOffLocation(manager);
    manager->UAVObjRegister(takeOffLocation);
    AirspeedState* airspeedState = new AirspeedState(manager);
    manager->UAVObjRegister(airspeedState);
    StabilizationSettingsBank1* stabilizationSettingsBank1 = new StabilizationSettingsBank1(manager);
    manager->UAVObjRegister(stabilizationSettingsBank1);
    PositionState* positionState = new PositionState(manager);
    manager->UAVObjRegister(positionState);
    FaultSettings* faultSettings = new FaultSettings(manager);
    manager->UAVObjRegister(faultSettings);
    DebugLogSettings* debugLogSettings = new DebugLogSettings(manager);
    manager->UAVObjRegister(debugLogSettings);
    OsdSettings* osdSettings = new OsdSettings(manager);
    manager->UAVObjRegister(osdSettings);
    PerfCounter* perfCounter = new PerfCounter(manager);
    manager->UAVObjRegister(perfCounter);
    TaskInfo* taskInfo = new TaskInfo(manager);
    manager->UAVObjRegister(taskInfo);
    WatchdogStatus* watchdogStatus = new WatchdogStatus(manager);
    manager->UAVObjRegister(watchdogStatus);
    PathSummary* pathSummary = new PathSummary(manager);
    manager->UAVObjRegister(pathSummary);
    ActuatorSettings* actuatorSettings = new ActuatorSettings(manager);
    manager->UAVObjRegister(actuatorSettings);
    ManualControlSettings* manualControlSettings = new ManualControlSettings(manager);
    manager->UAVObjRegister(manualControlSettings);
    GPSSatellites* gPSSatellites = new GPSSatellites(manager);
    manager->UAVObjRegister(gPSSatellites);
    VtolPathFollowerSettings* vtolPathFollowerSettings = new VtolPathFollowerSettings(manager);
    manager->UAVObjRegister(vtolPathFollowerSettings);
    WaypointActive* waypointActive = new WaypointActive(manager);
    manager->UAVObjRegister(waypointActive);
    AttitudeState* attitudeState = new AttitudeState(manager);
    manager->UAVObjRegister(attitudeState);

	//manager->UAVTalkSendObject(flightStatus, false);

    std::cout << "done." << std::endl;
	while(1) {
        std::cout << accelState->prettyPrint() << std::endl;
		usleep(50000);
	}

	//Closes the iostream. (I think it is not implemented :) Hehe )
	us.close();

	return 0;

}
