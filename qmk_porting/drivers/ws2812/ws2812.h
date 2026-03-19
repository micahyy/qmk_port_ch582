#ifndef WS2812_H
#define WS2812_H

#include <stdint.h>
#include <stdbool.h>
#include "color.h"  // QMK 中定义 rgb_led_t 的头文件

void ws2812_init(void);
void ws2812_setleds(rgb_led_t *ledarray, uint16_t leds);
void ws2812_power_toggle(bool status);
bool ws2812_power_get(void);
void ws2812_spi_init(void);
void ws2812_spi_send_data(uint8_t *data, uint16_t len);

#endif