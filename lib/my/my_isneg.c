/*
** EPITECH PROJECT, 2022
** undefined
** File description:
** my_isneg.c
*/

#include "../../include/my.h"

int my_isneg(int n)
{
    int number;
    char back;
    if (n < 0) {
        my_putchar('N');
    } else {
        my_putchar('P');
    }
    back = '\n';
    my_putchar(back);
}
