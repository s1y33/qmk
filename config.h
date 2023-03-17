/*
Copyright 2021 Danny Nguyen <danny@keeb.io>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

// wiring of each half
#define MATRIX_ROW_PINS { B1, F0, F5, B4, D7 }
#define MATRIX_COL_PINS { F1, F4, B5, C7, D4, D6 }
#define MATRIX_ROW_PINS_RIGHT { B1, F0, F5, B4, B5 }
#define MATRIX_COL_PINS_RIGHT { D4, D6, D7, C7, F1, F4 }
#define SPLIT_HAND_PIN D5

//#define IGNORE_MOD_TAP_INTERRUPT

//#define PERMISSIVE_HOLD
//#define QUICK_TAP_TERM 0
//#define TAPPING_TERM 200
//#define TAPPING_TERM_PER_KEY
//#define RETRO_TAPPING
// combokey
///#define COMBO_COUNT 1 // number of combo
//#define COMBO_TERM 40 // timeout period for combos to 40ms.
//#define DYNAMIC_TAPPING_TERM_INCREMENT 10

// mouse
#define MK_COMBINED
#define MOUSEKEY_DELAY 10 // Delay between pressing a movement key and cursor movement
#define MOUSEKEY_INTERVAL 16 // Time between cursor movements in milliseconds
#define MOUSEKEY_MOVE_DELTA 8 // Step size
#define MOUSEKEY_MAX_SPEED 8 // Maximum cursor speed at which acceleration stops
#define MOUSEKEY_TIME_TO_MAX 30 // Time until maximum cursor speed is reached
#define MOUSEKEY_WHEEL_DELAY 10 // Delay between pressing a wheel key and wheel movement
#define MOUSEKEY_WHEEL_INTERVAL 80 // Time between wheel movements
#define MOUSEKEY_WHEEL_MAX_SPEED 8 // Maximum number of scroll steps per scroll action
#define MOUSEKEY_WHEEL_TIME_TO_MAX 40 // Time until maximum scroll speed is reached


/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* ws2812 RGB LED */
#define RGB_DI_PIN E6
#ifdef RGB_DI_PIN
#    define RGBLED_NUM 68
#    define RGBLED_SPLIT { 34, 34 }
#    define RGBLIGHT_HUE_STEP 8
#    define RGBLIGHT_SAT_STEP 8
#    define RGBLIGHT_VAL_STEP 8
#    define RGBLIGHT_LIMIT_VAL 120 /* The maximum brightness level */
#    define RGBLIGHT_SLEEP         /* If defined, the RGB lighting will be switched off when the host goes to sleep */
/*== enabled animations ==*/
#    define RGBLIGHT_EFFECT_BREATHING
#    define RGBLIGHT_EFFECT_RAINBOW_MOOD
#    define RGBLIGHT_EFFECT_RAINBOW_SWIRL
#    define RGBLIGHT_EFFECT_SNAKE
#    define RGBLIGHT_EFFECT_KNIGHT
#    define RGBLIGHT_EFFECT_CHRISTMAS
#    define RGBLIGHT_EFFECT_STATIC_GRADIENT
#    define RGBLIGHT_EFFECT_RGB_TEST
#    define RGBLIGHT_EFFECT_ALTERNATING
#    define RGBLIGHT_EFFECT_TWINKLE
#    define RGBLIGHT_DEFAULT_VAL 120
#    define RGBLIGHT_DEFAULT_MODE (RGBLIGHT_MODE_RAINBOW_SWIRL + 2)
// RGB Matrix
//#    ifdef RGB_MATRIX_ENABLE
#        define ENABLE_RGB_MATRIX_ALPHAS_MODS
#        define ENABLE_RGB_MATRIX_GRADIENT_UP_DOWN
#        define ENABLE_RGB_MATRIX_GRADIENT_LEFT_RIGHT
#        define ENABLE_RGB_MATRIX_BREATHING
#        define ENABLE_RGB_MATRIX_BAND_SAT
#        define ENABLE_RGB_MATRIX_BAND_VAL
#        define ENABLE_RGB_MATRIX_BAND_PINWHEEL_SAT
#        define ENABLE_RGB_MATRIX_BAND_PINWHEEL_VAL
#        define ENABLE_RGB_MATRIX_BAND_SPIRAL_SAT
#        define ENABLE_RGB_MATRIX_BAND_SPIRAL_VAL
#        define ENABLE_RGB_MATRIX_CYCLE_ALL
#        define ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT
#        define ENABLE_RGB_MATRIX_CYCLE_UP_DOWN
#        define ENABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON
#        define ENABLE_RGB_MATRIX_CYCLE_OUT_IN
#        define ENABLE_RGB_MATRIX_CYCLE_OUT_IN_DUAL
#        define ENABLE_RGB_MATRIX_CYCLE_PINWHEEL
#        define ENABLE_RGB_MATRIX_CYCLE_SPIRAL
#        define ENABLE_RGB_MATRIX_DUAL_BEACON
#        define ENABLE_RGB_MATRIX_RAINBOW_BEACON
#        define ENABLE_RGB_MATRIX_RAINBOW_PINWHEELS
// enabled only if RGB_MATRIX_FRAMEBUFFER_EFFECTS is defined
#        define ENABLE_RGB_MATRIX_TYPING_HEATMAP
#        define ENABLE_RGB_MATRIX_DIGITAL_RAIN
// enabled only of RGB_MATRIX_KEYPRESSES or RGB_MATRIX_KEYRELEASES is defined
#        define ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE
#        define ENABLE_RGB_MATRIX_SOLID_REACTIVE
#        define ENABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE
#        define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE
#        define ENABLE_RGB_MATRIX_SOLID_REACTIVE_CROSS
#        define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTICROSS
#        define ENABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS
#        define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS
#        define ENABLE_RGB_MATRIX_SPLASH
#        define ENABLE_RGB_MATRIX_MULTISPLASH
#        define ENABLE_RGB_MATRIX_SOLID_SPLASH
#        define ENABLE_RGB_MATRIX_SOLID_MULTISPLASH
#        define RGB_MATRIX_MAXIMUM_BRIGHTNESS 120
#        define RGB_MATRIX_DEFAULT_VAL RGB_MATRIX_MAXIMUM_BRIGHTNESS
#        define RGB_MATRIX_LED_COUNT RGBLED_NUM
#        define RGB_MATRIX_SPLIT { 34, 34 }
#        define RGB_DISABLE_WHEN_USB_SUSPENDED
#        define RGB_MATRIX_KEYPRESSES
//#    endif
#endif
