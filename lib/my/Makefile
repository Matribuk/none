##
## EPITECH PROJECT, 2022
## undefined
## File description:
## Makefile
##

SRC = $(wildcard *.c)

OBJ = $(SRC:.c=.o)

NAME = libmy

$(NAME): $(OBJ)
		cp my.h ../../include/
		gcc -c $(SRC)
		ar rc $(NAME).a *.o
		cp $(NAME).a ../

all:	$(NAME)

clean:
		rm -f $(OBJ)

fclean: clean
		rm -f *.a

re:		fclean all

.PHONY: all clean fclean re
