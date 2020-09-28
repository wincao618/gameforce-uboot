/*
 * (C) Copyright 2019 Hardkernel Co., Ltd
 *
 * SPDX-License-Identifier:     GPL-2.0+
 */
#ifndef _CMD_ODROIDTEST_H_
#define _CMD_ODROIDTEST_H_

#include <common.h>
#include <dm.h>
#include <console.h>
#include <key.h>
#include <adc.h>
#include <pwm.h>
#include <odroidgo2_status.h>
#include <rockchip_display_cmds.h>

#define NUMGPIOKEYS	15

struct key_arrays {
	const char * name;
	u32 code;
	u32 x;
	u32 y;
	u32 chk; /* 0:red, 1:blue */
};

struct key_arrays gpiokeys[NUMGPIOKEYS] = {
	{"[sw1]", BTN_DPAD_UP, 138, 11, 0},
	{"[sw2]", BTN_DPAD_DOWN, 138, 17, 0},
	{"[sw3]", BTN_DPAD_LEFT, 66, 14, 0},
	{"[sw4]", BTN_DPAD_RIGHT, 220, 14, 0},
	{"[sw5]", BTN_EAST, 550, 14, 0},
	{"[sw6]", BTN_SOUTH, 478, 17, 0},
	{"[sw7]", BTN_WEST, 402, 14, 0},
	{"[sw8]", BTN_NORTH, 478, 11, 0},
	{"[sw9]", BTN_TRIGGER_HAPPY1, 318, 25, 0},//home
	{"[sw10]", BTN_SELECT, 432, 25, 0},//set
	{"[sw11]", BTN_START, 528, 25, 0},//start
	{"[sw12]", BTN_TL, 114, 5, 0},
	{"[sw13]", BTN_TL2, 210, 5, 0},
	{"[sw14]", BTN_TR, 478, 5, 0},
	{"[sw15]", BTN_TR2, 384, 5, 0},
};

struct key_arrays adckeys[6] = {
	{"[LEFT]", 0, 90, 9, 0},
	{"[RIGHT]", 0, 340, 9, 0},
	{"[UP]", 0, 220, 4, 0},
	{"[DOWN]", 0, 218, 14, 0},
	{"[VOLUME DOWN]", 0, 90, 25, 0},
	{"[VOLUME UP]", 0, 250, 25, 0},
};

#endif /* _CMD_ODROIDTEST_ */
