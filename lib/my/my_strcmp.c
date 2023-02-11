/*
** EPITECH PROJECT, 2022
** undefined
** File description:
** my_strcmp.c
*/

#include "../../include/my.h"

int my_strcmp(char const *s1, char const *s2)
{
    char result = 3;
    int size1 = my_strlen(s1);
    int size2 = my_strlen(s2);
    (size1 < size2) ? result = -1 : 0;
    (size1 > size2) ? result = 0 : 0;
    if (size1 == size2) {
        for (int i = 0; i < size1; i++) {
        (s1[i] < s2[i]) ? result = -1 : 0;
        (s1[i] > s2[i]) ? result = 0 : 0;
        }
        (result != 0 && result != -1) ? result = 1 : 0;
        return result;
    }
    return result;
}
