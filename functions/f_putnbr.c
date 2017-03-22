/*
** my_put_nbr.c for my_put_nbr in /home/anthony/Documents/devcjour05
** 
** Made by GAILLAT Anthony
** Login   <gailla_a@etna-alternance.net>
e** 
** Started on  Fri Sep 30 14:25:17 2016 GAILLAT Anthony
** Last update Wed Mar 22 16:33:06 2017 GAILLAT Anthony
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "../libmy/my_put_nbr.c"

void	my_putchar(char c);
void	my_putstr(char *str);

void    f_putnbr(va_list list)
{
  int nb;

  nb = va_arg(list, int);
  if (nb >= -2147483647)
    {
      if (nb < 0)
	{
	  my_putchar('-');
	  nb = -nb;
	}
      if (nb / 10)
	{
	  my_put_nbr(nb / 10);
	}
      my_putchar((nb % 10) + '0');
    }
  if (nb == -2147483648)
    {
      my_putstr("-2147483648");
    }
}
