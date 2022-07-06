#include "function_pointers.h"
/**
 * array_iterator - execs a function given as a param
 * on each element of an array.
 * @array: input integer array
 * @size: size of the array
 * @action: pointer to the function
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
  unsigned int a;

  if (array && action)
    for (a = 0; a < size; a++)
      action(array[a]);
}
