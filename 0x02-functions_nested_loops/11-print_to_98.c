#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Counts natural numbers
 * @n: An input int
 * Description: function printing natural numbers n to 98
 * Return: int n
 */

void print_to_98(int n)
{
  if (n <= 98)
    {
      for (; n <= 98; n++)
	{
	  printf("%d", n);

	  if (n == 98)
	    continue;
	  printf(", ");
	}
      printf("\n");
    }
  else
    {
      for (; n >= 98; n--)
	{
	  printf("%d", n);
	  if (n == 98)
	    continue;
	  printf(", ");
	}
      printf("\n");
    }
}
