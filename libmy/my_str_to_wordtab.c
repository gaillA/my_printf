/*
** my_str_to_wordtab.c for my_str_to_wordtab in 
** 
** Made by GAILLAT Anthony
** Login   <gailla_a@etna-alternance.net>
** 
** Started on  Tue Oct  4 19:01:26 2016 GAILLAT Anthony
** Last update Sat Oct  8 13:14:39 2016 GAILLAT Anthony
*/

#include <stdlib.h>

char	*my_strncpy(char *dest, char *src, int n);

int	alphanum(char c)
{
  if (c >= 48 && c <= 57)
    return (0);
  if (c >= 65 && c <= 90)
    return (0);
  if (c >= 97 && c <= 122)
    return (0);
  return (1);
}

int	nb_word(char *str)
{
  int i;
  int word;

  i = 0;
  word = 0;
  while (str[i] != '\0')
    {
      if (alphanum(str[i]) == 0 && i == 0)
	{
	  word++;
	}
      if (alphanum(str[i]) == 1 && alphanum(str[i + 1]) == 0)
	{
	  word++;
	}
      i++;
    }
  return (word);
}

char	**my_str_to_wordtab(char *str)
{
  int i;
  int j;
  int k;
  char **tab;

  i = 0;
  j = 0;
  k = 0;
  tab = malloc((nb_word(str) + 1) * sizeof(char *));
  while (str[i] != '\0')
    {
      if (alphanum(str[i]) == 0)
	{
	  k++;
	}
      if (alphanum(str[0] == 0) && i == 0)
	{
	  tab[j] = malloc((k + 1) * sizeof(char));
	  my_strncpy(tab[j], &str[i - k], k);
	  k = 0;
	  j++;
	}
      if (alphanum(str[i]) == 1 && (str[i] == '\0' || alphanum(str[i + 1]) == 0))
	{
	  tab[j] = malloc((k + 1) * sizeof(char));
	  my_strncpy(tab[j], &str[i - k], k);
	  k = 0;
	  j++;
	}
      i++;
    }
  tab[j] = '\0';
  return (tab);
}
