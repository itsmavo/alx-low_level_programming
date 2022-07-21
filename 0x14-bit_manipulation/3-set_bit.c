#include "main.h"


/**
 * set_bit - sets the value of a bit
 * @n: pointer to an unsigned long int
 * @index: index of the bit
 * Return: 1 on success, -1 on failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
  if (index > 63)
    return (-1);

  (*n) |= 1 << index;
  return (1);
}
