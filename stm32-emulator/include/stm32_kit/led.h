/**
  * @file     led.h
  * @author   Ondrej Nedojedly (https://www.github.com/ondranedo)
  * @version  0.0.1
  * @date     03-November-2023
  * @brief    TBS
  *
  *
  * @note     Tento soubor je soucasti projektu stm32-emulator
  * @copyright  Copyright SPSE Havirov (c) 2023
  */

#ifndef STM32_KIT_LED
#define STM32_KIT_LED

#include "../stm32_kit.h"

#include "platform.h"
#include "chrono.h"
#include "gpio.h"
#include "pin.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief  Defaultni inicializace pro vybrany typ desky (skolni nebo domaci).
 *         Aktivace portu pro vestavenou(e) LED a uzivatelske tlacitko, vcetne nastaveni smeru pinu na nich.
 *         Vyuzito (nejen) pro otestovani pripravku.
 *
 */
EMULATOR_API void LED_setup(void);

#ifdef __cplusplus
}
#endif

#endif /* STM32_KIT_LED */
