/*
** EPITECH PROJECT, 2021
** MY_ISNUM
** File description:
** Verifying if str is numeric characters or not
*/

int compare_string_ascii_num(char const *str, int nb)
{
    if (str[nb] < 48) {
        return 0;
    }
    if (str[nb] > 57) {
        return 0;
    }
    return 1;
}

int my_str_isnum(char const *str)
{
    int count = 0;

    while (str[count] != '\0') {
        compare_string_ascii_num(str, count);
        count += 1;
    }
}
