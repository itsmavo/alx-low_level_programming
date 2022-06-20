#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - print the sum of the two
 * diagonals of a square matrix of integers
 * @a: input pointer
 * @size: size of the matrix
 * Return: no return.
 */
void print_diagsums(int *a, int size)
{
  int i, suma = 0, sumb = 0;

  for (i = 0; i < (size * size); i++)
    {
      if (i % (size + 1) == 0)
	suma += *(a + i);
      if (i % (size - 1) == 0 && i != 0 && i < (size * size) - 1)
	sumb += *(a + i);
    }
  printf("%d, %d\n", suma, sumb);
}
