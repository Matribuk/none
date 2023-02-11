/*
** EPITECH PROJECT, 2022
** undefined
** File description:
** my_strlowcase.c
*/

#include "../../include/my.h"

char *my_strlowcase(char *str)
{
    int len = my_strlen(str);
    for (int i = 0; i < len; i++) {
        if (str[i] >= 65 && str[i] <= 90) {
            str[i] = str[i] + 32;
        }
    }
    return str;
}
