/*
** EPITECH PROJECT, 2022
** B-CPE-110-LYN-1-1-BSQ-antonin.leprest
** File description:
** bsq2.c
*/
#include <stdlib.h>
#include "sys/types.h"
#include "sys/stat.h"
#include <fcntl.h>
#include "./include/my.h"
#include <stdio.h>

int my_getvalue(int valueleft, int valuetop, int valuetopleft)
{
    if (valueleft < valuetop) {
        if (valueleft < valuetopleft) {
            return valueleft;
        } else {
            return valuetopleft;
        }
    } else {
        if (valuetop < valuetopleft) {
            return valuetop;
        } else {
            return valuetopleft;
        }
    }
}

void scan(int y, int x, int **tablox, tablo_t *tablo)
{
    int test = 0; int i = 1; int valueleft = 0;
    int valuetopleft = 0; int valuetop = 0;
    if (tablox[y][x] != 'o'){
        if (x != 0) {
            valueleft = tablox[y][x - 1] - 48;
        }
        if (y != 0) {
            valuetop = tablox[y - 1][x] - 48;
        }
        if (x != 0 && y != 0) {
            valuetopleft = tablox[y - 1][x - 1] - 48;
        }
        int valuefinal = my_getvalue(valueleft, valuetop, valuetopleft);
        if (valuefinal > tablo->valuemax) {
            tablo->valuemax = valuefinal;
            tablo->xmax = x;
            tablo->ymax = y;
        }
        tablox[y][x] = valuefinal + 48 + 1;
    }
}

void reverse(int **tablox, tablo_t *tablo, int y, int x)
{
    if (tablox[y][x] == 'o') {
        tablox[y][x] = 48;
    }
    if (tablox[y][x] != '\n' && tablox[y][x] == '.') {
        scan(y, x, tablox, tablo);
    }
}

void reverse2(int **tablox, tablo_t *tablo, int y, int x)
{
    int tempx = x - 1;
    int tempy = y - 1;
    for (int i = tablo->valuemax; i > 0; i--) {
        tempx = x - 1;
        for (int o = tablo->valuemax; o > 0; o--) {
            tablox[tempy][tempx] = 'x';
            tempx--;
        }
        tempy--;
    }
}
