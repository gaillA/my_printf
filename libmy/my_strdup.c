/*
** my_strdup.c for my_strdup in 
** 
** Made by GAILLAT Anthony
** Login   <gailla_a@etna-alternance.net>
** 
** Started on  Mon Oct  3 15:03:45 2016 GAILLAT Anthony
** Last update Tue Oct  4 18:45:50 2016 GAILLAT Anthony
*/

#include <stdlib.h>

int	my_strlen(char *str);
char	*my_strcpy(char *dest, char *src);

char	*my_strdup(char *str)
{
  char *dest;
  
  dest = malloc(my_strlen(str) + 1);
  if (dest != '\0')
    my_strcpy(dest, str);
  return (dest);
}
