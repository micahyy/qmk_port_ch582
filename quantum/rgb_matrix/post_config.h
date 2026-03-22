// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

// clang-format off

// framebuffer
#if defined(ENABLE_RGB_MATRIX_TYPING_HEATMAP) || \
    defined(ENABLE_RGB_MATRIX_DIGITAL_RAIN)
#    define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#endif

// reactive
#if defined(ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE) || \
    defined(ENABLE_RGB_MATRIX_SOLID_REACTIVE) || \
    defined(ENABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE) || \
    defined(ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE) || \
    defined(ENABLE_RGB_MATRIX_SOLID_REACTIVE_CROSS) || \
    defined(ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTICROSS) || \
    defined(ENABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS) || \
    defined(ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS) || \
    defined(ENABLE_RGB_MATRIX_SPLASH) || \
    defined(ENABLE_RGB_MATRIX_MULTISPLASH) || \
    defined(ENABLE_RGB_MATRIX_SOLID_SPLASH) || \
    defined(ENABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS) || \
    defined(ENABLE_RGB_MATRIX_SOLID_MULTISPLASH)
#    define RGB_MATRIX_KEYPRESSES
#endif

// ========== 自定义配置 ==========

#ifndef RGB_MATRIX_LED_COUNT
    #ifdef RGBLED_NUM
        #define RGB_MATRIX_LED_COUNT RGBLED_NUM
    #else
        #define RGB_MATRIX_LED_COUNT 1
    #endif
#endif

#ifndef RGB_MATRIX_DRIVER
    #define RGB_MATRIX_DRIVER WS2812
#endif

#ifndef RGB_MATRIX_DEFAULT_MODE
    #define RGB_MATRIX_DEFAULT_MODE RGB_MATRIX_CYCLE_LEFT_RIGHT
#endif