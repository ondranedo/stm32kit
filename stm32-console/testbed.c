/**
 * @file   <nazev>.c
 * @author <Jmeno Prijmeni>
 *
 */

#include "include/stm32_kit.h"
#include "include/stm32_kit/platform.h"


#include <stdio.h>

BOARD_SETUP void setup(void) {
    printf("setup(void)");
};

int main(void) {
    printf("main()");

    return 0;
}

