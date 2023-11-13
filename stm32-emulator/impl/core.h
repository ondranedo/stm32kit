/**
  * @file     core.h
  * @author   Ondrej Nedojedly (https://www.github.com/ondranedo)
  * @version  0.0.1
  * @date     08-November-2023
  * @brief    Hlavni soubor pro emulaci
  *
  *
  * @note     Tento soubor je soucasti projektu stm32-emulator
  * @copyright  Copyright SPSE Havirov (c) 2023
  */

#ifndef STM32KIT_CORE_H
#define STM32KIT_CORE_H

#include <stdint.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif


#define EMULATOR_API extern
#define EMULATOR_CONSTRUCTOR __attribute__((constructor))


/**
 * @brief   Inicializace jadra emulatoru
 */
EMULATOR_API void core_init(void);

/**
 * @brief   Uvolneni jadra emulatoru
 */
EMULATOR_API void core_release(void);

/**
 * @brief   Nastaveni hodinoveho signalu
 */
EMULATOR_API void core_config_systick(uint32_t ticks);

#ifdef __cplusplus
}
#endif

#endif //STM32KIT_CORE_H
