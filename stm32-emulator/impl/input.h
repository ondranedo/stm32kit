/**
  * @file     input.h
  * @author   Ondrej Nedojedly (https://www.github.com/ondranedo)
  * @version  0.0.2
  * @date     09-November-2023
  * @brief    Ziska input od uzivatele
  *
  *
  * @note     Tento soubor je soucasti projektu stm32-emulator
  * @copyright  Copyright SPSE Havirov (c) 2023
  */

#ifndef STM32_EMULATOR_INPUT_H
#define STM32_EMULATOR_INPUT_H

#include "core.h"

#include "keypad/Keypad.h"

#ifdef __cplusplus
extern "C" {
#endif

enum Input {
    INPUT_NONE = 0, INPUT_TERMINATE, INPUT_INTER, INPUT_USER_BTN,
    INPUT_KEYPAD = KEYPAD_BEGIN
};
typedef enum Input Input;

/**
 * @brief Ziska input od uzivatele, ceka na vstup
 *
 * @return enum Input - ziskany input
 */
EMULATOR_API Input input_get_input(void);

#ifdef __cplusplus
}
#endif

#endif //STM32_EMULATOR_INPUT_H
