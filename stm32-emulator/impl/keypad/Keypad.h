/**
  * @file     Keypad.h
  * @author   Ondrej Nedojedly (https://www.github.com/ondranedo)
  * @version  0.0.2
  * @date     09-November-2023
  * @brief    Ovladani keypadu
  *
  *
  * @note     Tento soubor je soucasti projektu stm32-emulator
  * @copyright  Copyright SPSE Havirov (c) 2023
  */

#ifndef STM32_EMULATOR_KEYPAD_H
#define STM32_EMULATOR_KEYPAD_H

#include "../core.h"

#define KEYPAD_BEGIN 0x64

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief Pozice na keypadu, X a Y
 *
 * X je sloupec, Y je radek, pocitano od 0; levy horni roh
 */
struct KeypadPos {
    uint8_t x, y;
};
typedef struct KeypadPos KeypadPos;

/**
 * @brief Prevede input od uzivatele na X,Y pozici na keypadu
 *
 * @return enum Input - ziskany input
 */
EMULATOR_API KeypadPos keypad_convert_input_to_pos(int input);

/**
 * @brief vrati pripony znak na dane pozici
 * @param pos X, Y pozice
 *
 * @return char - znak na dane pozici
 */
EMULATOR_API uint8_t keypad_convert_pos_to_char(KeypadPos pos);

/**
 * @brief Vrati X, Y pozici na keypadu podle znaku
 *
 * @param character Znak jeho pozice chceme ziskat
 *
 * @return X, Y pozice
 */
EMULATOR_API KeypadPos keypad_convert_char_to_pos(uint8_t character);

/**
 * @brief Vrati Relativni pozici na keypadu podle X, Y pozice
 *
 * @param character Znak jeho pozice chceme ziskat
 *
 * @return Y * KEYPAD_COLS + X; pozice
 */
EMULATOR_API uint16_t kaypad_convert_pos_to_relative(KeypadPos pos);
#ifdef __cplusplus
}
#endif

#endif //STM32_EMULATOR_KEYPAD_H
