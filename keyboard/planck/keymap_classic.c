#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* Classic
     http://www.keyboard-layout-editor.com/#/layouts/46aa7b0762cb7a535eaaf1e49644398fsdfsdfZZffsdfZffhjd
  */
  /* 0: main layer */
  KEYMAP( ESC,    Q,    W,    E,    R,    T,    Y,    U,    I,    O,    P,    TAB,  \
          LCTL,   A,    S,    D,    F,    G,    H,    J,    K,    L,    SCLN, BSPC, \
          LALT,   Z,    X,    C,    V,    B,    N,    M,    COMM,  DOT,  SLSH, ENT,  \
          RSFT,   LCTL, LGUI, LSFT, FN0,     SPC,     FN1,  LEFT, DOWN, UP,   RGHT),
  /*1: fn lower layer */
  KEYMAP( POWER,   PSCR, SLCK, PAUS, NLCK, EXECUTE,MENU,APP, P7,   P8,   P9,   PSLS, \
          TRNS,    VOLD, VOLU, MUTE, CAPS, CANCEL,UNDO,AGAIN,P4,   P5,   P6,   PAST, \
          TRNS,    INS,  CUT,  COPY, PASTE,FN14, FN15, FN16, P1,   P2,   P3,   PMNS, \
          TRNS,    TRNS, TRNS, TRNS, TRNS,   TRNS,     TRNS, P0,   PDOT, PENT, PPLS ),

  /* 2: fn raise layer */
  KEYMAP( F1,      F2,   F3,   F4,   F5,   F6,   F7,   F8,   F9,   F10,  F11,  F12,   \
          TRNS,    1,    2,    3,    4,    5,    6,    7,    8,    9,    0,    DEL,   \
          TRNS,    GRV,  MINS, EQL,  QUOT, FN10, FN11, FN12, LBRC, RBRC, BSLASH,TRNS, \
          TRNS,    TRNS, TRNS, TRNS, TRNS,   TRNS,     TRNS, HOME, PGDN, PGUP, END ),

};
const uint16_t PROGMEM fn_actions[] = {
  [0] = ACTION_LAYER_MOMENTARY(1),
  [1] = ACTION_LAYER_MOMENTARY(2),

  [10] = ACTION_MODS_KEY(MOD_LSFT, KC_QUOT),
  [11] = ACTION_MODS_KEY(MOD_LSFT, KC_LBRC),
  [12] = ACTION_MODS_KEY(MOD_LSFT, KC_RBRC),
};
