/*
** EPITECH PROJECT, 2021
** MY_STRNCMP
** File description:
** Reproduce the behaviour of ncmp
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
    int c = 0;

    while (c < n && s1[c] != '\0' && s2[c] != '\0') {
        if (s1[c] != s2[c]) {
            return s2[c] - s1[c];
        }
        c += 1;
    }
    return 0;
}
