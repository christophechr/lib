/*
** EPITECH PROJECT, 2021
** MY_COMPUTE_SQUARE_ROOT
** File description:
** Return square root argument
*/

int using_loop(int nb, int p)
{
    int c = 1;
    int r = 1;

    for (c; c <= p; c++) {
        r = r * nb;
    }
    return r;
}

int my_compute_power_ter(int nb, int p)
{
    int result;
    int count;
    result = 1;

    if (p == 0) {
        return 1;
    } else if (p < 0) {
        return 0;
    } else {
        return using_loop(nb, p);
    }
}

int my_compute_square_root(int a)
{
    int x = 1;

    while (my_compute_power_ter(x, 2) < a) {
        my_compute_power_ter(x, 2);
        x++;
    }
    if (my_compute_power_ter(x, 2) == a) {
        return x;
    } else {
        return x;
    }
}
