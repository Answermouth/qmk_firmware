#include QMK_KEYBOARD_H

enum layer_names {
    _MAIN,
    _CODE,
    _LOWER,
    _RAISE,
    _GAMING
};

#define LOWER LT(_RAISE, KC_HOME)
#define RAISE LT(_RAISE, KC_END)
#define CODE LT(_CODE, KC_ENT)
#define SPACE LSFT_T(KC_SPC)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Qwerty
 * ,-----------------------------------------------------------------------------------.
 * | Esc  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  | Bksp |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | Del  |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  |  '   |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |  Up  |  /   |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Ctrl | GUI  |      |  Alt |Lower | Space|Enter |Raise |   /  | Left | Down |Right |
 * `-----------------------------------------------------------------------------------'
 */
[_MAIN] = LAYOUT_ortho_5x12 ( \
   KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC, \
   KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_DEL , \
   _______, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, \
   _______, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_UP,   KC_SLSH, \
   KC_LCTL, KC_RGUI, _______, KC_LALT, LOWER,   SPACE,   CODE,    RAISE,   KC_SLSH, KC_LEFT, KC_DOWN, KC_RIGHT  \
),

/* CODE
 * ,-----------------------------------------------------------------------------------.
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      |      |      |      |   =  |   ~  |   '  |   +  |  Ins |      |      |      |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      |   |  |   [  |   {  |   (  |   _  |   -  |   )  |   }  |   ]  |  \   |      |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |      |      |      |   <  |   `  |   /  |   >  |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[_CODE] = LAYOUT_ortho_5x12 ( \
   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
   _______, _______, _______, _______,KC_EQUAL,KC_TILDE, KC_QUOT, KC_PLUS, KC_INS , _______, _______, _______, \
   _______, KC_PIPE, KC_LBRC, KC_LCBR, KC_LPRN, KC_UNDS, KC_MINS, KC_RPRN, KC_RCBR, KC_RBRC, KC_BSLS, _______, \
   _______, _______, _______, _______,  KC_LT, KC_GRAVE, KC_SLSH,  KC_GT , _______, _______, _______, _______, \
   _______, _______, _______, _______, _______, _______, KC_TRNS, _______, _______, _______, _______, _______  \
),

/* Raise
 * ,-----------------------------------------------------------------------------------.
 * |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      |      |      |      |      | Prev | Next |      |      |      |      |      |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |      |      |      |      | Vol- | Vol+ |      |      |      | PgUp |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |     Play    |      | RGB  |      | PgDn |      |
 * `-----------------------------------------------------------------------------------'
 */
[_RAISE] = LAYOUT_ortho_5x12 ( \
   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12 , \
   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
   _______, _______, _______, _______, _______, KC_MPRV, KC_MNXT, _______, _______, _______, _______, _______, \
   _______, _______, _______, _______, _______, KC_VOLD, KC_VOLU, _______, _______, _______, KC_PGUP, _______, \
   _______, _______, _______, _______, _______, KC_MPLY, KC_MPLY, KC_TRNS, RGB_TOG, _______, KC_PGDN, _______ \
),

/* Qwerty
 * ,-----------------------------------------------------------------------------------.
 * | Esc  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  | Bksp |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | Del  |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  |  '   |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | Shift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |  Up  |  /   |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Ctrl | GUI  | Left |  Alt |Lower | Space|Enter |Raise |   /  | Left | Down |Right |
 * `-----------------------------------------------------------------------------------'
 */
[_GAMING] = LAYOUT_ortho_5x12 ( \
   KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC, \
   KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_DEL , \
   _______, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, \
   KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_UP,   KC_SLSH, \
   KC_LCTL, KC_RGUI, _______, KC_LALT, _______, KC_SPC,  KC_SPC,  _______, KC_SLSH, KC_LEFT, KC_DOWN, KC_RIGHT  \
)
};

