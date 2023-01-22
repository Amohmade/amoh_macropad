#include QMK_KEYBOARD_H

#define ____ KC_TRNS
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_amoh(  
        KC_TRNS,   KC_TRNS, 
            KC_C,   
        KC_D,   KC_E,   KC_F,   
        KC_G,   KC_H,   KC_I,   
        KC_J,   KC_K,   KC_L
    ),
};
bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {
        if (clockwise) {
            tap_code_delay(KC_A, 10);
        } else {
            tap_code_delay(KC_B, 10);
        }
    }
    return true;
}