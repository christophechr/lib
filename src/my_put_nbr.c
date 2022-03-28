/*
** EPITECH PROJECT, 2021
** MY_PUT_NBR
** File description:
** displaying the number as parameter
*/

#include <unistd.h>
#include "lib.h"

int my_put_nbr(int nb)
{
    if (nb > 9) {
        my_put_nbr(nb / 10);
        my_putchar(nb % 10 + 48);
    }
    if (nb <= 9) {
        my_putchar(nb + 48);
    }
    return 0;
}
