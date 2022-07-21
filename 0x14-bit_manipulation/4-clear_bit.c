#include "main.h"
#include "2-get_bit.c"

/**
 * clear_bit - sets the value of a bit to 0 at given index
 * @n: pointer of an unsigned long int
 * @index: index of the bit
 *
 * Return: 1 on success, -1 on failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
  if (index > 63)
    return (-1);
  (*n) &= ~(1 << index);

  if (get_bit((*n), index) == 0)
    return (1);

  return (-1);
}
