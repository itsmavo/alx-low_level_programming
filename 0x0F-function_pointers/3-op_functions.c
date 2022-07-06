#include "3-calc.h"
/**
 * op_add - adds two numbers
 * @a: first int
 * @b: second int
 *
 * Return: add
 */
int op_add(int a, int b)
{
  return (a + b);
}
/**
 * op_sub - subtracts two numbers
 * @a: first int 
 * @b: second int
 *
 * Return: subtract
 */
int op_sub(int a, int b)
{
  return (a - b);
}
/**
 * op_mul - multiplies two numbers
 * @a: first int 
 * @b: second int
 *
 * Return: multiplication
 */
int op_mul(int a, int b)
{
  return (a * b);
}
/**
 * op_div - divides two numbers
 * @a: first int
 * @b: second int
 * 
 * Return: division
 */
int op_div(int a, int b)
{
  if (b == 0)
    {
      printf("Error\n");
      exit(100);
    }
  return (a / b);
}
/**
 * op_mod - gets remainder of the division between two numbers
 * @a: first int
 * @b: second int
 *
 * Return: Modulus
 */
int op_mod(int a, int b)
{
  if (b == 0)
    {
      printf("Error\n");
      exit(100);
    }
  
  return (a % b);
}
