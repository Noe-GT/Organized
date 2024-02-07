##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## Makefile
##

SRC	=	$(wildcard *.c)

OBJS =	$(SRC:.c=.o)

NAME	=	libmy.a

LIB	=	-L

CFLAGS	=	-g3

all: create copy

create: ${OBJS}
		ar rc $(NAME) $(OBJS)

copy: ${NAME}
	cp my.h ../../include/

clean:
		rm -f *.o

fclean:clean
		rm -f $(NAME)

re: fclean all
