/*
** EPITECH PROJECT, 2022
** B-CPE-110-LYN-1-1-BSQ-antonin.leprest
** File description:
** bsq5.c
*/
#include <stdlib.h>
#include "sys/types.h"
#include "sys/stat.h"
#include <fcntl.h>
#include "./include/my.h"
#include <stdio.h>
#include <unistd.h>

int getnbr2(char *argv[])
{
    int value = 0;
    for (int i = 0; argv[1][i] != '\0'; i++) {
        value = (value * 10) + (argv[1][i] - 48);
    }
    return value;
}

int getnbr3(int value)
{
    int i = 0;;
    for (; value != 0;){
        value = value / 10;
        i++;
    }
    return i;
}
