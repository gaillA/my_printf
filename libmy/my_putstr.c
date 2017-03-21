/*
** my_putstr.c for my_putstr in 
** 
** Made by GAILLAT Anthony
** Login   <gailla_a@etna-alternance.net>
** 
** Started on  Sat Oct  1 19:59:51 2016 GAILLAT Anthony
** Last update Mon Oct  3 20:28:28 2016 GAILLAT Anthony
*/

void	my_putchar(char c);

void	my_putstr(char *str)
{
  while (*str != '\0')
    {
      my_putchar(*str);
      str++;
    }
}
