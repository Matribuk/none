/*
** EPITECH PROJECT, 2022
** undefined
** File description:
** my_str_to_word_array.c
*/

#include "../../include/my.h"
#include "stdlib.h"

static int alpha(char const *str, int n)
{
    if (str[n] >= 65 && str[n] <= 122) {
        if (str[n] <= 90 || str[n] >= 97) {
            return 0;
        }
    } else {
        return 1;
    }
}

static int number(char const *str)
{
    int n = 0;
    int etat = 0;
    for (int l = 0; l < my_strlen(str); l++) {
        int verif = alpha(str, l);
        if (verif == 0) {
            (etat == 0) ? n++ : 0;
            etat = 1;
        }
        if (verif == 1) {
            etat = 0;
        }
    }
    return (n);
}

char **my_str_to_word_array(char const *str)
{
    int n = number(str);
    char **array = malloc((n + 1) * sizeof(char *) + 1);
    for (int i = 0; i < n; i++) {
        array[i] = malloc((my_strlen(str)) * sizeof(char));
    }
    int t = 0;
    int clon = 0;
    int i = 0;
    int test = 0;
    while (clon < n + 1) {
        while (alpha(str, i) == 0) { array[clon][t] = str[i]; i++; t++;
        }
        if ((alpha(str, i - 1)) == 0) { clon++; (clon == n) ? test = 1 : 0;
        }
        if (test == 1) { array[clon] = 0; return (array);
        }
        while (alpha(str, i) == 1) { i++;
        }
        t = 0;
    }
}
