/*
** EPITECH PROJECT, 2022
** undefined
** File description:
** my_strncmp.c
*/

#include "../../include/my.h"

int my_strncmp(char const *s1, char const *s2, int n)
{
    char result = 3;
    int size1 = my_strlen(s1);
    int size2 = my_strlen(s2);
    for (int i = 0; i < n; i++) {
        (s1[i] < s2[i]) ? result = -1 : 0;
        (s1[i] > s2[i]) ? result = 0 : 0;
    }
    if (result != 0 && result != -1) {
        (s1[n - 1] == s2[n - 1]) ? result = 1 : 0;
    }
    return result;
}
