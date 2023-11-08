/**
  * @file     stm32_kit.h
  * @author   Ondrej Nedojedly (https://www.github.com/ondranedo)
  * @version  0.0.1
  * @date     03-November-2023
  * @brief    Obecny soubor pro emulator desek STM32
  *
  *
  * @note     Tento soubor je soucasti projektu stm32-emulator
  * @copyright  Copyright SPSE Havirov (c) 2023
  */
#ifndef STM32_KIT
#define STM32_KIT

#include <stddef.h>
#include <stdint.h>

#include "../impl/stm32f4xx.h"
#include "../config/config.h"

#ifdef __cplusplus
extern "C" {
#endif

#define BOARD_SETUP __attribute__((constructor))

#ifdef __cplusplus
}
#endif

#endif /* STM32_KIT */
