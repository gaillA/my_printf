/*
** my_putchar.c for my_putchar in 
** 
** Made by GAILLAT Anthony
** Login   <gailla_a@etna-alternance.net>
** 
** Started on  Sat Oct  1 19:50:34 2016 GAILLAT Anthony
** Last update Tue Oct  4 15:20:21 2016 GAILLAT Anthony
*/

#include <unistd.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}
