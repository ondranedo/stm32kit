/**
  * @file     lcd.h
  * @author   Ondrej Nedojedly (https://www.github.com/ondranedo)
  * @version  0.0.1
  * @date     03-November-2023
  * @brief    TBS
  *
  *
  * @note     Tento soubor je soucasti projektu stm32-console
  * @copyright  Copyright SPSE Havirov (c) 2023
  */

#ifndef STM32_KIT_LCD
#define STM32_KIT_LCD

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

/**
 * @brief  Umele pozdrzeni, pro vykonani instrukce LCD
 *
 */
void LCD_busy(void);

/**
 * @brief  Zapis nibble informace (vyuziti 4bit komunikace, prikazy jsou vsak 8bit).
 *
 * @param  nibble Hodnota v rozmezi 0 - F.
 *
 */
void LCD_write_nibble(uint8_t nibble);

/**
 * @brief  Funkce pro rizeni/nastaveni LCD.
 *
 * @param  cmd Kod pro ridici prikaz.
 *
 */
void LCD_set(uint8_t cmd);

/**
 * @brief  Funkce pro inicializaci LCD.
 *
 */
void LCD_setup(void);

/**
 * @brief  Funkce pro vypis 1 znaku na LCD.
 *
 * @param  data Kod pro vypisovany znak, pripadne konkretni znak.
 *
 */
void LCD_symbol(uint8_t data);

/**
 * @brief  Funkce pro vypis retezce znaku na LCD.
 *         Funkce neresi pocet znaku na radek, ani pocet radku, nutno resit v samotnem programu nebo si napsat vl. funkci.
 *
 * @param  text Retezec/pole znaku, jez se maji vypsat na LCD.
 *
 */
void LCD_print(const char *__restrict__ text);

void LCD_goto(int x, int y);

#ifdef __cplusplus
}
#endif

#endif /* STM32_LCD */
