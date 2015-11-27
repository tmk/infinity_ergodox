#include "keymap_common.h"

const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Layer 0: Default Layer
     * ,---------------------------------.
     * |Esc  |  1|  2|  3|  4|  5|  6|   |
     * |---------------------------------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|   |
     * |-----------------------------|   |
     * |Ctrl |  A|  S|  D|  F|  G|  H|---|      ,-------.
     * |-----------------------------|   |      |   |   |
     * |Shift|  Z|  X|  C|  V|  B|  N|   |  ,-----------|
     * `-.-------------------,-----------'  |   |   |   |
     *   |   |   |   |   |   |              |   |   |---|
     *   `-------------------'              |   |   |   |
     *                                      `-----------'
     */
    [0] = KEYMAP(
    ESC, 1,   2,   3,   4,   5,   NO,   \
    TAB, Q,   W,   E,   R,   T,   NO,   \
    LCTL,A,   S,   D,   F,   G,         \
    LSFT,Z,   X,   C,   V,   B,   NO,       NO,  NO, \
    NO,  NO,  NO,  NO,  NO,            BSPC,SPC, NO, \
                                                 NO),
};

const uint16_t fn_actions[] = {
    [0] = ACTION_LAYER_MOMENTARY(1),
};

