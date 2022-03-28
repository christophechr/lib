/*
** EPITECH PROJECT, 2021
** MY_PUTSTR
** File description:
** Display one-by-one caracters of string
*/

#include "lib.h"

int my_putstr(const char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        my_putchar(str[i]);
        i++;
    }
    return 0;
}
