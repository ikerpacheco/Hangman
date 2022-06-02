/*
** EPITECH PROJECT, 2022
** pick random word
** File description:
** pick_random_word
*/

#include "my.h"

void pick_random_word(t_hang *hang)
{
    srand(time(NULL));

    hang->i = rand() % my_arrlen(hang->dic);
    hang->word = hang->dic[hang->i];
}