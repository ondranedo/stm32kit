/**
  * @file     lcd.h
  * @author   Ondrej Nedojedly (https://www.github.com/ondranedo)
  * @version  0.0.1
  * @date     03-November-2023
  * @brief    TBS
  *
  *
  * @note     Tento soubor je soucasti projektu stm32-emulator
  * @copyright  Copyright SPSE Havirov (c) 2023
  */

#ifndef STM32_KIT_LCD
#define STM32_KIT_LCD

#include "../stm32_kit.h"

#include "platform.h"
#include "chrono.h"
#include "gpio.h"
#include "pin.h"

#ifdef __cplusplus
extern "C" {
#endif

#define LCD_ON           (0x0C)      // Zapnuti displeje (bez kurzoru)
#define LCD_OFF          (0x08)      // Vypnuti displeje
#define LCD_CLR          (0x01)      // Smazani displeje a navrat kurzoru na 1. radek a 1. sloupec
#define LCD_CUR_ON       (0x0E)      // Zapnuti kurzoru bez blikani (vcetne zapnuti displeje)
#define LCD_CUR_OFF      LCD_ON      // Vypnuti kurzoru (displej zustane zapnuty)
#define LCD_CUR_BLINK    (0x0F)      // Zapnuti blikajiciho kurzoru (vcetne zapnuti displeje)
#define LCD_CUR_NO_BLINK LCD_CUR_ON  // Zapnuti blikajiciho kurzoru (vcetne zapnuti displeje)
#define LCD_CUR_HOME     (0x03)      // Navrat kurzoru na prvni pozici prvniho radku
#define LCD_SL           (0x18)      // Rotace displeje vlevo
#define LCD_SR           (0x1C)      // Rotace displeje vpravo
#define LCD_LINE1        (0x80)      // Prvni radek prvni pozice	(0x00 + DDRAM = 0x80)
#define LCD_LINE2        (0xC0)      // Druhy radek prvni pozice	(0x40 + DDRAM = 0xC0)
#define LCD_LINE3        (0x94)      // Prvni radek prvni pozice (0x14 + DDRAM = 0x94)
#define LCD_LINE4        (0xD4)      // Prvni radek prvni pozice (0x54 + DDRAM = 0xD4)

/**
 * @brief  Umele pozdrzeni, pro vykonani instrukce LCD
 *
 */
EMULATOR_API void LCD_busy(void);

/**
 * @brief  Zapis nibble informace (vyuziti 4bit komunikace, prikazy jsou vsak 8bit).
 *
 * @param  nibble Hodnota v rozmezi 0 - F.
 *
 */
EMULATOR_API void LCD_write_nibble(uint8_t nibble);

/**
 * @brief  Funkce pro rizeni/nastaveni LCD.
 *
 * @param  cmd Kod pro ridici prikaz.
 *
 */
EMULATOR_API void LCD_set(uint8_t cmd);

/**
 * @brief  Funkce pro inicializaci LCD.
 *
 */
EMULATOR_API void LCD_setup(void);

/**
 * @brief  Funkce pro vypis 1 znaku na LCD.
 *
 * @param  data Kod pro vypisovany znak, pripadne konkretni znak.
 *
 */
EMULATOR_API void LCD_symbol(uint8_t data);

/**
 * @brief  Funkce pro vypis retezce znaku na LCD.
 *         Funkce neresi pocet znaku na radek, ani pocet radku, nutno resit v samotnem programu nebo si napsat vl. funkci.
 *
 * @param  text Retezec/pole znaku, jez se maji vypsat na LCD.
 *
 */
EMULATOR_API void LCD_print(const char *__restrict__ text);

/**
 * @brief  Funkce pro nastaveni pozice kurzoru na LCD.
 *
 * @param x sloupec
 * @param y radek
 */
EMULATOR_API void LCD_goto(int x, int y);

#ifdef __cplusplus
}
#endif

#endif /* STM32_LCD */
