/*
** EPITECH PROJECT, 2022
** intro_counter
** File description:
** intro_counter
*/

#include "my.h"

int intro_counter(char *str)
{
    int counter = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n')
            counter++;
    }
    return counter;
}