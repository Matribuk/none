/*
** EPITECH PROJECT, 2022
** undefined
** File description:
** my_put_nbr.c
*/

#include "../../include/my.h"

int my_put_nbr(int nb)
{
    int reverse = 0;
    while (nb > 0) {
        reverse = reverse * 10 + nb % 10;
        nb = nb / 10;
    }
    nb = reverse;
    int test;
    int i = nb;
    do {
        my_putchar((nb % 10) + 48);
        nb = nb / 10;
    } while (nb >= 10);
    my_putchar((nb % 10) + 48);
    my_putchar('\n');
}
