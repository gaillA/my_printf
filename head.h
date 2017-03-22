/*
** main.h for Main in /home/anthony/printf
** 
** Made by GAILLAT Anthony
** Login   <gailla_a@etna-alternance.net>
** 
** Started on  Wed Mar 22 12:28:32 2017 GAILLAT Anthony
** Last update Wed Mar 22 16:28:21 2017 GAILLAT Anthony
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h> 

#ifndef __CORE_H__
#define __CORE_H__

typedef struct  s_type
{
  int           ch;
  void          (*function)(va_list);
}               t_type;

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
void    f_putchar(va_list list);
void    f_putstr(va_list list);
void    f_putnbr(va_list list);

#endif
