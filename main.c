/*
** main.c for main.c in /home/anthony/printf
** 
** Made by GAILLAT Anthony
** Login   <gailla_a@etna-alternance.net>
** 
** Started on  Tue Mar 21 13:37:52 2017 GAILLAT Anthony
** Last update Wed Mar 22 16:45:50 2017 GAILLAT Anthony
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "head.h"

int             parser(char c, va_list list)
{
  int           i;
  t_type        type[5] = {
    {'c', &f_putchar},
    {'s', &f_putstr},
    {'i', &f_putnbr},
    {'d', &f_putnbr},
    {'o', &f_octal}
  };

  i = 0;
  while (i < 5)
    {
      if (type[i].ch == c) {
        type[i].function(list);
      }
      i++;
    }
  return (0);
}

int             my_printf(const char *var,  ...) {
  va_list       list;
  int           i;

  i = 0;
  va_start(list, var);

  while (var[i]) {
    if (var[i] == '%') {
      i++;
      parser(var[i], list);
    }
    else {
      my_putchar(var[i]);
    }
    i++;
  }
  va_end(list);
  
  return 0;
}

int     main() {
  my_printf("1 - une chaine\n");
  my_printf("2 - %s\n", "une autre chaine");
  my_printf("3 - %i\n", 42);
  my_printf("4 - %s %d %s%c", "avec", 4, "parametres", '\n');
  my_printf("1 - %o\n", 42);
  my_printf("2 - %u\n", (unsigned int)4200000000);
  my_printf("3 - %x\n", 42);
  my_printf("4 - %X\n", 42);
  my_printf("5 - %d%%\n", 42);

  return 0;
}
