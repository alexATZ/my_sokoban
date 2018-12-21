##
## EPITECH PROJECT, 2018
## my_sokoban
## File description:
## Makefile my_sokoban
##

CFLAGS		=	-W -Wall -Wextra -Werror -I./include/

LNFLAGS		=	-lncurses

RM			=	rm -rf

CC			=	gcc

SRCS		=	src/main.c					\
				src/prep_map.c				\
				src/error_handling.c		\
				src/fonctions.c				\
				src/init_struct.c			\
				src/check_o.c				\
				src/check_win_loose.c		\
				src/move_fct.c				\
				src/my_strlen.c

OBJS 		= $(SRCS:.c=.o)

NAME		=	my_sokoban

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) -o $@ $^ $(LNFLAGS)

clean:
	$(RM) $(OBJS)

fclean:    clean
	$(RM) $(NAME)

re:    fclean all
