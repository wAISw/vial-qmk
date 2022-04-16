#define EZ_SAFE_RANGE SAFE_RANGE

enum custom_keycodes {
  RGB_SLD = EZ_SAFE_RANGE,
  ST_MACRO_0,
  ST_MACRO_1,
};


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_DOWN(X_LGUI) SS_DOWN(X_SPACE) SS_DELAY(100) SS_UP(X_SPACE) SS_UP(X_LGUI));

    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_B));

    }
    break;
  }
  return true;
}
