#include <stdint.h>
#include <stdbool.h>

// Delay functions
void mDelayuS(uint16_t us) {
    volatile uint32_t i;
    for (i = 0; i < us * 10; i++) {
        __asm__ volatile ("nop");
    }
}

void mDelaymS(uint16_t ms) {
    for (uint16_t i = 0; i < ms; i++) {
        mDelayuS(1000);
    }
}

// Wireless indicator functions
void wireless_indicator_daemon(void) {}
void wireless_rgb_indicator_task(void) {}
void wireless_indicator_status_reset(void) {}
void wireless_pre_process_record_kb(void) {}
bool wireless_process_record(void) { return false; }
void process_ble_passcode(void) {}

// Bluetooth protocol interface
extern const void *ch582_protocol_ble;
const void *ch582_protocol_ble = NULL;