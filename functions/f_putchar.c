/*
** my_putchar.c for my_putchar in 
** 
** Made by GAILLAT Anthony
** Login   <gailla_a@etna-alternance.net>
** 
** Started on  Sat Oct  1 19:50:34 2016 GAILLAT Anthony
** Last update Wed Mar 22 15:57:30 2017 GAILLAT Anthony
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
