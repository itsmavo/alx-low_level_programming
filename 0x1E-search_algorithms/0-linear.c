#include "search_algos.h"
/**
 * linear_search - searches list linearly
 * @array: array to search
 * @size: size of the array
 * @value: item being searched for
 *
 * Return: int value
 */
int linear_search(int *array, size_t size, int value)
{
  size_t i;

  for (i = 0; i < size; i++)
    {
      printf("Value checkes array[%lu] = [%d]\n", i, array[i]);
      if (array[i] == value)
	return (i);
    }
  return (-1);
}
