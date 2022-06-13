#include "main.h"
#include "2-strlen.c"
/**
 * puts2 - prints one char out of 2 in a string
 * @str: input
 * Return: void
 */
void puts2(char *str)
{
  int t;

  for (t = 0; t < _strlen(str); t++)
    {
      if (t % 2 == 0)
	{
	  _putchar(str[t]);
	}
    }
  _putchar('\n');
}
