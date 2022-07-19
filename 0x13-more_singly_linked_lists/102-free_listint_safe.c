#include "lists.h"

/**
 * free_listp2 - frees a linked list
 * @head: head of a list
 * 
 * Return: void
 */
void free_listp2(listp_t **head)
{
  listp_t *temp, *curr;

  if (head != NULL)
    {
      curr = *head;
      while ((temp = curr) != NULL)
	{
	  curr = curr->next;
	  free(temp);
	}
      *head = NULL;
    }
}

/**
 * free_listint_safe - frees a linked list
 * @h: head of a list
 *
 * Return: size of the list freed.
 */
size_t free_listint_safe(listint_t **h)
{
  size_t node = 0;
  listp_t *hp, *new, *add;
  listint_t *curr;

  hp = NULL;
  while (*h != NULL)
    {
      new = malloc(sizeof(listp_t));

      if (new == NULL)
	exit(98);

      new->p = (void *)*h;
      new->next = hp;
      hp = new;

      add = hp;

      while (add->next != NULL)
	{
	  add = add->next;
	  if (*h == add->p)
	    {
	      *h = NULL;
	      free_listp2(&hp);
	      return (node);
	    }
	}
      curr = *h;
      *h = (*h)->next;
      free(curr);
      node++;
    }

  *h = NULL;
  free_listp2(&hp);
  return (node);
}
