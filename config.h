#pragma once

#include "config_common.h"

#define MATRIX_ROWS 4
#define MATRIX_COLS 3

#define ENCODERS_PAD_A { B5 }
#define ENCODERS_PAD_B { B4 }
#define NUMBER_ENCODERS 1

#define MATRIX_ROW_PINS { B6, D1, D0, D4 }
#define MATRIX_COL_PINS { C6, D7, E6 }

#define DEBOUNCE 5
#define VIAL_KEYBOARD_UID {0xFC, 0x0C, 0x41, 0xE4, 0x29, 0xDA, 0x68, 0x4C}
#define VIAL_UNLOCK_COMBO_ROWS { 1,1 }
#define VIAL_UNLOCK_COMBO_COLS { 1,0 }

#define LAYOUT LAYOUT_amoh