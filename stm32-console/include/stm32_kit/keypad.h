/**
  * @file     keypad.h
  * @author   Ondrej Nedojedly (https://www.github.com/ondranedo)
  * @version  0.0.1
  * @date     03-November-2023
  * @brief    TBS
  *
  *
  * @note     Tento soubor je soucasti projektu stm32-console
  * @copyright  Copyright SPSE Havirov (c) 2023
  */

#ifndef STM32_KIT_KEYPAD
#define STM32_KIT_KEYPAD

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

#ifndef KEYPAD_STEP // Prodleva mezi dalsim snimanim klaves
# define KEYPAD_STEP 100
#endif

#ifndef KBD_MAP // V pripade, ze nebude definovano pole pro rozlozeni KeyPad, definuje se
static uint8_t KBD_MAP[KEYPAD_ROWS][KEYPAD_COLS];
#endif

/**
 * @brief  Funkce pro zisteni stisknute klavesy.
 *
 * @return  Pokud neni stisknuta zadna klavesa vraci 0, jinak prislusny znak, dle zadefinovaneho rozlozeni pro KeyPad.
 */
uint8_t KBD_read(void);

/**
 * @brief  Pocatecni inicializace pro KeyPad
 *
 */
void KBD_setup(void);


//int16_t KBD_read_wires(void);
//void KBD_activateRow(int row);
//int KBD_wireValueForRow(int row);
//uint8_t KBD_findKeyInRow(uint16_t value, int row, int *error);

#ifdef __cplusplus
}
#endif


#endif /* STM32_KIT_STM32_KIT_KEYPAD */
