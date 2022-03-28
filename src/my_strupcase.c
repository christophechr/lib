/*
** EPITECH PROJECT, 2021
** MY_STRUPCASE
** File description:
** Putting all letters in uppercase
*/

#include "lib.h"

char *my_strupcase(char *str)
{
    int c = 0;
    int len_str = my_strlen(str);

    while (c < len_str) {
        str[c] = str[c] + 20;
        c += 1;
    }
    return str;
}
