/*
** EPITECH PROJECT, 2021
** MY_STRLEN
** File description:
** Counting and returns number of char in string
*/

int my_strlen(const char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }
    return i;
}
