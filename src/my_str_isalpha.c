/*
** EPITECH PROJECT, 2021
** MY_ISALPHA
** File description:
** Verifying if string is in alphanum characters
*/

int compare_string_ascii(char const *str, int nb)
{
    if (str[nb] < 65) {
        return 0;
    }
    if (str[nb] > 90 && str[nb] < 97) {
        return 0;
    }
    if (str[nb] > 122) {
        return 0;
    }
    return 1;
}

int my_str_isalpha(char const *str)
{
    int count = 0;
    int res = 1;

    while (str[count] != '\0') {
        res = compare_string_ascii(str, count);
        if (res != 1)
            return 0;
        count++;
    }
    return 1;
}
