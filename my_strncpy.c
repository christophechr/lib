/*
** EPITECH PROJECT, 2021
** MY_STRNCPY
** File description:
** Copying n characters from string 1 to string 2
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;

    for (; i < n; i++)
        dest[i] = src[i];
    dest[i + 1] = '\0';
    return (dest);
}
