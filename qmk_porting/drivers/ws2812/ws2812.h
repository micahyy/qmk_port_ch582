#ifndef WS2812_H
#define WS2812_H

#include <stdint.h>
#include <stdbool.h>

// 定义 rgb_led_t 类型
typedef struct {
    uint8_t r;
    uint8_t g;
    uint8_t b;
#ifdef WS2812_RGBW
    uint8_t w;
#endif
} rgb_led_t;

void ws2812_init(void);
void ws2812_setleds(rgb_led_t *ledarray, uint16_t leds);
void ws2812_power_toggle(bool status);
bool ws2812_power_get(void);
void ws2812_spi_init(void);
void ws2812_spi_send_data(uint8_t *data, uint16_t len);

#endif