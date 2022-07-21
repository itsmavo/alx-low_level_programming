#include "main.h"

/**
 * binart_to_uint - converts binary into unsigned number
 * @b: binary
 *
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
  unsigned int ui;
  int l, b2;

  if (!b)
    return (0);

  ui = 0;

  for (l = 0; b[l] != '\0'; l++)
    ;

  for (l--, b2 = 1; l >= 0; l--, b2 *= 2)
    {
      if (b[l] != '0' && b[l] != '1')
	{
	  return (0);
	}

      if(b[l] & 1)
	{
	  ui += b2;
	}
    }
  return (ui);
}
