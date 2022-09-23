#include "hash_tables.h"
/**
 * hash_table_print - prints hash table
 * @ht: hash table to print
 */
void hash_table_print(const hash_table_t *ht)
{
  unsigned int i;
  unsigned int lkey;
  hash_node_t *prnt;

  if (ht == NULL)
    return;
  lkey = ht->size - 1;
  while (!ht->array[lkey] && lkey != 0)
    lkey--;

  printf("{");
  for (i = 0; i < ht->size; i++)
    {
      prnt = ht->array[i];
      while (prnt)
	{
	  printf("'%s': '%s'", prnt->key, prnt->value);
	  if (i != lkey)
	    printf(", ");
	  prnt = prnt->next;
	}
    }
  printf("}");
  printf("\n");
}
