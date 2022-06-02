/*
** EPITECH PROJECT, 2022
** save_file.c
** File description:
** save_file
*/

#include "my.h"

char *save_file(char const *filepath)
{
    int fd = open(filepath, O_RDONLY);
    struct stat buff;
    char *buffer;

    stat(filepath, &buff);
    buffer = malloc(buff.st_size + 1);
    int rd = read(fd, buffer, buff.st_size);
    if (buffer[rd] != '\n')
        buffer[rd] = '\n';
    buffer[rd + 1] = '\0';
    return buffer;
}