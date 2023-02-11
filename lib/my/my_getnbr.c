/*
** EPITECH PROJECT, 2022
** undefined
** File description:
** my_getnbr.c
*/

#include "../../include/my.h"

int my_getnbr(char const *str)
{
    int nb = 0;
    int negative = 1;
    int i = 0;
    for (; str[i] == 43 || str[i] == 45; i++) {
        (str[i] == 45) ? negative *= -1 : 0;
    }
    for (; str[i] != 0;) {
        if (str[i] >= 48 && str[i] <= 57) {
            nb *= 10;
            nb += (str[i] - 48);
            i++;
        }
        if (str[i] < 48 || str[i] > 57) {
            return (nb * negative);
        }
    }
    return (nb * negative);
}
