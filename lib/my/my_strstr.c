/*
** EPITECH PROJECT, 2022
** undefined
** File description:
** my_strstr.c
*/

#include "../../include/my.h"

static int find_start(int i, char *str, char const *to_find)
{
    int lenmin = my_strlen(to_find);
    for (int x = 0; x <= lenmin; x++) {
        if (str[i] != to_find[x]) {
            return (0);
        }
        if (str[i] == to_find[x] && x == lenmin - 1) {
            return (1);
        }
        i++;
    }
}

static char *branch(char *str, int i)
{
    while (str[i] != 0) {
        return (str + i);
        i++;
    }
}

static int branchs(char *str, char const *to_find, int i)
{
    if (str[i] == to_find[0]) {
        int test = find_start(i, str, to_find);
        if (test == 1) {
            return (1);
        }
    }
}

char *my_strstr(char *str, char const *to_find)
{
    int lenmax = my_strlen(str);
    int lenmin = my_strlen(to_find);
    for (int i = 0; i < lenmax; i++) {
        int test = branchs(str, to_find, i);
        if (test == 1) {
            return (branch(str, i));
        }
    }
}
