#include "main.h"
/**
 * _indexOf - returns boolean if special characters
 * @a: character to return
 * Return: true or false
 */
int _indexOf(char a)
{
  int i;
  char arrchar[13] = {'\n', '\t', ' ', '.', ',', ';', ',', '!', '?', '(',
		      ')', '{', '}'};

  for (i = 0; i < 13; i++)
    {
      if (arrchar[i] == a)
	return (1);
    }
  return (0);
}
/**
 * cap_string - capitalizes string
 * @s: string
 * Return: the string capitalized
 */
char *cap_string(char *s)
{
  int i;

  for (i = 0; s[i] != '\0'; i++)
    {
      if(_indexOf(s[i]))
	continue;
      if(s[i] >= 'a' && s[i] <= 'z' && (_indexOf(s[i - 1]) || i == 0))
	s[i] = s[i] - 32;
    }
  return (s);
}
