/*
** EPITECH PROJECT, 2021
** MY_STRCPY
** File description:
** copying string into another
*/

#include "lib.h"

char *my_strcpy(char *dest, char const *src)
{
    int i = 0;
    int c  = my_strlen(src) - 1;

    while (i <= c) {
        dest[i] = src[i];
        i += 1;
    }
    return (dest);
}
