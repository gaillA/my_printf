/*
** my_strncat.c for my_strncat in 
** 
** Made by GAILLAT Anthony
** Login   <gailla_a@etna-alternance.net>
** 
** Started on  Tue Oct  4 14:08:06 2016 GAILLAT Anthony
** Last update Wed Oct  5 16:00:14 2016 GAILLAT Anthony
*/

char	*my_strncat(char *str1, char *str2, int n)
{
  int i;
  int j;
  int k;

  i = 0;
  j = 0;
  k = 0;
  while (str1[i] != '\0')
    {
      k++;
      i++;
    }
  i = k;
  while (str2[j] != '\0' && n > 0)
    {
      str1[i] = str2[j];
      i++;
      j++;
      n--;
    }
  return (str1);
}
