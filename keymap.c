// ObliviousGmn // Dokuu // October 2020 // Keymaps

#include QMK_KEYBOARD_H
#include "layers.h"
#include "logo.h"
#include "oleds.h"
#include "brain.c"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_QWERTY] = LAYOUT(
    //,-----------------------------------------------------.                    ,-----------------------------------------------------.
        KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,  KC_BSPC,\
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        KC_LCTL,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                         KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT,\
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, KC_RSFT,\
    //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                             KC_LALT, LOWER,  KC_SPC,     KC_ENT, RAISE, KC_RALT \
                                        //`--------------------------'  `--------------------------'
  ),

  [_LOWER] = LAYOUT(
    //,-----------------------------------------------------.                    ,-----------------------------------------------------.
         KC_ESC,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                         KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_BSPC,\
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        KC_TRNS,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                      KC_LEFT, KC_DOWN,    KC_UP, KC_RIGHT,  KC_F11, KC_F12,\
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        KC_TRNS,   KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,                      KC_PGUP, KC_PGDN,   KC_HOME, KC_END,   KC_NO, KC_RSFT,\
    //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                         KC_LGUI,  KC_TRNS,  KC_TRNS,      KC_TRNS, KC_TRNS, KC_TRNS \
                                        //`--------------------------'  `--------------------------'
  ),

  [_RAISE] = LAYOUT(
    //,-----------------------------------------------------.                    ,-----------------------------------------------------.
         KC_NO,  KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC,                      KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN,  KC_DEL,\
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        KC_LCTL, KC_VOLU, KC_VOLD, KC_MUTE,  KC_F22,  KC_F23,                      KC_MINS,  KC_EQL, KC_LCBR, KC_RCBR, KC_PIPE,  KC_GRV,\
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        KC_LSFT, KC_MPRV, KC_MNXT, KC_MSTP,  KC_NO, TG(_GAME),                    KC_UNDS, KC_PLUS, KC_LBRC, KC_RBRC, KC_BSLS, KC_TILD,\
    //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI, KC_TRNS,   KC_TRNS,     KC_TRNS,  KC_TRNS, KC_TRNS \
                                        //`--------------------------'  `--------------------------'
  ),

  [_ADJUST] = LAYOUT(
      //,-----------------------------------------------------.                    ,-----------------------------------------------------.
            RESET,  RGBRST,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                        KC_NO,  KC_NO,   KC_NO,   KC_NO,   KC_NO,  KC_NO,\
      //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
          RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, RGB_SPI,   KC_NO,                        KC_NO,   KC_NO,  KC_NO,   KC_NO,   KC_NO,  KC_NO,\
      //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
          RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, RGB_SPD,   KC_NO,                        KC_NO,   KC_NO,  KC_NO,   KC_NO,   KC_NO, RGB_RMOD,\
      //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                             KC_LGUI,  LOWER,  KC_SPC,     KC_ENT,  RAISE, KC_RALT \
                                        //`--------------------------'  `--------------------------'
  ),

  [_GAME] = LAYOUT(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_TAB,    KC_Q,    KC_W,   KC_E,     KC_R,   KC_T,                         KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,  KC_F6,\
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL,    KC_A,   KC_S,    KC_D,     KC_F,   KC_G,                         KC_F7,   KC_F8,   KC_F9,  KC_F10,   KC_F11, KC_F12,\
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT,    KC_Z,   KC_X,    KC_C,     KC_V, KC_TRNS,                         KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, KC_RSFT,\
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                       KC_LALT, MO(_WEAPON), KC_SPC,      KC_ENT, KC_TRNS, KC_NO \
                                      //`--------------------------'  `--------------------------'
    ),

  [_WEAPON] = LAYOUT(
   //,-----------------------------------------------------.                    ,-----------------------------------------------------.
        KC_ESC,    KC_1,    KC_2,    KC_3,    KC_4,   KC_5,                       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,\
   //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        KC_LCTL,   KC_A,    KC_S,    KC_D,    KC_F,   KC_6,                       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,\
   //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        KC_LSFT,   KC_Z,    KC_X,    KC_C,    KC_V,   KC_7,                       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, EEP_RST,\
    //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                         KC_TAB,   KC_TRNS,   KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS \
                                        //`--------------------------'  `--------------------------'
    ),

};