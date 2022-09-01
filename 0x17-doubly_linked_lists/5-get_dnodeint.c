#include "lists.h"

/**
 * get_dnodeint_at_index - it gets the nth node of a linked list
 * @head: the address of the head of the linked list
 * @index: is the number of the node starting from 0
 *
 * Return: the node at a particular index or NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
  dlistint_t *temp;
  unsigned int x = 0;

  temp = head;
  if (head == NULL)
    return (NULL);

  while (temp != NULL && x != index)
    {
      x++;
      temp = temp->next;
    }
  if(index == x)
    return (temp);
  else
    return (NULL);
}
