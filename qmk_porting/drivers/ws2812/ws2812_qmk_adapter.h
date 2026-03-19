#ifndef WS2812_QMK_ADAPTER_H
#define WS2812_QMK_ADAPTER_H

#include <stdint.h>

void ws2812_set_color(int index, uint8_t red, uint8_t green, uint8_t blue);
void ws2812_set_color_all(uint8_t red, uint8_t green, uint8_t blue);
void ws2812_flush(void);

#endif