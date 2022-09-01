#include "lists.h"
/**
 * free_dlistint - frees a linked list
 * @head: the address of the head of the linked list
 *
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
  dlistint_t *temp;

  temp = head;
  while (temp != NULL)
    {
      free(temp);
      temp = temp->next;
    }
}
