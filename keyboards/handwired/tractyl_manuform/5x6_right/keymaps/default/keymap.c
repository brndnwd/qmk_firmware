/* Copyright 2020 Christopher Courtney, aka Drashna Jael're  (@drashna) <drashna@live.com>
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

enum custom_layers {
    _QWERTY,
    _LOWER,
    _RAISE,
};


#define RAISE MO(_RAISE)
#define LOWER MO(_LOWER)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_QWERTY] = LAYOUT_5x6_right(
     KC_GRV , KC_1  , KC_2  , KC_3  , KC_4  , KC_5  ,                         KC_6  , KC_7  , KC_8  , KC_9  , KC_0  ,KC_UNDO,
     KC_TAB , KC_Q  , KC_W  , KC_E  , KC_R  , KC_T  ,                         KC_Y  , KC_U  , KC_I  , KC_O  , KC_P  ,KC_BSLS,
     KC_ESC , KC_A  , KC_S  , KC_D  , KC_F  , KC_G  ,                         KC_H  , KC_J  , KC_K  , KC_L  ,KC_SCLN,KC_QUOT,
     KC_LGUI,LCTL_T(KC_Z) , KC_X, KC_C  , KC_V  , KC_B,                         KC_N  , KC_M  ,KC_COMM, KC_DOT,RCTL_T(KC_SLSH),KC_RSFT,
                      KC_EQL, KC_MINS,                                                       KC_LBRC,KC_RBRC,
                                      KC_LSFT, RAISE,                                    KC_SPC,
                                      KC_LALT,KC_BSPC,                                  KC_BSPC,
                                      KC_DEL, LOWER,                        KC_ENT, KC_ENT
  ),

  [_RAISE] = LAYOUT_5x6_right(
     KC_F12 , KC_F1 , KC_F2 , KC_F3 , KC_F4 , KC_F5 ,                        KC_F6  , KC_F7 , KC_F8 , KC_F9 ,KC_F10 ,KC_F11 ,
     _______,_______,_______,_______,S_D_MOD,_______,                        DPI_MOD, KC_WH_U , _______ , _______ ,_______,_______,
     _______,_______,_______,	_______, SNIPING,_______,                       KC_WH_L, KC_BTN1 , KC_BTN2 , KC_WH_R ,_______,_______,
     _______,_______,_______,_______,S_D_RMOD,_______,                        DPI_RMOD, KC_WH_D , _______ , _______ ,_______ ,_______,
                     _______,_______,                                                        _______, _______,
                                             _______,_______,                         _______,
                                             _______,_______,                       _______,
                                             _______,_______,                _______,_______

  ),

  [_LOWER] = LAYOUT_5x6_right(
       KC_F12 , KC_F1 , KC_F2 , KC_F3 , KC_F4 , KC_F5 ,                        KC_F6  , KC_F7 , KC_F8 , KC_F9 ,KC_F10 ,KC_F11 ,
       KC_TAB,_______,_______,_______,_______,_______,                        KC_PIPE,	KC_LCBR,KC_RCBR,KC_LPRN ,KC_RPRN,_______,
       KC_ESC,_______,KC_WSCH,KC_WBAK, KC_WFWD,KC_WREF,                      KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT,_______,_______,
       _______,_______,_______,_______,_______,_______,                        KC_SLSH,KC_LBRC,KC_RBRC,KC_TILD,_______,_______,
                       _______,_______,                                                        _______ ,_______,
                                            KC_LSFT,_______,                       KC_MPLY,
                                             _______,_______,                       KC_VOLU,
                                             _______,_______,                KC_MUTE,KC_VOLD
  ),
};
