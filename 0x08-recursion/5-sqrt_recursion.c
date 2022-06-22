#include "main.h"
/**
 * power_operator - gets sqrt of a number 
 * @n: input number
 * @i: iterator
 * Return: sqrt or -1
 */
int power_operator(int n, int i)
{
  if (i % (n / i) == 0)
    {
      if (i * (n / i) == n)
	return (i);
      else
	return (-1);
    }
  return(0 + power_operator(n, i + 1));
}
/**
 * sqrt_recursion - calculates sqrt of a number
 * @n: number  to be sqrted
 * Return: sqrt of n
 */
int _sqrt_recursion(int n)
{
  if (n < 0)
    return (-1);
  if (n == 0)
    return (0);
  if (n == 1)
    return (1);
  return (power_operator(n, 2));
}
