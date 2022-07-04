#include "main.h"
#include "2-strlen.c"
/**
 * _atoi - converts a string to int.
 *@s: input string
 * Return: integer
 */
int _atoi(char *s)
{
  int i;
  int pn;
  int c;
  int d = 1;
  int n = 0;

  for (i = 0; i < _strlen(s); i++)
    {
      if (!(s[i] >= '0' && s[i] <= '9') && c > 0)
	break;
      if (s[i] == '-')
	pn--;
      if (s[i] == '+')
	pn++;
      if (s[i] >= '0' && s[i] <= '9')
	{
	  c++;
	}
    }
  while (c > 0)
    {
      n += ((s[i - 1] - '0') * d);
      i--;
      c--;
      d *= 10;
    }
  if (pn >= 0)
    {
      n *= 1;
    }
  else
    {
      n *= -1;
    }
  return (n);
}
