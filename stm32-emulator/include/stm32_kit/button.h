/**
  * @file     button.h
  * @author   Ondrej Nedojedly (https://www.github.com/ondranedo)
  * @version  0.0.1
  * @date     03-November-2023
  * @brief    TBS
  *
  *
  * @note     Tento soubor je soucasti projektu stm32-emulator
  * @copyright  Copyright SPSE Havirov (c) 2023
  */

#ifndef STM32_KIT_BTN
#define STM32_KIT_BTN

#include "../stm32_kit.h"

#include "platform.h"
#include "chrono.h"
#include "gpio.h"
#include "pin.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
* @brief Inicializace uzivatelskeho tlacitka
*
*/
EMULATOR_API void BTN_setup(void);

#ifdef __cplusplus
}
#endif

#endif /* STM32_KIT_BTN */
