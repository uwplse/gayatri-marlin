/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
 * Velleman K8400 (Vertex)
 * 3DRAG clone
 *
 * K8400 has some minor differences over a normal 3Drag:
 *  - No X/Y max endstops
 *  - Second extruder step pin has moved
 *  - No power supply control
 *  - Second heater has moved pin
 */

#define BOARD_NAME              "K8400"
#define DEFAULT_MACHINE_NAME    "Vertex"
#define DEFAULT_SOURCE_CODE_URL "https://github.com/birkett/Vertex-K8400-Firmware"

#include "pins_3DRAG.h"

#undef  X_MAX_PIN
#define X_MAX_PIN     -1
#undef  Y_MAX_PIN
#define Y_MAX_PIN     -1

#undef E1_STEP_PIN
#define E1_STEP_PIN   32

#undef PS_ON_PIN
#undef KILL_PIN

#undef HEATER_1_PIN
#define HEATER_1_PIN  11
