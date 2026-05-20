/* Copyright 2026 davewongillies
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
#include QMK_KEYBOARD_H


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT( /* Base */
        // MiSTer hotkeys: https://mister-devel.github.io/MkDocs_MiSTer/basics/hotkey/
        KC_F12,                         // OSD
        LSFT(LGUI(KC_PRINT_SCREEN)),    // Screenshot
        LSFT(LCTL(LALT(KC_RIGHT_ALT))), // Reset
        LALT(KC_F1),                    // Save state
        KC_F1                           // Restore state
    ),
};
