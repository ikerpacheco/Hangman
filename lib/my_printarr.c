/*
** EPITECH PROJECT, 2022
** my_printarr
** File description:
** my_printarr
*/

#include "my.h"

void my_printarr(char **arr)
{
    int i = 0;

    for (i = 0; arr[i] != NULL; i++)
        printf("%s\n", arr[i]);
}