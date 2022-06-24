#include <stdio.h>
/**
 * main - prints the arguments passed into it.
 * @argc: the number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
  int i;

  for (i = 0; i < argc; i++)
    printf("%s\n", argv[i]);
  return (0);
}
