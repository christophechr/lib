/*
** EPITECH PROJECT, 2021
** lib
** File description:
** my_str_to_word_array
*/

#include <stdlib.h>

int handle_error(char *str, char *separator, int nb_separator)
{
    if (str == NULL)
        return 84;
    if (separator == NULL)
        return 84;
    if (nb_separator == 0)
        return 84;
    return 0;
}

int count_char_in_str(char c, char *str)
{
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] == c)
            return 0;
    return 1;
}

int count_separator(char *str, char *separator)
{
    int result = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (count_char_in_str(str[i], separator) == 0)
            result++;
    }
    return result;
}

char **my_str_to_word_array(char *str, char *separator)
{
    int nb_separator = count_separator(str, separator);
    char **result = malloc(sizeof(char *) * nb_separator);
    int tmp = 0;
    if (handle_error(str, separator, nb_separator) == 84)
        return NULL;
    for (int i = 0, idx = 0; i < nb_separator; i++) {
        for (; count_char_in_str(str[idx + tmp], separator) != 0; idx++)
        result[i] = malloc(sizeof(char) * idx);
        my_strncpy(result[i], str + tmp, idx);
        tmp = idx + 1;
        idx = 0;
        
    }
    return result;
}
