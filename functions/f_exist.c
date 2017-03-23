/*
** f_exist.c for my_printf in /home/anthony/Documents/my_printf
** 
** Made by GAILLAT Anthony
** Login   <gailla_a@etna-alternance.net>
** 
** Started on  Wed Mar 22 23:04:52 2017 GAILLAT Anthony
** Last update Thu Mar 23 12:36:11 2017 GAILLAT Anthony
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "../my_printf.h"

int     f_exist(const char *var)
{
  int   i;
  int   j;
  int   k;
  int   l;
  char  *arg;

  i = 0;
  j = 0;
  k = 0;
  l = 0;
  arg = "csidouxX%";
  
  while (var[i]) {
    if (var[i] == '%') { 
      i++;
      l++;
      while (arg[j]) {
        if (arg[j] == var[i]) {
          k++;
        }
        j++;
      }
      if (l != k) {
        my_putstr("Le parametre %");
        my_putchar(var[i]);
        my_putstr(" n'est pas reconnu\n");
      }
      j = 0;
    }
    i++;
  }
  return (l-k);
}
