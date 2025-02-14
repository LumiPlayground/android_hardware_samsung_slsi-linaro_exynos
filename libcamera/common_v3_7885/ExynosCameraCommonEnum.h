/*
**
** Copyright 2013, Samsung Electronics Co. LTD
**
** Licensed under the Apache License, Version 2.0 (the "License");
** you may not use this file except in compliance with the License.
** You may obtain a copy of the License at
**
**     http://www.apache.org/licenses/LICENSE-2.0
**
** Unless required by applicable law or agreed to in writing, software
** distributed under the License is distributed on an "AS IS" BASIS,
** WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
** See the License for the specific language governing permissions and
** limitations under the License.
*/

#ifndef EXYNOS_CAMERA_COMMON_CONFIG_H
#define EXYNOS_CAMERA_COMMON_CONFIG_H

typedef enum
{
    SENSOR_NAME_NOTHING             = 0,
    SENSOR_NAME_S5K3H2              = 1, // 1 ~ 100, SLSI sensors
    SENSOR_NAME_S5K6A3              = 2,
    SENSOR_NAME_S5K3H5              = 3,
    SENSOR_NAME_S5K3H7              = 4,
    SENSOR_NAME_S5K3H7_SUNNY        = 5,
    SENSOR_NAME_S5K3H7_SUNNY_2M     = 6,
    SENSOR_NAME_S5K6B2              = 7,
    SENSOR_NAME_S5K3L2              = 8,
    SENSOR_NAME_S5K4E5              = 9,
    SENSOR_NAME_S5K2P2              = 10,
    SENSOR_NAME_S5K8B1              = 11,
    SENSOR_NAME_S5K1P2              = 12,
    SENSOR_NAME_S5K4H5              = 13,
    SENSOR_NAME_S5K3M2              = 14,
    SENSOR_NAME_S5K2P2_12M          = 15,
    SENSOR_NAME_S5K6D1              = 16,
    SENSOR_NAME_S5K5E3              = 17,
    SENSOR_NAME_S5K2T2              = 18,
    SENSOR_NAME_S5K2P3              = 19,
    SENSOR_NAME_S5K2P8              = 20,
    SENSOR_NAME_S5K4E6              = 21,
    SENSOR_NAME_S5K5E2              = 22,
    SENSOR_NAME_S5K3P3              = 23,
    SENSOR_NAME_S5K4H5YC            = 24,
    SENSOR_NAME_S5K3L8_MASTER       = 25,
    SENSOR_NAME_S5K3L8_SLAVE        = 26,
    SENSOR_NAME_S5K4H8              = 27,
    SENSOR_NAME_S5K2L1              = 29,

    SENSOR_NAME_S5K3H1              = 31,
    SENSOR_NAME_S5K2L2              = 32,
    SENSOR_NAME_S5K3M3              = 33,
    SENSOR_NAME_S5K4H5YC_FF         = 34,
    SENSOR_NAME_S5K2L7              = 35,
    SENSOR_NAME_S5K2P7SQ            = 43,
    SENSOR_NAME_S5K3P8SP            = 44,
    SENSOR_NAME_S5K2P7SX            = 45,
    SENSOR_NAME_S5K4EC              = 57,
    SENSOR_NAME_S5K2P6              = 58,

    SENSOR_NAME_IMX135              = 101, // 101 ~ 200 Sony sensors
    SENSOR_NAME_IMX134              = 102,
    SENSOR_NAME_IMX175              = 103,
    SENSOR_NAME_IMX240              = 104,
    SENSOR_NAME_IMX228              = 106,
    SENSOR_NAME_IMX219              = 107,
    SENSOR_NAME_IMX230              = 108,
    SENSOR_NAME_IMX260              = 109,
    SENSOR_NAME_IMX258              = 110,
    SENSOR_NAME_IMX320              = 111,
    SENSOR_NAME_IMX333              = 112,

    SENSOR_NAME_SR261               = 201, // 201 ~ 300 Other vendor sensors
    SENSOR_NAME_OV5693              = 202,
    SENSOR_NAME_SR544               = 203,
    SENSOR_NAME_OV5670              = 204,
    SENSOR_NAME_OV8865              = 205,
    SENSOR_NAME_SR259               = 206,

    SENSOR_NAME_S5K5E6              = 254, // IRIS Camera Sensor
    
    SENSOR_NAME_CUSTOM              = 301,
    SENSOR_NAME_SR200               = 302, // SoC Module
    SENSOR_NAME_SR352               = 303,
    SENSOR_NAME_SR130PC20           = 304,
    SENSOR_NAME_END,

}IS_SensorNameEnum;

/*
 * Master camera can have BYPASS, SYNC types
 * Slave camera can have SYNC, SWITCH types
 *
 * - BYPASS : used master camera's frame only
 * - SYNC :   used master/slave camera's frames
 * - SWITCH : used slave camera's frame only
 */
typedef enum sync_type
{
    SYNC_TYPE_BASE,
    SYNC_TYPE_BYPASS,
    SYNC_TYPE_SYNC,
    SYNC_TYPE_SWITCH,
    SYNC_TYPE_MAX,
} sync_type_t;

typedef enum frame_factory_state {
    FRAME_FACTORY_STATE_NONE    = 0,
    FRAME_FACTORY_STATE_CREATE  = 1,
    FRAME_FACTORY_STATE_INIT    = 2,
    FRAME_FACTORY_STATE_RUN     = 3,
    FRAME_FACTORY_STATE_SWITCH  = 4,
    FRAME_FACTORY_STATE_MAX     = 5,
} frame_factory_state_t;

enum HW_CONNECTION_MODE {
    HW_CONNECTION_MODE_M2M                  = 0,
    HW_CONNECTION_MODE_OTF,
    HW_CONNECTION_MODE_M2M_BUFFER_HIDING,
};

#endif /* EXYNOS_CAMERA_COMMON_CONFIG_H */
