/*
** EPITECH PROJECT, 2021
** MY_COMPUTE_POWER_REC
** File description:
** Return recursive function power argument
*/

#include <stdio.h>
#include <stdio.h>

int my_compute_power_rec(int nb, int p)
{
    int value_base;
    value_base = nb;

    if (p == 0) {
        return 1;
    }
    if (p < 0) {
        return 0;
    }
    if (p > 0) {
        nb = my_compute_power_rec(value_base, p-1);
    }
    return nb;
}
