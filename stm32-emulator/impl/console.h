/**
  * @file     Console.h
  * @author   Ondrej Nedojedly (https://www.github.com/ondranedo)
  * @version  0.0.2
  * @date     08-November-2023
  * @brief    Moznost vykresleni do konzole (nebo do okna v budoucnu)
  *
  *
  * @note     Tento soubor je soucasti projektu stm32-emulator
  * @copyright  Copyright SPSE Havirov (c) 2023
  */

#ifndef STM32_EMULATOR_CONSOLE_H
#define STM32_EMULATOR_CONSOLE_H

#include "core.h"

#ifdef __cplusplus
extern "C" {
#endif

enum Color {
    DEFAULT = 0,
    BLACK,
    RED,
    GREEN,
    YELLOW,
    BLUE,
    MAGENTA,
    CYAN,
    WHITE
};


/**
 * @brief Nastavi barvu konzole
 *
 * @param foreground Barva textu
 * @param background Barva pozadi
 */
EMULATOR_API void Console_setColor(enum Color foreground, enum Color background);

/**
 * @brief Smaze stdout
 */
EMULATOR_API void Console_clear(void);

/**
 * @brief Precte stdin
 *
 * @param buffer buffer do ktereho se ulozi vstup
 * @param size size velikost bufferu
 */
EMULATOR_API void Console_readStdin(char *buffer, size_t size);

/**
 * @brief Smaze obsah stdin souboru
 *
 */
EMULATOR_API void Console_clearStdin();

/**
 *  @brief Vypise do stdout
 *
 *  @param buffer buffer ktery se vypise, musi byt ukoncen znakem '\0'
 */
EMULATOR_API void Console_writeStdout(const char *buffer);

#ifdef __cplusplus
}
#endif

#endif //STM32_EMULATOR_CONSOLE_H
