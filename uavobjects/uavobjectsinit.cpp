/**
 ******************************************************************************
 *
 * @file       uavobjectsinit.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       This is an automatically generated file.
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

#include "uavobjectsinit.h"

#include "accelgyrosettings.h"
#include "accelsensor.h"
#include "accelstate.h"
#include "accessorydesired.h"
#include "actuatorcommand.h"
#include "actuatordesired.h"
#include "actuatorsettings.h"
#include "airspeedsensor.h"
#include "airspeedsettings.h"
#include "airspeedstate.h"
#include "altitudefiltersettings.h"
#include "altitudeholdsettings.h"
#include "altitudeholdstatus.h"
#include "attitudesettings.h"
#include "attitudesimulated.h"
#include "attitudestate.h"
#include "auxmagsensor.h"
#include "auxmagsettings.h"
#include "barosensor.h"
#include "callbackinfo.h"
#include "cameradesired.h"
#include "camerastabsettings.h"
#include "debuglogcontrol.h"
#include "debuglogentry.h"
#include "debuglogsettings.h"
#include "debuglogstatus.h"
#include "ekfconfiguration.h"
#include "ekfstatevariance.h"
#include "faultsettings.h"
#include "firmwareiapobj.h"
#include "fixedwingpathfollowersettings.h"
#include "fixedwingpathfollowerstatus.h"
#include "flightbatterysettings.h"
#include "flightbatterystate.h"
#include "flightmodesettings.h"
#include "flightplancontrol.h"
#include "flightplansettings.h"
#include "flightplanstatus.h"
#include "flightstatus.h"
#include "flighttelemetrystats.h"
#include "gcsreceiver.h"
#include "gcstelemetrystats.h"
#include "gpsextendedstatus.h"
#include "gpspositionsensor.h"
#include "gpssatellites.h"
#include "gpssettings.h"
#include "gpstime.h"
#include "gpsvelocitysensor.h"
#include "groundtruth.h"
#include "gyrosensor.h"
#include "gyrostate.h"
#include "homelocation.h"
#include "hwsettings.h"
#include "i2cstats.h"
#include "magsensor.h"
#include "magstate.h"
#include "manualcontrolcommand.h"
#include "manualcontrolsettings.h"
#include "mixersettings.h"
#include "mixerstatus.h"
#include "mpu6000settings.h"
#include "nedaccel.h"
#include "objectpersistence.h"
#include "oplinkreceiver.h"
#include "oplinksettings.h"
#include "oplinkstatus.h"
#include "osdsettings.h"
#include "overosyncsettings.h"
#include "overosyncstats.h"
#include "pathaction.h"
#include "pathdesired.h"
#include "pathplan.h"
#include "pathstatus.h"
#include "pathsummary.h"
#include "perfcounter.h"
#include "poilearnsettings.h"
#include "poilocation.h"
#include "positionstate.h"
#include "radiocombridgestats.h"
#include "ratedesired.h"
#include "receiveractivity.h"
#include "revocalibration.h"
#include "revosettings.h"
#include "sonaraltitude.h"
#include "stabilizationbank.h"
#include "stabilizationdesired.h"
#include "stabilizationsettings.h"
#include "stabilizationsettingsbank1.h"
#include "stabilizationsettingsbank2.h"
#include "stabilizationsettingsbank3.h"
#include "stabilizationstatus.h"
#include "systemalarms.h"
#include "systemsettings.h"
#include "systemstats.h"
#include "takeofflocation.h"
#include "taskinfo.h"
#include "txpidsettings.h"
#include "velocitydesired.h"
#include "velocitystate.h"
#include "vtolpathfollowersettings.h"
#include "vtolselftuningstats.h"
#include "watchdogstatus.h"
#include "waypoint.h"
#include "waypointactive.h"


/**
 * Function used to initialize the first instance of each object.
 * This file is automatically updated by the UAVObjectGenerator.
 */
void UAVObjectsInitialize(UAVObjectManager *objMngr)
{
    objMngr->registerObject( new AccelGyroSettings() );
    objMngr->registerObject( new AccelSensor() );
    objMngr->registerObject( new AccelState() );
    objMngr->registerObject( new AccessoryDesired() );
    objMngr->registerObject( new ActuatorCommand() );
    objMngr->registerObject( new ActuatorDesired() );
    objMngr->registerObject( new ActuatorSettings() );
    objMngr->registerObject( new AirspeedSensor() );
    objMngr->registerObject( new AirspeedSettings() );
    objMngr->registerObject( new AirspeedState() );
    objMngr->registerObject( new AltitudeFilterSettings() );
    objMngr->registerObject( new AltitudeHoldSettings() );
    objMngr->registerObject( new AltitudeHoldStatus() );
    objMngr->registerObject( new AttitudeSettings() );
    objMngr->registerObject( new AttitudeSimulated() );
    objMngr->registerObject( new AttitudeState() );
    objMngr->registerObject( new AuxMagSensor() );
    objMngr->registerObject( new AuxMagSettings() );
    objMngr->registerObject( new BaroSensor() );
    objMngr->registerObject( new CallbackInfo() );
    objMngr->registerObject( new CameraDesired() );
    objMngr->registerObject( new CameraStabSettings() );
    objMngr->registerObject( new DebugLogControl() );
    objMngr->registerObject( new DebugLogEntry() );
    objMngr->registerObject( new DebugLogSettings() );
    objMngr->registerObject( new DebugLogStatus() );
    objMngr->registerObject( new EKFConfiguration() );
    objMngr->registerObject( new EKFStateVariance() );
    objMngr->registerObject( new FaultSettings() );
    objMngr->registerObject( new FirmwareIAPObj() );
    objMngr->registerObject( new FixedWingPathFollowerSettings() );
    objMngr->registerObject( new FixedWingPathFollowerStatus() );
    objMngr->registerObject( new FlightBatterySettings() );
    objMngr->registerObject( new FlightBatteryState() );
    objMngr->registerObject( new FlightModeSettings() );
    objMngr->registerObject( new FlightPlanControl() );
    objMngr->registerObject( new FlightPlanSettings() );
    objMngr->registerObject( new FlightPlanStatus() );
    objMngr->registerObject( new FlightStatus() );
    objMngr->registerObject( new FlightTelemetryStats() );
    objMngr->registerObject( new GCSReceiver() );
    objMngr->registerObject( new GCSTelemetryStats() );
    objMngr->registerObject( new GPSExtendedStatus() );
    objMngr->registerObject( new GPSPositionSensor() );
    objMngr->registerObject( new GPSSatellites() );
    objMngr->registerObject( new GPSSettings() );
    objMngr->registerObject( new GPSTime() );
    objMngr->registerObject( new GPSVelocitySensor() );
    objMngr->registerObject( new GroundTruth() );
    objMngr->registerObject( new GyroSensor() );
    objMngr->registerObject( new GyroState() );
    objMngr->registerObject( new HomeLocation() );
    objMngr->registerObject( new HwSettings() );
    objMngr->registerObject( new I2CStats() );
    objMngr->registerObject( new MagSensor() );
    objMngr->registerObject( new MagState() );
    objMngr->registerObject( new ManualControlCommand() );
    objMngr->registerObject( new ManualControlSettings() );
    objMngr->registerObject( new MixerSettings() );
    objMngr->registerObject( new MixerStatus() );
    objMngr->registerObject( new Mpu6000Settings() );
    objMngr->registerObject( new NedAccel() );
    objMngr->registerObject( new ObjectPersistence() );
    objMngr->registerObject( new OPLinkReceiver() );
    objMngr->registerObject( new OPLinkSettings() );
    objMngr->registerObject( new OPLinkStatus() );
    objMngr->registerObject( new OsdSettings() );
    objMngr->registerObject( new OveroSyncSettings() );
    objMngr->registerObject( new OveroSyncStats() );
    objMngr->registerObject( new PathAction() );
    objMngr->registerObject( new PathDesired() );
    objMngr->registerObject( new PathPlan() );
    objMngr->registerObject( new PathStatus() );
    objMngr->registerObject( new PathSummary() );
    objMngr->registerObject( new PerfCounter() );
    objMngr->registerObject( new PoiLearnSettings() );
    objMngr->registerObject( new PoiLocation() );
    objMngr->registerObject( new PositionState() );
    objMngr->registerObject( new RadioComBridgeStats() );
    objMngr->registerObject( new RateDesired() );
    objMngr->registerObject( new ReceiverActivity() );
    objMngr->registerObject( new RevoCalibration() );
    objMngr->registerObject( new RevoSettings() );
    objMngr->registerObject( new SonarAltitude() );
    objMngr->registerObject( new StabilizationBank() );
    objMngr->registerObject( new StabilizationDesired() );
    objMngr->registerObject( new StabilizationSettings() );
    objMngr->registerObject( new StabilizationSettingsBank1() );
    objMngr->registerObject( new StabilizationSettingsBank2() );
    objMngr->registerObject( new StabilizationSettingsBank3() );
    objMngr->registerObject( new StabilizationStatus() );
    objMngr->registerObject( new SystemAlarms() );
    objMngr->registerObject( new SystemSettings() );
    objMngr->registerObject( new SystemStats() );
    objMngr->registerObject( new TakeOffLocation() );
    objMngr->registerObject( new TaskInfo() );
    objMngr->registerObject( new TxPIDSettings() );
    objMngr->registerObject( new VelocityDesired() );
    objMngr->registerObject( new VelocityState() );
    objMngr->registerObject( new VtolPathFollowerSettings() );
    objMngr->registerObject( new VtolSelfTuningStats() );
    objMngr->registerObject( new WatchdogStatus() );
    objMngr->registerObject( new Waypoint() );
    objMngr->registerObject( new WaypointActive() );

}
