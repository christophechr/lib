/*
** EPITECH PROJECT, 2021
** MY_STRCPY
** File description:
** copying string into another
*/

int lenght_string_b(char const *str)
{
    int d = 0;

    while (str[d] != '\0') {
        d++;
    }
    return d;
}

char *my_strcpy(char *dest, char const *src)
{
    int i = 0;
    int c  = lenght_string_b(src) - 1;

    while (i <= c) {
        dest[i] = src[i];
        i += 1;
    }
    return (dest);
}
