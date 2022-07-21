#include <unistd.h>

/**
 * _putchar - writes char c to stdout
 * @c: char to print
 *
 * Return: 1 on success, error return -1 and errno is set
 */

int _putchar(char c)
{
  return (write(1, &c, 1));
}
