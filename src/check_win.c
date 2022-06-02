/*
** EPITECH PROJECT, 2022
** check_win
** File description:
** check_win
*/

#include "my.h"

void check_win(t_hang *hang)
{
    int counter = 0;

    for (int i = 0; hang->guess[i] != '\0'; i++) {
        if (hang->guess[i] == '*')
            counter = 1;
    }
    if (counter == 0) {
        printf("%s\nTries: %d\n\n", hang->guess, hang->tries);
        printf("Congratulations!\n");
        exit(0);
    }
}