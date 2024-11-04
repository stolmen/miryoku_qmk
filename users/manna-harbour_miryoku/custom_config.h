// Copyright 2019 Manna Harbour
// https://github.com/manna-harbour/miryoku

// This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>.
#define MIRYOKU_NAV_VI
#define MIRYOKU_ALPHAS_QWERTY

#pragma once

#ifndef RGB_MATRIX_ENABLE
#    define RGB_MATRIX_ENABLE
#endif

// HEATMAP effect.
#define ENABLE_RGB_MATRIX_TYPING_HEATMAP
#define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#define RGB_MATRIX_TYPING_HEATMAP_DECREASE_DELAY_MS 50 // default is 25
#define RGB_MATRIX_TYPING_HEATMAP_SPREAD 30            // default is 40
//
#define MIRYOKU_CLIPBOARD_FUN
// #define OS_DETECTION_ENABLE

//  this has been copied from

// #include "quantum_keycodes.h"

// enum custom_keycodes {
//     QMKBEST = SAFE_RANGE,
// };

// clang-format off
#define XXX KC_NO

#define MIRYOKU_MAPPING( \
      K00,  K01,  K02,  K03,  K04,         K05,  K06,  K07,  K08,  K09, \
      K10,  K11,  K12,  K13,  K14,         K15,  K16,  K17,  K18,  K19, \
      K20,  K21,  K22,  K23,  K24,         K25,  K26,  K27,  K28,  K29, \
      N30,  N31,  K32,  K33,  K34,         K35,  K36,  K37,  N38,  N39 \
) \
LAYOUT_split_3x6_3( \
KC_F13,  K00,  K01,  K02,  K03,  K04,         K05,  K06,  K07,  K08,  K09,  KC_F16, \
KC_F14,  K10,  K11,  K12,  K13,  K14,         K15,  K16,  K17,  K18,  K19,  KC_F17, \
KC_F15,  K20,  K21,  K22,  K23,  K24,         K25,  K26,  K27,  K28,  K29,  KC_F18 , \
                  K32,  K33,  K34,         K35,  K36,  K37 \
)
// clang-format off

// TODO: mod the heatmap effect so that underglow LEDS spatially close to impact are also lit up
// add a new purple temperature maybe.
