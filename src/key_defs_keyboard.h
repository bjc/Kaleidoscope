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

// Keyboard HID mappings

// Reserved (no_event_indicated)
#define Key_NoEvent (Key) { HID_KEYBOARD_NO_EVENT, KEY_FLAGS }
#define Key_ErrorRollover (Key) { HID_KEYBOARD_ERROR_ROLLOVER, KEY_FLAGS }
#define Key_PostFail (Key) { HID_KEYBOARD_POST_FAIL, KEY_FLAGS }
#define Key_ErrorUndefined (Key) { HID_KEYBOARD_ERROR_UNDEFINED, KEY_FLAGS }
#define Key_A (Key) { HID_KEYBOARD_A_AND_A, KEY_FLAGS }
#define Key_B (Key) { HID_KEYBOARD_B_AND_B, KEY_FLAGS }
#define Key_C (Key) { HID_KEYBOARD_C_AND_C, KEY_FLAGS }
#define Key_D (Key) { HID_KEYBOARD_D_AND_D, KEY_FLAGS }
#define Key_E (Key) { HID_KEYBOARD_E_AND_E, KEY_FLAGS }
#define Key_F (Key) { HID_KEYBOARD_F_AND_F, KEY_FLAGS }
#define Key_G (Key) { HID_KEYBOARD_G_AND_G, KEY_FLAGS }
#define Key_H (Key) { HID_KEYBOARD_H_AND_H, KEY_FLAGS }
#define Key_I (Key) { HID_KEYBOARD_I_AND_I, KEY_FLAGS }
#define Key_J (Key) { HID_KEYBOARD_J_AND_J, KEY_FLAGS }
#define Key_K (Key) { HID_KEYBOARD_K_AND_K, KEY_FLAGS }
#define Key_L (Key) { HID_KEYBOARD_L_AND_L, KEY_FLAGS }
#define Key_M (Key) { HID_KEYBOARD_M_AND_M, KEY_FLAGS }
#define Key_N (Key) { HID_KEYBOARD_N_AND_N, KEY_FLAGS }
#define Key_O (Key) { HID_KEYBOARD_O_AND_O, KEY_FLAGS }
#define Key_P (Key) { HID_KEYBOARD_P_AND_P, KEY_FLAGS }
#define Key_Q (Key) { HID_KEYBOARD_Q_AND_Q, KEY_FLAGS }
#define Key_R (Key) { HID_KEYBOARD_R_AND_R, KEY_FLAGS }
#define Key_S (Key) { HID_KEYBOARD_S_AND_S, KEY_FLAGS }
#define Key_T (Key) { HID_KEYBOARD_T_AND_T, KEY_FLAGS }
#define Key_U (Key) { HID_KEYBOARD_U_AND_U, KEY_FLAGS }
#define Key_V (Key) { HID_KEYBOARD_V_AND_V, KEY_FLAGS }
#define Key_W (Key) { HID_KEYBOARD_W_AND_W, KEY_FLAGS }
#define Key_X (Key) { HID_KEYBOARD_X_AND_X, KEY_FLAGS }
#define Key_Y (Key) { HID_KEYBOARD_Y_AND_Y, KEY_FLAGS }
#define Key_Z (Key) { HID_KEYBOARD_Z_AND_Z, KEY_FLAGS }
#define Key_1 (Key) { HID_KEYBOARD_1_AND_EXCLAMATION_POINT, KEY_FLAGS }
#define Key_2 (Key) { HID_KEYBOARD_2_AND_AT, KEY_FLAGS }
#define Key_3 (Key) { HID_KEYBOARD_3_AND_POUND, KEY_FLAGS }
#define Key_4 (Key) { HID_KEYBOARD_4_AND_DOLLAR, KEY_FLAGS }
#define Key_5 (Key) { HID_KEYBOARD_5_AND_PERCENT, KEY_FLAGS }
#define Key_6 (Key) { HID_KEYBOARD_6_AND_CARAT, KEY_FLAGS }
#define Key_7 (Key) { HID_KEYBOARD_7_AND_AMPERSAND, KEY_FLAGS }
#define Key_8 (Key) { HID_KEYBOARD_8_AND_ASTERISK, KEY_FLAGS }
#define Key_9 (Key) { HID_KEYBOARD_9_AND_LEFT_PAREN, KEY_FLAGS }
#define Key_0 (Key) { HID_KEYBOARD_0_AND_RIGHT_PAREN, KEY_FLAGS }
#define Key_Enter (Key) { HID_KEYBOARD_ENTER, KEY_FLAGS }		 // (MARKED AS ENTER_SLASH_RETURN)
#define Key_Escape (Key) { HID_KEYBOARD_ESCAPE, KEY_FLAGS }
#define Key_Backspace (Key) { HID_KEYBOARD_DELETE, KEY_FLAGS }		// (BACKSPACE)
#define Key_Tab (Key) { HID_KEYBOARD_TAB, KEY_FLAGS }
#define Key_Spacebar (Key) { HID_KEYBOARD_SPACEBAR, KEY_FLAGS }
#define Key_Minus (Key) { HID_KEYBOARD_MINUS_AND_UNDERSCORE, KEY_FLAGS } // (UNDERSCORE)
#define Key_Equals (Key) { HID_KEYBOARD_EQUALS_AND_PLUS, KEY_FLAGS }
#define Key_LeftBracket (Key) { HID_KEYBOARD_LEFT_BRACKET_AND_LEFT_CURLY_BRACE, KEY_FLAGS }
#define Key_RightBracket (Key) { HID_KEYBOARD_RIGHT_BRACKET_AND_RIGHT_CURLY_BRACE, KEY_FLAGS }
#define Key_Backslash (Key) { HID_KEYBOARD_BACKSLASH_AND_PIPE, KEY_FLAGS }
#define Key_NonUsPound (Key) { HID_KEYBOARD_NON_US_POUND_AND_TILDE, KEY_FLAGS }
#define Key_Semicolon (Key) { HID_KEYBOARD_SEMICOLON_AND_COLON, KEY_FLAGS }
#define Key_Quote (Key) { HID_KEYBOARD_QUOTE_AND_DOUBLEQUOTE, KEY_FLAGS }
#define Key_Backtick (Key) { HID_KEYBOARD_GRAVE_ACCENT_AND_TILDE, KEY_FLAGS }
#define Key_Comma (Key) { HID_KEYBOARD_COMMA_AND_LESS_THAN, KEY_FLAGS }
#define Key_Period (Key) { HID_KEYBOARD_PERIOD_AND_GREATER_THAN, KEY_FLAGS }
#define Key_Slash (Key) { HID_KEYBOARD_SLASH_AND_QUESTION_MARK, KEY_FLAGS }
#define Key_CapsLock (Key) { HID_KEYBOARD_CAPS_LOCK, KEY_FLAGS }
#define Key_F1 (Key) { HID_KEYBOARD_F1, KEY_FLAGS }
#define Key_F2 (Key) { HID_KEYBOARD_F2, KEY_FLAGS }
#define Key_F3 (Key) { HID_KEYBOARD_F3, KEY_FLAGS }
#define Key_F4 (Key) { HID_KEYBOARD_F4, KEY_FLAGS }
#define Key_F5 (Key) { HID_KEYBOARD_F5, KEY_FLAGS }
#define Key_F6 (Key) { HID_KEYBOARD_F6, KEY_FLAGS }
#define Key_F7 (Key) { HID_KEYBOARD_F7, KEY_FLAGS }
#define Key_F8 (Key) { HID_KEYBOARD_F8, KEY_FLAGS }
#define Key_F9 (Key) { HID_KEYBOARD_F9, KEY_FLAGS }
#define Key_F10 (Key) { HID_KEYBOARD_F10, KEY_FLAGS }
#define Key_F11 (Key) { HID_KEYBOARD_F11, KEY_FLAGS }
#define Key_F12 (Key) { HID_KEYBOARD_F12, KEY_FLAGS }
#define Key_PrintScreen (Key) { HID_KEYBOARD_PRINTSCREEN, KEY_FLAGS }
#define Key_ScrollLock (Key) { HID_KEYBOARD_SCROLL_LOCK, KEY_FLAGS }
#define Key_Pause (Key) { HID_KEYBOARD_PAUSE, KEY_FLAGS }
#define Key_Insert (Key) { HID_KEYBOARD_INSERT, KEY_FLAGS }
#define Key_Home (Key) { HID_KEYBOARD_HOME, KEY_FLAGS }
#define Key_PageUp (Key) { HID_KEYBOARD_PAGE_UP, KEY_FLAGS }
#define Key_Delete (Key) { HID_KEYBOARD_DELETE_FORWARD, KEY_FLAGS }
#define Key_End (Key) { HID_KEYBOARD_END, KEY_FLAGS }
#define Key_PageDown (Key) { HID_KEYBOARD_PAGE_DOWN, KEY_FLAGS }
#define Key_RightArrow (Key) { HID_KEYBOARD_RIGHT_ARROW, KEY_FLAGS }
#define Key_LeftArrow (Key) { HID_KEYBOARD_LEFT_ARROW, KEY_FLAGS }
#define Key_DownArrow (Key) { HID_KEYBOARD_DOWN_ARROW, KEY_FLAGS }
#define Key_UpArrow (Key) { HID_KEYBOARD_UP_ARROW, KEY_FLAGS }
#define Key_KeypadNumLock (Key) { HID_KEYPAD_NUM_LOCK_AND_CLEAR, KEY_FLAGS }
#define Key_KeypadDivide (Key) { HID_KEYPAD_DIVIDE, KEY_FLAGS }
#define Key_KeypadMultiply (Key) { HID_KEYPAD_MULTIPLY, KEY_FLAGS }
#define Key_KeypadSubtract (Key) { HID_KEYPAD_SUBTRACT, KEY_FLAGS }
#define Key_KeypadAdd (Key) { HID_KEYPAD_ADD, KEY_FLAGS }
#define Key_KeypadEnter (Key) { HID_KEYPAD_ENTER, KEY_FLAGS }
#define Key_Keypad1 (Key) { HID_KEYPAD_1_AND_END, KEY_FLAGS }
#define Key_Keypad2 (Key) { HID_KEYPAD_2_AND_DOWN_ARROW, KEY_FLAGS }
#define Key_Keypad3 (Key) { HID_KEYPAD_3_AND_PAGE_DOWN, KEY_FLAGS }
#define Key_Keypad4 (Key) { HID_KEYPAD_4_AND_LEFT_ARROW, KEY_FLAGS }
#define Key_Keypad5 (Key) { HID_KEYPAD_5, KEY_FLAGS }
#define Key_Keypad6 (Key) { HID_KEYPAD_6_AND_RIGHT_ARROW, KEY_FLAGS }
#define Key_Keypad7 (Key) { HID_KEYPAD_7_AND_HOME, KEY_FLAGS }
#define Key_Keypad8 (Key) { HID_KEYPAD_8_AND_UP_ARROW, KEY_FLAGS }
#define Key_Keypad9 (Key) { HID_KEYPAD_9_AND_PAGE_UP, KEY_FLAGS }
#define Key_Keypad0 (Key) { HID_KEYPAD_0_AND_INSERT, KEY_FLAGS }
#define Key_KeypadDot (Key) { HID_KEYPAD_PERIOD_AND_DELETE, KEY_FLAGS }
#define Key_NonUsBackslashAndPipe (Key) { HID_KEYBOARD_NON_US_BACKSLASH_AND_PIPE, KEY_FLAGS }
#define Key_PcApplication (Key) { HID_KEYBOARD_APPLICATION, KEY_FLAGS }
#define Key_Power (Key) { HID_KEYBOARD_POWER, KEY_FLAGS }
#define Key_KeypadEquals (Key) { HID_KEYPAD_EQUALS, KEY_FLAGS }
#define Key_F13 (Key) { HID_KEYBOARD_F13, KEY_FLAGS }
#define Key_F14 (Key) { HID_KEYBOARD_F14, KEY_FLAGS }
#define Key_F15 (Key) { HID_KEYBOARD_F15, KEY_FLAGS }
#define Key_F16 (Key) { HID_KEYBOARD_F16, KEY_FLAGS }
#define Key_F17 (Key) { HID_KEYBOARD_F17, KEY_FLAGS }
#define Key_F18 (Key) { HID_KEYBOARD_F18, KEY_FLAGS }
#define Key_F19 (Key) { HID_KEYBOARD_F19, KEY_FLAGS }
#define Key_F20 (Key) { HID_KEYBOARD_F20, KEY_FLAGS }
#define Key_F21 (Key) { HID_KEYBOARD_F21, KEY_FLAGS }
#define Key_F22 (Key) { HID_KEYBOARD_F22, KEY_FLAGS }
#define Key_F23 (Key) { HID_KEYBOARD_F23, KEY_FLAGS }
#define Key_F24 (Key) { HID_KEYBOARD_F24, KEY_FLAGS }
#define Key_Execute (Key) { HID_KEYBOARD_EXECUTE, KEY_FLAGS }
#define Key_Help (Key) { HID_KEYBOARD_HELP, KEY_FLAGS }
#define Key_Menu (Key) { HID_KEYBOARD_MENU, KEY_FLAGS }
#define Key_Select (Key) { HID_KEYBOARD_SELECT, KEY_FLAGS }
#define Key_Stop (Key) { HID_KEYBOARD_STOP, KEY_FLAGS }
#define Key_Again (Key) { HID_KEYBOARD_AGAIN, KEY_FLAGS }
#define Key_Undo (Key) { HID_KEYBOARD_UNDO, KEY_FLAGS }
#define Key_Cut (Key) { HID_KEYBOARD_CUT, KEY_FLAGS }
#define Key_Copy (Key) { HID_KEYBOARD_COPY, KEY_FLAGS }
#define Key_Paste (Key) { HID_KEYBOARD_PASTE, KEY_FLAGS }
#define Key_Find (Key) { HID_KEYBOARD_FIND, KEY_FLAGS }
#define Key_Mute (Key) { HID_KEYBOARD_MUTE, KEY_FLAGS }
#define Key_VolumeUp (Key) { HID_KEYBOARD_VOLUME_UP, KEY_FLAGS }
#define Key_VolumeDown (Key) { HID_KEYBOARD_VOLUME_DOWN, KEY_FLAGS }
#define Key_LockingCapsLock (Key) { HID_KEYBOARD_LOCKING_CAPS_LOCK, KEY_FLAGS }
#define Key_LockingNumLock (Key) { HID_KEYBOARD_LOCKING_NUM_LOCK, KEY_FLAGS }
#define Key_LockingScrollLock (Key) { HID_KEYBOARD_LOCKING_SCROLL_LOCK, KEY_FLAGS }
#define Key_KeypadComma (Key) { HID_KEYPAD_COMMA, KEY_FLAGS }
#define Key_KeypadEqualSign (Key) { HID_KEYPAD_EQUAL_SIGN, KEY_FLAGS }
#define Key_International1 (Key) { HID_KEYBOARD_INTERNATIONAL1, KEY_FLAGS }
#define Key_International2 (Key) { HID_KEYBOARD_INTERNATIONAL2, KEY_FLAGS }
#define Key_International3 (Key) { HID_KEYBOARD_INTERNATIONAL3, KEY_FLAGS }
#define Key_International4 (Key) { HID_KEYBOARD_INTERNATIONAL4, KEY_FLAGS }
#define Key_International5 (Key) { HID_KEYBOARD_INTERNATIONAL5, KEY_FLAGS }
#define Key_International6 (Key) { HID_KEYBOARD_INTERNATIONAL6, KEY_FLAGS }
#define Key_International7 (Key) { HID_KEYBOARD_INTERNATIONAL7, KEY_FLAGS }
#define Key_International8 (Key) { HID_KEYBOARD_INTERNATIONAL8, KEY_FLAGS }
#define Key_International9 (Key) { HID_KEYBOARD_INTERNATIONAL9, KEY_FLAGS }
#define Key_Lang1 (Key) { HID_KEYBOARD_LANG1, KEY_FLAGS }
#define Key_Lang2 (Key) { HID_KEYBOARD_LANG2, KEY_FLAGS }
#define Key_Lang3 (Key) { HID_KEYBOARD_LANG3, KEY_FLAGS }
#define Key_Lang4 (Key) { HID_KEYBOARD_LANG4, KEY_FLAGS }
#define Key_Lang5 (Key) { HID_KEYBOARD_LANG5, KEY_FLAGS }
#define Key_Lang6 (Key) { HID_KEYBOARD_LANG6, KEY_FLAGS }
#define Key_Lang7 (Key) { HID_KEYBOARD_LANG7, KEY_FLAGS }
#define Key_Lang8 (Key) { HID_KEYBOARD_LANG8, KEY_FLAGS }
#define Key_Lang9 (Key) { HID_KEYBOARD_LANG9, KEY_FLAGS }
#define Key_AlternateErase (Key) { HID_KEYBOARD_ALTERNATE_ERASE, KEY_FLAGS }
#define Key_Sysreq (Key) { HID_KEYBOARD_SYSREQ_SLASH_ATTENTION, KEY_FLAGS }
#define Key_Cancel (Key) { HID_KEYBOARD_CANCEL, KEY_FLAGS }
#define Key_Clear (Key) { HID_KEYBOARD_CLEAR, KEY_FLAGS }
#define Key_Prior (Key) { HID_KEYBOARD_PRIOR, KEY_FLAGS }
#define Key_Return (Key) { HID_KEYBOARD_RETURN, KEY_FLAGS }
#define Key_Separator (Key) { HID_KEYBOARD_SEPARATOR, KEY_FLAGS }
#define Key_Out (Key) { HID_KEYBOARD_OUT, KEY_FLAGS }
#define Key_Oper (Key) { HID_KEYBOARD_OPER, KEY_FLAGS }
#define Key_ClearSlashAgain (Key) { HID_KEYBOARD_CLEAR_SLASH_AGAIN, KEY_FLAGS }
#define Key_CrselSlashProps (Key) { HID_KEYBOARD_CRSEL_SLASH_PROPS, KEY_FLAGS }
#define Key_Exsel (Key) { HID_KEYBOARD_EXSEL, KEY_FLAGS }
// Reserved	0xA5-AF
#define Key_Keypad00 (Key) { HID_KEYPAD_00, KEY_FLAGS }
#define Key_Keypad000 (Key) { HID_KEYPAD_000, KEY_FLAGS }
#define Key_ThousandsSeparator (Key) { HID_THOUSANDS_SEPARATOR, KEY_FLAGS }
#define Key_DecimalSeparator (Key) { HID_DECIMAL_SEPARATOR, KEY_FLAGS }
#define Key_CurrencyUnit (Key) { HID_CURRENCY_UNIT, KEY_FLAGS }
#define Key_CurrencySubunit (Key) { HID_CURRENCY_SUBUNIT, KEY_FLAGS }
#define Key_KeypadLeftParen (Key) { HID_KEYPAD_LEFT_PAREN, KEY_FLAGS }
#define Key_KeypadRightParen (Key) { HID_KEYPAD_RIGHT_PAREN, KEY_FLAGS }
#define Key_KeypadLeftCurlyBrace (Key) { HID_KEYPAD_LEFT_CURLY_BRACE, KEY_FLAGS }
#define Key_KeypadRightCurlyBrace (Key) { HID_KEYPAD_RIGHT_CURLY_BRACE, KEY_FLAGS }
#define Key_KeypadTab (Key) { HID_KEYPAD_TAB, KEY_FLAGS }
#define Key_KeypadBackspace (Key) { HID_KEYPAD_BACKSPACE, KEY_FLAGS }
#define Key_KeypadA (Key) { HID_KEYPAD_A, KEY_FLAGS }
#define Key_KeypadB (Key) { HID_KEYPAD_B, KEY_FLAGS }
#define Key_KeypadC (Key) { HID_KEYPAD_C, KEY_FLAGS }
#define Key_KeypadD (Key) { HID_KEYPAD_D, KEY_FLAGS }
#define Key_KeypadE (Key) { HID_KEYPAD_E, KEY_FLAGS }
#define Key_KeypadF (Key) { HID_KEYPAD_F, KEY_FLAGS }
#define Key_KeypadXor (Key) { HID_KEYPAD_XOR, KEY_FLAGS }
#define Key_KeypadCarat (Key) { HID_KEYPAD_CARAT, KEY_FLAGS }
#define Key_KeypadPercent (Key) { HID_KEYPAD_PERCENT, KEY_FLAGS }
#define Key_KeypadLessThan (Key) { HID_KEYPAD_LESS_THAN, KEY_FLAGS }
#define Key_KeypadGreaterThan (Key) { HID_KEYPAD_GREATER_THAN, KEY_FLAGS }
#define Key_KeypadAmpersand (Key) { HID_KEYPAD_AMPERSAND, KEY_FLAGS }
#define Key_KeypadDoubleampersand (Key) { HID_KEYPAD_DOUBLEAMPERSAND, KEY_FLAGS }
#define Key_KeypadPipe (Key) { HID_KEYPAD_PIPE, KEY_FLAGS }
#define Key_KeypadDoublepipe (Key) { HID_KEYPAD_DOUBLEPIPE, KEY_FLAGS }
#define Key_KeypadColon (Key) { HID_KEYPAD_COLON, KEY_FLAGS }
#define Key_KeypadPoundSign (Key) { HID_KEYPAD_POUND_SIGN, KEY_FLAGS }
#define Key_KeypadSpace (Key) { HID_KEYPAD_SPACE, KEY_FLAGS }
#define Key_KeypadAtSign (Key) { HID_KEYPAD_AT_SIGN, KEY_FLAGS }
#define Key_KeypadExclamationPoint (Key) { HID_KEYPAD_EXCLAMATION_POINT, KEY_FLAGS }
#define Key_KeypadMemoryStore (Key) { HID_KEYPAD_MEMORY_STORE, KEY_FLAGS }
#define Key_KeypadMemoryRecall (Key) { HID_KEYPAD_MEMORY_RECALL, KEY_FLAGS }
#define Key_KeypadMemoryClear (Key) { HID_KEYPAD_MEMORY_CLEAR, KEY_FLAGS }
#define Key_KeypadMemoryAdd (Key) { HID_KEYPAD_MEMORY_ADD, KEY_FLAGS }
#define Key_KeypadMemorySubtract (Key) { HID_KEYPAD_MEMORY_SUBTRACT, KEY_FLAGS }
#define Key_KeypadMemoryMultiply (Key) { HID_KEYPAD_MEMORY_MULTIPLY, KEY_FLAGS }
#define Key_KeypadMemoryDivide (Key) { HID_KEYPAD_MEMORY_DIVIDE, KEY_FLAGS }
#define Key_KeypadPlusSlashMinus (Key) { HID_KEYPAD_PLUS_SLASH_MINUS, KEY_FLAGS }
#define Key_KeypadClear (Key) { HID_KEYPAD_CLEAR, KEY_FLAGS }
#define Key_KeypadClearEntry (Key) { HID_KEYPAD_CLEAR_ENTRY, KEY_FLAGS }
#define Key_KeypadBinary (Key) { HID_KEYPAD_BINARY, KEY_FLAGS }
#define Key_KeypadOctal (Key) { HID_KEYPAD_OCTAL, KEY_FLAGS }
#define Key_KeypadDecimal (Key) { HID_KEYPAD_DECIMAL, KEY_FLAGS }
#define Key_KeypadHexadecimal (Key) { HID_KEYPAD_HEXADECIMAL, KEY_FLAGS }

#define Key_LeftControl (Key) { HID_KEYBOARD_LEFT_CONTROL, KEY_FLAGS }
#define Key_LeftShift (Key) { HID_KEYBOARD_LEFT_SHIFT, KEY_FLAGS }
#define Key_LeftAlt (Key) { HID_KEYBOARD_LEFT_ALT, KEY_FLAGS }
#define Key_LeftGui (Key) { HID_KEYBOARD_LEFT_GUI, KEY_FLAGS }
#define Key_RightControl (Key) { HID_KEYBOARD_RIGHT_CONTROL, KEY_FLAGS }
#define Key_RightShift (Key) { HID_KEYBOARD_RIGHT_SHIFT, KEY_FLAGS }
#define Key_RightAlt (Key) { HID_KEYBOARD_RIGHT_ALT, KEY_FLAGS }
#define Key_RightGui (Key) { HID_KEYBOARD_RIGHT_GUI, KEY_FLAGS }
