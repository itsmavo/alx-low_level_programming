#include <stdio.h>
#include <stdlib.h>
/**
 * main - check the code
 * @argc: argument count 
 * @argv: argument vector
 * 
 * Return: Always void
 */
int main(int argc, char *argv[])
{
  char *opc = (char *) main;
  int a, byte;

  if (argc != 2)
    {
      printf("Error\n");
      exit(1);
    }

  byte = atoi(argv[1]);

  if (byte < 0)
    {
      printf("Error\n");
      exit(2);
    }
  
  for (a = 0; a < byte; a++)
    {
      printf("%02x", opc[a] & 0xFF);
      if (a != byte - 1)
	printf(" ");
    }

  printf("\n");
  return (0);
}
