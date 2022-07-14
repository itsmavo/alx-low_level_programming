#include <stdio.h>
/**
 * b4main - function to be executed b4 main
 *
 * Return: void
 */

void __attribute__ ((constructor)) b4main()
{
  printf("You're beat! and yet, you must allow, \nI bore my house upon my back!\n");
 
}
