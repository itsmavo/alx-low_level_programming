#include "main.h"
/**
 * _strcpy - copies string pointed to by src, also the terminating null byte
 * to the buffer pointed by dest.
 * @dest: destination
 * @src: source
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
  int k;

  for (k = 0; k <= _strlen(src); k++)
    {
      dest[k] = src[k];
    }
  return (dest);
}
