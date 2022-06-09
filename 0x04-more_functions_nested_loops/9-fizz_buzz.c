#include <stdio.h>

/**
 * main - prints numbers 1 to 100, then a new line
 * multiples of 3 print Fizz and multiples of 5
 * Buzz
 * Return: Always 0
 */
int main(void)
{
  int i;

  for (i = 1; i <= 100; i++)
    {
      if (i % 3 == 0 || i % 5 == 0)
	{
	  if (i % 3 == 0)
	    {
	      printf("Fizz");
	    }
	  if (i % 5 == 0)
	    {
	      printf("Buzz");
	    }
	}
      else
	{
	  printf("%d", i);
	}
      if (i != 100)
       	  printf(" ");
    }
  printf("\n");
  return (0);
}
