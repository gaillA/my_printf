/*
** my_strcpy.c for my_strcpy in 
** 
** Made by GAILLAT Anthony
** Login   <gailla_a@etna-alternance.net>
** 
** Started on  Tue Oct  4 11:23:42 2016 GAILLAT Anthony
** Last update Tue Oct  4 13:29:10 2016 GAILLAT Anthony
*/

char	*my_strcpy(char *dest, char *src)
{
  char *cpy;

  cpy = dest;
  while (*src != '\0')
    {
      *cpy++ = *src++;
    }
  return (dest);
}
