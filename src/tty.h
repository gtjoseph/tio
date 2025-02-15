/*
 * tio - a simple serial terminal I/O tool
 *
 * Copyright (c) 2014-2022  Martin Lund
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
 * 02110-1301, USA.
 */

#pragma once

#include <stdbool.h>

#define KEY_QUESTION 0x3f
#define KEY_B 0x62
#define KEY_C 0x63
#define KEY_E 0x65
#define KEY_H 0x68
#define KEY_L 0x6C
#define KEY_Q 0x71
#define KEY_S 0x73
#define KEY_T 0x74
#define KEY_SHIFT_T 0x54
#define KEY_CTRL_T 0x14
#define KEY_V 0x76
#define KEY_D 0x64
#define KEY_R 0x72
#define KEY_SHIFT_L 0x4C

#define NORMAL 0
#define HEX 1

extern bool interactive_mode;

void stdout_configure(void);
void stdin_configure(void);
void tty_configure(void);
int tty_connect(void);
void tty_wait_for_device(void);
void list_serial_devices(void);
