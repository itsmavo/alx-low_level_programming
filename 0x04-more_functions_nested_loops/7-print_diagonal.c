#include "main.h"
/**
 * print_diagonal - prints diagonal symbol
 *
 * @n: integer to set
 */
void print_diagonal(int n)
{
  int a;
  int b;

  if (n <= 0)
    {
      _putchar('\n');
    }
  else
    {
      for (a = 0; a < n; a++)
	{
	  for (b = 0; b < a; b++)
	    {
	      _putchar(' ');
	    }
	  _putchar('\\');
	  _putchar('\n');
	}
    }
}
