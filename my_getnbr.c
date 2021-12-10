/*
** EPITECH PROJECT, 2021
** MY_GETNBR
** File description:
** get the int value of the nb in char
*/

int my_getnbr(char const *str)
{
    int nbr = 0;
    int neg_int = 1;
    int i = 0;

    for (; str[i] == '+' || str[i] == '-'; i++) {
        if (str[i] == '-')
            neg_int *= -1;
    }
    for (; str[i] != '\0'; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            nbr *= 10;
            nbr = nbr + str[i] - '0';
        } else
            break;
    }
    return (nbr * neg_int);
}
