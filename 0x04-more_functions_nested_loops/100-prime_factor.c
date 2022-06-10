#include <stdio.h>
#include <math.h>
/**
 * main - finds and prints the largest prime factor for 612852475143
 * followed by a new line
 * Return: Always 0
 */
int main(void)
{
  long int a;
  unsigned long n = 612852475143;
  long int max = -1;

  while (n % 2 == 0)
    {
      max = 2;
      n /= 2;
    }

  for (a = 3; a <= sqrt(n); a = a + 2)
    {
      while (n % a == 0)
	{
	  max = a;
	  n = n / a;
	}
    }

  if (n > 2)
    max = n;
  
  printf("%lu\n", max);
  
  return (0);
}
