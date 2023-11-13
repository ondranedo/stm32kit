/**
  * @file     Keypad.cpp
  * @author   Ondrej Nedojedly (https://www.github.com/ondranedo)
  * @version  0.0.2
  * @date     09-November-2023
  *
  *
  * @note     Tento soubor je soucasti projektu stm32-emulator
  * @copyright  Copyright SPSE Havirov (c) 2023
  */

#include "Keypad.h"

#include "../../config/config.h"

#include <stdio.h>

KeypadPos keypad_convert_input_to_pos(int input)
{
    int c = input - KEYPAD_BEGIN;

    struct KeypadPos pos = {
            c % KEYPAD_COLS,
            c / KEYPAD_COLS
    };

    return pos;
}

uint8_t keypad_convert_pos_to_char(KeypadPos pos) {
    return KBD_MAP[pos.y][pos.x];
}

uint16_t kaypad_convert_pos_to_relative(KeypadPos pos) {
    return pos.y * KEYPAD_COLS + pos.x;
}

KeypadPos keypad_convert_char_to_pos(uint8_t character)
{
    for (int y = 0; y < KEYPAD_ROWS; ++y)
    {
        for (int x = 0; x < KEYPAD_COLS; ++x)
        {
            if (KBD_MAP[y][x] == character) {
                KeypadPos pos;
                pos.x = x;
                pos.y = y;
                return pos;
            }
        }
    }
    KeypadPos pos = {0, 0};
    return pos;
}