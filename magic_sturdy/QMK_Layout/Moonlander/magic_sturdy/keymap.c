#include QMK_KEYBOARD_H
#include "version.h"

#define KC_MAC_UNDO LGUI(KC_Z)
#define KC_MAC_CUT LGUI(KC_X)
#define KC_MAC_COPY LGUI(KC_C)
#define KC_MAC_PASTE LGUI(KC_V)
#define KC_PC_UNDO LCTL(KC_Z)
#define KC_PC_CUT LCTL(KC_X)
#define KC_PC_COPY LCTL(KC_C)
#define KC_PC_PASTE LCTL(KC_V)
#define ES_LESS_MAC KC_GRV
#define ES_GRTR_MAC LSFT(KC_GRV)
#define ES_BSLS_MAC ALGR(KC_6)
#define NO_PIPE_ALT KC_GRV
#define NO_BSLS_ALT KC_EQUAL
#define LSA_T(kc) MT(MOD_LSFT | MOD_LALT, kc)
#define BP_NDSH_MAC ALGR(KC_8)
#define SE_SECT_MAC ALGR(KC_6)
#define MOON_LED_LEVEL LED_LEVEL

#define C_MAGIC QK_AREP
#define C_GUI_EQL LGUI_T(KC_EQL)
#define C_RSFT_ENT RSFT_T(KC_ENT)
#define C_LALT_ENT LALT_T(KC_ENT)

enum layers {
    BASE,
    SYMB,
    MDIA,
    NAVI,
};

enum custom_keycodes {
  MK_DUND = SAFE_RANGE,
  MG_ENT,
  MG_MENT,
  MG_ER,
  MG_ES,
  MG_UST,
  MG_ON,
  MG_ION,
  MG_OA,
  MG_SP_BUT,
  MG_THE,
  MG_EFORE,
  MG_HICH,
  MG_UESTION,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[BASE] = LAYOUT_moonlander(
        KC_EQL,         KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_LPRN,                                        KC_RPRN,        KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_BSPC,
        KC_DEL,         KC_V,           KC_M,           KC_L,           KC_C,           KC_P,           KC_DQUO,                                        KC_PIPE,        KC_B,           C_MAGIC,        KC_U,           KC_O,           KC_COMM,        KC_BSLS,
        LCTL(KC_BSPC),  KC_S,           KC_T,           KC_R,           KC_D,           KC_Y,           KC_Q,                                           KC_DLR,         KC_F,           KC_N,           KC_E,           KC_A,           KC_I,           C_GUI_EQL,
        KC_LSFT,        KC_X,           KC_K,           KC_J,           KC_G,           KC_W,                                                                           KC_Z,           KC_H,           KC_MINS,        KC_SLSH,        KC_DOT,         C_RSFT_ENT,
        LT(SYMB,KC_GRV), KC_LCTL,       KC_LGUI,        KC_ESC,         TT(NAVI),                       C_LALT_ENT,                                     RCTL_T(KC_QUOT),                C_S_T(KC_ESC),  KC_LALT,        KC_LBRC,        TT(MDIA),       TT(SYMB),
                                                                        KC_SPC,         KC_TAB,         KC_BSPC,                                        OSL(SYMB),      QK_REP,         OSM(MOD_LSFT)
    ),
	[SYMB] = LAYOUT_moonlander(
        _______, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, _______, _______, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11,
        _______, KC_HASH, KC_AMPR, KC_LCBR, KC_RCBR, KC_PIPE, _______, _______, KC_INS, KC_7, KC_8, KC_9, KC_PMNS, KC_F12,
        _______, KC_AT, KC_EXLM, KC_LPRN, KC_RPRN, KC_TILD, _______, MK_DUND, KC_PPLS, KC_4, KC_5, KC_6, KC_PAST, _______,
        _______, KC_PERC, KC_CIRC, KC_LBRC, KC_RBRC, KC_GRV, KC_PSLS, KC_1, KC_2, KC_3, KC_PEQL, _______,
        _______, _______, _______, _______, _______, _______, _______, KC_0, KC_PCMM, KC_PDOT, KC_PENT, _______,
        _______, _______, _______, _______, _______, _______
    ),
	[MDIA] = LAYOUT_moonlander(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, QK_BOOT,
        _______, _______, _______, KC_MS_U, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, KC_MS_L, KC_MS_D, KC_MS_R, _______, _______, _______, _______, _______, _______, _______, _______, KC_MPLY,
        _______, _______, _______, _______, _______, _______, _______, _______, KC_MPRV, KC_MNXT, _______, _______,
        XXXXXXX, _______, _______, KC_BTN1, KC_BTN2, _______, _______, KC_VOLU, KC_VOLD, KC_MUTE, _______, XXXXXXX,
        _______, _______, _______, _______, _______, _______
    ),
	[NAVI] = LAYOUT_moonlander(
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, KC_WH_L, KC_WH_R, LCTL(KC_F), LCTL(KC_R), KC_WH_U, XXXXXXX, XXXXXXX, KC_PGUP, KC_HOME, KC_UP, KC_END, KC_CAPS, XXXXXXX,
        XXXXXXX, KC_LALT, KC_LGUI, KC_LSFT, KC_LCTL, KC_WH_D, XXXXXXX, XXXXXXX, KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, LCTL(KC_DEL), XXXXXXX,
        XXXXXXX, LCTL(KC_Z), LCTL(KC_X), LCTL(KC_C), LCTL(KC_V), LCTL(KC_A), KC_INS, KC_BSPC, XXXXXXX, KC_DEL, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, _______, _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        _______, _______, _______, KC_ENT, KC_TAB, KC_SPC
    )
};

const uint16_t PROGMEM combo0[] = { KC_MINS, KC_H, COMBO_END};
const uint16_t PROGMEM combo1[] = { KC_J, KC_G, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, KC_SCLN),
    COMBO(combo1, KC_COLN)
};

extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}


// const uint8_t PROGMEM ledmap[][DRIVER_LED_TOTAL][3] = {
//     [0] = { {41,255,255}, {0,245,245}, {0,245,245}, {188,255,255}, {188,255,255}, {74,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {188,255,255}, {74,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {252,255,232}, {74,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {252,255,232}, {74,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {188,255,255}, {74,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {219,255,255}, {219,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {0,245,245}, {41,255,255}, {0,245,245}, {219,255,255}, {219,255,255}, {188,255,255}, {188,255,255}, {74,255,255}, {219,255,255}, {131,255,255}, {219,255,255}, {188,255,255}, {74,255,255}, {131,255,255}, {131,255,255}, {219,255,255}, {188,255,255}, {74,255,255}, {131,255,255}, {131,255,255}, {219,255,255}, {188,255,255}, {74,255,255}, {219,255,255}, {131,255,255}, {131,255,255}, {41,255,255}, {74,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {219,255,255}, {219,255,255}, {219,255,255}, {188,255,255}, {188,255,255}, {41,255,255}, {188,255,255} },

//     [1] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {152,255,255}, {219,255,255}, {219,255,255}, {219,255,255}, {219,255,255}, {152,255,255}, {219,255,255}, {219,255,255}, {219,255,255}, {0,0,0}, {152,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {0,0,0}, {152,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {0,0,0}, {152,255,255}, {219,255,255}, {219,255,255}, {219,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {152,255,255}, {152,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {152,255,255}, {219,255,255}, {219,255,255}, {219,255,255}, {41,255,255}, {152,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {219,255,255}, {152,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {219,255,255}, {152,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {152,255,255}, {252,255,232}, {252,255,232}, {219,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

//     [2] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {152,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {152,255,255}, {152,255,255}, {0,0,0}, {188,255,255}, {0,0,0}, {0,0,0}, {152,255,255}, {0,0,0}, {188,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {234,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {234,255,255}, {41,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {234,255,255}, {41,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {41,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {74,255,255}, {0,0,0}, {0,0,0}, {0,0,0} },

//     [3] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {188,255,255}, {219,255,255}, {41,255,255}, {0,0,0}, {0,0,0}, {188,255,255}, {219,255,255}, {74,255,255}, {0,0,0}, {0,0,0}, {41,255,255}, {219,255,255}, {74,255,255}, {0,0,0}, {0,0,0}, {74,255,255}, {219,255,255}, {41,255,255}, {0,0,0}, {0,0,0}, {188,255,255}, {188,255,255}, {74,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {41,255,255}, {0,245,245}, {0,0,0}, {0,0,0}, {0,0,0}, {234,255,255}, {252,255,232}, {0,245,245}, {0,0,0}, {0,0,0}, {252,255,232}, {252,255,232}, {0,0,0}, {0,0,0}, {0,0,0}, {234,255,255}, {252,255,232}, {0,245,245}, {0,0,0}, {0,0,0}, {234,255,255}, {234,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

// };

// void set_layer_color(int layer) {
//   for (int i = 0; i < DRIVER_LED_TOTAL; i++) {
//     HSV hsv = {
//       .h = pgm_read_byte(&ledmap[layer][i][0]),
//       .s = pgm_read_byte(&ledmap[layer][i][1]),
//       .v = pgm_read_byte(&ledmap[layer][i][2]),
//     };
//     if (!hsv.h && !hsv.s && !hsv.v) {
//         rgb_matrix_set_color( i, 0, 0, 0 );
//     } else {
//         RGB rgb = hsv_to_rgb( hsv );
//         float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
//         rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
//     }
//   }
// }

// void rgb_matrix_indicators_user(void) {
//   if (keyboard_config.disable_layer_led) { return; }
//   switch (biton32(layer_state)) {
//     case 0:
//       set_layer_color(0);
//       break;
//     case 1:
//       set_layer_color(1);
//       break;
//     case 2:
//       set_layer_color(2);
//       break;
//     case 3:
//       set_layer_color(3);
//       break;
//    default:
//     if (rgb_matrix_get_flags() == LED_FLAG_NONE)
//       rgb_matrix_set_color_all(0, 0, 0);
//     break;
//   }
// }

uint16_t get_alt_repeat_key_keycode_user(uint16_t keycode, uint8_t mods) {
    switch (keycode) {
        case KC_DQUO:
        case KC_LPRN:
        case KC_SPC:
        case KC_ENT:
        case C_LALT_ENT:
        case C_RSFT_ENT:
        case KC_TAB: return MG_THE;
        case KC_C:
        case KC_P:
        case KC_D:
        case KC_G:
        case KC_Z: return KC_Y;
        case KC_Y: return KC_P;
        case KC_R: return KC_L;
        case KC_K: return KC_S;
        case KC_L:
        case KC_S: return KC_K;
        case KC_U: return KC_E;
        case KC_E: return KC_U;
        case KC_O: return KC_A;
        case KC_A: return KC_O;
        case KC_DOT:
            if (mods & MOD_MASK_SHIFT) {
                return KC_EQL;
            } else {
                return KC_BSLS;
            }
        case KC_COMM:
            if (mods & MOD_MASK_SHIFT) {
                return KC_EQL;
            } else {
                return MG_SP_BUT;
            }
        case KC_EQL:
        case C_GUI_EQL:
        case KC_MINS: return KC_RABK;
        case KC_Q: return MG_UESTION;
        case KC_H: return MG_OA;
        case KC_I: return MG_ON;
        case KC_N: return MG_ION;
        case KC_V: return MG_ER;
        case KC_X: return MG_ES;
        case KC_M: return MG_ENT;
        case KC_T: return MG_MENT;
        case KC_J: return MG_UST;
        case KC_B: return MG_EFORE;
        case KC_W: return MG_HICH;
        case KC_1 ... KC_0: return KC_DOT;
    }

    return XXXXXXX;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        int rep_count = get_repeat_key_count();
        if (rep_count < -1 && keycode != MG_UST) {
            send_char('n');
            return false;
        }
        switch (keycode) {
            case MK_DUND:
                SEND_STRING(SS_LSFT(SS_TAP(X_4)) SS_DELAY(100) SS_LSFT(SS_TAP(X_MINUS)));
                return false;
            case MG_ENT:
                SEND_STRING("ent");
                return false;
            case MG_MENT:
                SEND_STRING("ment");
                return false;
            case MG_ER:
                SEND_STRING("er");
                return false;
            case MG_ES:
                SEND_STRING("es");
                return false;
            case MG_UST:
                if (rep_count < -1) {
                    SEND_STRING("ment");
                } else {
                    SEND_STRING("ust");
                }
                return false;
            case MG_OA:
                SEND_STRING("oa");
                return false;
            case MG_ON:
                SEND_STRING("on");
                return false;
            case MG_ION:
                SEND_STRING("ion");
                return false;
            case MG_SP_BUT:
                SEND_STRING(" but");
                return false;
            case MG_THE:
                SEND_STRING("the");
                return false;
            case MG_EFORE:
                SEND_STRING("efore");
                return false;
            case MG_HICH:
                SEND_STRING("hich");
                return false;
            case MG_UESTION:
                SEND_STRING("uestion");
                return false;
        }

        if (rep_count > 0) {
            switch (keycode) {
                case KC_DQUO:
                case KC_LPRN:
                case KC_SPC:
                case KC_ENT:
                case C_LALT_ENT:
                case C_RSFT_ENT:
                    unregister_weak_mods(MOD_MASK_CSAG);
                    SEND_STRING("for");
                    return false;
                case KC_I:
                    unregister_weak_mods(MOD_MASK_CSAG);
                    SEND_STRING("ng");
                    return false;
                case KC_DOT:
                    unregister_weak_mods(MOD_MASK_CSAG);
                    SEND_STRING("org");
                    return false;
                case KC_COMM:
                    unregister_weak_mods(MOD_MASK_CSAG);
                    SEND_STRING(" and");
                    return false;
                case KC_A:
                    unregister_weak_mods(MOD_MASK_CSAG);
                    SEND_STRING("nd");
                    return false;
                case KC_N:
                    unregister_weak_mods(MOD_MASK_CSAG);
                    send_char('f');
                    return false;
                case KC_B:
                    unregister_weak_mods(MOD_MASK_CSAG);
                    SEND_STRING("ecause");
                    return false;
                case KC_W:
                    unregister_weak_mods(MOD_MASK_CSAG);
                    SEND_STRING("ould");
                    return false;
                case KC_Y:
                    unregister_weak_mods(MOD_MASK_CSAG);
                    if (rep_count > 2) {
                        SEND_STRING("ll");
                        return false;
                    }
                    if (rep_count > 1) {
                        send_char('\'');
                        return false;
                    }
                    SEND_STRING("ou");
                    return false;
            }
        }
    }
    return true;
}

