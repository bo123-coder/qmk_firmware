// Copyright 2024 Baichuan Ouyang (@Baichuan Ouyang)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once



#define BOTH_SHIFTS_TURNS_ON_CAPS_WORD
#define WS2812_PIO_USE_PIO1 // Force the usage of PIO1 peripheral, by default the WS2812 implementation uses the PIO0 peripheral
//#define WS2812_TRST_US 80
#define WS2812_BYTE_ORDER WS2812_BYTE_ORDER_RGB
#define RGB_MATRIX_DEFAULT_VAL 32


// Pick good defaults for enabling homerow modifiers
#define TAPPING_TERM 230


#define WS2812_DI_PIN GP16 // The pin connected to the data pin of the LEDs
#define RGBLIGHT_LED_COUNT 1                     // The number of LEDs connected


#define MAX_DEFERRED_EXECUTORS 32
