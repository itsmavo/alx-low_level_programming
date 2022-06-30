#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - range of arrays
 * @min: min of array
 * @max: max of array
 * Return: int value
 */
int *array_range(int min, int max)
{
  int i;
  int *t;
  int l;

  if (min > max)
    return (NULL);
  l = 0;
  for (i = min; i <= max; i++)
    l++;

  t = malloc(sizeof(int) * l);
  if (t == NULL)
    return (NULL);

  i = 0;
  while (min <= max)
    {
      t[i] = min;
      i++;
      min++;
    }
  return (t);
}
