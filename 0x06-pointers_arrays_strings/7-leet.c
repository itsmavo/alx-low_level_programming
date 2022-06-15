#include "main.h"
/**
 * leet - encodes a string into 1337
 * @s: input string
 * Return: the pointer to dest
 */
char *leet(char *s)
{
  int cnt = 0, i;
  int low_letters[] = {97, 101, 111, 116, 108};
  int upper_letters[] = {65, 69, 79, 84, 76};
  int numbers[] = {52, 51, 48, 55, 49};

  while (*(s + cnt) != '\0')
    {
      for (i = 0; i < 5; i++)
	{
	  if (*(s + cnt) == low_letters[i] || *(s + cnt) == upper_letters[i])
	    {
	      *(s + cnt) = numbers[i];
	      break;
	    }
	}
      cnt++;
    }
  return (s);
}
