/*
** EPITECH PROJECT, 2022
** undefined
** File description:
** my_strncpy.c
*/

#include "../../include/my.h"

char *my_strncpy(char *dest, char const *src, int n)
{
    int len = my_strlen(src);
    for (int i = 0; i < len; i++) {
        if (i <= n - 1) {
            dest[i] = src[i];
        }
        if (i > n) {
            dest[i] = '\0';
        }
    }
    return dest;
}
