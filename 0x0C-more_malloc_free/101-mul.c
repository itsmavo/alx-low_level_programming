#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
 * _is_zero - determines if any number is zero
 * @argv: argument vector
 *
 * Return: no return
 */
void _is_zero(char *argv[])
{
  int i, ins1 = 1, ins2 = 1;

  for (i = 0; argv[1][i]; i++)
    if (argv[1][i] != '0')
      {
	ins1 = 0;
	break;
      }

  for(i = 0; argv[2][i]; i++)
    if (argv[2][i] != '0')
      {
	ins2 = 0;
	break;
      }

  if (ins1 == 1 || ins2 == 1)
    {
      print("0\n");
      exit(0);
    }
}
