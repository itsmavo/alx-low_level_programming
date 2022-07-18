#include "lists.h"
/**
 * add_nodeint_end - add a new node at the end of a linked list
 * @head: head of a list
 * @n: n is a element
 * 
 * Return: address of the new element. NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
  listint_t *new, *temp;

  (void)temp;

  new = malloc(sizeof(listint_t));

  if (new == NULL)
    return NULL;

  new->n = n;
  new->next = NULL;
  temp = *head;
  if (*head == NULL)
    {
      *head = new;
    }
  else
    {
      while (temp->next != NULL)
	{
	  temp = temp->next;
	}
      temp->next = new;
    }
  return (*head);
}
