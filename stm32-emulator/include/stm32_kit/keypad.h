/**
  * @file     keypad.h
  * @author   Ondrej Nedojedly (https://www.github.com/ondranedo)
  * @version  0.0.1
  * @date     03-November-2023
  * @brief    TBS
  *
  *
  * @note     Tento soubor je soucasti projektu stm32-emulator
  * @copyright  Copyright SPSE Havirov (c) 2023
  */

#ifndef STM32_KIT_KEYPAD
#define STM32_KIT_KEYPAD

#include "../stm32_kit.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef KBD_MAP // V pripade, ze nebude definovano pole pro rozlozeni KeyPad, definuje se
static uint8_t KBD_MAP[KEYPAD_ROWS][KEYPAD_COLS];
#endif

/**
 * @brief  Funkce pro zisteni stisknute klavesy.
 *
 * @return  Pokud neni stisknuta zadna klavesa vraci 0, jinak prislusny znak, dle zadefinovaneho rozlozeni pro KeyPad.
 */
EMULATOR_API uint8_t KBD_read(void);

/**
 * @brief  Pocatecni inicializace pro KeyPad
 *
 */
EMULATOR_API void KBD_setup(void);

#ifdef __cplusplus
}
#endif


#endif /* STM32_KIT_STM32_KIT_KEYPAD */
