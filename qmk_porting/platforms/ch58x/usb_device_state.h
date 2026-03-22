#ifndef USB_DEVICE_STATE_H
#define USB_DEVICE_STATE_H

#include <stdint.h>
#include <stdbool.h>

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

// USB 设备状态函数声明
void usb_device_state_init(void);
void usb_device_state_set_reset(uint8_t busid);
void usb_device_state_set_resume(uint8_t busid, bool configured, int resume);
void usb_device_state_set_suspend(uint8_t busid, bool configured, int suspend);
void usb_device_state_set_configuration(uint8_t busid, bool configured, int config);

#endif