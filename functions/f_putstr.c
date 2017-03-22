/*
** f_putstr.c for my_printf in /home/anthony/Documents/my_printf/functions
** 
** Made by GAILLAT Anthony
** Login   <gailla_a@etna-alternance.net>
** 
** Started on  Wed Mar 22 22:15:50 2017 GAILLAT Anthony
** Last update Wed Mar 22 22:15:51 2017 GAILLAT Anthony
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
