#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename
 * @letters: number of letters printed
 *
 * Return: number of letters printed, or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
  int fd, prnt, wrt;
  char *buff;

  buff = malloc(letters);
  if (buff == NULL)
    return (0);
  if (filename == NULL)
    return (0);
  fd = open(filename, O_RDONLY);
  if (fd == -1)
    return (0);
  prnt = read(fd, buff, letters);
  if (prnt == -1)
    return (0);
  wrt = write(STDOUT_FILENO, buff, prnt);
  if (wrt == -1)
    return (0);
  if (close(fd) == -1)
    return (0);
  
  free(buff);
  return(prnt);
}
