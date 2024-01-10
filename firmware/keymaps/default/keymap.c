// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT(
    //,-------------------------------------------------------------------------------------------------------------
        KC_ESC,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P, KC_BSPC, 
    //|--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+
        KC_TAB,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,  KC_SCLN, KC_ENT,
    //|--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+
        KC_LSFT,   KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,  KC_COMM, KC_DOT, KC_SLSH, KC_QUOT,
    //|--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+
        KC_GRV, KC_LCTL, KC_LALT,    MO(2), KC_LGUI, KC_BSPC, KC_SPC, KC_RGUI, MO(1),   KC_LPRN, KC_RPRN, KC_BSLS
    //|--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+
    
    ),
    [1] = LAYOUT(KC_ESC, KC_7, KC_8, KC_9, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_BSPC,
                 KC_TAB, KC_4, KC_5, KC_6, KC_NO, KC_NO, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_NO, KC_NO, 
                 KC_LSFT, KC_1, KC_2, KC_3, KC_NO, KC_NO, KC_MINS, KC_EQL, KC_LBRC, KC_RBRC, KC_BSLS, KC_ENT,
                 KC_NO, KC_0, KC_PDOT, MO(2), KC_NO, KC_NO, KC_NO, KC_NO, MO(1), KC_NO, KC_NO, KC_NO),

    [2] = LAYOUT(KC_TAB, KC_AMPR, KC_ASTR, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                 KC_ESC, KC_DLR, KC_PERC, KC_CIRC, KC_NO, KC_NO, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, KC_NO, KC_NO,
                 KC_LSFT, KC_EXLM, KC_AT, KC_HASH, KC_NO, KC_NO, KC_NO, KC_BTN1, KC_BTN2, KC_NO, KC_NO, KC_ENT,
                 KC_NO, KC_NO, KC_NO, MO(2), KC_NO, KC_NO, KC_SPC, KC_NO, MO(1), KC_NO, KC_NO, KC_NO)
};  
