// Copyright (c) 2022 Takeshi Ishii (mtei@github)
// SPDX-License-Identifier: GPL-2.0-or-later

// clang-format off

#pragma once

// Selection of RGBLIGHT MODE to use.
#undef RGBLIGHT_ANIMATIONS
#undef RGBLIGHT_EFFECT_BREATHING
#undef RGBLIGHT_EFFECT_RAINBOW_MOOD
#undef RGBLIGHT_EFFECT_RAINBOW_SWIRL
#undef RGBLIGHT_EFFECT_SNAKE
#undef RGBLIGHT_EFFECT_KNIGHT
#undef RGBLIGHT_EFFECT_CHRISTMAS
#undef RGBLIGHT_EFFECT_STATIC_GRADIENT
#undef RGBLIGHT_EFFECT_RGB_TEST
#undef RGBLIGHT_EFFECT_ALTERNATING

#if defined(LED_ANIMATIONS)
#    if LED_ANIMATIONS_LEVEL > 1
#        define RGBLIGHT_EFFECT_BREATHING
#        define RGBLIGHT_EFFECT_RAINBOW_MOOD
#        define RGBLIGHT_EFFECT_RAINBOW_SWIRL
//#        define RGBLIGHT_EFFECT_SNAKE
//#        define RGBLIGHT_EFFECT_KNIGHT
#        define RGBLIGHT_EFFECT_CHRISTMAS
#        define RGBLIGHT_EFFECT_STATIC_GRADIENT
//#        define RGBLIGHT_EFFECT_RGB_TEST
//#        define RGBLIGHT_EFFECT_ALTERNATING
#    else
#        define RGBLIGHT_EFFECT_BREATHING
#        define RGBLIGHT_EFFECT_RAINBOW_MOOD
//#        define RGBLIGHT_EFFECT_RAINBOW_SWIRL
//#        define RGBLIGHT_EFFECT_SNAKE
//#        define RGBLIGHT_EFFECT_KNIGHT
//#        define RGBLIGHT_EFFECT_CHRISTMAS
#        define RGBLIGHT_EFFECT_STATIC_GRADIENT
//#        define RGBLIGHT_EFFECT_RGB_TEST
//#        define RGBLIGHT_EFFECT_ALTERNATING
#        endif
#endif

#ifdef DEBUG_CONFIG
#  include "debug_config.h"
#endif
