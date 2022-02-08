/*
 *
 *    Copyright (c) 2021 Project CHIP Authors
 *
 *    Licensed under the Apache License, Version 2.0 (the "License");
 *    you may not use this file except in compliance with the License.
 *    You may obtain a copy of the License at
 *
 *        http://www.apache.org/licenses/LICENSE-2.0
 *
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the License for the specific language governing permissions and
 *    limitations under the License.
 */

// THIS FILE IS GENERATED BY ZAP

// Prevent multiple inclusion
#pragma once

// User options for plugin Binding Table Library
#define EMBER_BINDING_TABLE_SIZE 10

/**** Network Section ****/
#define EMBER_SUPPORTED_NETWORKS (1)

#define EMBER_APS_UNICAST_MESSAGE_COUNT 10

/* Cluster macros for all */
#define ZCL_USING_POWER_CONFIG_CLUSTER_SERVER
#define ZCL_USING_DEVICE_TEMP_CLUSTER_SERVER
#define ZCL_USING_IDENTIFY_CLUSTER_SERVER                   // used in util
#define ZCL_USING_GROUPS_CLUSTER_SERVER
#define ZCL_USING_SCENES_CLUSTER_SERVER
#define ZCL_USING_ON_OFF_CLUSTER_SERVER                     // used in scenes
#define ZCL_USING_ON_OFF_SWITCH_CONFIG_CLUSTER_SERVER
#define ZCL_USING_LEVEL_CONTROL_CLUSTER_SERVER              // used in scenes
#define ZCL_USING_ALARM_CLUSTER_SERVER
#define ZCL_USING_TIME_CLUSTER_SERVER
#define ZCL_USING_BINARY_INPUT_BASIC_CLUSTER_SERVER
#define ZCL_USING_POWER_PROFILE_CLUSTER_SERVER
#define ZCL_USING_APPLIANCE_CONTROL_CLUSTER_SERVER
#define ZCL_USING_PWM_CLUSTER_SERVER
#define ZCL_USING_DESCRIPTOR_CLUSTER_SERVER
#define ZCL_USING_BINDING_CLUSTER_SERVER
#define ZCL_USING_ACCESS_CONTROL_CLUSTER_SERVER
#define ZCL_USING_POLL_CONTROL_CLUSTER_SERVER
#define ZCL_USING_BRIDGED_ACTIONS_CLUSTER_SERVER
#define ZCL_USING_BASIC_CLUSTER_SERVER
#define ZCL_USING_OTA_PROVIDER_CLUSTER_SERVER
#define ZCL_USING_OTA_REQUESTOR_CLUSTER_SERVER
#define ZCL_USING_LOCALIZATION_CONFIGURATION_CLUSTER_SERVER
#define ZCL_USING_LOCALIZATION_TIME_FORMAT_CLUSTER_SERVER
#define ZCL_USING_LOCALIZATION_UNIT_CLUSTER_SERVER
#define ZCL_USING_POWER_SOURCE_CONFIGURATION_CLUSTER_SERVER
#define ZCL_USING_POWER_SOURCE_CLUSTER_SERVER
#define ZCL_USING_GENERAL_COMMISSIONING_CLUSTER_SERVER
#define ZCL_USING_NETWORK_COMMISSIONING_CLUSTER_SERVER
#define ZCL_USING_DIAGNOSTIC_LOGS_CLUSTER_SERVER
#define ZCL_USING_GENERAL_DIAGNOSTICS_CLUSTER_SERVER
#define ZCL_USING_SOFTWARE_DIAGNOSTICS_CLUSTER_SERVER
#define ZCL_USING_THREAD_NETWORK_DIAGNOSTICS_CLUSTER_SERVER
#define ZCL_USING_WIFI_NETWORK_DIAGNOSTICS_CLUSTER_SERVER
#define ZCL_USING_ETHERNET_NETWORK_DIAGNOSTICS_CLUSTER_SERVER
#define ZCL_USING_TIME_SYNCHRONIZATION_CLUSTER_SERVER
#define ZCL_USING_BRIDGED_DEVICE_BASIC_CLUSTER_SERVER
#define ZCL_USING_SWITCH_CLUSTER_SERVER
#define ZCL_USING_ADMINISTRATOR_COMMISSIONING_CLUSTER_SERVER
#define ZCL_USING_OPERATIONAL_CREDENTIALS_CLUSTER_SERVER
#define ZCL_USING_GROUP_KEY_MANAGEMENT_CLUSTER_SERVER
#define ZCL_USING_FIXED_LABEL_CLUSTER_SERVER
#define ZCL_USING_USER_LABEL_CLUSTER_SERVER
#define ZCL_USING_PROXY_CONFIGURATION_CLUSTER_SERVER
#define ZCL_USING_PROXY_DISCOVERY_CLUSTER_SERVER
#define ZCL_USING_PROXY_VALID_CLUSTER_SERVER
#define ZCL_USING_BOOLEAN_STATE_CLUSTER_SERVER
#define ZCL_USING_MODE_SELECT_CLUSTER_SERVER
#define ZCL_USING_SHADE_CONFIG_CLUSTER_SERVER
#define ZCL_USING_DOOR_LOCK_CLUSTER_SERVER                  // used in scenes
#define ZCL_USING_WINDOW_COVERING_CLUSTER_SERVER            // used in scenes
#define ZCL_USING_BARRIER_CONTROL_CLUSTER_SERVER
#define ZCL_USING_PUMP_CONFIG_CONTROL_CLUSTER_SERVER
#define ZCL_USING_THERMOSTAT_CLUSTER_SERVER                 // used in scenes
#define ZCL_USING_FAN_CONTROL_CLUSTER_SERVER
#define ZCL_USING_DEHUMID_CONTROL_CLUSTER_SERVER
#define ZCL_USING_THERMOSTAT_UI_CONFIG_CLUSTER_SERVER
#define ZCL_USING_COLOR_CONTROL_CLUSTER_SERVER              // used in scenes
#define ZCL_USING_BALLAST_CONFIGURATION_CLUSTER_SERVER
#define ZCL_USING_ILLUMINANCE_MEASUREMENT_CLUSTER_SERVER
#define ZCL_USING_TEMP_MEASUREMENT_CLUSTER_SERVER
#define ZCL_USING_PRESSURE_MEASUREMENT_CLUSTER_SERVER
#define ZCL_USING_FLOW_MEASUREMENT_CLUSTER_SERVER
#define ZCL_USING_RELATIVE_HUMIDITY_MEASUREMENT_CLUSTER_SERVER
#define ZCL_USING_OCCUPANCY_SENSING_CLUSTER_SERVER
#define ZCL_USING_CARBON_MONOXIDE_CONCENTRATION_MEASUREMENT_CLUSTER_SERVER
#define ZCL_USING_CARBON_DIOXIDE_CONCENTRATION_MEASUREMENT_CLUSTER_SERVER
#define ZCL_USING_ETHYLENE_CONCENTRATION_MEASUREMENT_CLUSTER_SERVER
#define ZCL_USING_ETHYLENE_OXIDE_CONCENTRATION_MEASUREMENT_CLUSTER_SERVER
#define ZCL_USING_HYDROGEN_CONCENTRATION_MEASUREMENT_CLUSTER_SERVER
#define ZCL_USING_HYDROGEN_SULPHIDE_CONCENTRATION_MEASUREMENT_CLUSTER_SERVER
#define ZCL_USING_NITRIC_OXIDE_CONCENTRATION_MEASUREMENT_CLUSTER_SERVER
#define ZCL_USING_NITROGEN_DIOXIDE_CONCENTRATION_MEASUREMENT_CLUSTER_SERVER
#define ZCL_USING_OXYGEN_CONCENTRATION_MEASUREMENT_CLUSTER_SERVER
#define ZCL_USING_OZONE_CONCENTRATION_MEASUREMENT_CLUSTER_SERVER
#define ZCL_USING_SULFUR_DIOXIDE_CONCENTRATION_MEASUREMENT_CLUSTER_SERVER
#define ZCL_USING_DISSOLVED_OXYGEN_CONCENTRATION_MEASUREMENT_CLUSTER_SERVER
#define ZCL_USING_BROMATE_CONCENTRATION_MEASUREMENT_CLUSTER_SERVER
#define ZCL_USING_CHLORAMINES_CONCENTRATION_MEASUREMENT_CLUSTER_SERVER
#define ZCL_USING_CHLORINE_CONCENTRATION_MEASUREMENT_CLUSTER_SERVER
#define ZCL_USING_FECAL_COLIFORM_AND_E_COLI_CONCENTRATION_MEASUREMENT_CLUSTER_SERVER
#define ZCL_USING_FLUORIDE_CONCENTRATION_MEASUREMENT_CLUSTER_SERVER
#define ZCL_USING_HALOACETIC_ACIDS_CONCENTRATION_MEASUREMENT_CLUSTER_SERVER
#define ZCL_USING_TOTAL_TRIHALOMETHANES_CONCENTRATION_MEASUREMENT_CLUSTER_SERVER
#define ZCL_USING_TOTAL_COLIFORM_BACTERIA_CONCENTRATION_MEASUREMENT_CLUSTER_SERVER
#define ZCL_USING_TURBIDITY_CONCENTRATION_MEASUREMENT_CLUSTER_SERVER
#define ZCL_USING_COPPER_CONCENTRATION_MEASUREMENT_CLUSTER_SERVER
#define ZCL_USING_LEAD_CONCENTRATION_MEASUREMENT_CLUSTER_SERVER
#define ZCL_USING_MANGANESE_CONCENTRATION_MEASUREMENT_CLUSTER_SERVER
#define ZCL_USING_SULFATE_CONCENTRATION_MEASUREMENT_CLUSTER_SERVER
#define ZCL_USING_BROMODICHLOROMETHANE_CONCENTRATION_MEASUREMENT_CLUSTER_SERVER
#define ZCL_USING_BROMOFORM_CONCENTRATION_MEASUREMENT_CLUSTER_SERVER
#define ZCL_USING_CHLORODIBROMOMETHANE_CONCENTRATION_MEASUREMENT_CLUSTER_SERVER
#define ZCL_USING_CHLOROFORM_CONCENTRATION_MEASUREMENT_CLUSTER_SERVER
#define ZCL_USING_SODIUM_CONCENTRATION_MEASUREMENT_CLUSTER_SERVER
#define ZCL_USING_IAS_ZONE_CLUSTER_SERVER
#define ZCL_USING_IAS_ACE_CLUSTER_SERVER
#define ZCL_USING_IAS_WD_CLUSTER_SERVER
#define ZCL_USING_WAKE_ON_LAN_CLUSTER_SERVER
#define ZCL_USING_CHANNEL_CLUSTER_SERVER
#define ZCL_USING_TARGET_NAVIGATOR_CLUSTER_SERVER
#define ZCL_USING_MEDIA_PLAYBACK_CLUSTER_SERVER
#define ZCL_USING_MEDIA_INPUT_CLUSTER_SERVER
#define ZCL_USING_LOW_POWER_CLUSTER_SERVER
#define ZCL_USING_KEYPAD_INPUT_CLUSTER_SERVER
#define ZCL_USING_CONTENT_LAUNCH_CLUSTER_SERVER
#define ZCL_USING_AUDIO_OUTPUT_CLUSTER_SERVER
#define ZCL_USING_APPLICATION_LAUNCHER_CLUSTER_SERVER
#define ZCL_USING_APPLICATION_BASIC_CLUSTER_SERVER
#define ZCL_USING_ACCOUNT_LOGIN_CLUSTER_SERVER
#define ZCL_USING_TEST_CLUSTER_SERVER
#define ZCL_USING_MESSAGING_CLUSTER_SERVER
#define ZCL_USING_APPLIANCE_IDENTIFICATION_CLUSTER_SERVER
#define ZCL_USING_METER_IDENTIFICATION_CLUSTER_SERVER
#define ZCL_USING_APPLIANCE_EVENTS_AND_ALERT_CLUSTER_SERVER
#define ZCL_USING_APPLIANCE_STATISTICS_CLUSTER_SERVER
#define ZCL_USING_ELECTRICAL_MEASUREMENT_CLUSTER_SERVER


/* Cluster specific macros which are generic */
#define EMBER_AF_PLUGIN_ON_OFF                              // used in level control

#define EMBER_AF_PLUGIN_LEVEL_CONTROL_MAXIMUM_LEVEL 255     // used in level control
#define EMBER_AF_PLUGIN_LEVEL_CONTROL_MINIMUM_LEVEL 0       // used in level control
#define EMBER_AF_PLUGIN_LEVEL_CONTROL_RATE 0                // used in level control

#define EMBER_AF_PLUGIN_COLOR_CONTROL_SERVER_XY             // used in color control
#define EMBER_AF_PLUGIN_COLOR_CONTROL_SERVER_TEMP           // used in color control
#define EMBER_AF_PLUGIN_COLOR_CONTROL_SERVER_HSV            // used in color control

#define EMBER_AF_PLUGIN_GROUPS_SERVER                       // used in scenes, util

#define EMBER_AF_PLUGIN_SCENES                              // used in groups, level control, on off


/* Other cluster specific macros which are made generic */
#define EMBER_AF_COLOR_CONTROL_CLUSTER_SERVER_ENDPOINT_COUNT (16)   // used in color control
#define EMBER_AF_ON_OFF_CLUSTER_SERVER_ENDPOINT_COUNT (16)          // used in on off
#define EMBER_AF_LEVEL_CONTROL_CLUSTER_SERVER_ENDPOINT_COUNT (16)   // used in level control
#define EMBER_AF_OTA_PROVIDER_CLUSTER_SERVER_ENDPOINT_COUNT (16)    // used in ota provider
#define EMBER_AF_IDENTIFY_CLUSTER_SERVER_ENDPOINT_COUNT (16)        // used in identify
#define EMBER_AF_CONTENT_LAUNCH_CLUSTER_SERVER_ENDPOINT_COUNT (16)  // used in content launch
#define EMBER_AF_ACCOUNT_LOGIN_CLUSTER_SERVER_ENDPOINT_COUNT (16)   // used in account login
#define EMBER_AF_APPLICATION_BASIC_CLUSTER_SERVER_ENDPOINT_COUNT (16)       // used in application basic
#define EMBER_AF_APPLICATION_LAUNCHER_CLUSTER_SERVER_ENDPOINT_COUNT (16)    // used in application launcher
#define EMBER_AF_AUDIO_OUTPUT_CLUSTER_SERVER_ENDPOINT_COUNT (16)    // used in audio output
#define EMBER_AF_CHANNEL_CLUSTER_SERVER_ENDPOINT_COUNT (16)         // used in channel
#define EMBER_AF_MEDIA_PLAYBACK_CLUSTER_SERVER_ENDPOINT_COUNT (16)  // used in media playback
#define EMBER_AF_TARGET_NAVIGATOR_CLUSTER_SERVER_ENDPOINT_COUNT (16)        // used in target navigator
#define EMBER_AF_MEDIA_INPUT_CLUSTER_SERVER_ENDPOINT_COUNT (16)     // used in media input
#define EMBER_AF_LOW_POWER_CLUSTER_SERVER_ENDPOINT_COUNT (16)       // used in low power
#define EMBER_AF_KEYPAD_INPUT_CLUSTER_SERVER_ENDPOINT_COUNT (16)    // used in keypad input

#define EMBER_AF_PLUGIN_SCENES_TABLE_SIZE 3                         // used in scenes       // TODO: check this again
