/**
  * @file     platform.h
  * @author   Ondrej Nedojedly (https://www.github.com/ondranedo)
  * @version  0.0.1
  * @date     03-November-2023
  * @brief    TBS
  *
  *
  * @note     Tento soubor je soucasti projektu stm32-emulator
  * @copyright  Copyright SPSE Havirov (c) 2023
  */

#ifndef STM32_KIT_PLATFORM
#define STM32_KIT_PLATFORM

#include "../stm32_kit.h"

#ifdef __cplusplus
extern "C" {
#endif

#define CONSTEXPR __attribute__((const))
#define INLINE_STM32 static inline
#define CONSTEXPR __attribute__((const))

#ifdef __cplusplus
}
#endif

#endif
