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

static pthread_t core_thread;
static pthread_mutex_t mutex;

static uint32_t ticks = 0;

#include <sys/types.h>
#include <string.h>

static void* core_loop(void* args) {
    while (1) {
        Input input = input_get_input();

        if(input == INPUT_TERMINATE) {
            exit(0);
        }

        if(input == INPUT_INTER) {
            console_stdout_write("Interrupt event\n");
        }

        if(input == INPUT_USER_BTN) {
            console_stdout_write("User button event\n");
        }
    }
}


void core_init(void) {
    pthread_create(&core_thread, NULL, core_loop, NULL);
}

void core_release(void) {
    pthread_join(core_thread, NULL);
}

void core_config_systick(uint32_t ticks)
{
    pthread_mutex_lock(&mutex);



    pthread_mutex_unlock(&mutex);
}