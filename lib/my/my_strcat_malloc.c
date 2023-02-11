/*
** EPITECH PROJECT, 2022
** B-CPE-101-LYN-1-1-finalstumper-antonin.leprest
** File description:
** my_strcat_malloc.c
*/

#include "../../include/my.h"
#include "stdlib.h"

char *my_strcat_malloc(char *buffer, char *cat)
{
    int len = my_strlen(buffer);
    int len2 = my_strlen(cat);
    char *temp = malloc(len + len2 + 1);
    my_strcpy(temp, buffer);
    free(buffer);
    my_strcat(temp, cat);
    buffer = temp;
    return temp;
}
