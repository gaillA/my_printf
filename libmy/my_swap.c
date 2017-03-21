/*
** my_swap.c for my_swap in 
** 
** Made by GAILLAT Anthony
** Login   <gailla_a@etna-alternance.net>
** 
** Started on  Sat Oct  1 19:57:11 2016 GAILLAT Anthony
** Last update Sat Oct  1 19:58:37 2016 GAILLAT Anthony
*/

void	my_swap(int *a, int *b)
{
  int i;

  i = *a;
  *a = *b;
  *b = i;
}
