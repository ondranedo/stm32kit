/**
  * @file     chrono.h
  * @author   Ondrej Nedojedly (https://www.github.com/ondranedo)
  * @version  0.0.1
  * @date     03-November-2023
  * @brief    TBS
  *
  *
  * @note     Tento soubor je soucasti projektu stm32-emulator
  * @copyright  Copyright SPSE Havirov (c) 2023
  */

#ifndef STM32_KIT_CHRONO
#define STM32_KIT_CHRONO

#include "../stm32_kit.h"

#include "platform.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
* @brief  Rutina pro obsluhu preruseni SysTick.
*
*/
EMULATOR_API void SysTick_Handler(void);

/**
 * @brief Funkce pro umele pozdrzeni programu.
 *
 * @param[in] value Hodnota v rozmezi 0 - 65535.
 */
EMULATOR_API void delay(uint16_t value);

/**
 * @brief  Funkce pro pozdrzeni programu s vyuzitim SysTick Timeru.
 *         Zalezi na nastaveni SysTick_Config(), viz hl. komentar.
 *
 * @param  ms Hodnota odpovidajici poctu milisekund.
 */
EMULATOR_API void delay_ms(uint32_t ms);

/**
 * @brief  Funkce pro pozdrzeni programu s vyuzitim SysTick Timeru.
 *         Zalezi na nastaveni SysTick_Config().
 *
 * @param  us Hodnota odpovidajici poctu mikrosekund.
 */
EMULATOR_API void delay_us(uint32_t us);

#ifdef __cplusplus
}
#endif

#endif /* STM32_KIT_CHRONO */
