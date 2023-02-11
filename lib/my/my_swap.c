/*
** EPITECH PROJECT, 2022
** undefined
** File description:
** my_swap.c
*/

#include "../../include/my.h"

int my_swap(int *a, int *b)
{
    int c = *a;
    int d = *b;
    *a = d;
    *b = c;
}
