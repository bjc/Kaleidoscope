/* -*- mode: c++ -*-
 * Kaleidoscope-Hardware-Imago -- Keyboardio Imago hardware support for Kaleidoscope
 * Copyright (C) 2018  Keyboard.io, Inc
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
 */

#pragma once

#ifdef ARDUINO_AVR_IMAGO

#include <Arduino.h>

#define HARDWARE_IMPLEMENTATION kaleidoscope::hardware::Imago
#include "Kaleidoscope-HIDAdaptor-KeyboardioHID.h"

#include "kaleidoscope/macro_helpers.h"

struct cRGB {
  uint8_t r, g, b;
};

#define CRGB(r,g,b) (cRGB){b, g, r}

namespace kaleidoscope {
namespace hardware {

class Imago {
 public:
  Imago(void) {}

  static constexpr uint8_t matrix_columns = 16;
  static constexpr uint8_t matrix_rows = 5;
  static constexpr int8_t led_count = 0;

  void syncLeds(void) {}
  void setCrgbAt(uint8_t row, byte col, cRGB color) {}
  void setCrgbAt(int8_t i, cRGB crgb) {}
  cRGB getCrgbAt(int8_t i) {
    return CRGB(0, 0, 0);
  }
  int8_t getLedIndex(uint8_t row, byte col) {
    return -1;
  }

  void scanMatrix(void);
  void readMatrix(void);
  void actOnMatrixScan(void);
  void setup();

  /** Detaching from / attaching to the host.
   *
   * These two functions should detach the device from (or attach it to) the
   * host, preferably without rebooting the device. Their purpose is to allow
   * one to do some configuration inbetween, so the re-attach happens with
   * different properties. The device remains powered between these operations,
   * only the connection to the host gets severed.
   */
  void detachFromHost();
  void attachToHost();

  /* Key masking
   * -----------
   *
   * There are situations when one wants to ignore key events for a while, and
   * mask them out. These functions help do that. In isolation, they do nothing,
   * plugins and the core firmware is expected to make use of these.
   *
   * See `handleKeyswitchEvent` in the Kaleidoscope sources for a use-case.
   */
  void maskKey(uint8_t row, byte col);
  void unMaskKey(uint8_t row, byte col);
  bool isKeyMasked(uint8_t row, byte col);

  /** Key switch states
   *
   * These methods offer a way to peek at the key switch states, for those cases
   * where we need to deal with the state closest to the hardware. Some methods
   * offer a way to check if a key is pressed, others return the number of
   * pressed keys.
   */
  /**
   * Check if a key is pressed at a given position.
   *
   * @param row is the row the key is located at in the matrix.
   * @param col is the column the key is located at in the matrix.
   *
   * @returns true if the key is pressed, false otherwise.
   */
  bool isKeyswitchPressed(uint8_t row, byte col);
  /**
   * Check if a key is pressed at a given position.
   *
   * @param keyIndex is the key index, as calculated by `keyIndex`.
   *
   * @note Key indexes start at 1, not 0!
   *
   * @returns true if the key is pressed, false otherwise.
   */
  bool isKeyswitchPressed(uint8_t keyIndex);
  /**
   * Check the number of key switches currently pressed.
   *
   * @returns the number of keys pressed.
   */
  uint8_t pressedKeyswitchCount();

  static uint8_t debounce;

 private:
  static uint16_t previousKeyState_[matrix_rows];
  static uint16_t keyState_[matrix_rows];
  static uint16_t masks_[matrix_rows];

  static void readMatrixRow(uint8_t row);
  static uint16_t readCols();
  static void selectRow(uint8_t row);
  static void unselectRow(uint8_t row);

  static uint8_t debounce_matrix_[matrix_rows][matrix_columns];
  static uint16_t debounceMaskForRow(uint8_t row);
  static void debounceRow(uint16_t change, uint8_t row);
};



/* To be used by the hardware implementations, `keyIndex` tells us the index of
 * a key, from which we can figure out the row and column as needed. The index
 * starts at one, so that plugins that work with a list of key indexes can use
 * zero as a sentinel. This is important, because when we initialize arrays with
 * fewer elements than the declared array size, the remaining elements will be
 * zero. We can use this to avoid having to explicitly add a sentinel in
 * user-facing code.
 */
constexpr uint8_t keyIndex(byte row, byte col) {
  return (row * kaleidoscope::hardware::Imago::matrix_columns) + col + 1;
}
/* 
  This oneliner will generate these constexprs:

  perl -e'for($i=0;$i<6;$i++) { for ($j=0; $j<16;$j++) { print "constexpr uint8_t R${i}C${j} = keyIndex($i, $j);\n"}};'

*/


constexpr uint8_t R0C0 = keyIndex(0, 0);
constexpr uint8_t R0C1 = keyIndex(0, 1);
constexpr uint8_t R0C2 = keyIndex(0, 2);
constexpr uint8_t R0C3 = keyIndex(0, 3);
constexpr uint8_t R0C4 = keyIndex(0, 4);
constexpr uint8_t R0C5 = keyIndex(0, 5);
constexpr uint8_t R0C6 = keyIndex(0, 6);
constexpr uint8_t R0C7 = keyIndex(0, 7);
constexpr uint8_t R0C8 = keyIndex(0, 8);
constexpr uint8_t R0C9 = keyIndex(0, 9);
constexpr uint8_t R0C10 = keyIndex(0, 10);
constexpr uint8_t R0C11 = keyIndex(0, 11);
constexpr uint8_t R0C12 = keyIndex(0, 12);
constexpr uint8_t R0C13 = keyIndex(0, 13);
constexpr uint8_t R0C14 = keyIndex(0, 14);
constexpr uint8_t R0C15 = keyIndex(0, 15);
constexpr uint8_t R1C0 = keyIndex(1, 0);
constexpr uint8_t R1C1 = keyIndex(1, 1);
constexpr uint8_t R1C2 = keyIndex(1, 2);
constexpr uint8_t R1C3 = keyIndex(1, 3);
constexpr uint8_t R1C4 = keyIndex(1, 4);
constexpr uint8_t R1C5 = keyIndex(1, 5);
constexpr uint8_t R1C6 = keyIndex(1, 6);
constexpr uint8_t R1C7 = keyIndex(1, 7);
constexpr uint8_t R1C8 = keyIndex(1, 8);
constexpr uint8_t R1C9 = keyIndex(1, 9);
constexpr uint8_t R1C10 = keyIndex(1, 10);
constexpr uint8_t R1C11 = keyIndex(1, 11);
constexpr uint8_t R1C12 = keyIndex(1, 12);
constexpr uint8_t R1C13 = keyIndex(1, 13);
constexpr uint8_t R1C14 = keyIndex(1, 14);
constexpr uint8_t R1C15 = keyIndex(1, 15);
constexpr uint8_t R2C0 = keyIndex(2, 0);
constexpr uint8_t R2C1 = keyIndex(2, 1);
constexpr uint8_t R2C2 = keyIndex(2, 2);
constexpr uint8_t R2C3 = keyIndex(2, 3);
constexpr uint8_t R2C4 = keyIndex(2, 4);
constexpr uint8_t R2C5 = keyIndex(2, 5);
constexpr uint8_t R2C6 = keyIndex(2, 6);
constexpr uint8_t R2C7 = keyIndex(2, 7);
constexpr uint8_t R2C8 = keyIndex(2, 8);
constexpr uint8_t R2C9 = keyIndex(2, 9);
constexpr uint8_t R2C10 = keyIndex(2, 10);
constexpr uint8_t R2C11 = keyIndex(2, 11);
constexpr uint8_t R2C12 = keyIndex(2, 12);
constexpr uint8_t R2C13 = keyIndex(2, 13);
constexpr uint8_t R2C14 = keyIndex(2, 14);
constexpr uint8_t R2C15 = keyIndex(2, 15);
constexpr uint8_t R3C0 = keyIndex(3, 0);
constexpr uint8_t R3C1 = keyIndex(3, 1);
constexpr uint8_t R3C2 = keyIndex(3, 2);
constexpr uint8_t R3C3 = keyIndex(3, 3);
constexpr uint8_t R3C4 = keyIndex(3, 4);
constexpr uint8_t R3C5 = keyIndex(3, 5);
constexpr uint8_t R3C6 = keyIndex(3, 6);
constexpr uint8_t R3C7 = keyIndex(3, 7);
constexpr uint8_t R3C8 = keyIndex(3, 8);
constexpr uint8_t R3C9 = keyIndex(3, 9);
constexpr uint8_t R3C10 = keyIndex(3, 10);
constexpr uint8_t R3C11 = keyIndex(3, 11);
constexpr uint8_t R3C12 = keyIndex(3, 12);
constexpr uint8_t R3C13 = keyIndex(3, 13);
constexpr uint8_t R3C14 = keyIndex(3, 14);
constexpr uint8_t R3C15 = keyIndex(3, 15);
constexpr uint8_t R4C0 = keyIndex(4, 0);
constexpr uint8_t R4C1 = keyIndex(4, 1);
constexpr uint8_t R4C2 = keyIndex(4, 2);
constexpr uint8_t R4C3 = keyIndex(4, 3);
constexpr uint8_t R4C4 = keyIndex(4, 4);
constexpr uint8_t R4C5 = keyIndex(4, 5);
constexpr uint8_t R4C6 = keyIndex(4, 6);
constexpr uint8_t R4C7 = keyIndex(4, 7);
constexpr uint8_t R4C8 = keyIndex(4, 8);
constexpr uint8_t R4C9 = keyIndex(4, 9);
constexpr uint8_t R4C10 = keyIndex(4, 10);
constexpr uint8_t R4C11 = keyIndex(4, 11);
constexpr uint8_t R4C12 = keyIndex(4, 12);
constexpr uint8_t R4C13 = keyIndex(4, 13);
constexpr uint8_t R4C14 = keyIndex(4, 14);
constexpr uint8_t R4C15 = keyIndex(4, 15);
constexpr uint8_t R5C0 = keyIndex(5, 0);
constexpr uint8_t R5C1 = keyIndex(5, 1);
constexpr uint8_t R5C2 = keyIndex(5, 2);
constexpr uint8_t R5C3 = keyIndex(5, 3);
constexpr uint8_t R5C4 = keyIndex(5, 4);
constexpr uint8_t R5C5 = keyIndex(5, 5);
constexpr uint8_t R5C6 = keyIndex(5, 6);
constexpr uint8_t R5C7 = keyIndex(5, 7);
constexpr uint8_t R5C8 = keyIndex(5, 8);
constexpr uint8_t R5C9 = keyIndex(5, 9);
constexpr uint8_t R5C10 = keyIndex(5, 10);
constexpr uint8_t R5C11 = keyIndex(5, 11);
constexpr uint8_t R5C12 = keyIndex(5, 12);
constexpr uint8_t R5C13 = keyIndex(5, 13);
constexpr uint8_t R5C14 = keyIndex(5, 14);
constexpr uint8_t R5C15 = keyIndex(5, 15);

#define KEYMAP(                                                                                  \
	 R0C0, R0C1, R0C2, R0C3, R0C4, R0C5, R0C6, R0C7, R0C8, R0C9, R0C10, R0C11, R0C12, R0C13, R0C14, R0C15,  \
	 R1C0, R1C1,       R1C3, R1C4, R1C5, R1C6, R1C7, R1C8, R1C9, R1C10, R1C11, R1C12, R1C13, R1C14, R1C15,  \
	 R2C0, R2C1, R2C2, R2C3, R2C4, R2C5, R2C6,       R2C8, R2C9, R2C10, R2C11, R2C12, R2C13, R2C14,         \
	 R3C0, R3C1, R3C2, R3C3, R3C4, R3C5, R3C6, R3C7,       R3C9, R3C10, R3C11, R3C12, R3C13,        R3C15,  \
	 R4C0, R4C1, R4C2, R4C3,       R4C5, R4C6, R4C7, R4C8, R4C9, R4C10, R4C11, R4C12, R4C13,        R4C15   \
  ) {                                                                                              \
	{ R0C0, R0C1, R0C2, R0C3, R0C4, R0C5, R0C6, R0C7, R0C8, R0C9, R0C10, R0C11, R0C12, R0C13, R0C14, R0C15 },  \
	{ R1C0, R1C1,       R1C3, R1C4, R1C5, R1C6, R1C7, R1C8, R1C9, R1C10, R1C11, R1C12, R1C13, R1C14, R1C15 },  \
	{ R2C0, R2C1, R2C2, R2C3, R2C4, R2C5, R2C6,       R2C8, R2C9, R2C10, R2C11, R2C12, R2C13, R2C14        },  \
	{ R3C0, R3C1, R3C2, R3C3, R3C4, R3C5, R3C6, R3C7,       R3C9, R3C10, R3C11, R3C12, R3C13,        R3C15 },  \
	{ R4C0, R4C1, R4C2, R4C3,       R4C5, R4C6, R4C7, R4C8, R4C9, R4C10, R4C11, R4C12, R4C13,        R4C15 }   \
  }

extern kaleidoscope::hardware::Imago &Imago;

#endif
