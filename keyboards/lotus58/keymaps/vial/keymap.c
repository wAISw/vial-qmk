/* Copyright 2021 TweetyDaBird
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
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
#include QMK_KEYBOARD_H

enum layers {
    _LAYER_1,
    _LAYER_2,
    _LAYER_3,
    _LAYER_4,
    _LAYER_5,
    _LAYER_6
};

// Default keymap. This can be changed in Vial. Use oled.c to change beavior that Vial cannot change.

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/*
 * layer 1
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | ESC  |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  | Bspc  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |  `   |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  |  [   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |   A  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |   ;  |  '   |
 * |------+------+------+------+------+------| CAPS  |    | r_win |------+------+------+------+------+------|
 * |LShift|   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |   ,  |   .  |   /  |RShift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | LGUI | LAlt | LCTR |  L1  | / Enter /       \ Space\  |  L2  | RCTR | RAlt | RGUI |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'            '------''---------------------------'
 */

[0] = LAYOUT(
  KC_ESC,   KC_1,   KC_2,    KC_3,    KC_4,    KC_5,                     KC_6,    KC_7,    KC_8,    KC_9,    KC_0,  KC_BSPC,
  KC_GRV,   KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,                     KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,  KC_LBRC,
  KC_TAB,   KC_A,   KC_S,    KC_D,    KC_F,    KC_G,                     KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN,  KC_QUOT,
  KC_LSFT,  KC_Z,   KC_X,    KC_C,    KC_V,    KC_B, KC_CAPS,    KC_RGUI,KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,  KC_RSFT,
               KC_LGUI, KC_LALT, KC_LCTRL, MO(1), KC_SPC,             KC_ENT, MO(2), KC_RCTRL, KC_RALT, KC_RGUI
),
/*
 * layer 2
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |  F1  |  F2  |  F3  |  F4  |  F5  |                    |  F6  |  F7  |  F8  |  F9  | F10  | Bcp  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |  F11 |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  | F12  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |   !  |   @  |   #  |   $  |   %  |-------.    ,-------|   ^  |   &  |   *  |   (  |   )  |   |  |
 * |------+------+------+------+------+------|  MUTE |    |       |------+------+------+------+------+------|
 * | Shift|  =   |  -   |  +   |   {  |   }  |-------|    |-------|   [  |   ]  |   ;  |   :  |   \  | Shift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | LGUI | LAlt | LCTR |LOWER | /Enter  /       \Space \  |RAISE | RCTR | RAlt | RGUI |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */
[1] = LAYOUT(
  _______,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                       KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_BSPC,
  KC_F11,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                       KC_6,    KC_7,    KC_8,    KC_9,    KC_0,  KC_F12,
  _______, KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC,                      KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_PIPE,
  _______,  KC_EQL, KC_MINS, KC_PLUS, KC_LCBR, KC_RCBR, _______,    _______, KC_LBRC, KC_RBRC, KC_SCLN, KC_COLN, KC_BSLS, _______,
                  _______, _______, _______, _______, _______,       _______, _______, _______, _______, _______
),
/*
 * layer 3
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |  `   |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  `   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | ESC  |   Q  |   W  |   F  |   P  |   G  |                    |   J  |   L  | pgUp |   Y  |   ;  | Bspc |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | TAB  |   A  |   R  |   S  |   T  |   D  |-------.    ,-------| Left | Down |  Up  | Right|   O  |  '   |
 * |------+------+------+------+------+------|  MUTE |    |       |------+------+------+------+------+------|
 * |LShift|   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   K  |pgDown|   ,  |   .  |   /  |RShift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | LGUI | LAlt | LCTR |LOWER | /Enter  /       \Space \  |RAISE | RCTR | RAlt | RGUI |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */

[2] = LAYOUT(
  KC_GRV,   KC_1,   KC_2,    KC_3,    KC_4,    KC_5,                      KC_6,    KC_7,    KC_8,    KC_9,    KC_0,  KC_GRV,
  KC_ESC,   KC_Q,   KC_W,    KC_F,    KC_P,    KC_G,                      KC_J,    KC_L,    KC_PGUP,    KC_Y, KC_SCLN,  KC_BSPC,
  KC_TAB,   KC_A,   KC_R,    KC_S,    KC_T,    KC_D,                      KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT, KC_O,  KC_QUOT,
  KC_LSFT,  KC_Z,   KC_X,    KC_C,    KC_V,    KC_B, KC_MUTE,      XXXXXXX,KC_K,   KC_PGDN, KC_COMM,  KC_DOT, KC_SLSH,  KC_RSFT,
                 KC_LGUI,KC_LALT,KC_LCTRL,KC_TRNS, KC_ENT,      KC_SPC,  KC_TRNS, KC_RCTRL, KC_RALT, KC_RGUI
),
/*
 * layer 4
 * ,----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Esc  | Ins  | Pscr | Menu |      |      |                    |      | PWrd |  Up  | NWrd | DLine| Bspc |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  | LAt  | LCtl |LShift|      | Caps |-------.    ,-------|      | Left | Down | Rigth|  Del | Bspc |
 * |------+------+------+------+------+------|  MUTE |    |       |------+------+------+------+------+------|
 * |Shift | Undo |  Cut | Copy | Paste|      |-------|    |-------|      | LStr |      | LEnd |      | Shift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | LGUI | LAlt | LCTR |LOWER | /Enter  /       \Space \  |RAISE | RCTR | RAlt | RGUI |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */
[3] = LAYOUT(
  _______, _______ , _______ , _______ , _______ , _______,                           _______,  _______  , _______,  _______ ,  _______ ,_______,
  _______,  KC_INS,  KC_PSCR,   KC_APP,  XXXXXXX, XXXXXXX,                        KC_PGUP, _______,   KC_UP, _______,_______, KC_BSPC,
  _______, KC_LALT,  KC_LCTL,  KC_LSFT,  XXXXXXX, KC_CAPS,                       KC_PGDN,  KC_LEFT, KC_DOWN, KC_RGHT,  KC_DEL, KC_BSPC,
  _______,KC_UNDO, KC_CUT, KC_COPY, KC_PASTE, XXXXXXX,  _______,       _______,  XXXXXXX, _______, XXXXXXX, _______,   XXXXXXX, _______,
                         _______, _______, _______, _______, _______,       _______, _______, _______, _______, _______
),
/*
 * layer 5
 * ,----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------.    ,-------|      |      |      |      |      |      |
 * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------|    |-------|      |      |      |      |      |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            |      |      |      |      | /       /       \      \  |      |      |      |      |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */
[4] = LAYOUT(
  _______, _______, _______, _______, _______, _______,                        _______, _______, _______, _______, _______ ,_______,
  _______, _______, _______, _______, _______, _______,                        _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______,                        _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______,      _______, _______, _______, _______, _______, _______, _______,
                    _______, _______, _______, _______, _______,      _______, _______, _______, _______, _______
),
/*
 * layer 6
 * ,----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------.    ,-------|      |      |      |      |      |      |
 * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------|    |-------|      |      |      |      |      |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            |      |      |      |      | /       /       \      \  |      |      |      |      |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */
[5] = LAYOUT(
  _______, _______, _______, _______, _______, _______,                        _______, _______, _______, _______, _______ ,_______,
  _______, _______, _______, _______, _______, _______,                        _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______,                        _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______,      _______, _______, _______, _______, _______, _______, _______,
                    _______, _______, _______, _______, _______,      _______, _______, _______, _______, _______
)
};

#ifdef OLED_ENABLE

static const char PROGMEM layers[6][96] = {
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,240,240,240,240,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,15,15,15,15,255,255,255,255,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,255,255,255,255,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,240,240,240,240,240,240,240,240,240,240,240,240,255,255,255,255,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,255,255,255,255,240,240,240,240,240,240,240,240,240,240,240,240,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,240,240,240,240,240,240,240,240,240,240,240,240,255,255,255,255,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,240,240,240,240,240,240,240,240,240,240,240,240,255,255,255,255,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,240,240,240,240,0,0,0,0,0,0,0,0,240,240,240,240,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,255,255,255,255,240,240,240,240,240,240,240,240,255,255,255,255,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,255,255,255,255,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,255,255,255,255,240,240,240,240,240,240,240,240,240,240,240,240,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,240,240,240,240,240,240,240,240,240,240,240,240,255,255,255,255,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,255,255,255,255,240,240,240,240,240,240,240,240,240,240,240,240,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,255,255,255,255,240,240,240,240,240,240,240,240,255,255,255,255,0,0,0,0,0,0,0,0},
};

static void render_master(void) {
    // Print current mode
    led_t led_state = host_keyboard_led_state();
    oled_write_P(PSTR("LOTUS -58-\n\n\nC|S|N"), false);
    oled_write_P(PSTR(" "), led_state.caps_lock);
    oled_write_P(PSTR("|"), false);
    oled_write_P(PSTR(" "), led_state.scroll_lock);
    oled_write_P(PSTR("|"), false);
    oled_write_P(PSTR(" "), led_state.num_lock);

    oled_write_P(PSTR("\n\n\nLAYER"), false);
    oled_write_raw_P(layers[get_highest_layer(layer_state)], 96);
    // switch () {
    //     case _LAYER_1:
    //        oled_write_raw_P(l1, sizeof(l1));
    //        break;
    //     case _LAYER_2:
    //        oled_write_raw_P(l2, sizeof(l2));
    //        break;
    //     case _LAYER_3:
    //        oled_write_raw_P(l3, sizeof(l3));
    //        break;
    //     case _LAYER_4:
    //        oled_write_raw_P(l4, sizeof(l4));
    //        break;
    //      case _LAYER_5:
    //        oled_write_raw_P(l5, sizeof(l5));
    //        break;
    //      case _LAYER_6:
    //        oled_write_raw_P(l6, sizeof(l6));
    //        break;
    //     default:
    //         break;
    // }
    // switch (get_highest_layer(layer_state)) {
    //     case _LAYER_1:
    //         oled_write_P(PSTR("  "), false);
    //         oled_write_P(PSTR(" \n"), true);

    //         oled_write_P(PSTR(" "), false);
    //         oled_write_P(PSTR("  \n"), true);

    //         oled_write_P(PSTR("  "), false);
    //         oled_write_P(PSTR(" \n"), true);

    //         oled_write_P(PSTR("  "), false);
    //         oled_write_P(PSTR(" \n"), true);

    //         oled_write_P(PSTR("  "), false);
    //         oled_write_P(PSTR(" \n"), true);
    //        break;
    //     case _LAYER_2:
    //         oled_write_P(PSTR(" "), false);
    //         oled_write_P(PSTR("   \n"), true);

    //         oled_write_P(PSTR("   "), false);
    //         oled_write_P(PSTR(" \n"), true);

    //         oled_write_P(PSTR(" "), false);
    //         oled_write_P(PSTR("   \n"), true);

    //         oled_write_P(PSTR(" "), false);
    //         oled_write_P(PSTR(" \n"), true);

    //         oled_write_P(PSTR(" "), false);
    //         oled_write_P(PSTR("   "), true);
    //         break;
    //     case _LAYER_3:
    //         oled_write_P(PSTR(" "), false);
    //         oled_write_P(PSTR("   \n"), true);

    //         oled_write_P(PSTR("   "), false);
    //         oled_write_P(PSTR(" \n"), true);

    //         oled_write_P(PSTR(" "), false);
    //         oled_write_P(PSTR("   \n"), true);

    //         oled_write_P(PSTR("   "), false);
    //         oled_write_P(PSTR(" \n"), true);

    //         oled_write_P(PSTR(" "), false);
    //         oled_write_P(PSTR("   "), true);
    //         break;
    //     case _LAYER_4:
    //         oled_write_P(PSTR(" "), false);
    //         oled_write_P(PSTR(" "), true);
    //         oled_write_P(PSTR(" "), false);
    //         oled_write_P(PSTR(" \n"), true);

    //         oled_write_P(PSTR(" "), false);
    //         oled_write_P(PSTR(" "), true);
    //         oled_write_P(PSTR(" "), false);
    //         oled_write_P(PSTR(" \n"), true);

    //         oled_write_P(PSTR(" "), false);
    //         oled_write_P(PSTR("   \n"), true);

    //         oled_write_P(PSTR("   "), false);
    //         oled_write_P(PSTR(" \n"), true);

    //         oled_write_P(PSTR("   "), false);
    //         oled_write_P(PSTR(" "), true);
    //        break;
    //      case _LAYER_5:
    //         oled_write_P(PSTR(" "), false);
    //         oled_write_P(PSTR("   \n"), true);

    //         oled_write_P(PSTR(" "), false);
    //         oled_write_P(PSTR(" \n"), true);

    //         oled_write_P(PSTR(" "), false);
    //         oled_write_P(PSTR("   \n"), true);

    //         oled_write_P(PSTR("   "), false);
    //         oled_write_P(PSTR(" \n"), true);

    //         oled_write_P(PSTR(" "), false);
    //         oled_write_P(PSTR("   "), true);

    //         break;
    //      case _LAYER_6:
    //         oled_write_P(PSTR(" "), false);
    //         oled_write_P(PSTR("   \n"), true);

    //         oled_write_P(PSTR(" "), false);
    //         oled_write_P(PSTR(" \n"), true);

    //         oled_write_P(PSTR(" "), false);
    //         oled_write_P(PSTR("   \n"), true);

    //         oled_write_P(PSTR(" "), false);
    //         oled_write_P(PSTR(" "), true);
    //         oled_write_P(PSTR(" "), false);
    //         oled_write_P(PSTR(" \n"), true);

    //         oled_write_P(PSTR(" "), false);
    //         oled_write_P(PSTR("   "), true);
    //        break;
    //     default:
    //         break;
    // }
}

static void render_logo(void) {
    // static const char PROGMEM raw_logo[512] = {
    //     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
    //     0,  0,  0,  0,  0,255,255,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,252,252,  3,  3,  3,  3,  3,  3,  3,  3,252,252,  0,  0,  3,  3,  3,  3,255,255,  3,  3,  3,  3,  0,  0,255,255,  0,  0,  0,  0,  0,  0,  0,  0,255,255,  0,  0, 60, 60,195,195,195,195,195,195,195,195,  3,  3,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,255,255,195,195,195,195,195,195,195,195,  3,  3,  0,  0, 60, 60,195,195,195,195,195,195,195,195, 60, 60,  0,  0,  0,  0,  0,
    //     0,  0,  0,  0,  0,255,255,192,192,192,192,192,192,192,192,192,192,  0,  0, 63, 63,192,192,192,192,192,192,192,192, 63, 63,  0,  0,  0,  0,  0,  0,255,255,  0,  0,  0,  0,  0,  0, 63, 63,192,192,192,192,192,192,192,192, 63, 63,  0,  0,192,192,192,192,192,192,192,192,192,192, 63, 63,  0,  0,  0,  0,  0,  0,  0,  0,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  0,  0,  0,  0,  0,  0,  0,  0, 48, 48,192,192,192,192,192,192,192,192, 63, 63,  0,  0, 63, 63,192,192,192,192,192,192,192,192, 63, 63,  0,  0,  0,  0,  0,
    //     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
    // };
    // oled_write_raw_P(raw_logo, sizeof(raw_logo));
    // oled_write_P(PSTR("L\nO\nT\nU L\nS O\n| T\n5 U L8 S O  | T  5 U  8 S    |    5    8"), false);
    oled_write_P(PSTR("| L ||   || O ||   || T ||   || U ||   || S ||   || | ||   || 5 ||   || 8 ||   |"), false);
    // oled_write_P(PSTR(" |L| | | |O| | | |T| | | |U| | | |S| | | ||| | | |5| | | |8| | |"), false);
    // oled_write_P(PSTR("  L\n\n  O\n\n  T\n\n  U\n\n  S\n \n  |\n\n 5 8"), false);
}

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    // if (is_keyboard_master()) {
        return OLED_ROTATION_270;
    // }
    // return rotation;
}

bool oled_task_user(void) {
    if (is_keyboard_master()) {
        render_master();
    }else{
        render_logo();
        // oled_scroll_right();
    }
    return false;
}

#endif
