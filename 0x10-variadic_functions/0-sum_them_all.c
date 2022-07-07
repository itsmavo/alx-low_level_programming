#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_the_all - sums all of its parameters
 * @n: The number of parameters passed into the function
 * @...: A variable num of params to be summed
 *
 * Return: If n == 0 is 0
 * Otherwise - the sum all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
  va_list num;
  unsigned int i, sum = 0;

  va_start(num, n);

  for (i = 0; i < n; i++)
    sum += va_arg(num, int);

  va_end(num);

  return (sum);
}
