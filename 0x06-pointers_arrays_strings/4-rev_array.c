#include "main.h"
/**
 * reverse_array - reverses an array
 *
 * @a: array to be reversed
 * @n: size of array
 * Return: None
 */
void reverse_array(int *a, int n)
{
  int i;
  int t;

  for (i = 0; i < n / 2; i++)
    {
      t = a[i];
      a[i] = a[n - i - 1];
      a[n - i - 1] = t;
    }
}
