/* Copyright 2023 Brian Low
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#pragma once

// Enabling this option changes the startup behavior to listen for an
// active USB communication to delegate which part is master and which
// is slave. With this option enabled and theres’s USB communication,
// then that half assumes it is the master, otherwise it assumes it
// is the slave.
//
// I've found this helps with some ProMicros where the slave does not boot
#define SPLIT_USB_DETECT

#define ENCODER_RESOLUTION 2

// OLED
#define OLED_TIMEOUT 120000
#define OLED_BRIGHTNESS 120

#define RGB_DI_PIN D3
#define RGB_MATRIX_MAXIMUM_BRIGHTNESS 80 // limits maximum brightness of LEDs to 100 out of 255. Higher may cause the controller to crash.
#define RGB_MATRIX_HUE_STEP 2
#define RGB_MATRIX_SAT_STEP 8
#define RGB_MATRIX_VAL_STEP 8
#define RGB_MATRIX_SPD_STEP 4
#define SPLIT_TRANSPORT_MIRROR
#define RGB_DISABLE_WHEN_USB_SUSPENDED

// RGB Matrix Effects
#define ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT    // Full gradient scrolling left to right
#define ENABLE_RGB_MATRIX_DUAL_BEACON         // Full gradient spinning around center of keyboard
#define ENABLE_RGB_MATRIX_GRADIENT_LEFT_RIGHT    // Static gradient left to right, speed controls how much gradient changes
#define ENABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON  // Full gradient Chevron shapped scrolling left to right
#define ENABLE_RGB_MATRIX_CYCLE_SPIRAL        // Full gradient spinning spiral around center of keyboard
#define ENABLE_RGB_MATRIX_PIXEL_FRACTAL       // Single hue fractal filled keys pulsing horizontally out to edges
#define ENABLE_RGB_MATRIX_PIXEL_RAIN          // Randomly light keys with random hues

// Disable almost all rgb matrix animations to reduce firmware size (also some of them defined in info.json)
#undef ENABLE_RGB_MATRIX_ALPHAS_MODS         // Static dual hue, speed is hue for secondary hue
#undef ENABLE_RGB_MATRIX_GRADIENT_UP_DOWN    // Static gradient top to bottom, speed controls how much gradient changes
#undef ENABLE_RGB_MATRIX_BREATHING           // Single hue brightness cycling animation
#undef ENABLE_RGB_MATRIX_BAND_SAT        // Single hue band fading saturation scrolling left to right
#undef ENABLE_RGB_MATRIX_BAND_VAL        // Single hue band fading brightness scrolling left to right
#undef ENABLE_RGB_MATRIX_BAND_PINWHEEL_SAT   // Single hue 3 blade spinning pinwheel fades saturation
#undef ENABLE_RGB_MATRIX_BAND_PINWHEEL_VAL   // Single hue 3 blade spinning pinwheel fades brightness
#undef ENABLE_RGB_MATRIX_BAND_SPIRAL_SAT     // Single hue spinning spiral fades saturation
#undef ENABLE_RGB_MATRIX_BAND_SPIRAL_VAL     // Single hue spinning spiral fades brightness
#undef ENABLE_RGB_MATRIX_CYCLE_ALL           // Full keyboard solid hue cycling through full gradient
#undef ENABLE_RGB_MATRIX_CYCLE_UP_DOWN       // Full gradient scrolling top to bottom
#undef ENABLE_RGB_MATRIX_CYCLE_OUT_IN        // Full gradient scrolling out to in
#undef ENABLE_RGB_MATRIX_CYCLE_OUT_IN_DUAL   // Full dual gradients scrolling out to in
#undef ENABLE_RGB_MATRIX_CYCLE_PINWHEEL      // Full gradient spinning pinwheel around center of keyboard
#undef ENABLE_RGB_MATRIX_RAINBOW_BEACON      // Full tighter gradient spinning around center of keyboard
#undef ENABLE_RGB_MATRIX_RAINBOW_PINWHEELS   // Full dual gradients spinning two halfs of keyboard
#undef ENABLE_RGB_MATRIX_RAINDROPS           // Randomly changes a single key's hue
#undef ENABLE_RGB_MATRIX_JELLYBEAN_RAINDROPS // Randomly changes a single key's hue and saturation
#undef ENABLE_RGB_MATRIX_HUE_BREATHING       // Hue shifts up a slight ammount at the same time, then shifts back
#undef ENABLE_RGB_MATRIX_HUE_PENDULUM        // Hue shifts up a slight ammount in a wave to the right, then back to the left
#undef ENABLE_RGB_MATRIX_HUE_WAVE            // Hue shifts up a slight ammount and then back down in a wave to the right
#undef ENABLE_RGB_MATRIX_PIXEL_FLOW          // Pulsing RGB flow along LED wiring with random hues
#undef ENABLE_RGB_MATRIX_TYPING_HEATMAP      // How hot is your WPM!
#undef ENABLE_RGB_MATRIX_DIGITAL_RAIN        // That famous computer simulation
#undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE   // Pulses keys hit to hue & value then fades value out
#undef ENABLE_RGB_MATRIX_SOLID_REACTIVE      // Static single hue, pulses keys hit to shifted hue then fades to current hue
#undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE      // Hue & value pulse near a single key hit then fades value out
#undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE // Hue & value pulse near multiple key hits then fades value out
#undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_CROSS     // Hue & value pulse the same column and row of a single key hit then fades value out
#undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTICROSS// Hue & value pulse the same column and row of multiple key hits then fades value out
#undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS     // Hue & value pulse away on the same column and row of a single key hit then fades value out
#undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS// Hue & value pulse away on the same column and row of multiple key hits then fades value out
#undef ENABLE_RGB_MATRIX_SPLASH              // Full gradient & value pulse away from a single key hit then fades value out
#undef ENABLE_RGB_MATRIX_MULTISPLASH         // Full gradient & value pulse away from multiple key hits then fades value out
#undef ENABLE_RGB_MATRIX_SOLID_SPLASH        // Hue & value pulse away from a single key hit then fades value out
#undef ENABLE_RGB_MATRIX_SOLID_MULTISPLASH   // Hue & value pulse away from multiple key hits then fades value out
#undef ENABLE_RGB_MATRIX_EFFECT_MAX
