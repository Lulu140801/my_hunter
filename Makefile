##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## printf
##

SRC 	=	src/analyse_events.c \
			src/anime_duck.c \
			src/clock.c \
			src/display.c \
			src/main.c \
			src/my_putstr.c

OBJ     =       $(SRC:.c=.o)

NAME		=	my_hunter


all:    executable clean

executable:
	gcc -o $(NAME) $(SRC) -l csfml-graphics -l csfml-system

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(NAME)

re: fclean all
