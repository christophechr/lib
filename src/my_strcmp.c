/*
** EPITECH PROJECT, 2021
** MY_STRCMP
** File description:
** Reproduce cmp function
*/

int my_strcmp(char const *s1, char const *s2)
{
    for (int c = 0; s1[c] != '\0' || s2[c] != '\0'; c++) {
        if (s1[c] != s2[c])
            return s2[c] - s1[c];
    }
    return 0;
}
