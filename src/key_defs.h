/* Kaleidoscope - Firmware for computer input devices
 * Copyright (C) 2013-2018  Keyboard.io, Inc.
 *
 * This program is free software: you can redistribute it and/or modify it under
 * the terms of the GNU General Public License as published by the Free Software
 * Foundation, version 3.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE. See the GNU General Public License for more
 * details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program. If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once


#include "HIDTables.h"

#include "key_defs_keyboard.h"
#include "key_defs_sysctl.h"
#include "key_defs_consumerctl.h"
#include "key_defs_keymaps.h"

#include "key_defs_aliases.h"

#ifdef ARDUINO_VIRTUAL
#include "VirtualHID/VirtualHID.h"
#else
#include "KeyboardioHID.h"
#endif

namespace kaleidoscope {

union Key {

  struct {
    uint8_t keyCode;
    uint8_t flags;
  };
  uint16_t raw;

  constexpr bool operator==(const uint16_t rhs) const {
    return this->raw == rhs;
  }
  constexpr bool operator==(const Key& rhs) const {
    return this->raw == rhs.raw;
  }
  Key& operator=(const uint16_t raw) {
    this->raw = raw;
    return *this;
  }
  constexpr bool operator!=(const Key& rhs) const {
    return !(*this == rhs);
  }
  constexpr bool operator>=(const uint16_t raw) const {
    return this->raw >= raw;
  }
  constexpr bool operator<=(const uint16_t raw) const {
    return this->raw <= raw;
  }
  constexpr bool operator>(const uint16_t raw) const {
    return this->raw > raw;
  }
  constexpr bool operator<(const uint16_t raw) const {
    return this->raw < raw;
  }
  constexpr bool operator>=(const Key& other) const {
    return this->raw >= other.raw;
  }
  constexpr bool operator<=(const Key& other) const {
    return this->raw <= other.raw;
  }
  constexpr bool operator>(const Key& other) const {
    return this->raw > other.raw;
  }
  constexpr bool operator<(const Key& other) const {
    return this->raw < other.raw;
  }
};

} // namespace kaleidoscope

// For compatibility reasons make the Key class also available
// in global namespace.
//
typedef kaleidoscope::Key Key;
typedef kaleidoscope::Key Key_;

#define KEY_FLAGS         B00000000
#define CTRL_HELD         B00000001
#define LALT_HELD         B00000010
#define RALT_HELD         B00000100
#define SHIFT_HELD        B00001000
#define GUI_HELD          B00010000
// #define IS_MACRO       B00100000  // defined in Kaleidoscope-Macros/src/MacroKeyDefs.h
#define SYNTHETIC         B01000000
#define RESERVED          B10000000

#define LCTRL(k)  ((Key) { k.keyCode, k.flags | CTRL_HELD })
#define LALT(k)   ((Key) { k.keyCode, k.flags | LALT_HELD })
#define RALT(k)   ((Key) { k.keyCode, k.flags | RALT_HELD })
#define LSHIFT(k) ((Key) { k.keyCode, k.flags | SHIFT_HELD })
#define LGUI(k)   ((Key) { k.keyCode, k.flags | GUI_HELD })

// we assert that synthetic keys can never have keys held, so we reuse the _HELD bits
#define IS_SYSCTL                  B00000001
#define IS_INTERNAL                B00000010
#define SWITCH_TO_KEYMAP           B00000100
#define IS_CONSUMER                B00001000


#define Key_NoKey (Key) { 0,  KEY_FLAGS }
#define Key_skip (Key) { 0,  KEY_FLAGS }
#define Key_Transparent (Key){ .raw = 0xffff }
#define ___ Key_Transparent
#define XXX Key_NoKey






#define KEY_BACKLIGHT_DOWN 0xF1
#define KEY_BACKLIGHT_UP 0xF2
#define Key_BacklightDown (Key) { KEY_BACKLIGHT_DOWN,  KEY_FLAGS }
#define Key_BacklightUp (Key) { KEY_BACKLIGHT_UP,  KEY_FLAGS }
#define KEY_RIGHT_FN2 0xfe
#define Key_RFN2 (Key) { KEY_RIGHT_FN2,  KEY_FLAGS }
#define KEY_LEFT_FN2 0xff
#define Key_LFN2 (Key) { KEY_LEFT_FN2,  KEY_FLAGS }


/* Most Consumer keys are more then 8bit, the highest Consumer hid code
   uses 10bit. By using the 11bit as flag to indicate a consumer keys was activate we can
   use the 10 lsb as the HID Consumer code. If you need to get the keycode of a Consumer key
   use the CONSUMER(key) macro this will return the 10bit keycode.
*/
#define CONSUMER(key) (key.raw & 0x03FF)
#define CONSUMER_KEY(code, flags) (Key) { .raw = (code) | ((flags | SYNTHETIC|IS_CONSUMER) << 8) }
