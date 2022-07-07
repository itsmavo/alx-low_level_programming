#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

void print_char(va_list args);
void print_int(va_list args);
void print_string(va_list args);
void print_float(va_list args);
void print_all(const char * const format, ...);

/**
 * print_char - Prints a char.
 * @args: A list of args pointing to
 * the char to be printed.
 */
void print_char(va_list args)
{
  char c;

  c = va_arg(args, int);
  printf("%c", c);
}

/**
 * print_int - Prints an int.
 * @args: A list of args pointing to
 *the int to be printed.
 */
void print_int(va_list args)
{
  int num;

  num = va_arg(args, int);
  printf("%d", num);
}

/**
 * print_string - Prints a string.
 * @args: A list of args pointing to
 * the string to be printed.
 */
void print_string(va_list args)
{
  char *str;

  str = va_arg(args, char *);

  if (str == NULL)
    {
      printf("(nil)");
      return;
    }
  printf("%s", str);
}

/**
 * print_float - Prints a float.
 * @args: A list of args pointing to
 * the float to be printed.
 */
void print_float(va_list args)
{
  float f;

  f = va_arg(args, double);
  printf("%f", f);
}

/**
 * print_all - Prints anything
 * @format: A string of char representing the args types.
 * @...: A variable num of args to be printed.
 *
 * Description: Any arg not of type char, int, float,
 *              or char * is ignored.
 *              If a string argument is NULL, (nil) is printed instead.
 */
void print_all(const char * const format, ...)
{
  va_list argst;
  int i = 0, j = 0;
  char *separator = "";
  printer_t func[] = {
		      {"c", print_char},
		      {"i", print_int},
		      {"s", print_string},
		      {"f", print_float}
  };

  va_start(argst, format);

  while (format && (*(format + i)))
    {
      j = 0;

      while (j < 4 && (*(format + i) != *(func[j].symbol)))
	j++;

      if (j < 4)
	{
	  printf("%s", separator);
	  func[j].print(argst);
	  separator = ", ";
	}

      i++;
    }

  printf("\n");

  va_end(argst);
}
