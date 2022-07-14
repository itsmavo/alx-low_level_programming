#include "lists.h"
/**
 * add_node = adds a new node at the beginning of list_t list.
 * @head: head of the linked list
 * @str: string to store in the list
 *
 * Return: address of the head.
 */

list_t *add_node(list_t **head, const char *str)
{
  list_t *new;
  size_t nc;

  new = malloc(sizeof(list_t));
  if (new == NULL)
    return (NULL);

  new->str = strdup(str);

  for(nc = 0; str[nc]; nc++)
    ;

  new->len = nc;
  new->next = *head;
  *head = new;

  return (*head);
}
