#include "function_pointers.h"
/**
 * int_index - looks for an integer
 * @array: input integer array
 * @size: array's size
 * @cmp: pointer to function being used to compare values
 *
 * Return: index of the first element which cmp func
 * doesn't return 0.
 * If no elements match, returns -1. If size <= 0, returns -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
  int i;

  if (array && cmp)
    {
      if (size <= 0)
	return (-1);

      for (i = 0; i < size; i++)
	if (cmp(array[i]))
	  return (i);
    }
  return (-1);
}
