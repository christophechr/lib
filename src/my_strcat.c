/*
** EPITECH PROJECT, 2021
** MY_STRCAT
** File description:
** concatenating two strings
*/

int lenght_string_cat(char const *str)
{
    int d = 0;
    
    for(; str[d] != '\0'; d++)
    return d;
}

char *my_strcat(char *dest, char const *src)
{
    int len_src = lenght_string_cat(src);
    int len_dest = lenght_string_cat(dest);

    for (int count = 0; count < len_src && src[count] != '\0'; count++) {
        dest[len_dest + count] = src[count];
    }
    return dest;
}
