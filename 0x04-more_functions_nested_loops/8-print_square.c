#include "main.h"
/**
 * print_square - prints squares
 *
 * @size: int to set square size
 */
void print_square(int size)
{
  int k;
  int m;

  if (size <= 0)
    {
      _putchar('\n');
    }
  else
    {
      for (k = 0; k < size; k++)
	{
	  for (m = 0; m < size; m++)
	    {
	      _putchar('#');
	    }

	  _putchar('\n');
	}
    }
}
