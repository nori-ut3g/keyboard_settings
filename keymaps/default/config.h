#pragma once

#define SPLIT_HAND_PIN E6
#define SPLIT_HAND_PIN_LOW_IS_LEFT
#define SPLIT_USB_DETECT

#define RGBLIGHT_LAYERS // 機能の有効化
#define RGBLED_NUM 54 // LEDの個数
#define RGBLED_SPLIT { 27, 27 } // (分割キーボードの場合)左右それぞれに実装したLEDの個数
#define RGBLIGHT_MAX_LAYERS 3 // (最大32)
#define WS2812_DI_PIN D3
#define RGBLIGHT_LIMIT_VAL 31

#define DYNAMIC_MACRO_NO_NESTING 1
