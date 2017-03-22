/*
** my_putstr.c for my_putstr in 
** 
** Made by GAILLAT Anthony
** Login   <gailla_a@etna-alternance.net>
** 
** Started on  Sat Oct  1 19:59:51 2016 GAILLAT Anthony
** Last update Wed Mar 22 16:04:30 2017 GAILLAT Anthony
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h> 

void	my_putchar(char c);

void	f_putstr(va_list list)
{
  char  *str;

  str = va_arg(list, char *);
  
  while (*str != '\0')
    {
      my_putchar(*str);
      str++;
    }
}
