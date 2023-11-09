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

Keypad_PosXY Keypad_getXYfromInput(int input)
{
    int c = input - KEYPAD_BEGIN;

    struct Keypad_PosXY pos = {
            c % KEYPAD_COLS,
            c / KEYPAD_COLS
    };

    return pos;
}

uint8_t Keypad_getCharFromPos(Keypad_PosXY pos) {
    return KBD_MAP[pos.y][pos.x];
}

uint16_t Keypad_getRelativePosFromPos(Keypad_PosXY pos) {
    return pos.y * KEYPAD_COLS + pos.x;
}

Keypad_PosXY Keypad_getXYfromChar(uint8_t character)
{
    for (int y = 0; y < KEYPAD_ROWS; ++y)
    {
        for (int x = 0; x < KEYPAD_COLS; ++x)
        {
            if (KBD_MAP[y][x] == character) {
                Keypad_PosXY pos;
                pos.x = x;
                pos.y = y;
                return pos;
            }
        }
    }
    Keypad_PosXY pos = {0, 0};
    return pos;
}