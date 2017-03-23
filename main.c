/*
** main.c for my_printf in /home/anthony/printf
** 
** Made by GAILLAT Anthony
** Login   <gailla_a@etna-alternance.net>
** 
** Started on  Thu Mar 23 13:24:18 2017 GAILLAT Anthony
** Last update Thu Mar 23 14:26:41 2017 GAILLAT Anthony
*/

#include "my_printf.h"

int     main()
{
  my_printf("1 - une chaine\n");
  my_printf("2 - %s\n", "une autre chaine");
  my_printf("3 - %i\n", 42);
  my_printf("4 - %s %d %s%c", "avec", 4, "parametres", '\n');
  my_printf("5 - %o\n", 42); 
  my_printf("6 - %u\n", (unsigned int)4200000000);
  my_printf("7 - %x\n", 42); 
  my_printf("8 - %X\n", 42); 
  my_printf("9 - %d%%\n", 42);
  return (0);
}
