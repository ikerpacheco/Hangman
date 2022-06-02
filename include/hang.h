/*
** EPITECH PROJECT, 2022
** hang.h
** File description:
** hang
*/

#ifndef HANG_H_
    #define HANG_H_

    typedef struct s_hang {
        char **dic;
        char *word;
        char *guess;
        char *c;
        int i;
        int tries;
    } t_hang;

#endif /* !hang_H_ */
