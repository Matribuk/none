/*
** EPITECH PROJECT, 2022
** B-CPE-110-LYN-1-1-BSQ-antonin.leprest
** File description:
** bsq4.c
*/
#include <stdlib.h>
#include "sys/types.h"
#include "sys/stat.h"
#include <fcntl.h>
#include "./include/my.h"
#include <stdio.h>
#include <unistd.h>

static int my_put_nbr2(tablo_t *tablo, int value, int i)
{
    if (value <= 9) {
        value += '0';
        tablo->number[i] = value;
    } else {
        my_put_nbr2(tablo, value / 10, i++);
        my_put_nbr2(tablo, value % 10, i);
    }
    return i;
}

int my_putnbrstr(tablo_t *tablo, int value, char *buffer, int lenvalue)
{
    int i = 0;
    tablo->number = malloc(sizeof(char *) * lenvalue + 1);
    i = my_put_nbr2(tablo, value, i);
    i++;
    tablo->number[i] = '\n';
    i++;
    for (int j = 0; j <= i + 1; j++) {
        buffer[j] = tablo->number[j];
    }
    return i;
}

int generator(char *argv[], tablo_t *tablo)
{
    int len = my_strlen(argv[2]);
    int x = 0; int value = getnbr2(argv);
    int lenvalue = getnbr3(value);
    int value_total = ((value * (value + 1)) + lenvalue + 1);
    if (value == 0){
        return 0;
    }
    char *buffer = malloc(sizeof (char *) * value_total);
    int pos = my_putnbrstr(tablo, value, buffer, lenvalue);
    for (int i = 0; i < value; i++) {
        for (int j = 0; j < value; j++) {
            (argv[2][x] == '\0') ? x = 0 : 0;
            buffer[pos] = argv[2][x];
            x++; pos++;
        }
        buffer[pos] = '\n'; pos++;
        x = (len - (len - x));
    }
    tablo->size = value_total;
    countbsq(tablo, buffer); return 0;
}

int check2(int argc, char *argv[])
{
    for (int j = 0; (argv[1][j]) != '\0'; j++) {
        if (argv[1][j] < '0' || argv[1][j] > '9') {
            return 0;
        }
    }
    if (argv[2][0] == '\0') {
        return 0;
    }
    return 1;
}

int check(int argc, char *argv[], tablo_t *tablo)
{
    struct stat sb;
    if (argc == 3) {
        if (check2(argc, argv) != 1) {
            return 84;
        }
        if (bsqerror(argv) == 1) {
            return 84;
        }
        return (generator(argv, tablo));
    } else {
        if (lstat(argv[1], &sb) == -1) {
        return 84;
        }
        if (argc > 3) {
            return 84;
        }
        return 1;
    }
}
