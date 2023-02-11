/*
** EPITECH PROJECT, 2022
** undefined
** File description:
** my_strcapitalize.c
*/

#include "../../include/my.h"

char *my_strcapitalize(char *str)
{
    int len = my_strlen(str);
    for (int i = 0; i < len; i++) {
        if (str[i] >= 65 && str[i] <= 90) {
            str[i] = str[i] + 32;
        }
    }
    for (int i = 1; i < len; i++) {
        (str[0] >= 97 && str[0] <= 122) ? str[0] = str[0] - 32 : 0;
        (str[i - 1] >= 32 && str[i - 1] <= 47) ? str[i] = str[i] - 32 : 0;
        (str[i - 1] >= 58 && str[i - 1] <= 64) ? str[i] = str[i] - 32 : 0;
        (str[i - 1] >= 91 && str[i - 1] <= 96) ? str[i] = str[i] - 32 : 0;
        (str[i - 1] >= 123 && str[i - 1] <= 126) ? str[i] = str[i] - 32 : 0;
    }
    return str;
}
