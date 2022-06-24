#include "main.h"
/**
 * _strlen - return length of string
 * @s: input characters
 * Return: length of the string
 */
int _strlen(char *s)
{
  int count = 0;
  while(*(s + count) != '\0')
    count++;
  return (count);
}
