#include "search_algos.h"

/**
 * _b_s - searches for a value in a sorted array of ints using binary search
 *
 * @array: a pointer to the first elemetn of the array to search
 * @left: the starting index of the [sub]array to search
 * @right: the ending index of the [sub]array to search
 * @value: item being searched.
 * Return: If the value is not present or the array is NULL, -1.
 *         Otherwise, the index where the value is located.
 * Description: prints the [sub]array being searched after each change.
 */
int _b_s(int *array, size_t left, size_t right, int value)
{
  size_t i;

  if (array == NULL)
    return (-1);

  while (right >= left)
    {
      printf("Searching in array: ");
      for (i = left; i < right; i++)
	printf("%d, ", array[i]);
      printf("%d\n", array[i]);

      i = left + (right - left) / 2;
      if (array[i] == value)
	return (i);
      if (array[i] > value)
	right = i - 1;
      else
	left = i + 1;
    }

  return (-1);
}

/**
 * exponential_search - Searches for a value in a sorted array of ints using 
 *                      exponential search.
 * @array: a pointer to the first element of the array to search
 * @size: the number of elements in the array.
 * @value: item to be searched for
 *
 * Return: if the value is not present or the array is NULL, -1.
 *         Otherwies, the index where the value is located.
 * Description: Prints a value every time it is compared in the array.
 */
int exponential_search(int *array, size_t size, int value)
{
  size_t i = 0, right;

  if (array == NULL)
    return (-1);

  if (array[0] != value)
    {
      for (i = 1; i < size && array[i] <= value; i = i * 2)
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);
    }

  right = i < size ? i : size - 1;
  printf("Value found between indexes [%ld] and [%ld]\n", i / 2, right);
  return (_b_s(array, i / 2, right, value));
}
