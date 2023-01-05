#include "search_algos.h"
/**
 * rec_search - searches for a value in an array of
 * integers using the Binary search algorithm
 *
 *
 * @array: input array
 * @size: size of the array
 * @value: item to be searched
 * Return: index of the number
 */
int rec_search(int *array, size_t size, int value)
{
  size_t h = size / 2;
  size_t i;

  if (array == NULL || size == 0)
    return (-1);

  printf("Searching in array");

  for (i = 0; i < size; i++)
    printf("%s %d", (i == 0) ? ":" : ",", array[i]);

  printf("\n");

  if (h && size % 2 == 0)
    h--;

  if (value == array[h])
    {
      if (h > 0)
	return (rec_search(array, h + 1, value));
      return ((int)h);
    }

  if (value < array[h])
    return (rec_search(array, h + 1, value));

  h++;
  return (rec_search(array + h, size - h, value) + h);
}

/**
 * advanced_binary - calls to rec_search to return
 * the index of the number
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */
int advanced_binary(int *array, size_t size, int value)
{
  int index;

  index = rec_search(array, size, value);

  if (index >= 0 && array[index] != value)
    return (-1);

  return (index);
}
