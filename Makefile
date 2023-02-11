##
## EPITECH PROJECT, 2022
## undefined
## File description:
## Makefile
##

SRC = $(wildcard *.c)

NAME = bsq

$(NAME):
		cd lib/my/ && make re
		cd ../../
		gcc $(SRC) -L./lib/my/ -lmy -o $(NAME)

all:	$(NAME)

clean:
		rm -f

fclean: clean
		rm -f bsq

re:		fclean all

.PHONY: all clean fclean re
