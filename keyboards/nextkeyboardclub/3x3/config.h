#pragma once

#include "config_common.h"

/* key matrix size */
#define MATRIX_ROWS 3
#define MATRIX_COLS 4

/* define direct pins */
#define DIRECT_PINS { {F6,F5,F4,F7}, {B6,B2,B3,B1},  {B4,E6,D7,B5} }

/* Set 0 if debouncing isn't needed */
// #define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE
