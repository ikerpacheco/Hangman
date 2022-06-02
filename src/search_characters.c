/*
** EPITECH PROJECT, 2022
** search_characters
** File description:
** search_characters
*/

#include "my.h"

void search_characters(t_hang *hang)
{
    int counter = 0;
    int len = 0;
    len = strlen(hang->c);
    hang->c[len - 1] = '\0';
    for (int i = 0; hang->guess[i] != '\0'; i++) {
        if (hang->guess[i] == hang->c[0]) {
            printf("%s: is not in this word\n", hang->c);
            hang->tries--;
            return;
        }
    }
    for (int i = 0; hang->word[i] != '\0'; i++) {
        if (hang->word[i] == hang->c[0] && len == 2) {
            hang->guess[i] = hang->c[0];
            counter = 1;
        }
    }
    if (counter == 0) {
        printf("%s: is not in this word\n", hang->c);
        hang->tries--;
    }
}