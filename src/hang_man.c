/*
** EPITECH PROJECT, 2022
** hang_man
** File description:
** hang_man
*/

#include "my.h"

void fill_buff(t_hang *hang)
{
    int len = strlen(hang->c);
    if (len == 1)
        hang->c[len] = '\n';
    else
        hang->c[len - 1] = '\n';
}

void hang_man(int ac, char **av)
{
    t_hang *hang = init_hang();
    size_t bufsize = 10;
    char *buffer = save_file(av[1]);
    hang->dic = str_to_array(buffer);
    int size = 1;
    int len = 0;
    if (ac > 2)
        hang->tries = get_tries(av[2]);
    pick_random_word(hang);
    len = strlen(hang->word);
    fill_guess_word(hang, len);
    while (hang->tries != 0) {
        printf("%s\nTries: %d\n\nYour letter: ", hang->guess, hang->tries);
        if (getline(&hang->c, &bufsize, stdin) == -1)
            exit(84);
        fill_buff(hang);
        search_characters(hang);
        check_win(hang);
    }
    printf("%s\nTries: %d\n\nYou lost!\n", hang->guess, hang->tries);
}