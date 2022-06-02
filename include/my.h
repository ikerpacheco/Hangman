/*
** EPITECH PROJECT, 2022
** my.h
** File description:
** declares all functions
*/

#ifndef __MY_H__
    #define __MY_H__

    #include <stdarg.h>
    #include <stdio.h>
    #include <stdlib.h>
    #include <unistd.h>
    #include <dirent.h>
    #include <signal.h>
    #include <string.h>
    #include <sys/types.h>
    #include <sys/stat.h>
    #include <string.h>
    #include <pwd.h>
    #include <fcntl.h>
    #include <grp.h>
    #include <time.h>

    #include "hang.h"

    t_hang *init_hang(void);
    char *save_file(char const *filepath);
    void search_characters(t_hang *hang);
    void check_win(t_hang *hang);
    int intro_counter(char *str);
    void hang_man(int ac, char **av);
    int my_arrlen(char **arr);
    void my_printarr(char **arr);
    void pick_random_word(t_hang *hang);
    char **str_to_array(char *str);
    void error_handling(int ac, char **av);
    void fill_guess_word(t_hang *hang, int len);
    int get_tries(char *str);

#endif /* !MY_H_ */
