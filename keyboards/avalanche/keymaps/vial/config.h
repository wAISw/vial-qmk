// Copyright 2022 vitvlkv (@vlkv)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define VIAL_KEYBOARD_UID {0x90, 0x93, 0x31, 0x47, 0xA4, 0xA3, 0xF3, 0x9B}

#define USE_SERIAL
#define ENCODER_DIRECTION_FLIP
#define MASTER_LEFT

#ifdef MASTER_RIGHT
    #define VIAL_UNLOCK_COMBO_ROWS { 6, 8 }
    #define VIAL_UNLOCK_COMBO_COLS { 5, 5 }
#else
    #define VIAL_UNLOCK_COMBO_ROWS { 1, 3 }
    #define VIAL_UNLOCK_COMBO_COLS { 5, 5 }
#endif
