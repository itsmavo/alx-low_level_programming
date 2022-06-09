#include <stdio.h>
/**
 * main - finds and prints the largest prime factor for 612852475143
 * followed by a new line
 * Return: Always 0
 */
int main(void)
{
  unsigned int a = 2;
  unsigned long n = 612852475143;

  while (a != n)
    {
      if (n % a == 0)
	{
	  n = n / a;
	}
      else
	{
	  n++;
	}
    }
  printf("%lu\n", n);
  return (0);
}
