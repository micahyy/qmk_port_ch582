#ifndef USB_DEVICE_STATE_H
#define USB_DEVICE_STATE_H

#include <stdint.h>

// USB 设备状态枚举
enum usb_device_state_t {
    USB_DEVICE_STATE_DEFAULT,
    USB_DEVICE_STATE_ADDRESSED,
    USB_DEVICE_STATE_CONFIGURED,
    USB_DEVICE_STATE_SUSPEND,
    USB_DEVICE_STATE_POWERED,
    USB_DEVICE_STATE_CONNECTED,
};

// USB 设备状态变量声明
extern uint8_t usb_device_state;

#endif