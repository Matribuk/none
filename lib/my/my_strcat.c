/*
** EPITECH PROJECT, 2022
** undefined
** File description:
** my_strcat.c
*/

#include "../../include/my.h"

char *my_strcat(char *dest, char const *src)
{
    int dest_len = my_strlen(dest);
    int i = 0;
    for (i; src[i] != '\0'; i++)
        dest[dest_len + i] = src[i];
    dest[dest_len + i] = '\0';
    return dest;
}
