#include "main.h"
/**
 * _strstr - finds the first appearance of the substring
 * needle in the string haystack.
 * @haystack: entire string
 * @needle: substring
 * Return: pointer to the beginning of located substring or
 * NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
  char *hystk;
  char *pndle;

  while (*haystack != '\0')
    {
      hystk = haystack;
      pndle = needle;

      while (*haystack != '\0' && *pndle != '\0' && *haystack == *pndle)
	{
	  haystack++;
	  pndle++;
	}
      if (!*pndle)
	return (hystk);
      haystack = hystk + 1;
    }
  return (0);
}
