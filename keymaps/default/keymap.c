#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * Macro pad by amoh_made
     */
    [0] = LAYOUT_orto_1x10( 
        KC_C,   
        KC_D,   KC_E,   KC_F,   
        KC_G,   KC_H,   KC_I,   
        KC_j,   KC_K,   KC_L
    )
};
