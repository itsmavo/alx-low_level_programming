#include "main.h"

/**
 * flip_bits - return the number of bits you need
 * to flip one number to another
 * @n: 1st num
 * @m: 2nd num
 *
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
  unsigned long int flip, cnt = 0;

  flip = n ^ m;
  while (flip > 0)
    {
      cnt += flip & 1;
      flip >>= 1;
    }
  return (cnt);
}
