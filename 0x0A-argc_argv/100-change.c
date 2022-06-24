#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the number of coins to make change for an amount
 * @argc - number of command line arguments.
 * @argv - array that contains the program command line arguments.
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
  int cnts, coins = 0;
  if (argc == 1 || argc > 2)
    {
      printf("Error\n");
      return (1);
    }

  cnts = atoi(argv[1]);
  
  while (cnts > 0)
    {
      if (cnts >= 25)
	cnts -= 25;
      else if (cnts >= 10)
	cnts -= 10;
      else if (cnts >= 5)
	cnts -= 5;
      else if (cnts >= 2)
	cnts -= 2;
      else if (cnts >= 1)
	cnts -= 1;

      coins += 1;
    }
  printf("%d\n", coins);
  return (0);
}
