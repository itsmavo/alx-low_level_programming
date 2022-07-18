#include "lists.h"

/**
 * sum_listint - sums all the data in a linked list.
 * @head: head of a node
 *
 * Return: sum of data in the linked list, if empty returns 0.
 */

int sum_listint(listint_t *head)
{
  int sum;

  sum = 0;
  while (head != NULL)
    {
      sum += head->n;
      head = head->next;
    }

  return (sum);
}
