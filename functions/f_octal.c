/*
** f_octal.c for octal in /home/anthony/printf
** 
** Made by GAILLAT Anthony
** Login   <gailla_a@etna-alternance.net>
** 
** Started on  Wed Mar 22 16:46:55 2017 GAILLAT Anthony
** Last update Wed Mar 22 16:52:13 2017 GAILLAT Anthony
*/

int     f_octal(int d)
{
  int   o;
  int   i;

  o = 0;
  i = 1;

  while (d != 0)
    {
      o += (d % 8) * i;
      d /= 8;
      i *= 10;
    }

  return o;
}
