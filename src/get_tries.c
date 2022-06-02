/*
** EPITECH PROJECT, 2022
** stumper5
** File description:
** get_tries
*/

#include "my.h"

int get_tries(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] < '0' || str[i] > '9')
            exit(84);
    }
    int num = atoi(str);
    int len = strlen(str);

    if (num <= 0 || num  >= 2147483647 || len > 9)
        exit(84);
    return num;
}