/*
** EPITECH PROJECT, 2021
** MY_REVSTR
** File description:
** Reverse a string
*/

int lenght_string_rev(char *str)
{
    int d = 0;

    while (str[d] != '\0') {
        d++;
    }
    return d;
}

char *my_revstr(char *str)
{
    int c = 0;
    int d = lenght_string_rev(str) - 1;
    int e = d;
    char str_fix[lenght_string_rev(str)];

    for (c; c <= d; c++) {
        str_fix[e] = str[c];
        e--;
    }
    c = 0;
    for (c; c <= d; c++) {
        str[c] = str_fix[c];
    }
    return str;
}
