/*
** main.c for my_printf in /home/anthony/printf
** 
** Made by GAILLAT Anthony
** Login   <gailla_a@etna-alternance.net>
** 
** Started on  Tue Mar 21 13:37:52 2017 GAILLAT Anthony
** Last update Thu Mar 23 12:57:35 2017 GAILLAT Anthony
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "my_printf.h"

int             my_printf(const char *var,  ...)
{
  va_list       list;
  int           i;

  i = 0;
  va_start(list, var);
  if (!f_exist(var)) {
    while (var[i]) {
      if (var[i] == '%') {
        i++;
        parser(var[i], list);
      }
      else
        my_putchar(var[i]);
      i++;
    }
  }
  va_end(list);
  return (0);
}
