/*
** my_strstr.c for my_strstr in 
** 
** Made by GAILLAT Anthony
** Login   <gailla_a@etna-alternance.net>
** 
** Started on  Tue Oct  4 15:19:21 2016 GAILLAT Anthony
** Last update Wed Oct  5 20:10:07 2016 GAILLAT Anthony
*/

char	*my_strstr(char *str, char *to_find)
{
  int i;

  i = 0;
  if (str[0] != '\0')
    {
      while (to_find[i] != '\0')
	{
	  if (str[i] != to_find[i])
	    {
	      return (my_strstr(str + 1, to_find));
	    }
	  i++;
	}
      return (str);
    }
  return (0);
}
