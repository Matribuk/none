/*
** EPITECH PROJECT, 2022
** B-CPE-110-LYN-1-1-BSQ-antonin.leprest
** File description:
** bsq3.c
*/
#include <stdlib.h>
#include "sys/types.h"
#include "sys/stat.h"
#include <fcntl.h>
#include "./include/my.h"
#include <stdio.h>
#include <unistd.h>

void branches2(int **tablox, char *buffer, int s, tablo_t *tablo)
{
    if (buffer[s] == '\n'){
        tablox[tablo->yvoulu][tablo->xvoulu] = buffer[s];
    }
}

void branches(int **tablox, tablo_t *tablo, int i, int o)
{
    if (tablox[i][o] != '0' && tablox[i][o] != 'x' && tablox[i][o] != '\n') {
    tablox[i][o] = '.';
    } else {
        if (tablox[i][o] == '0' && tablox[i][o] != '\n') {
            tablox[i][o] = 'o';
        }
    }
}

void printboard3(int **tablox, tablo_t *tablo)
{
    int i = 0;
    int p = 0;
    free(tablo->tablou);
    tablo->tablou = malloc(sizeof(int) * tablo->size);
    for (; i < tablo->hauteur;) {
        for (int o = 0; o <= tablo->largeur;) {
            branches(tablox, tablo, i, o);
            tablo->tablou[p] = tablox[i][o];
            o++;
            p++;
        }
        i++;
    }
    int lenint = 0;
    for (; tablo->tablou[lenint] != '\0'; lenint++);
    int sizetest = my_strlen((tablo->tablou));
    write(1, tablo->tablou, lenint);
}

void printboard2(int **tablox, tablo_t *tablo)
{
    reverse2(tablox, tablo, tablo->ymax, tablo->xmax);
    printboard3(tablox, tablo);
}

void printboard(int **tablox, tablo_t *tablo)
{
    int i = 0;
    for (; i < tablo->hauteur;) {
        for (int o = 0; o <= tablo->largeur;) {
            reverse(tablox, tablo, i, o);
            o++;
        }
        i++;
    }
    tablo->ymax += 1;
    tablo->xmax += 1;
    tablo->valuemax += 1;
    printboard2(tablox, tablo);
}
