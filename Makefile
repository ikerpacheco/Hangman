##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## makefile
##

SRC	=	main.c \
		src/hang_man.c \
		src/struct/init_hang.c \
		lib/save_file.c \
		lib/str_to_array.c \
		lib/intro_counter.c \
		lib/my_printarr.c \
		src/fill_guess_word.c \
		lib/my_arrlen.c \
		src/struct/pick_random_word.c \
		src/check_win.c \
		src/error_handling.c \
		src/search_characters.c \
		src/get_tries.c

OBJ	=	$(SRC:.c=.o)

NAME	=	hangman

CURSE =	-lncurses

CFLAGS = -g -I./include

FLAGS =	-Wall -Werror -Wextra

all:	$(NAME)

$(NAME):	$(OBJ)
	@	gcc -o $(NAME) $(OBJ) $(FLAGS) $(CURSE) $(CFLAGS)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all
	make clean
