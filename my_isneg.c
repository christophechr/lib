/*
** EPITECH PROJECT, 2021
** MY_ISNEG
** File description:
** Displaying the integer if is negative or positive
*/

void my_putchar(char);

int my_isneg (int i)
{
    if (i < 0) {
        my_putchar(78);
    }  else {
        my_putchar(80);
    }
    return 0;
}
