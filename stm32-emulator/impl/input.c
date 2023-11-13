/**
  * @file     input.cpp
  * @author   Ondrej Nedojedly (https://www.github.com/ondranedo)
  * @version  0.0.2
  * @date     09-November-2023
  *
  *
  * @note     Tento soubor je soucasti projektu stm32-emulator
  * @copyright  Copyright SPSE Havirov (c) 2023
  */

#include "input.h"
#include "console.h"

enum Input translateInput(char ch) {
    if(ch == 'i') return INPUT_INTER;
    if(ch == 'b') return INPUT_USER_BTN;
    if(ch == 'k') return INPUT_KEYPAD;
    if(ch == 'x') return INPUT_TERMINATE;

    return INPUT_NONE;
}

enum Input input_get_input(void)
{
    Input input;
    do {
        input = translateInput(console_stdin_get_char());
        console_clear();
    } while(input == INPUT_NONE);

    return input;
}