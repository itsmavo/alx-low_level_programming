#include "main.h"
/**
 * print_triangle - prints triangles
 *
 * @size: determines size of triangles
 */
void print_triangle(int size)
{
  int a;
  int b;
  int c;

  if (size <= 0)
    {
      _putchar('\n');
    }
  else
    {
      for (a = 1; a <= size; a++)
	{
	  for (b = size - 1; b > 0; b--)
	    {
	      _putchar(' ');
	    }
	  for (c = 0; c < 1; c++)
	    {
	      _putchar('#');
	    }
	  _putchar('\n');
	}
    }
}
