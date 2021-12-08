/*
** EPITECH PROJECT, 2021
** MY_STRUPCASE
** File description:
** Putting all letters in uppercase
*/

int lenght_string_d(char *str)
{
    int d = 0;

    while (str[d] != '\0') {
        d++;
    }
    return d;
}

char *my_strupcase(char *str)
{
    int c = 0;
    int len_str = lenght_string_d(str);

    while (c < len_str) {
        str[c] = str[c] + 20;
        c += 1;
    }
    return str;
}
