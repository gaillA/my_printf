/*
** my_strcmp.c for my_strcmp in /home/anthony/Documents/devcjour04/gailla_a/my_strcmp
** 
** Made by GAILLAT Anthony
** Login   <gailla_a@etna-alternance.net>
** 
** Started on  Thu Sep 29 15:18:00 2016 GAILLAT Anthony
** Last update Wed Oct  5 14:58:57 2016 GAILLAT Anthony
*/

int	my_strcmp(char *s1, char *s2)
{
  while (*s1 != '\0' && *s1 == *s2)
    {
      s1++;
      s2++;
    }
  if (*s1 - *s2 > 0)
    return (1);
  if (*s1 - *s2 < 0)
    return (-1);
  return (0);
}
