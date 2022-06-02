/*
** EPITECH PROJECT, 2022
** init_hang
** File description:
** init_hang
*/

#include "my.h"

t_hang *init_hang(void)
{
    t_hang *hang = malloc(sizeof(t_hang));

    hang->dic = NULL;
    hang->word = malloc(sizeof(char) * 100);
    hang->guess = malloc(sizeof(char) * 100);
    hang->c = malloc(sizeof(char) * 2);
    hang->i = 0;
    hang->tries = 10;

    return hang;
}