/* Copyright 2020 melonbred
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

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _BASE
};

// Tap Dance Declarations
enum {
  TD_M_D = 0,
  TD_P_M
};

// Tap Dance Definition
qk_tap_dance_action_t tap_dance_actions[] = {
  //Tap once for minus, tap twice for divide
  [TD_M_D] = ACTION_TAP_DANCE_DOUBLE(KC_PMNS, KC_PSLS),
  //Tap once for plus, tap twice for multiply
  [TD_P_M] = ACTION_TAP_DANCE_DOUBLE(KC_PPLS, KC_PAST)
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base */
    [_BASE] = LAYOUT(

    KC_KP_7, KC_KP_8,   KC_KP_9, TD(TD_M_D), KC_ESC,        KC_Q,    KC_W,    KC_E,         KC_R, KC_T, KC_Y,          KC_U,    KC_I,    KC_O,   KC_P, KC_BSPC, \
    KC_KP_4, KC_KP_5,   KC_KP_6, TD(TD_P_M), CTL_T(KC_TAB), KC_A,    KC_S,    KC_D,         KC_F, KC_G, KC_H,          KC_J,    KC_K,    KC_L,         KC_ENT, \
    KC_KP_1, KC_KP_2,   KC_KP_3, KC_UP,      KC_LSFT,       KC_Z,    KC_X,    KC_C,         KC_V, KC_B, KC_N,          KC_M,    KC_COMM, KC_DOT,       KC_RSFT, \
    KC_KP_0, KC_KP_DOT, KC_LEFT, KC_DOWN,    KC_RIGHT,      KC_RGUI, KC_RALT, LT(1, KC_SPC),            LT(2, KC_SPC),          KC_RALT, KC_SLSH,      KC_BSLS \
    
  ),
};


void encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) { /* First encoder */
        if (clockwise) {
            tap_code(KC_PGDN);
        } else {
            tap_code(KC_PGUP);
        }
    } else if (index == 1) { /* Second encoder */
        if (clockwise) {
            tap_code(KC_DOWN);
        } else {
            tap_code(KC_UP);
        }
    }
}

/*
void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

bool led_update_user(led_t led_state) {
    return true;
}
*/
