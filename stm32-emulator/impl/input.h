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

enum Input_Input {
    INPUT_NONE = 0, INPUT_INTER = 1, INPUT_USER_BTN = 2,
    INPUT_KEYPAD = KEYPAD_BEGIN
};
typedef enum Input_Input Input_Input;

/**
 * @brief Ziska input od uzivatele, ceka
 *
 * @return enum Input - ziskany input
 */
EMULATOR_API Input_Input Input_getInput(void);

#ifdef __cplusplus
}
#endif

#endif //STM32_EMULATOR_INPUT_H
