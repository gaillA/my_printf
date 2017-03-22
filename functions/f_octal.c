/*
** f_octal.c for my_printf in /home/anthony/printf
** 
** Made by GAILLAT Anthony
** Login   <gailla_a@etna-alternance.net>
** 
** Started on  Wed Mar 22 16:46:55 2017 GAILLAT Anthony
** Last update Wed Mar 22 22:13:49 2017 GAILLAT Anthony
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <math.h>
#include "../my_printf.h"

void     f_octal(va_list list)
{
  int   d;
  int   o;
  int   i;

  d = va_arg(list, int);
  o = 0;
  i = 1;

  while (d != 0)
    {
      o += (d % 8) * i;
      d /= 8;
      i *= 10;
    }

  my_put_nbr(o);
}
