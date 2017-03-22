##
## Makefile for Makefile in /home/anthony/printf
## 
## Made by GAILLAT Anthony
## Login   <gailla_a@etna-alternance.net>
## 
## Started on  Wed Mar 22 09:57:55 2017 GAILLAT Anthony
## Last update Wed Mar 22 16:52:50 2017 GAILLAT Anthony
##

CC	=	gcc

SRC_H	=	head.h

SRC	=	main.c			\
		functions/f_putchar.c	\
		functions/f_putstr.c	\
		functions/f_putnbr.c	\
		functions/f_octal.c	\

OBJS	=	$(SRC:%.c=%.o)

LIB	=	libmy/libmy.a

RM	=	rm -f

NAME	=	my_printf

CFLAGS	=	-Wall -Werror -Wextra -g

all	:	$(NAME)

$(NAME)	:	$(OBJS)
		$(CC) $(OBJS) -L. $(LIB) -o $(NAME) $(SRC_H) $(CFLAGS)
clean	:
		$(RM) $(OBJS)

fclean	:	clean
		$(RM) $(NAME)

re	:	fclean all
