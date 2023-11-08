/**
  * @file     stm32f4xx.h
  * @author   Ondrej Nedojedly (https://www.github.com/ondranedo)
  * @version  0.0.1
  * @date     08-November-2023
  * @brief    Nahrazeni funkci pro stm32f4xx
  *
  *
  * @note     Tento soubor je soucasti projektu stm32-emulator
  * @copyright  Copyright SPSE Havirov (c) 2023
  */

#ifndef STM32KIT_STM32F4XX_H
#define STM32KIT_STM32F4XX_H

#include "core.h"

#ifdef __cplusplus
extern "C" {
#endif

EMULATOR_API size_t SystemCoreClock;

EMULATOR_API void SystemCoreClockUpdate(void);

EMULATOR_API void SysTick_Config(uint32_t ticks);

#ifdef __cplusplus
}
#endif

#endif //STM32KIT_STM32F4XX_H
