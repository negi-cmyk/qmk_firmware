#include QMK_KEYBOARD_H

const uint16_t PROGMEM test_combo1[] = {KC_J, KC_K, COMBO_END};
const uint16_t PROGMEM test_combo2[] = {KC_J, KC_L, COMBO_END};
const uint16_t PROGMEM test_combo3[] = {KC_F, KC_J, COMBO_END};
const uint16_t PROGMEM test_combo4[] = {KC_F, KC_L, COMBO_END};
const uint16_t PROGMEM test_combo5[] = {KC_A, KC_J, COMBO_END};
const uint16_t PROGMEM test_combo6[] = {KC_A, KC_K, COMBO_END};
const uint16_t PROGMEM test_combo7[] = {KC_S, KC_J, COMBO_END};
const uint16_t PROGMEM test_combo8[] = {KC_S, KC_K, COMBO_END};
const uint16_t PROGMEM test_combo9[] = {KC_D, KC_J, COMBO_END};
const uint16_t PROGMEM test_combo10[] = {KC_D, KC_K, COMBO_END};
combo_t key_combos[] = {
    COMBO(test_combo1, KC_COLN),
    COMBO(test_combo2, KC_SCLN),
    COMBO(test_combo3, KC_QUOT),
    COMBO(test_combo4, KC_DQT),
    COMBO(test_combo5, KC_LPRN),
    COMBO(test_combo6, KC_RPRN),
    COMBO(test_combo7, KC_LCBR),
    COMBO(test_combo8, KC_RCBR),
    COMBO(test_combo9, KC_LBRC),
    COMBO(test_combo10, KC_RBRC)
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_planck_1x2uC(KC_EQL, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_MINS,
								OSM(MOD_LCTL|MOD_LSFT|MOD_LGUI), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, OSM(MOD_LGUI), KC_ENT,
								KC_GRV, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_BSLS,
								KC_NO, KC_NO, KC_NO, OSM(MOD_LALT), LT(1,KC_ESC), RSFT_T(KC_SPC), LT(2,KC_TAB), OSM(MOD_LCTL), KC_NO, KC_NO, KC_NO),
	[1] = LAYOUT_planck_1x2uC(KC_NO, KC_NO, KC_AMPR, KC_ASTR, KC_NO, KC_NO, KC_NO, KC_7, KC_8, KC_9, KC_NO, KC_NO,
								KC_NO, KC_NO, KC_DLR, KC_PERC, KC_CIRC, KC_NO, KC_NO, KC_4, KC_5, KC_6, KC_NO, KC_RPRN,
								KC_NO, KC_NO, KC_EXLM, KC_AT, KC_HASH, KC_NO, KC_NO, KC_1, KC_2, KC_3, KC_NO, KC_NO,
								KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_BSPC, KC_0, KC_NO, KC_NO, KC_NO, KC_NO),
	[2] = LAYOUT_planck_1x2uC(KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12,
								KC_NO, KC_LCBR, KC_RCBR, KC_NO, KC_LPRN, KC_RPRN, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_HOME, KC_END,
								KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_PGDN, KC_PGUP, KC_NO, KC_NO, KC_NO,
								QK_BOOT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO)
};


#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
