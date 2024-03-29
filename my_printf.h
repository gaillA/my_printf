/*
** my_printf.h for my_printf in /home/anthony/printf
** 
** Made by GAILLAT Anthony
** Login   <gailla_a@etna-alternance.net>
** 
** Started on  Wed Mar 22 12:28:32 2017 GAILLAT Anthony
** Last update Thu Mar 23 12:35:18 2017 GAILLAT Anthony
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h> 

#ifndef __CORE_H__
#define __CORE_H__

typedef struct  s_arg
{
  int           ch;
  void          (*function)(va_list);
}               t_arg;

void    my_putchar(char c);
int     my_isneg(int n);
void    my_put_nbr(int nb);
void    my_swap(int *a, int *b);
void    my_putstr(char *str);
int     my_strlen(char *str);
int     my_getnbr(char *str);
char    *my_strcpy(char *dest, char *src);
char    *my_strncpy(char *dest, char *src, int n);
int     my_strcmp(char *s1, char *s2);
int     my_strncmp(char *s1, char *s2, int n);
char    *my_strcat(char *str1, char *str2);
char    *my_strncat(char *str1, char *str2, int n);
char    *my_strstr(char *str, char *to_find);
char    *my_strdup(char *str);
char    *my_strndup(char *str, int n);
char    **my_str_to_wordtab(char *str);
int     my_printf(const char *var,  ...);
void    parser(char c, va_list list);
void    f_putchar(va_list list);
void    f_putstr(va_list list);
void    f_putnbr(va_list list);
void    f_octal(va_list list);
void    f_uputnbr(va_list list);
void    f_percent();
int     f_exist(const char *var);
void    f_hexamaj(va_list list);
void    f_hexamin(va_list list);

#endif
