#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 *c - the character to print
 *
 *Return : on success 1.
 *On error, return -1 and errno is set
 */

int _putchar(char c)
{
  return (write(1, &c, 1));
}
