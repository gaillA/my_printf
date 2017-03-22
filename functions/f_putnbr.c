/*
** f_putnbr.c for my_printf in /home/anthony/Documents/my_printf/functions
** 
** Made by GAILLAT Anthony
** Login   <gailla_a@etna-alternance.net>
** 
** Started on  Wed Mar 22 22:15:28 2017 GAILLAT Anthony
** Last update Wed Mar 22 22:15:29 2017 GAILLAT Anthony
*/


#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "../my_printf.h"

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
