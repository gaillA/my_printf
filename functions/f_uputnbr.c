/*
** f_uputnbr.c for my_printf in /home/anthony/printf/functions
** 
** Made by GAILLAT Anthony
** Login   <gailla_a@etna-alternance.net>
** 
** Started on  Thu Mar 23 09:56:49 2017 GAILLAT Anthony
** Last update Thu Mar 23 10:24:05 2017 GAILLAT Anthony
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "../my_printf.h"


void    f_uputnbr(va_list list)
{
  unsigned int nb;

  nb = va_arg(list, int);
  if (nb >= 0)
    {
      if (nb / 10)
        {
          my_put_nbr(nb / 10);
        }
      my_putchar((nb % 10) + '0');
    }
}
