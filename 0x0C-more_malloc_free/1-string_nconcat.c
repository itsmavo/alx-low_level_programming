#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - concats strings
 * @s1: string 1
 * @s2: string 2
 * @n: n amount of bytes
 * Return: return a char val
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
  unsigned int i, l1, l2;
  char *s;

  if (s2 == NULL)
    s2 = "";
  if (s1 == NULL)
    s1 = "";

  l1 = 0;
  l2 = 0;
  while (s2[l2] != '\0')
    l2++;
  while (s1[l1] != '\0')
    l1++;

  if (n >= l2)
    n = l2;

  s = malloc(sizeof(char) * n + l1 + 1);
  if (s == NULL)
    return (NULL);

  for (i = 0; i < l1; i++)
    s[i] = s1[i];

  for (i = 0; i < n; i++)
    s[i + l1] = s2[i];

  s[i + l1] = '\0';
  return (s);
}
