/*
** EPITECH PROJECT, 2022
** my arrlen
** File description:
** my_arrlen
*/

#include "my.h"

int my_arrlen(char **arr)
{
    int i = 0;

    for (i = 0; arr[i] != NULL; i++);
    return i;
}