/*
** EPITECH PROJECT, 2021
** MY_STRCAT
** File description:
** concatenating two strings
*/

#include "lib.h"

char *my_strcat(char *dest, char const *src)
{
    int len_src = my_strlen(src);
    int len_dest = my_strlen(dest);

    for (int count = 0; count < len_src && src[count] != '\0'; count++) {
        dest[len_dest + count] = src[count];
    }
    return dest;
}
