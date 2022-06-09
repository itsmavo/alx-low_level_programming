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

  if (size <= 0)
    {
      _putchar('\n');
    }
  else
    {
      for (a = 1; a <= size; a++)
	{
	  for (b = a; b < size; b++)
	    {
	      _putchar(' ');
	    }
	  
	  for (b = 1; b <= a; b++)
	    {
	      _putchar('#');
	    }
	  _putchar('\n');
	}
    }
}
