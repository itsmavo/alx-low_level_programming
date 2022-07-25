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
  int file_from, file_to;
  ssize_t wrt, rd;
  char buff[1024];

  if (ac != 3)
    {
      dprintf(STDERR_FILENO, "Usage: cp file_from file_to \n");
      exit(97);
    }
  
  file_from = open(av[1], O_RDONLY);
  if (file_from == -1)
    {
      dprintf(STDERR_FILENO, "Error: Can't read from %s\n", av[1]);
      exit(98);
    }
  
  file_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
  if (file_to == -1)
    {
      dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
      exit(99);
    }
  
  rd = 1024;
  while (rd == 1024)
    {
      rd = read(file_from, buff, 1024);
      if (rd == -1)
	{
	  dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
	  exit(98);
	}

      wrt = write(file_to, buff, rd);
      if (wrt == -1)
	{
	  dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
	  exit(99);
	}
    }
 
  if (close(file_from) == -1)
    {
      dprintf(STDERR_FILENO, "Error: Can't close file_from %d\n", file_from);
      exit(100);
    }
  
  if (close(file_to) == -1)
      {
	dprintf(STDERR_FILENO, "Error: Can't close file_to %d\n", file_to);
	exit(100);
      }

      return (0);
}
