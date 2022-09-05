#include "main.h"
/**
 * _strncat - concats two arrays
 *
 * @dest: destination of concat
 * @src: source arry to concat
 * @n: times to append
 *
 *Return: char
 */
char *_strncat(char *dest, char *src, int n)
{
  int i = 0;
  int j = 0;

  while (*(dest + i) != '\0')
    {
      i++;
    }
  
  while (j < n)
    {
      *(dest + i) = *(src + j);
      if (*(src + j) == '\0')
	break;
      i++;
      j++;
    }

  return (dest);
}
