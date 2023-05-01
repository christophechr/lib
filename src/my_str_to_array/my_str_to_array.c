/*
** EPITECH PROJECT, 2021
** lib
** File description:
** my_str_to_word_array
*/

#include <stdlib.h>
#include "array.h"

static int handle_error(char *str, char *separator, int nb_separator)
{
    if (str == NULL)
        return 84;
    if (separator == NULL)
        return 84;
    if (nb_separator == 0)
        return 84;
    return 0;
}

char **my_str_to_array(char *str, char *separator)
{
    int nb_separator = 0;
    char **result = NULL;
    int tmp = 0;

    nb_separator = count_separator(str, separator);
    result = malloc(sizeof(char *) * nb_separator);
    if (nb_separator == 0)
        return result;
    if (handle_error(str, separator, nb_separator) == 84)
        return NULL;
    for (int i = 0, idx = 0; i <= nb_separator; i++) {
        idx = count_idx(str, separator, idx, tmp);
        result[i] = my_strncpy(result[i], str + tmp, idx + 1);
        tmp += idx + 1;
        idx = 0;
    }
    result[nb_separator + 1] = NULL;
    return result;
}