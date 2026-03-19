#include "quantum.h"
#include "ws2812.h"

// 缓存当前的 LED 状态
static rgb_led_t led_cache[RGBLED_NUM] = {0};

void ws2812_set_color(int index, uint8_t red, uint8_t green, uint8_t blue) {
    if (index >= 0 && index < RGBLED_NUM) {
        led_cache[index].r = red;
        led_cache[index].g = green;
        led_cache[index].b = blue;
    }
}

void ws2812_set_color_all(uint8_t red, uint8_t green, uint8_t blue) {
    for (int i = 0; i < RGBLED_NUM; i++) {
        led_cache[i].r = red;
        led_cache[i].g = green;
        led_cache[i].b = blue;
    }
}

void ws2812_flush(void) {
    ws2812_setleds(led_cache, RGBLED_NUM);
}