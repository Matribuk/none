/*
** EPITECH PROJECT, 2022
** undefined
** File description:
** my_strupcase.c
*/

#include "../../include/my.h"

char *my_strupcase(char *str)
{
    int len = my_strlen(str);
    for (int i = 0; i < len; i++) {
        if (str[i] >= 97 && str[i] <= 122) {
            str[i] = str[i] - 32;
        }
    }
    return str;
}
