/*
** EPITECH PROJECT, 2022
** undefined
** File description:
** my_strcpy.c
*/

#include "../../include/my.h"

char *my_strcpy(char *dest, char const *src)
{
    int i;
    int len = my_strlen(src);
    for (i = 0; i < len; i++) {
        dest[i] = src[i];
    }
    dest[i] = '\0';
    return dest;
}
