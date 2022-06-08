#include "main.h"
/**
 * print_last_digit - prints last digit of a number
 * @n: int type number
 * Return: value of last digit
 */
int print_last_digit(int n)
{
  int r;

  if (n < 0)
    {
      r = -1 * (n % 10);
      _putchar(r + '0');
      return (r);
    }
  else
    {
      r = n % 10;
      _putchar(r + '0');
      return (r);
    }
}
