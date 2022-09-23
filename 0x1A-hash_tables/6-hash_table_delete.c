#include "hash_tables.h"
/**
 * hash_table_delete - delets hash table
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
  unsigned int i;
  hash_node_t *del, *temp;

  for (i = 0; i < ht->size; i++)
    {
      del = ht->array[i];
      while (del)
	{
	  temp = del->next;
	  free(del->key);
	  free(del->value);
	  free(del);
	  del = temp;
	}
    }
  free(ht->array);
  free(ht);
}
