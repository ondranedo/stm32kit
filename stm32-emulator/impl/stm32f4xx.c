/**
  * @file     stm32f4xx.c
  * @author   Ondrej Nedojedly (https://www.github.com/ondranedo)
  * @version  0.0.1
  * @date     08-November-2023
  *
  * @note     Tento soubor je soucasti projektu stm32-emulator
  * @copyright  Copyright SPSE Havirov (c) 2023
  */

#include "stm32f4xx.h"

#include "../impl/core.h"

size_t SystemCoreClock;

void SystemCoreClockUpdate(void)
{
    Core_init();
}

void SysTick_Config(uint32_t ticks)
{

}
