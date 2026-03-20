#ifndef WS2812_SUPPLEMENT_H
#define WS2812_SUPPLEMENT_H

#include <stdint.h>
#include <stdbool.h>
#include "gpio.h"

#ifndef WS2812_TIMEOUT
#define WS2812_TIMEOUT 100
#endif

// ========== WS2812 时序参数 ==========
#ifndef WS2812_TIMING
#define WS2812_TIMING 1250  // 1.25μs = 1250ns，WS2812 的位周期
#endif

#ifndef WS2812_TRST_US
#define WS2812_TRST_US 50   // 复位时间 50μs（WS2812 要求 >50μs）
#endif

void ws2812_power_toggle(bool status);
bool ws2812_power_get(void);

#endif