#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked -checks malloc
 * @b: integer to be checked
 * Return: a pointer or void
 */
void *malloc_checked(unsigned int b)
{
  void *i;

  i = malloc(b);
  if (i == NULL)
    exit(98);

  return (i);
}
