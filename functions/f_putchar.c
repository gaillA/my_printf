/*
** f_putchar.c for my_printf in /home/anthony/Documents/my_printf/functions
** 
** Made by GAILLAT Anthony
** Login   <gailla_a@etna-alternance.net>
** 
** Started on  Wed Mar 22 22:14:27 2017 GAILLAT Anthony
** Last update Wed Mar 22 22:14:30 2017 GAILLAT Anthony
*/


#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h> 

void	f_putchar(va_list list)
{
  char c;

  c = va_arg(list, int);
  write(1, &c, 1);
}
