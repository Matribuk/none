/*
** EPITECH PROJECT, 2022
** undefined
** File description:
** my_revstr.c
*/

#include "../../include/my.h"

char *my_revstr(char *str)
{
    int len = my_strlen(str);
    char temp;
    for (int i = 0; i < len; i++) {
        temp = str[len - 1];
        str[len - 1] = str[i];
        str[i] = temp;
        len--;
    }
    return str;
}
