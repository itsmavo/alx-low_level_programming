#include "main.h"
/**
 * _strcat - concats two arrays
 *
 * @dest: destination concat
 * @src: source array
 *
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
  int i;
  int j;

  for (j = 0; dest[j] != '\0'; j++)
    {}
  for (i = 0; src[i] != '\0'; i++)
    {
      dest[j + 1] = src[i];
    }
  dest[j + 1] = '\0';

  return (dest);
}
