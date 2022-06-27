#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments of a program
 * @ac: argument count
 * @av: argument vector
 *
 * Return: pointer of an array of char
 */
char *argstostr(int ac, char **av)
{
  char *aout;
  int c, i, j, ai;

  if (ac == 0)
    return (NULL);

  for (c = i = 0; i < ac; i++)
    {
      if (av[i] == NULL)
	return (NULL);

      for (j = 0; av[i][j] != '\0'; j++)
	c++;
      c++;
    }

  aout = malloc((c + 1) * sizeof(char));

  if (aout == NULL)
    {
      free(aout);
      return (NULL);
    }

  for (i = j = ai = 0; ai < c; j++, ai++)
    {
      if (av[i][j] == '\0')
	{
	  aout[ai] = '\n';
	  i++;
	  ai++;
	  j = 0;
	}
      if (ai < c -1)
	aout[ai] = av[i][j];
    }
  aout[ai] = '\0';

  return (aout);
}
