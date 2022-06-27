#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars.
 * @size: size of the array
 * @c: storage char
 *
 * Return: pointer of an arrays of chars
 */
char *create_array(unsigned int size, char c)
{
  char *rc;
  unsigned int i;

  if (size == 0)
    return (NULL);

  rc = malloc(sizeof(c) * size);

  if (rc == NULL)
    return (NULL);

  for (i = 0; i < size; i++)
    rc[i] = c;

  return (rc);
}
