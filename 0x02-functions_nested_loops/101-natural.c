#include <stdio.h>

/**
 * main - sums multplicates and 3 or 5
 *
 * Description: multiples between 0 and 1024
 * Return: Always (0)
 */

int main(void)
{
  int sn, en, total;

  en = 1024;
  total = 0;

  for (sn = 0; sn < en; sn++)
    {
      if ((sn % 3 == 0) || (sn % 5 == 0))
	{
	  total = total + sn;
	}
      else
	{
	  continue;
	}
    }
  printf("%d", total);
  printf("\n");

  return (0);
}
