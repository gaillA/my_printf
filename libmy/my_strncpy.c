/*
** my_strncpy.c for my_strncpy in 
** 
** Made by GAILLAT Anthony
** Login   <gailla_a@etna-alternance.net>
** 
** Started on  Tue Oct  4 11:23:42 2016 GAILLAT Anthony
** Last update Tue Oct  4 15:22:09 2016 GAILLAT Anthony
*/

char	*my_strncpy(char *dest, char *src, int n)
{
  char *cpy;

  cpy = dest;
  while (n > 0 && *src != '\0')
    {
      *cpy++ = *src++;
      n--;
    }
  while (n > 0)
    {
      *cpy++ = '\0';
      n--;
    }
  return (dest);
}
