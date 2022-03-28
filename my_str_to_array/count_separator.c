/*
** EPITECH PROJECT, 2022
** lib
** File description:
** count_separator
*/

static int is_char_in_str(char c, char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] == c)
            return 0;
    return 1;
}

int count_separator(char *str, char *separator)
{
    int result = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (is_char_in_str(str[i], separator) == 0)
            result++;
    }
    return result;
}