##
## Makefile for Makefile in 
## 
## Made by GAILLAT Anthony
## Login   <gailla_a@etna-alternance.net>
## 
## Started on  Tue Oct  4 17:34:48 2016 GAILLAT Anthony
## Last update Sat Oct  8 11:14:08 2016 GAILLAT Anthony
##

CC =	gcc

CFLAGS =-Wall -Werror -c

NAME =	libmy.a

SRC =	my_putchar.c \
	my_isneg.c \
	my_put_nbr.c \
	my_swap.c \
	my_putstr.c \
	my_strlen.c \
	my_getnbr.c \
	my_strcpy.c \
	my_strncpy.c \
	my_strcmp.c \
	my_strncmp.c \
	my_strcat.c \
	my_strncat.c \
	my_strstr.c \
	my_strdup.c \
	my_str_to_wordtab.c

OBJ =	$(SRC:%.c=%.o)

RM =	rm -rf

all : $(NAME)

$(NAME):	
	$(CC) $(CFLAGS) $(SRC)
	ar -rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean :
	$(RM) $(OBJ)

fclean :		clean
	$(RM) $(NAME)

.PHONY : clean fclean all
