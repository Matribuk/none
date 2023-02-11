/*
** EPITECH PROJECT, 2022
** B-CPE-110-LYN-1-1-BSQ-antonin.leprest
** File description:
** bsq.c
*/
#include <stdlib.h>
#include "sys/types.h"
#include "sys/stat.h"
#include <fcntl.h>
#include "./include/my.h"
#include <stdio.h>
#include <unistd.h>

char put_tablo_in_char(int **tablox, tablo_t *tablo, char *buffer)
{
    int s = tablo->size2;
    for (int y = 0; y < tablo->hauteur;) {
        for (int x = 0; buffer[s] != '\n';) {
            tablox[y][x] = buffer[s];
            x++; s++;
            tablo->xvoulu = x;
            tablo->yvoulu = y;
            branches2(tablox, buffer, s, tablo);
        }
        s++; y++;
    }
    printboard(tablox, tablo);
}

char **countbsq(tablo_t *tablo, char *buffer)
{
    int i = 0; int len = 0;
    int value = 0;
    for (; buffer[i] >= '0' && buffer[i] <= '9'; i++) {
        value *= 10;
        value = value + (buffer[i] - 48);
    }
    for (int l = i + 1; buffer[l] != '\n'; l++) {
        len++;
    }
    tablo->size2 = i + 1;
    tablo->largeur = len;
    tablo->hauteur = value;
    int **tablox = malloc(sizeof(int *) * tablo->hauteur);
    for (int y = 0; y < tablo->hauteur; y++) {
        tablox[y] = malloc(sizeof(int *) * tablo->largeur);
    }
    put_tablo_in_char(tablox, tablo, buffer);
    return 0;
}

int bsq(tablo_t *tablo, char *argv[], int argc)
{
    struct stat sb;
    if (lstat(argv[1], &sb) == -1) {
        return 84;
    }
    tablo->size = sb.st_size;
    tablo->tablou = malloc(sizeof(int) * tablo->size);
    tablo->valuemax = 0;
    int fd;
    char *buffer = malloc(sizeof(char *) * tablo->size);
    fd = open(argv[1], O_RDONLY);
    if (fd == -1) {
        return 84;
    }
    read(fd, buffer, tablo->size);
    if (bsq2error(buffer) == 1) {
        return 84;
    }
    countbsq(tablo, buffer);
    close(fd);
    return 0;
}

int main(int argc, char *argv[])
{
    tablo_t *tablo = malloc(sizeof(tablo_t));
    int value = check(argc, argv, tablo);
    if (value == 84){
        return 84;
    }
    if (value == 1){
        return bsq(tablo, argv, argc);
    } else {
        return 0;
    }
}
