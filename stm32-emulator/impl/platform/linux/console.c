/**
  * @file     Console.c
  * @author   Ondrej Nedojedly (https://www.github.com/ondranedo)
  * @version  0.0.2
  * @date     08-November-2023
  *
  *
  * @note     Tento soubor je soucasti projektu stm32-emulator
  * @copyright  Copyright SPSE Havirov (c) 2023
  */

#include "../../console.h"

#include <stdio.h>

static char* colorFToAnsi(enum Color c)
{
    switch (c) {
        case BLACK:     return "30";
        case RED:       return "31";
        case GREEN:     return "32";
        case YELLOW:    return "33";
        case BLUE:      return "34";
        case MAGENTA:   return "35";
        case CYAN:      return "36";
        case DEFAULT:
        case WHITE:     return "37";
    }

    return "";
}

static char* colorBToAnsi(enum Color c)
{
    switch (c) {
        case DEFAULT:
        case BLACK:     return "40";
        case RED:       return "41";
        case GREEN:     return "42";
        case YELLOW:    return "43";
        case BLUE:      return "44";
        case MAGENTA:   return "45";
        case CYAN:      return "46";
        case WHITE:     return "47";
    }

    return "";
}

void Console_Clear(void)
{
    Console_SetColor(DEFAULT, DEFAULT);
    printf("\033[H\033[J");
    fflush(stdout);
    fflush(stdin);
    fflush(stderr);
}


void Console_ReadStdin(char *buffer, size_t size)
{
    fgets(buffer, size, stdin);
}

void Console_WriteStdout(const char *buffer)
{
    fprintf(stdout, "%s", buffer);
    fflush(stdout);
}

void Console_SetColor(enum Color foreground, enum Color background)
{
    printf("\033[0;%s;%sm", colorBToAnsi(background),colorFToAnsi(foreground));
}