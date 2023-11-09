/**
  * @file     core.c
  * @author   Ondrej Nedojedly (https://www.github.com/ondranedo)
  * @version  0.0.2
  * @date     09-November-2023
  *
  *
  * @note     Tento soubor je soucasti projektu stm32-emulator
  * @copyright  Copyright SPSE Havirov (c) 2023
  */

#include "core.h"
#include "console.h"
#include "input.h"

#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

pthread_t core_thread;

static void* core_loop(void* args) {
    Console_clear();

    while(1)
    {
        enum Input_Input input = Input_getInput();
        struct Keypad_PosXY s;

        if(input == INPUT_INTER)
        {

        }
        if(input == INPUT_USER_BTN)
        {

        }
        if(input >= INPUT_KEYPAD)
        {
            s = Keypad_getXYfromInput(input);
        }
    }

    Console_setColor(DEFAULT, DEFAULT);

    Core_release();

    exit(1);
}


void Core_init(void) {
    pthread_create(&core_thread, NULL, core_loop, NULL);
    Console_writeStdout("Core init started\n");
}

void Core_release(void) {
    pthread_join(core_thread, NULL);
}

void Core_sysTick_Config(uint32_t ticks)
{

}