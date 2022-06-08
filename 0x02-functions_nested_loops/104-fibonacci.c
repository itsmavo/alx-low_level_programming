#include <stdio.h>
/**
 * main - prints the first 98 Fibonacci numbers, starting with 1 & 2
 * followed by a new line
 * Return: Always 0
 */
int main(void)
{
  unsigned long int a, b, c, a1, a2, b1, b2;

  b = 1;
  c = 2;

  printf("%lu", b);

  for (a = 1; a < 91; a++)
    {
      printf(", %lu", c);
      c = c + b;
      b = c - b;
      
    }

  a1 = b / 1000000000;
  a2 = b % 1000000000;
  b1 = c / 1000000000;
  b2 = c % 1000000000;

  for (a = 92; a < 99; ++a)
    {
      printf(", %lu", b1 + (b2 / 1000000000));
      printf("%lu", b2 % 1000000000);
      b1 = b1 + a1;
      a1 = b1 - a1;
      b2 = b2 + a1;
      a2 = b2 - a2;
    }

  printf("\n");
  
  return (0);
}
