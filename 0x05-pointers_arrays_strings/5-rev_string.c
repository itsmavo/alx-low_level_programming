#include "main.h"
#include "2-strlen.c"

/**
 * rev_string - reverses a string
 * @s: input 
 * Return: void
 */
void rev_string(char *s)
{
  int n;
  char c;

  for (n = 0; n < _strlen(s) / 2; n++)
    {
      c = s[n];
      s[n] = s[_strlen(s) - n - 1];
      s[_strlen(s) - n - 1] = c;
    }
}
