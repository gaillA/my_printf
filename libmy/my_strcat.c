/*
** my_strcat.c for my_strcat in 
** 
** Made by GAILLAT Anthony
** Login   <gailla_a@etna-alternance.net>
** 
** Started on  Tue Oct  4 14:08:06 2016 GAILLAT Anthony
** Last update Wed Oct  5 15:57:44 2016 GAILLAT Anthony
*/

char	*my_strcat(char *str1, char *str2)
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
  while (str2[j] != '\0')
    {
      str1[i] = str2[j];
      i++;
      j++;
    }
  return (str1);
}
