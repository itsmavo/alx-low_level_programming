#include "main.h"
#include <stdio.h>
/**
 * main - program to copy from and to .
 * @ac: argument count
 * @av: array of arguments
 * Return: 0
 */
int main (int ac, char **av)
{
  int fdFr, fdTo;
  ssize_t wrt, rd;
  char buff[1024];

  if (ac != 3)
    {
      dprintf(STDERR_FILENO, "Usage: cp file_from file_to \n");
      exit(97);
    }
  
  fdFr = open(av[1], O_RDONLY);
  if (fdFr == -1)
    {
      dprintf(STDERR_FILENO, "Error: Can't read from %s\n", av[1]);
      exit(98);
    }
  
  fdTo = open(av[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
  if (fdTo == -1)
    {
      dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
      exit(99);
    }
  
  rd = 1024;
  while (rd == 1024)
    {
      rd = read(fdFr, buff, 1024);
      if (rd == -1)
	{
	  dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
	  exit(98);
	}

      wrt = write(fdTo, buff, rd);
      if (wrt == -1)
	{
	  dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
	  exit(99);
	}
    }
 
  if (close(fdFr) == -1)
    {
      dprintf(STDERR_FILENO, "Error: Can't close fdFr %d\n", fdFr);
      exit(100);
    }
  
  if (close(fdTo) == -1)
      {
	dprintf(STDERR_FILENO, "Error: Can't close fdTo %d\n", fdTo);
	exit(100);
      }

      return (0);
}
