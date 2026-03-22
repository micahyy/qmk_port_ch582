#include "usb_device_state.h"

uint8_t usb_device_state = USB_DEVICE_STATE_DEFAULT;

void usb_device_state_init(void) {
    // 初始化 USB 设备状态
}

void usb_device_state_set_reset(uint8_t busid) {
    usb_device_state = USB_DEVICE_STATE_DEFAULT;
}

void usb_device_state_set_resume(uint8_t busid, bool configured, int resume) {
    // USB 恢复处理
    if (configured) {
        usb_device_state = USB_DEVICE_STATE_CONFIGURED;
    } else {
        usb_device_state = USB_DEVICE_STATE_ADDRESSED;
    }
}

void usb_device_state_set_suspend(uint8_t busid, bool configured, int suspend) {
    usb_device_state = USB_DEVICE_STATE_SUSPEND;
}

void usb_device_state_set_configuration(uint8_t busid, bool configured, int config) {
    if (configured) {
        usb_device_state = USB_DEVICE_STATE_CONFIGURED;
    }
}