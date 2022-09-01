#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at given position in a linked list
 * @h: the address of the head node
 * @idx: is the index where the new node should be inserted
 * @n: value of n
 *
 * Return: the address of the new node or NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
  dlistint_t *temp, *new;
  unsigned int x = 1;

  temp = *h;
  new = malloc(sizeof(dlistint_t));
  if (new == NULL)
    return (NULL);

  new->n = n;
  new->next = NULL;
  new->prev = NULL;
  if ((*h) == NULL)
    {
      if (idx == 0)
	{
	  *h = new;
	  return (new);
	}
      return (NULL);
    }
  if (idx == 0)
    {
      new->next = *h;
      (*h)->prev = new;
      *h = new;
      return (new);
    }

  while (temp->next != NULL && x != idx)
    {
      temp = temp->next;
      x++;
    }
  if (x == idx)
    {
      new->prev = temp;
      new->next = temp->next;
      if (temp->next != NULL)
	temp->next->prev = new;
      temp->next = new;
      return (new);
    }
  return (NULL);
}
