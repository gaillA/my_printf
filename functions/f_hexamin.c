/*
** f_octal.c for my_printf in /home/anthony/printf
** 
** Made by GAILLAT Anthony
** Login   <gailla_a@etna-alternance.net>
** 
** Started on  Wed Mar 22 16:46:55 2017 GAILLAT Anthony
** Last update Thu Mar 23 14:14:38 2017 GAILLAT Anthony
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <math.h>
#include "../my_printf.h"

void            f_hexamin(va_list list)
{
  unsigned int  d;
  unsigned int  r;
  unsigned int  n;
  char          *str;

  str = "0123456789abcdef";
  n = va_arg(list, unsigned int);
  d = 1;
  while ((n / d) >= my_strlen(str))
    d *= my_strlen(str);
  while (d > 0)
    {
      r = (n / d) % my_strlen(str);
      my_putchar(str[r]);
      d /= my_strlen(str);
    }
}
