#include <stdio.h>
/**
 * main - prints the first 98 Fibonacci numbers, starting with 1 & 2
 * followed by a new line
 * Return: Always 0
 */
int main(void)
{
  int count = 2;

  float a = 1;
  float b = a;
  float c = a + b;

  printf("%.0f", a);
  printf(", ");
  printf("%.0f",  b + a);
  printf(", ");
  while(count < 98)
    {
      count++;
      printf("%.0f", c);
      a = b;
      b = c;
      c = a + b;
      if (count < 98)
	{
	  printf(", ");
	}
    }
  printf("\n");
  return (0);
}
