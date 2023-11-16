#ifndef __BLE_AMS_H
#define __BLE_AMS_H

#include <zephyr/kernel.h>

int ble_ams_init(void);

int ble_ams_play_pause(void);

int ble_ams_next_track(void);

int ble_ams_previous_track(void);

#endif