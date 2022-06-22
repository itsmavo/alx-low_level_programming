#include "main.h"
/**
 * prime - checks if input is prime
 * @n: input int
 * @i: iterator
 * Return: 1 if prime or 0 if not
 */
int prime(unsigned int n, unsigned int i)
{
  if (n % i == 0)
    {
      if (n == i)
	return (1);
      else
	return (0);
    }
  return (0 + prime(n, i + 1));
}
/**
 * is _prime_number - calculates whether a number is prime
 * @n: int input
 * Return: 1 if prime or 0
 */
int is_prime_number(int n)
{
  if (n == 0)
    return (0);
  if(n < 0)
    return (0);
  if (n == 1)
    return (0);
  return(prime(n,2));
}
