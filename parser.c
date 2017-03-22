/*
** parser.c for my_printf in /home/anthony/Documents/my_printf
** 
** Made by GAILLAT Anthony
** Login   <gailla_a@etna-alternance.net>
** 
** Started on  Wed Mar 22 21:09:06 2017 GAILLAT Anthony
** Last update Wed Mar 22 23:28:55 2017 GAILLAT Anthony
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "my_printf.h"

void            parser(char c, va_list list)
{
  int           i;
  t_arg        arg[6] = {
    {'c', &f_putchar},
    {'s', &f_putstr},
    {'i', &f_putnbr},
    {'d', &f_putnbr},
    {'o', &f_octal},
    {'%', &f_percent}
  };

  i = 0;
  while (i < 6)
    {
      if (arg[i].ch == c)
        arg[i].function(list);
      i++;
    }
}
