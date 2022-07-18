#include "lists.h"

/**
 * pop_listint - deletes head node of a linked list
 * @head: head of a list
 *
 * Return: head node.
 */
int pop_listint(listint_t **head)
{
  int hdnd;
  listint_t *hd, *crnt;

  if (*head == NULL)
    return (0);

  crnt = *head;
  
  hdnd = crnt->n;

  hd = crnt->next;

  free(crnt);

  *head = hd;

  return (hdnd);
  
}
