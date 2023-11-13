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
#include <stdlib.h>

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
        case DEFAULT:   return "00";
        case WHITE:     return "37";
    }

    return "";
}

static char* colorBToAnsi(enum Color c)
{
    switch (c) {
        case DEFAULT:   return "00";
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

void console_clear(void)
{
    console_set_color(DEFAULT, DEFAULT);
    printf("\033[H\033[J");
    console_stdin_clear();
    fflush(stdout);
    fflush(stderr);
}


void console_stdin_read(char *buffer, size_t size)
{
    fgets(buffer, size, stdin);
}

void console_stdout_write(const char *buffer)
{
    fprintf(stdout, "%s", buffer);
    fflush(stdout);
}

void console_set_color(enum Color foreground, enum Color background)
{
    printf("\033[0;%s;%sm", colorBToAnsi(background),colorFToAnsi(foreground));
}

void console_stdin_clear()
{
    fflush(stdin);
}

char console_stdin_get_char()
{
    system("/bin/stty raw");
    char c = getc(stdin);
    system("/bin/stty cooked");
    return c;
}