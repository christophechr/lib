/*
** EPITECH PROJECT, 2021
** lib
** File description:
** lib
*/

#ifndef LIB_H_
    #define LIB_H_

    void my_putchar(char);

    int my_put_nbr(int);

    void my_swap(int *, int *);

    int my_putstr(char const *);

    int my_strlen(char *);

    int my_getnbr(char const *);

    void my_sort_int_array(int *, int);

    int my_is_prime(int);

    char *my_strcpy(char *, char const *);

    char *my_strncpy(char *, char const *, int);

    char *my_revstr(char *);

    int lenght_string_rev(char *);

    int my_strcmp(char const *, char const *);

    int my_strncmp(char const *, char const *);

    char *my_strupcase(char *);

    char *my_strlowcase(char *);

    char *my_strcapitalize(char const *);

    int compare_string_ascii(char const *, int);

    int compare_string_ascii_num(char const *, int);

    int my_str_isalpha(char const *);

    int my_str_isnum(char const *);

    int my_str_islower(char const *);

    int my_str_isupper(char const *);

    int my_str_isprintable(char const *);

    int my_showstr(char const *);

    int my_showmem(char const *, int);

    int lenght_string_cat(char const *);

    int lenght_string_b(char const *);

    int lenght_string_ncat(char *);

    char *my_strcat(char *, char const *);

    char *my_strncat(char *, char const *, int);

#endif /* !LIB_H_ */
