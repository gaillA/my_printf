##
## Makefile for my_printf in /home/anthony/printf
## 
## Made by GAILLAT Anthony
## Login   <gailla_a@etna-alternance.net>
## 
## Started on  Wed Mar 22 09:57:55 2017 GAILLAT Anthony
## Last update Thu Mar 23 12:33:17 2017 GAILLAT Anthony
##

CC	=	gcc

SRC_H	=	my_printf.h

SRC	=	main.c			\
		parser.c		\
		functions/f_putchar.c	\
		functions/f_putstr.c	\
		functions/f_putnbr.c	\
		functions/f_octal.c	\
		functions/f_percent.c	\
		functions/f_exist.c	\
		functions/f_uputnbr.c	\
		functions/f_hexamaj.c	\
		functions/f_hexamin.c	\

OBJS	=	$(SRC:%.c=%.o)

LIB	=	libmy/libmy.a

RM	=	rm -f

NAME	=	my_printf

CFLAGS	=	-Wall -Werror -Wpedantic

all	:	$(NAME)

$(NAME)	:	$(OBJS)
		$(CC) $(OBJS) -L. $(LIB) -o $(NAME) $(SRC_H) $(CFLAGS)
clean	:
		$(RM) $(OBJS)

fclean	:	clean
		$(RM) $(NAME)

re	:	fclean all
