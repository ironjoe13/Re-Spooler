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
  Fontname: HD44780_W
  Copyright: A.Hardtung, public domain
  Capital A Height: 7, '1' Height: 7
  Calculated Max Values w= 5 h= 9 x= 2 y= 5 dx= 6 dy= 0 ascent= 8 len= 9
  Font Bounding box     w= 6 h= 9 x= 0 y=-2
  Calculated Min Values           x= 0 y=-1 dx= 0 dy= 0
  Pure Font   ascent = 7 descent=-1
  X Font      ascent = 7 descent=-1
  Max Font    ascent = 8 descent=-1
*/
#include <U8glib.h>
const u8g_fntpgm_uint8_t HD44780_W_5x7[3034] U8G_SECTION(".progmem.HD44780_W_5x7") = {
  0, 6, 9, 0, 254, 7, 2, 79, 3, 222, 16, 255, 255, 8, 255, 7,
  255, 4, 7, 7, 6, 0, 0, 16, 48, 112, 240, 112, 48, 16, 4, 7,
  7, 6, 1, 0, 128, 192, 224, 240, 224, 192, 128, 5, 3, 3, 6, 0,
  4, 216, 72, 144, 5, 3, 3, 6, 0, 4, 216, 144, 72, 5, 7, 7,
  6, 0, 0, 32, 112, 248, 0, 32, 112, 248, 5, 7, 7, 6, 0, 0,
  248, 112, 32, 0, 248, 112, 32, 5, 5, 5, 6, 0, 1, 112, 248, 248,
  248, 112, 5, 7, 7, 6, 0, 0, 8, 8, 40, 72, 248, 64, 32, 5,
  7, 7, 6, 0, 0, 32, 112, 168, 32, 32, 32, 32, 5, 7, 7, 6,
  0, 0, 32, 32, 32, 32, 168, 112, 32, 5, 5, 5, 6, 0, 1, 32,
  64, 248, 64, 32, 5, 5, 5, 6, 0, 1, 32, 16, 248, 16, 32, 5,
  7, 7, 6, 0, 0, 16, 32, 64, 32, 16, 0, 248, 5, 7, 7, 6,
  0, 0, 64, 32, 16, 32, 64, 0, 248, 5, 5, 5, 6, 0, 1, 32,
  32, 112, 112, 248, 5, 5, 5, 6, 0, 0, 248, 112, 112, 32, 32, 0,
  0, 0, 6, 0, 0, 1, 7, 7, 6, 2, 0, 128, 128, 128, 128, 128,
  0, 128, 3, 2, 2, 6, 1, 5, 160, 160, 5, 7, 7, 6, 0, 0,
  80, 80, 248, 80, 248, 80, 80, 5, 7, 7, 6, 0, 0, 32, 120, 160,
  112, 40, 240, 32, 5, 7, 7, 6, 0, 0, 192, 200, 16, 32, 64, 152,
  24, 5, 7, 7, 6, 0, 0, 96, 144, 160, 64, 168, 144, 104, 2, 3,
  3, 6, 1, 4, 192, 64, 128, 3, 7, 7, 6, 1, 0, 32, 64, 128,
  128, 128, 64, 32, 3, 7, 7, 6, 1, 0, 128, 64, 32, 32, 32, 64,
  128, 5, 5, 5, 6, 0, 1, 32, 168, 112, 168, 32, 5, 5, 5, 6,
  0, 1, 32, 32, 248, 32, 32, 2, 3, 3, 6, 2, 255, 192, 64, 128,
  5, 1, 1, 6, 0, 3, 248, 2, 2, 2, 6, 2, 0, 192, 192, 5,
  5, 5, 6, 0, 1, 8, 16, 32, 64, 128, 5, 7, 7, 6, 0, 0,
  112, 136, 152, 168, 200, 136, 112, 3, 7, 7, 6, 1, 0, 64, 192, 64,
  64, 64, 64, 224, 5, 7, 7, 6, 0, 0, 112, 136, 8, 112, 128, 128,
  248, 5, 7, 7, 6, 0, 0, 248, 16, 32, 16, 8, 8, 240, 5, 7,
  7, 6, 0, 0, 16, 48, 80, 144, 248, 16, 16, 5, 7, 7, 6, 0,
  0, 248, 128, 240, 8, 8, 136, 112, 5, 7, 7, 6, 0, 0, 48, 64,
  128, 240, 136, 136, 112, 5, 7, 7, 6, 0, 0, 248, 8, 16, 32, 32,
  32, 32, 5, 7, 7, 6, 0, 0, 112, 136, 136, 112, 136, 136, 112, 5,
  7, 7, 6, 0, 0, 112, 136, 136, 120, 8, 16, 96, 2, 5, 5, 6,
  2, 0, 192, 192, 0, 192, 192, 2, 6, 6, 6, 2, 255, 192, 192, 0,
  192, 64, 128, 4, 7, 7, 6, 0, 0, 16, 32, 64, 128, 64, 32, 16,
  5, 3, 3, 6, 0, 2, 248, 0, 248, 4, 7, 7, 6, 1, 0, 128,
  64, 32, 16, 32, 64, 128, 5, 7, 7, 6, 0, 0, 112, 136, 8, 16,
  32, 0, 32, 5, 6, 6, 6, 0, 0, 112, 136, 8, 104, 168, 112, 5,
  7, 7, 6, 0, 0, 112, 136, 136, 248, 136, 136, 136, 5, 7, 7, 6,
  0, 0, 240, 136, 136, 240, 136, 136, 240, 5, 7, 7, 6, 0, 0, 112,
  136, 128, 128, 128, 136, 112, 5, 7, 7, 6, 0, 0, 224, 144, 136, 136,
  136, 144, 224, 5, 7, 7, 6, 0, 0, 248, 128, 128, 240, 128, 128, 248,
  5, 7, 7, 6, 0, 0, 248, 128, 128, 240, 128, 128, 128, 5, 7, 7,
  6, 0, 0, 112, 136, 128, 184, 136, 136, 112, 5, 7, 7, 6, 0, 0,
  136, 136, 136, 248, 136, 136, 136, 1, 7, 7, 6, 2, 0, 128, 128, 128,
  128, 128, 128, 128, 5, 7, 7, 6, 0, 0, 56, 16, 16, 16, 16, 144,
  96, 5, 7, 7, 6, 0, 0, 136, 144, 160, 192, 160, 144, 136, 5, 7,
  7, 6, 0, 0, 128, 128, 128, 128, 128, 128, 248, 5, 7, 7, 6, 0,
  0, 136, 216, 168, 136, 136, 136, 136, 5, 7, 7, 6, 0, 0, 136, 136,
  200, 168, 152, 136, 136, 5, 7, 7, 6, 0, 0, 112, 136, 136, 136, 136,
  136, 112, 5, 7, 7, 6, 0, 0, 240, 136, 136, 240, 128, 128, 128, 5,
  7, 7, 6, 0, 0, 112, 136, 136, 136, 168, 144, 104, 5, 7, 7, 6,
  0, 0, 240, 136, 136, 240, 160, 144, 136, 5, 7, 7, 6, 0, 0, 120,
  128, 128, 112, 8, 8, 240, 5, 7, 7, 6, 0, 0, 248, 32, 32, 32,
  32, 32, 32, 5, 7, 7, 6, 0, 0, 136, 136, 136, 136, 136, 136, 112,
  5, 7, 7, 6, 0, 0, 136, 136, 136, 136, 136, 80, 32, 5, 7, 7,
  6, 0, 0, 136, 136, 136, 136, 136, 168, 80, 5, 7, 7, 6, 0, 0,
  136, 136, 80, 32, 80, 136, 136, 5, 7, 7, 6, 0, 0, 136, 136, 136,
  80, 32, 32, 32, 5, 7, 7, 6, 0, 0, 248, 8, 16, 32, 64, 128,
  248, 3, 7, 7, 6, 1, 0, 224, 128, 128, 128, 128, 128, 224, 5, 5,
  5, 6, 0, 1, 128, 64, 32, 16, 8, 3, 7, 7, 6, 1, 0, 224,
  32, 32, 32, 32, 32, 224, 5, 3, 3, 6, 0, 4, 32, 80, 136, 5,
  1, 1, 6, 0, 0, 248, 2, 2, 2, 6, 2, 5, 128, 64, 5, 5,
  5, 6, 0, 0, 112, 8, 120, 136, 120, 5, 7, 7, 6, 0, 0, 128,
  128, 176, 200, 136, 136, 240, 5, 5, 5, 6, 0, 0, 112, 128, 128, 136,
  112, 5, 7, 7, 6, 0, 0, 8, 8, 104, 152, 136, 136, 120, 5, 5,
  5, 6, 0, 0, 112, 136, 248, 128, 112, 5, 7, 7, 6, 0, 0, 48,
  72, 224, 64, 64, 64, 64, 5, 6, 6, 6, 0, 255, 112, 136, 136, 120,
  8, 112, 5, 7, 7, 6, 0, 0, 128, 128, 176, 200, 136, 136, 136, 1,
  7, 7, 6, 2, 0, 128, 0, 128, 128, 128, 128, 128, 3, 8, 8, 6,
  1, 255, 32, 0, 32, 32, 32, 32, 160, 64, 4, 7, 7, 6, 0, 0,
  128, 128, 144, 160, 192, 160, 144, 3, 7, 7, 6, 1, 0, 192, 64, 64,
  64, 64, 64, 224, 5, 5, 5, 6, 0, 0, 208, 168, 168, 168, 168, 5,
  5, 5, 6, 0, 0, 176, 200, 136, 136, 136, 5, 5, 5, 6, 0, 0,
  112, 136, 136, 136, 112, 5, 6, 6, 6, 0, 255, 240, 136, 136, 240, 128,
  128, 5, 6, 6, 6, 0, 255, 120, 136, 136, 120, 8, 8, 5, 5, 5,
  6, 0, 0, 176, 200, 128, 128, 128, 5, 5, 5, 6, 0, 0, 112, 128,
  112, 8, 240, 5, 7, 7, 6, 0, 0, 64, 64, 224, 64, 64, 72, 48,
  5, 5, 5, 6, 0, 0, 136, 136, 136, 152, 104, 5, 5, 5, 6, 0,
  0, 136, 136, 136, 80, 32, 5, 5, 5, 6, 0, 0, 136, 136, 168, 168,
  80, 5, 5, 5, 6, 0, 0, 136, 80, 32, 80, 136, 5, 6, 6, 6,
  0, 255, 136, 136, 136, 120, 8, 112, 5, 5, 5, 6, 0, 0, 248, 16,
  32, 64, 248, 3, 7, 7, 6, 1, 0, 32, 64, 64, 128, 64, 64, 32,
  1, 7, 7, 6, 2, 0, 128, 128, 128, 128, 128, 128, 128, 3, 7, 7,
  6, 1, 0, 128, 64, 64, 32, 64, 64, 128, 5, 6, 6, 6, 0, 1,
  8, 40, 72, 248, 64, 32, 5, 7, 7, 6, 0, 0, 32, 80, 136, 136,
  136, 136, 248, 5, 7, 7, 6, 0, 0, 248, 136, 128, 240, 136, 136, 240,
  5, 8, 8, 6, 0, 255, 120, 40, 40, 40, 72, 136, 248, 136, 5, 7,
  7, 6, 0, 0, 168, 168, 168, 112, 168, 168, 168, 5, 7, 7, 6, 0,
  0, 240, 8, 8, 112, 8, 8, 240, 5, 7, 7, 6, 0, 0, 136, 136,
  152, 168, 200, 136, 136, 5, 8, 8, 6, 0, 0, 80, 32, 136, 152, 168,
  168, 200, 136, 5, 7, 7, 6, 0, 0, 120, 40, 40, 40, 40, 168, 72,
  5, 7, 7, 6, 0, 0, 248, 136, 136, 136, 136, 136, 136, 5, 7, 7,
  6, 0, 0, 136, 136, 136, 80, 32, 64, 128, 5, 8, 8, 6, 0, 255,
  136, 136, 136, 136, 136, 136, 248, 8, 5, 7, 7, 6, 0, 0, 136, 136,
  136, 120, 8, 8, 8, 5, 7, 7, 6, 0, 0, 168, 168, 168, 168, 168,
  168, 248, 5, 8, 8, 6, 0, 255, 168, 168, 168, 168, 168, 168, 248, 8,
  5, 7, 7, 6, 0, 0, 192, 64, 64, 112, 72, 72, 112, 5, 7, 7,
  6, 0, 0, 136, 136, 136, 200, 168, 168, 200, 5, 7, 7, 6, 0, 0,
  112, 136, 40, 80, 8, 136, 112, 5, 5, 5, 6, 0, 0, 64, 160, 144,
  144, 104, 5, 7, 7, 6, 0, 0, 32, 48, 40, 40, 32, 224, 224, 5,
  7, 7, 6, 0, 0, 248, 136, 128, 128, 128, 128, 128, 5, 5, 5, 6,
  0, 0, 248, 80, 80, 80, 152, 5, 7, 7, 6, 0, 0, 248, 128, 64,
  32, 64, 128, 248, 5, 5, 5, 6, 0, 0, 120, 144, 144, 144, 96, 5,
  7, 7, 6, 0, 0, 48, 40, 56, 40, 200, 216, 24, 5, 6, 6, 6,
  0, 0, 8, 112, 160, 32, 32, 16, 5, 6, 6, 6, 0, 1, 32, 112,
  112, 112, 248, 32, 5, 7, 7, 6, 0, 0, 112, 136, 136, 248, 136, 136,
  112, 5, 5, 5, 6, 0, 0, 112, 136, 136, 80, 216, 5, 7, 7, 6,
  0, 0, 48, 72, 32, 80, 136, 136, 112, 5, 3, 3, 6, 0, 2, 88,
  168, 208, 5, 6, 6, 6, 0, 0, 80, 248, 248, 248, 112, 32, 5, 5,
  5, 6, 0, 0, 112, 128, 96, 136, 112, 5, 7, 7, 6, 0, 0, 112,
  136, 136, 136, 136, 136, 136, 5, 7, 7, 6, 0, 0, 216, 216, 216, 216,
  216, 216, 216, 1, 7, 7, 6, 2, 0, 128, 0, 128, 128, 128, 128, 128,
  5, 7, 7, 6, 0, 0, 32, 112, 160, 160, 168, 112, 32, 5, 7, 7,
  6, 0, 0, 48, 64, 64, 224, 64, 80, 168, 5, 5, 5, 6, 0, 0,
  136, 112, 80, 112, 136, 5, 7, 7, 6, 0, 0, 136, 80, 248, 32, 248,
  32, 32, 1, 7, 7, 6, 2, 0, 128, 128, 128, 0, 128, 128, 128, 5,
  8, 8, 6, 0, 0, 48, 72, 32, 80, 80, 32, 144, 96, 5, 7, 7,
  6, 0, 0, 24, 32, 32, 112, 32, 32, 192, 5, 7, 7, 6, 0, 0,
  248, 136, 184, 184, 184, 136, 248, 5, 7, 7, 6, 0, 0, 112, 8, 120,
  136, 120, 0, 248, 5, 5, 5, 6, 0, 1, 40, 80, 160, 80, 40, 5,
  7, 7, 6, 0, 0, 144, 168, 168, 232, 168, 168, 144, 5, 7, 7, 6,
  0, 0, 120, 136, 136, 120, 40, 72, 136, 5, 7, 7, 6, 0, 0, 248,
  136, 168, 136, 152, 168, 248, 2, 3, 3, 6, 2, 4, 64, 128, 192, 4,
  5, 5, 6, 0, 3, 96, 144, 144, 144, 96, 5, 7, 7, 6, 0, 0,
  32, 32, 248, 32, 32, 0, 248, 4, 5, 5, 6, 0, 3, 96, 144, 32,
  64, 240, 3, 5, 5, 6, 0, 3, 224, 32, 224, 32, 224, 5, 8, 8,
  6, 0, 0, 224, 144, 224, 128, 144, 184, 144, 24, 5, 8, 8, 6, 0,
  255, 136, 136, 136, 136, 152, 232, 128, 128, 5, 7, 7, 6, 0, 0, 120,
  152, 152, 120, 24, 24, 24, 2, 2, 2, 6, 2, 2, 192, 192, 5, 5,
  5, 6, 0, 0, 80, 136, 168, 168, 80, 3, 5, 5, 6, 0, 3, 64,
  192, 64, 64, 224, 5, 7, 7, 6, 0, 0, 112, 136, 136, 136, 112, 0,
  248, 5, 5, 5, 6, 0, 1, 160, 80, 40, 80, 160, 5, 7, 7, 6,
  0, 0, 136, 144, 168, 88, 184, 8, 8, 5, 7, 7, 6, 0, 0, 136,
  144, 184, 72, 152, 32, 56, 5, 8, 8, 6, 0, 0, 192, 64, 192, 72,
  216, 56, 8, 8, 5, 7, 7, 6, 0, 0, 32, 0, 32, 64, 128, 136,
  112, 5, 8, 8, 6, 0, 0, 64, 32, 32, 80, 136, 248, 136, 136, 5,
  8, 8, 6, 0, 0, 16, 32, 32, 80, 136, 248, 136, 136, 5, 8, 8,
  6, 0, 0, 32, 80, 0, 112, 136, 248, 136, 136, 5, 8, 8, 6, 0,
  0, 104, 144, 0, 112, 136, 248, 136, 136, 5, 8, 8, 6, 0, 0, 80,
  0, 32, 80, 136, 248, 136, 136, 5, 8, 8, 6, 0, 0, 32, 80, 32,
  112, 136, 248, 136, 136, 5, 7, 7, 6, 0, 0, 56, 96, 160, 184, 224,
  160, 184, 5, 8, 8, 6, 0, 255, 112, 136, 128, 128, 136, 112, 32, 96,
  5, 8, 8, 6, 0, 0, 64, 32, 0, 248, 128, 240, 128, 248, 5, 8,
  8, 6, 0, 0, 8, 16, 0, 248, 128, 240, 128, 248, 5, 8, 8, 6,
  0, 0, 32, 80, 0, 248, 128, 240, 128, 248, 5, 7, 7, 6, 0, 0,
  80, 0, 248, 128, 240, 128, 248, 3, 8, 8, 6, 1, 0, 128, 64, 0,
  224, 64, 64, 64, 224, 3, 8, 8, 6, 1, 0, 32, 64, 0, 224, 64,
  64, 64, 224, 3, 8, 8, 6, 1, 0, 64, 160, 0, 224, 64, 64, 64,
  224, 3, 7, 7, 6, 1, 0, 160, 0, 224, 64, 64, 64, 224, 5, 7,
  7, 6, 0, 0, 112, 72, 72, 232, 72, 72, 112, 5, 8, 8, 6, 0,
  0, 104, 144, 0, 136, 200, 168, 152, 136, 5, 8, 8, 6, 0, 0, 64,
  32, 112, 136, 136, 136, 136, 112, 5, 8, 8, 6, 0, 0, 16, 32, 112,
  136, 136, 136, 136, 112, 5, 8, 8, 6, 0, 0, 32, 80, 0, 112, 136,
  136, 136, 112, 5, 8, 8, 6, 0, 0, 104, 144, 0, 112, 136, 136, 136,
  112, 5, 8, 8, 6, 0, 0, 80, 0, 112, 136, 136, 136, 136, 112, 5,
  5, 5, 6, 0, 1, 136, 80, 32, 80, 136, 5, 7, 7, 6, 0, 0,
  112, 32, 112, 168, 112, 32, 112, 5, 8, 8, 6, 0, 0, 64, 32, 136,
  136, 136, 136, 136, 112, 5, 8, 8, 6, 0, 0, 16, 32, 136, 136, 136,
  136, 136, 112, 5, 8, 8, 6, 0, 0, 32, 80, 0, 136, 136, 136, 136,
  112, 5, 8, 8, 6, 0, 0, 80, 0, 136, 136, 136, 136, 136, 112, 5,
  8, 8, 6, 0, 0, 16, 32, 136, 80, 32, 32, 32, 32, 5, 8, 8,
  6, 0, 0, 192, 64, 112, 72, 72, 112, 64, 224, 5, 7, 7, 6, 0,
  0, 48, 72, 72, 112, 72, 72, 176, 5, 8, 8, 6, 0, 0, 64, 32,
  0, 112, 8, 120, 136, 120, 5, 8, 8, 6, 0, 0, 16, 32, 0, 112,
  8, 120, 136, 120, 5, 8, 8, 6, 0, 0, 32, 80, 0, 112, 8, 120,
  136, 120, 5, 8, 8, 6, 0, 0, 104, 144, 0, 112, 8, 120, 136, 120,
  5, 7, 7, 6, 0, 0, 80, 0, 112, 8, 120, 136, 120, 5, 8, 8,
  6, 0, 0, 32, 80, 32, 112, 8, 120, 136, 120, 5, 6, 6, 6, 0,
  0, 208, 40, 120, 160, 168, 80, 5, 6, 6, 6, 0, 255, 112, 128, 136,
  112, 32, 96, 5, 8, 8, 6, 0, 0, 64, 32, 0, 112, 136, 248, 128,
  112, 5, 8, 8, 6, 0, 0, 16, 32, 0, 112, 136, 248, 128, 112, 5,
  8, 8, 6, 0, 0, 32, 80, 0, 112, 136, 248, 128, 112, 5, 7, 7,
  6, 0, 0, 80, 0, 112, 136, 248, 128, 112, 3, 8, 8, 6, 1, 0,
  128, 64, 0, 64, 192, 64, 64, 224, 3, 8, 8, 6, 1, 0, 32, 64,
  0, 64, 192, 64, 64, 224, 3, 8, 8, 6, 1, 0, 64, 160, 0, 64,
  192, 64, 64, 224, 3, 7, 7, 6, 1, 0, 160, 0, 64, 192, 64, 64,
  224, 5, 7, 7, 6, 0, 0, 160, 64, 160, 16, 120, 136, 112, 5, 8,
  8, 6, 0, 0, 104, 144, 0, 176, 200, 136, 136, 136, 5, 8, 8, 6,
  0, 0, 64, 32, 0, 112, 136, 136, 136, 112, 5, 8, 8, 6, 0, 0,
  16, 32, 0, 112, 136, 136, 136, 112, 5, 8, 8, 6, 0, 0, 32, 80,
  0, 112, 136, 136, 136, 112, 5, 8, 8, 6, 0, 0, 104, 144, 0, 112,
  136, 136, 136, 112, 5, 7, 7, 6, 0, 0, 80, 0, 112, 136, 136, 136,
  112, 5, 5, 5, 6, 0, 1, 32, 0, 248, 0, 32, 5, 7, 7, 6,
  0, 0, 16, 32, 112, 168, 112, 32, 64, 5, 8, 8, 6, 0, 0, 64,
  32, 0, 136, 136, 136, 152, 104, 5, 8, 8, 6, 0, 0, 16, 32, 0,
  136, 136, 136, 152, 104, 5, 8, 8, 6, 0, 0, 32, 80, 0, 136, 136,
  136, 152, 104, 5, 7, 7, 6, 0, 0, 80, 0, 136, 136, 136, 152, 104,
  5, 9, 9, 6, 0, 255, 16, 32, 0, 136, 136, 136, 248, 8, 112, 4,
  7, 7, 6, 1, 0, 192, 64, 96, 80, 96, 64, 224, 5, 8, 8, 6,
  0, 255, 80, 0, 136, 136, 136, 248, 8, 112
};
