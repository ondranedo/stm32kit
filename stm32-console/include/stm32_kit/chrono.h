/**
  * @file     chrono.h
  * @author   Ondrej Nedojedly (https://www.github.com/ondranedo)
  * @version  0.0.1
  * @date     03-November-2023
  * @brief    TBS
  *
  *
  * @note     Tento soubor je soucasti projektu stm32-console
  * @copyright  Copyright SPSE Havirov (c) 2023
  */

#ifndef STM32_KIT_CHRONO
#define STM32_KIT_CHRONO

#include "platform.h"

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

void SysTick_Handler(void);

INLINE_STM32 void delay(uint16_t value);

INLINE_STM32 void delay_ms(uint32_t ms);

INLINE_STM32 void delay_us(uint32_t us);

#ifdef __cplusplus
}
#endif

#endif /* STM32_KIT_CHRONO */
