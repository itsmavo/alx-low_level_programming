#include "lists.h"

/**
 * dlistint_len - prints out the length of linked list
 * @h: head of the linked list
 *
 * Return: size_t value
 */

size_t dlistint_len(const dlistint_t *h)
{
  const dlistint_t *temp;
  int count = 0;

  temp = h;
  while(temp != NULL)
    {
      count++;
      temp = temp->next;
    }
  return(count);
}
