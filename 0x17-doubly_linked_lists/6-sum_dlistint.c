#include "lists.h"

/**
 * sum_dlistint - sums all the data (n) of a linked list
 * @head: the address of the head of the linked list
 *
 * Return: int
 */

int sum_dlistint(dlistint_t *head)
{
  const dlistint_t *temp;
  int sum = 0;

  temp = head;
  while (temp != NULL)
    {
      sum += temp->n;
      temp = temp->next;
    }
  return (sum);
}
