#include "main.h"
/**
 * print_number - prints number
 * @n: integer to be converted to a character
 * Return: void
 */
void print_number(int n)
{
  unsigned int a, ac;
  int m = 1;
  int i;
  int c = 0;

  if (n == 0)
    {
      _putchar('0');
    }
  if (n < 0)
    {
      _putchar('-');
      n += 1;
      n *= -1;
      n++;
    }
  a = n;
  ac = n;
  while (ac > 0)
    {
      ac /= 10;
      c++;
    }
  for (i = 0; i < c - 1; i++)
      m *= 10;
  for (i = 0; i < c; i++)
    {
      _putchar((a / m) + '0');
      a = a % m;
      m /= 10;
    }
    
}
