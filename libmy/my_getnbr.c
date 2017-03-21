
/*
** my_getnbr.c for my_getnbr in /home/anthony/Documents/devcjour05/my_getnbr
** 
** Made by GAILLAT Anthony
** Login   <gailla_a@etna-alternance.net>
** 
** Started on  Fri Sep 30 16:16:17 2016 GAILLAT Anthony
** Last update Sat Oct  1 17:45:31 2016 GAILLAT Anthony
*/

void	my_putchar(char c);

int	my_getnbr(char *str)
{
  int i;
  int n;
  int s;

  i = 0;
  n = 0;
  s = 1;
  while (str[i] != '\0' && (str[i] == 45 || str[i] == 43))
    {
      if (str[i] == 45)
	{
	  s = s * -1;
	}
      i++;
    }
  while (str[i] > 47 && str[i] < 58)
    {
      n = n * 10;
      n = (str[i] - 48) + n;
      i++;
    }
  return (n * s);
}
