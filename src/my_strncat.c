/*
** EPITECH PROJECT, 2021
** MY_STRNCAT
** File description:
** concatenating n characters of string into another
*/

int lenght_string_ncat(char *str)
{
    int d = 0;

    while (str[d] != '\0') {
        d++;
    }
    return d;
}

char *my_strncat(char *dest, char const *src, int n)
{
    int len_dest = lenght_string_ncat(dest);
    int count = 0;

    if (count > n) {
        for (count; count < n && src[count] != '\0'; count++) {
            dest[len_dest + count] = src[count];
        }
    }
    return dest;
}
