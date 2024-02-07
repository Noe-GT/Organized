##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## Makefile
##

SRC	=	$(wildcard *.c)

OBJS =	$(SRC:.c=.o)

NAME	=	organized

LIB	=	-L lib/my/ -lmy

LIBSHELL	=	libshell/libshell.a

HSRC	=	include/shell.h

CFLAGS	=	-g3

all: create

create: ${OBJS}
		make -C lib/my
		gcc -o $(NAME) $(OBJS) -I ${HSRC} ${LIB} $(LIBSHELL)

clean:
		rm -f *.o
		rm -f lib/my/*.o

fclean:clean
		rm -f $(NAME)

re: fclean all
