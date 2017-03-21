/*
** my_strlen.c for my_strlen in 
** 
** Made by GAILLAT Anthony
** Login   <gailla_a@etna-alternance.net>
** 
** Started on  Sat Oct  1 20:02:36 2016 GAILLAT Anthony
** Last update Mon Oct  3 20:28:57 2016 GAILLAT Anthony
*/

void	my_putchar(char c);

int	my_strlen(char *str)
{
  int i;

  i = 0;
  while (str[i] != '\0')
    {
      i++;
    }
  return (i);
}
