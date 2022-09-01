#include "lists.h"
/**
 * print_dlistint - prints all the elements of a list
 * @h: head of the list
 *
 * Return: size_t valu
 */

size_t print_dlistint(const dlistint_t *h)
{
  const dlistint_t *temp;
  int count = 0;

  temp = h;
  while(temp != NULL)
    {
      printf("%d\n", temp->n);
      temp = temp->next;
      count++;
    }
  return(count);
  
}
