/*
** EPITECH PROJECT, 2022
** stumper5
** File description:
** error_handling
*/

#include "my.h"

void error_handling(int ac, char **av)
{
    if (ac < 2)
        exit(84);

    int fd = open(av[1], O_RDONLY);
    if (fd == -1)
        exit(84);
    close(fd);

    char *dic = save_file(av[1]);
    int len = strlen(dic);
    if (len <= 1)
        exit(84);
    for (int i = 0; dic[i] != '\0'; i++) {
        if (dic[i] == ' ')
            exit(84);
    }
    free(dic);
}
