/*
** EPITECH PROJECT, 2022
** fill_guess_word
** File description:
** fill_guess_Word
*/

#include "my.h"

void fill_guess_word(t_hang *hang, int len)
{
    for (int i = 0; i < len; i++)
        hang->guess[i] = '*';
}