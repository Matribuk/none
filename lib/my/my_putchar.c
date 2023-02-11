/*
** EPITECH PROJECT, 2022
** undefined
** File description:
** my_putchar.c
*/

#include "../../include/my.h"
#include "unistd.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}
