#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at a specific index
 * @head: the adress of the head of the node
 * @index: is the node to be deleted
 *
 * Return: 1 on success ot -1 on failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
  dlistint_t *temp;
  unsigned int x = 0;

  if ((*head) == NULL)
    return(-1);
  if (index == 0)
    {
      if((*head)->next != NULL)
	{
	  free(*head);
	  *head = (*head)->next;
	  (*head)->prev = NULL;
	  return (1);
	}
      free(*head);
      (*head) = NULL;
      return (1);
    }
  temp = *head;
  while (temp->next && x != index)
    {
      x++;
      temp = temp->next;
    }
  if(x == index)
    {
      if(temp->next != NULL)
	{
	  temp->next->prev = temp->prev;
	  temp->prev->next = temp->next;
	  free(temp);
	}
      else
	{
	  temp->prev->next = NULL;
	  free(temp);
	}
      return (1);
    }
  return (-1);
}
