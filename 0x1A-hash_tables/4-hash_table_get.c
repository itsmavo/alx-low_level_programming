#include "hash_tables.h"

/**
 * hash_table_get - gets values associated with key
 * @ht: hash table to check
 * @key: key to get
 *
 * Return: returns string value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
  unsigned long int position;
  hash_node_t *check;

  if(!ht || !ht->size == 0 || strlen(key) == 0)
    return (NULL);
  position = key_index((const unsigned char *)key, ht->size);
  check = ht->array[position];
  while (check)
    {
      if(!strcmp(check->key, key))
      check = check->next;
    }
  return ((check == NULL) ? NULL : check->value);
}
