#include QMK_KEYBOARD_H

enum keyboard_layers {
    _BASE,
    _MACRO,
    _FN,  // Prioritized
};

enum custom_keycodes {
    FN_HOLD = SAFE_RANGE,
    FN_LOCK,
    M01, M02, M03, M04, M05, M06, M07, M08, M09, M10, M11, M12, M13, M14, M15, M16, M17, M18, M19, M20, M21, M22, M23, M24,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT(
        KC_ESC    , KC_1      , KC_2      , KC_3      , KC_4      , KC_5      , KC_6      , KC_7      , KC_8      , KC_9      , KC_0      , KC_MINS   , KC_EQL    , KC_BSPC   , KC_7      , KC_8      , KC_9,
        KC_TAB    , KC_Q      , KC_W      , KC_E      , KC_R      , KC_T      , KC_Y      , KC_U      , KC_I      , KC_O      , KC_P      , KC_LBRC   , KC_RBRC   , KC_BSLS   , KC_4      , KC_5      , KC_6,
        KC_CAPS   , KC_A      , KC_S      , KC_D      , KC_F      , KC_G      , KC_H      , KC_J      , KC_K      , KC_L      , KC_SCLN   , KC_QUOT   , KC_ENT    , KC_1      , KC_2      , KC_3,
        KC_LSFT   , KC_Z      , KC_X      , KC_C      , KC_V      , KC_B      , KC_N      , KC_M      , KC_COMM   , KC_DOT    , KC_SLSH   , KC_RSFT   , KC_UP     , KC_0      , KC_DOT,
        FN_HOLD   , KC_LCTL   , KC_LALT   , KC_LGUI   , KC_SPC    , KC_RGUI   , KC_RALT   , FN_LOCK   , TG(_MACRO), KC_LEFT   , KC_DOWN   , KC_RGHT   , KC_GRV
    ),
    [_MACRO] = LAYOUT(
        KC_TRNS   , M01       , M02       , M03       , M04       , M05       , M06       , M07       , M08       , M09       , M10       , M11       , M12       , KC_TRNS   , M22       , M23       , M24,
        KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , M19       , M20       , M21,
        KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , M16       , M17       , M18,
        KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , M14       , M15,
        KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , M13
    ),
    [_FN] = LAYOUT(
        KC_TRNS   , KC_F1     , KC_F2     , KC_F3     , KC_F4     , KC_F5     , KC_F6     , KC_F7     , KC_F8     , KC_F9     , KC_F10    , KC_F11    , KC_F12    , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS,
        KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS,
        KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS,
        KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS,
        KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS
    ),
};

static bool fn_down = false;
static bool fn_locked = false;

static void update_fn_layer(void) {
    if (fn_down || fn_locked) {
        layer_on(_FN);
    } else {
        layer_off(_FN);
    }
}

static void run_macro(uint16_t keycode) {
    switch (keycode) {
        case M01:
            // M1
            break;
        case M02:
            // M2
            break;
        case M03:
            // M3
            break;
        case M04:
            // M4
            break;
        case M05:
            // M5
            break;
        case M06:
            // M6
            break;
        case M07:
            // M7
            break;
        case M08:
            // M8
            break;
        case M09:
            // M9
            break;
        case M10:
            // M10
            break;
        case M11:
            // M11
            break;
        case M12:
            // M12
            break;
        case M13:
            // M13
            break;
        case M14:
            // M14
            break;
        case M15:
            // M15
            break;
        case M16:
            // M16
            break;
        case M17:
            // M17
            break;
        case M18:
            // M18
            break;
        case M19:
            // M19
            break;
        case M20:
            // M20
            break;
        case M21:
            // M21
            break;
        case M22:
            // M22
            break;
        case M23:
            // M23
            break;
        case M24:
            // M24
            break;
    }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case FN_HOLD:
            fn_down = record->event.pressed;
            update_fn_layer();
            return false;
        case FN_LOCK:
            if (record->event.pressed) {
                fn_locked = !fn_locked;
                update_fn_layer();
            }
            return false;
    }
    if (keycode >= M01 && keycode <= M24) {
        if (record->event.pressed) {
            run_macro(keycode);
        }
        return false;
    }
    return true;
}

// Encoder push is SW1 in the matrix (Escape); rotation controls volume.
bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {
        tap_code(clockwise ? KC_VOLU : KC_VOLD);
    }
    return false;
}


// D79 - Caps Lock, D80 - FN Lock, D81 - Macro Lock.

enum indicator_led_indices {
    LED_CAPS_LOCK = 0,
    LED_FN_LOCK = 1,
    LED_MACRO_LOCK = 2,
};

static bool led_ready = false;
static uint8_t previous_led_state = 0xFF;

static void refresh_lock_indicators(void) {
    if (!led_ready) { 
        return;
    }
    const bool caps = host_keyboard_led_state().caps_lock;
    const bool macro = layer_state_is(_MACRO);
    const uint8_t state = (caps ? 1 : 0) | (fn_locked ? 2 : 0) | (macro ? 4 : 0);
    if (state == previous_led_state) {
        return;
    }
    rgblight_setrgb_at(caps ? 48 : 0, caps ? 48 : 0, caps ? 48 : 0, LED_CAPS_LOCK);
    rgblight_setrgb_at(0, fn_locked ? 32 : 0, fn_locked ? 64 : 0, LED_FN_LOCK);
    rgblight_setrgb_at(macro ? 64 : 0, 0, 0, LED_MACRO_LOCK);
    previous_led_state = state;
}

void keyboard_post_init_user(void) {
    rgblight_enable_noeeprom();
    rgblight_mode_noeeprom(RGBLIGHT_MODE_STATIC_LIGHT);
    rgblight_sethsv_noeeprom(0, 0, 0);
    led_ready = true;
    refresh_lock_indicators();
}

void housekeeping_task_user(void) {
    // Covers  Caps Lock changes and local lock changes.
    refresh_lock_indicators();
}

void suspend_wakeup_init_user(void) {
    previous_led_state = 0xFF;
}
