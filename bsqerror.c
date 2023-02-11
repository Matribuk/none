/*
** EPITECH PROJECT, 2022
** B-CPE-110-LYN-1-1-BSQ-antonin.leprest
** File description:
** bsqerror.c
*/
#include <stdlib.h>
#include "sys/types.h"
#include "sys/stat.h"
#include <fcntl.h>
#include "./include/my.h"
#include <stdio.h>
#include <unistd.h>

int bsqerror(char *argv[])
{
    for (int i = 0; argv[2][i] != '\0'; i++) {
        if (argv[2][i] != '.' && argv[2][i] != 'o') {
            return 1;
        }
    }
    return 0;
}

int bsq2error(char *buffer)
{
    int size = 0; int test = 0; int len = 0;
    int taille = 0; int len2 = 0;
    for (; buffer[len] != '\n'; len++);
    for (; buffer[len2 + len + 1] != '\n'; len2++);
    for (; buffer[taille + len + 1] != '\0'; taille++);
    int ligne = taille / len2;
    for (int i = len + 1; buffer[i] != '\0'; i++) {
        size++;
        if (buffer[i] != '.' && buffer[i] != 'o' && buffer[i] != '\n') {
            test = 2;
        }
        if (buffer[i] == '\n') {
            (size == len2 + 1) ? 0 : (test = 2);
            size = 0;
        }
    }
    if (test == 2)
        return 1;
    return 0;
}
