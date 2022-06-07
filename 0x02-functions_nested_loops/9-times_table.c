#include "main.h"

/**
 * times_table - a function that print the 9 multiplication table
 * r = row, c = column, d = result in digits
 * Return: times table
 * 
 */
void times_table(void)
{
  int r, c, d;

  for ( r = 0; r <= 9; r++)
    {
      for (c = 0; c <= 9; c++)
	{
	  d = r * c;

	  if (c == 0)
	    {
	      _putchar('0');
	    }
	  else if (d <= 9)
	    {
	      _putchar(',');
	      _putchar(' ');
	      _putchar(' ');
	      _putchar(d + '0');
	    }
	  else
	    {
	      _putchar(',');
	      _putchar(' ');
	      _putchar(d / 10 + '0');
	      _putchar(d % 10 + '0');
	    }
	}
      _putchar('\n');
    }
}
