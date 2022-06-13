#include "main.h"
#include <stdio.h>
/**
 * print_array - print n elements of an arry of integers.
 * @a: input array
 * @n: input elements
 * Return: void
 */
void print_array(int *a, int n)
{
  int d;

  for (d = 0; d < n; d++)
    {
      printf("%d", *(a + d));
      if(d != (n -1))
	printf(", ");
    }
  printf("\n");
}
