#include "main.h"
/**
 * print_sign - prints sign of a number
 * n: type integer, positive or negative
 * Description: print +, 0 or - dependent on number
 * Return: 1 if +, 0 if 0 or -1 if -
 */

int print_sign(int n)
{
  if (n > 0)
    {
      _putchar('+');
      return (1);
    }
  else if (n < 0)
    {
      _putchar('-');
      return (-1);
    }
  else
    {
      _putchar('0');
      return (0);
    }
}
