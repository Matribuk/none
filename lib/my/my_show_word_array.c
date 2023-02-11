/*
** EPITECH PROJECT, 2022
** undefined
** File description:
** my_show_word_array.c
*/

#include "../../include/my.h"

static int my_strlen2(char *const *str)
{
    int i = 0;
    for (; str[i] != 0; i++);
    return i;
}

int my_show_word_array(char *const *tab)
{
    for (int i = 0; i < my_strlen2(tab); i++) {
        my_putstr(tab[i]);
        my_putchar('\n');
    }
}
