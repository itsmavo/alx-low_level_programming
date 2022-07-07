#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints strings
 * @separator: String to be printed btwn two strings
 * @n: Num of strings passed int function
 * @...: A variable num of strings to be printed
 *
 * Description: If separator, not printed
 * If one of the strings is NULL, (nil) is printed.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
  va_list string;
  char *str;
  unsigned int i;

  va_start(string, n);

  for (i = 0; i < n; i++)
    {
      str = va_arg(string, char *);

      if (str == NULL)
	printf("(nil)");
      else
	printf("%s", str);

      if (i != (n - 1) && separator != NULL)
	printf("%s", separator);
    }

  printf("\n");

  va_end(string);
}
