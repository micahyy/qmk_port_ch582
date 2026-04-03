#include <stdint.h>
#include <stdbool.h>

// ========== Wireless indicator functions ==========
void wireless_indicator_daemon(void) {}
void wireless_rgb_indicator_task(void) {}
void wireless_indicator_status_reset(void) {}
void wireless_pre_process_record_kb(void) {}
bool wireless_process_record(void) { return false; }
void process_ble_passcode(void) {}

// ========== Bluetooth protocol interface ==========
extern const void *ch582_protocol_ble;
const void *ch582_protocol_ble = NULL;

// ========== EEPROM/NVM functions ==========
bool nvm_eeconfig_is_enabled(void) { return true; }
uint32_t nvm_eeconfig_read_debug(void) { return 0; }
uint32_t nvm_eeconfig_read_default_layer(void) { return 0; }
uint32_t nvm_eeconfig_read_keymap(void) { return 0; }
void nvm_eeconfig_update_keymap(uint32_t data) { (void)data; }
uint32_t nvm_eeconfig_read_rgb_matrix(void) { return 0; }
void nvm_eeconfig_update_rgb_matrix(uint32_t data) { (void)data; }
void nvm_eeconfig_update_handedness(bool handedness) { (void)handedness; }
void nvm_eeconfig_update_kb(void) {}
void nvm_eeconfig_erase(void) {}
void nvm_eeconfig_enable(void) {}
void nvm_eeconfig_update_debug(uint32_t data) { (void)data; }
void nvm_eeconfig_update_default_layer(uint32_t data) { (void)data; }
void nvm_eeconfig_disable(void) {}
void nvm_eeconfig_update_user(void) {}

// ========== Dynamic Keymap functions ==========
bool nvm_dynamic_keymap_read_keycode(uint16_t keymap_id, uint16_t layer, uint16_t row, uint16_t column, uint16_t* keycode) { 
    (void)keymap_id; (void)layer; (void)row; (void)column;
    if (keycode) *keycode = 0;
    return true;
}
bool nvm_dynamic_keymap_update_keycode(uint16_t keymap_id, uint16_t layer, uint16_t row, uint16_t column, uint16_t keycode) { 
    (void)keymap_id; (void)layer; (void)row; (void)column; (void)keycode;
    return true;
}
bool nvm_dynamic_keymap_update_buffer(uint16_t keymap_id, uint16_t offset, uint8_t* data, uint16_t size) { 
    (void)keymap_id; (void)offset; (void)data; (void)size;
    return true;
}
bool nvm_dynamic_keymap_read_buffer(uint16_t keymap_id, uint16_t offset, uint8_t* data, uint16_t size) {
    (void)keymap_id; (void)offset; (void)data; (void)size;
    return true;
}
void nvm_dynamic_keymap_erase(void) {}
uint16_t nvm_dynamic_keymap_macro_size(void) { return 0; }
bool nvm_dynamic_keymap_macro_read_buffer(uint16_t offset, uint8_t* buffer, uint16_t size) { 
    (void)offset; (void)buffer; (void)size;
    return true;
}
bool nvm_dynamic_keymap_macro_update_buffer(uint16_t offset, uint8_t* data, uint16_t size) { 
    (void)offset; (void)data; (void)size;
    return true;
}
void nvm_dynamic_keymap_macro_erase(void) {}
void nvm_dynamic_keymap_macro_reset(void) {}

// ========== VIA functions ==========
bool nvm_via_read_magic(void) { return true; }
void nvm_via_erase(void) {}
void nvm_via_update_magic(void) {}
void nvm_via_update_layout_options(void) {}
void nvm_via_read_layout_options(void) {}

// ========== QMK processing functions ==========
void process_underglow(void) {}
void process_default_layer(void) {}
void process_oneshot(void) {}
void process_quantum(void) {}

// ========== Wakeup functions ==========
void wakeup_matrix_handle_key_event(uint8_t row, uint8_t col, bool pressed) { (void)row; (void)col; (void)pressed; }
bool keypress_is_wakeup_key(uint8_t row, uint8_t col) { (void)row; (void)col; return false; }

// ========== System functions ==========
void HAL_SleepInit(void) {}
void CH58X_LowPower(void) {}
uint32_t MEM_BUF[256] = {0};