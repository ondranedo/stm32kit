/**
  * @file     config.h
  * @author   Ondrej Nedojedly (https://www.github.com/ondranedo)
  * @version  0.0.1
  * @date     08-November-2023
  * @brief    Konfiguracni soubor pro stm32_kit
  *
  *
  * @note     Tento soubor je soucasti projektu stm32-emulator
  * @copyright  Copyright SPSE Havirov (c) 2023
  */

#ifndef STM32KIT_CONFIG_H
#define STM32KIT_CONFIG_H

#ifdef __cplusplus
extern "C" {
#endif


// Pocet sloupcu ketre LCD zobrazuje
#ifndef LCD_COLS
#   define LCD_COLS     8
#endif

// Pocet radku ketre LCD zobrazuje
#ifndef LCD_ROWS
#   define LCD_ROWS     2
#endif

// Pocet sloupcu klavesnice
#ifndef KEYPAD_COLS
#   define KEYPAD_COLS  3
#endif

// Pocet radku klavesnice
#ifndef KEYPAD_ROWS
#   define KEYPAD_ROWS  4
#endif

// Cas mezi jednotlivymi kroky klavesnice
#ifndef KEYPAD_STEP
#   define KEYPAD_STEP  150
#endif

#ifdef __cplusplus
}
#endif

#endif //STM32KIT_CONFIG_H
