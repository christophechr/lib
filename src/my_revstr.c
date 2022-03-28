/*
** EPITECH PROJECT, 2021
** MY_REVSTR
** File description:
** Reverse a string
*/

#include "lib.h"

char *my_revstr(char *str)
{
    char tmp;
    int idx;
    int lenght;

    idx = 0;
    lenght = my_strlen(str) - 1;
    while (idx <= lenght / 2) {
        tmp = str[idx];
        str[idx] = str[lenght - idx];
        str[lenght - idx] = tmp;
        idx += 1;
    }
    return str;
}