# Konzolova "emulace" pro stm32_kit HAL a RTOS

## Obecné informace o projektu

- Nejdenda se o emulaci `STM32F407VGTx`!
- Slouzi pro vyvoj s `stm32_kit` HAL a RTOS, bez nutnosti vlastnit prislusny HW (`STM32f407VGTx`, `LCD 1602A`, keyboard, ...) a SW (`Keil uVision`, `ST-LINK`, ...). nz
- Vysledny kod pujde zkompilovat v `Keil uVision` a nahrat na pripravek.
- Jelikoz se jedna o emulaci, je zapotrebi komplexnejsiho kodu, a proto je treba uzit vice **translation units**.

## Struktura

