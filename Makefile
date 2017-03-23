##
## Makefile for my_printf in /home/anthony/printf
## 
## Made by GAILLAT Anthony
## Login   <gailla_a@etna-alternance.net>
## 
## Started on  Wed Mar 22 09:57:55 2017 GAILLAT Anthony
## Last update Thu Mar 23 13:42:06 2017 GAILLAT Anthony
##

CC			=	gcc

SRC_H			=	my_printf.h

SRC			=	my_printf.c		\
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
				libmy/my_putstr.c	\
				libmy/my_putchar.c	\
				libmy/my_put_nbr.c	\
				libmy/my_strlen.c

OBJS			=	$(SRC:%.c=%.o)

RM			=	rm -f

SNAME			=	libmy_printf_$(shell uname -m)-$(shell uname -s).a

DNAME			=	libmy_printf_$(shell uname -m)-$(shell uname -s).so

LDFLAGS 		= 	-shared

CFLAGS			=	-Wall -Werror -Wpedantic -fPIC

all			:	my_printf_static my_printf_dynamic

my_printf_static	:	$(OBJS)
				ar rc $(SNAME) $(OBJS) $(SRC_H)
				ranlib $(SNAME)

my_printf_dynamic	:	$(OBJS)
				$(CC) ${LDFLAGS} -o $(DNAME) $^

$(SRCS:.c=.d):%.d:%.c
				$(CC) $(CFLAGS) -MM $< > $(DNAME)

include $(SRCS:.c=.d)

clean			:
				$(RM) $(OBJS) $(SRCS:.c=.d)

fclean			:	clean
				$(RM) $(SNAME) $(DNAME)

re			:	fclean all

.PHONY			:	all clean fclean re
