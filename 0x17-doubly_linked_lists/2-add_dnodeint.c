#include "lists.h"

/**
 * add_dnodeint - adds node in the beginning of a linked list
 * @head: address of the head of linked list
 * @n: number
 *
 * Return: address of the new node or NULL
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
  dlistint_t *new;

  new = malloc(sizeof(dlistint_t));
  if (new == NULL)
    return (NULL);

  new->n = n;
  new->next = NULL;
  new->prev = NULL;

  if((*head) == NULL)
    {
      *head = new;
      return (new);
    }
  else
    {
      (*head)->prev = new;
      new->next = *head;
      *head = new;
      return (new);
    }
}
