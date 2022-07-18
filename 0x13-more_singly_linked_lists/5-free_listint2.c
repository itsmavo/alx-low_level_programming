#include "lists.h"
/**
 * free_listint2- frees a linked list
 * @head: head of a linked list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
  listint_t *t, *c;

  if (head != NULL)
    {
      c = *head;
      while ((t = c) != NULL)
	{
	  c = c->next;
	  free(t);
	}
      *head = NULL;
    }
}
