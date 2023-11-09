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

#define MAX_INPUT_BUFFER 1024

#include <string.h>

enum Input_Input translateInput(char* buff) {
    if (buff[0]) {
        if(buff[0] == 'I') return INPUT_INTER;
        if(buff[0] == 'B') return INPUT_USER_BTN;
        if(buff[0] == 'K') {
            if(buff[1] == ' ') {
                return KEYPAD_BEGIN + Keypad_getRelativePosFromPos(Keypad_getXYfromChar(buff[2]));
            }
        }
    }

     // TODO: print help

    return INPUT_NONE;
}

enum Input_Input Input_getInput(void)
{
    Console_setColor(BLUE, DEFAULT);
    Console_writeStdout("Emulator > ");
    Console_setColor(DEFAULT, DEFAULT);

    char buff[MAX_INPUT_BUFFER] = { 0 };
    Console_clearStdin();
    Console_readStdin(buff, MAX_INPUT_BUFFER);

    return translateInput(buff);
}