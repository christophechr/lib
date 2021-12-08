/*
** EPITECH PROJECT, 2021
** MY_IS_PRIME
** File description:
** Return if number is prime
*/

int my_compute_power_rec(int, int);

int the_sqrt(int a)
{
    int x = 1;

    while (my_compute_power_rec(x, 2) < a) {
        my_compute_power_rec(x, 2);
        x++;
    }
    return x;
}

int my_is_prime(int nb)
{
    int i = 1;

    while (i < the_sqrt(nb)) {
        if (nb % i) {
            return 0;
        }
        i++;
    }
    return 1;
}
