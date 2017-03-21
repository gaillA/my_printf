/*
** my_put_nbr.c for my_put_nbr in /home/anthony/Documents/devcjour05
** 
** Made by GAILLAT Anthony
** Login   <gailla_a@etna-alternance.net>
e** 
** Started on  Fri Sep 30 14:25:17 2016 GAILLAT Anthony
** Last update Mon Oct  3 20:28:01 2016 GAILLAT Anthony
*/

void	my_putchar(char c);
void	my_putstr(char *str);

void	my_put_nbr(int nb)
{
  if (nb >= -2147483647)
    {
      if (nb < 0)
	{
	  my_putchar('-');
	  nb = -nb;
	}
      if (nb / 10)
	{
	  my_put_nbr(nb / 10);
	}
      my_putchar((nb % 10) + '0');
    }
  if (nb == -2147483648)
    {
      my_putstr("-2147483648");
    }
}
