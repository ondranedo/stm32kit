/**
  * @file     gpio.h
  * @author   Ondrej Nedojedly (https://www.github.com/ondranedo)
  * @version  0.0.1
  * @date     03-November-2023
  * @brief
  *
  *
  * @note     Tento soubor je soucasti projektu stm32-emulator
  * @copyright  Copyright SPSE Havirov (c) 2023
  */

#ifndef STM32_KIT_GPIO
#define STM32_KIT_GPIO

#include "../stm32_kit.h"

#include "platform.h"

#ifdef __cplusplus
extern "C" {
#endif

enum pin {
    PA0 = 0x00, PA1, PA2, PA3, PA4, PA5, PA6, PA7, PA8, PA9, PA10, PA11, PA12, PA13, PA14, PA15,
    PB0 = 0x10, PB1, PB2, PB3, PB4, PB5, PB6, PB7, PB8, PB9, PB10, PB11, PB12, PB13, PB14, PB15,
    PC0 = 0x20, PC1, PC2, PC3, PC4, PC5, PC6, PC7, PC8, PC9, PC10, PC11, PC12, PC13, PC14, PC15,
    PD0 = 0x30, PD1, PD2, PD3, PD4, PD5, PD6, PD7, PD8, PD9, PD10, PD11, PD12, PD13, PD14, PD15,
    PE0 = 0x40, PE1, PE2, PE3, PE4, PE5, PE6, PE7, PE8, PE9, PE10, PE11, PE12, PE13, PE14, PE15,
    PF0 = 0x50, PF1, PF2, PF3, PF4, PF5, PF6, PF7, PF8, PF9, PF10, PF11, PF12, PF13, PF14, PF15,
    PG0 = 0x60, PG1, PG2, PG3, PG4, PG5, PG6, PG7, PG8, PG9, PG10, PG11, PG12, PG13, PG14, PG15,
    PH0 = 0x70, PH1, PH2, PH3, PH4, PH5, PH6, PH7, PH8, PH9, PH10, PH11, PH12, PH13, PH14, PH15,
    PI0 = 0x80, PI1, PI2, PI3, PI4, PI5, PI6, PI7, PI8, PI9, PI10, PI11, PI12, PI13, PI14, PI15,
    PJ0 = 0x90, PJ1, PJ2, PJ3, PJ4, PJ5, PJ6, PJ7, PJ8, PJ9, PJ10, PJ11, PJ12, PJ13, PJ14, PJ15,
    PK0 = 0xA0, PK1, PK2, PK3, PK4, PK5, PK6, PK7, PK8, PK9, PK10, PK11, PK12, PK13, PK14, PK15,
    PL0 = 0xB0, PL1, PL2, PL3, PL4, PL5, PL6, PL7, PL8, PL9, PL10, PL11, PL12, PL13, PL14, PL15,
    PM0 = 0xC0, PM1, PM2, PM3, PM4, PM5, PM6, PM7, PM8, PM9, PM10, PM11, PM12, PM13, PM14, PM15,
    P_INVALID = 0xFF,
    NC = 0xFE
};

#define LED_IN_0    (PD12)
#define LED_IN_1    (PD13)
#define LED_IN_2    (PD14)
#define LED_IN_3    (PD15)
#define LED_EX_0    (PE12)
#define LED_EX_1    (PE13)
#define LED_EX_2    (PE14)
#define LED_EX_3    (PE15)
#define USER_BUTTON (PA0)

/**
 * @brief Nastaví hodnotu pinu
 *
 *
 * @param pin Pin který se má nastavit
 * @param value Hodnota na kterou se má nastavit [0; 1]
 */
EMULATOR_API void io_set(enum pin pin, int value);

/**
 * @brief Vrátí výstupní hodnotu pinu
 *
 *
 * @param pin Pin který se má přečíst
 * @return Hodnota pinu
 */
EMULATOR_API int io_get(enum pin pin);

/**
 * @brief Vrátí vstupní hodnotu pinu
 *
 *
 * @param pin Pin který se má přečíst
 * @return Hodnota pinu
 */
EMULATOR_API int io_read(enum pin pin);

#ifdef __cplusplus
}
#endif

#endif /* STM32_KIT_CHRONO */
