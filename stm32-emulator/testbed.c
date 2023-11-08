#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include "include/stm32_kit.h"
#include "include/stm32_kit/lcd.h"
#include "include/stm32_kit/keypad.h"
#include "include/stm32_kit/led.h"


#include "impl/console.h"

int main(void) {
    Console_Clear();

    while(1)
    {
        Console_SetColor(RED, WHITE);
        Console_WriteStdout("Input> ");
        char buff[64];
        Console_ReadStdin(buff, 64);

        Console_SetColor(DEFAULT, DEFAULT);
        Console_WriteStdout(buff);
    }

    Console_SetColor(DEFAULT, DEFAULT);
}