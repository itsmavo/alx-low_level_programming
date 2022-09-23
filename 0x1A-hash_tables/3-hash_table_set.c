#include "hash_tables.h"

/**
 * hash_table_set - adds an element to hash table
 * @ht: is the hash table
 * @key: is the key
 * @value: is the value to be added to hash table
 *
 * Return: 1 on success, otherwise 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
  unsigned long int position;
  hash_node_t *check, *new;

  if (!ht || !ht->size || !strlen(key))
    return (0);
  position = key_index((const unsigned char *)key, ht->size);
  check = ht->array[position];
  while (check)
    {
      if (!strcmp(check->key, key))
	{
	  free(check->value);
	  check->value = strdup((char *)value);
	  if(!check->value)
	    return (0);
	  return (1);
	}
	check = check->next;
    }

      new = malloc(sizeof(hash_node_t));
      if (!new)
	return (0);
      new->key = strdup((char *)key);
      if(!new->key)
	{
	  free(new);
	  exit(0);
	}
      new->value = strdup((char *)value);
      if (!new->value)
	{
	  free(new->value);
	  free(new);
	  return (0);
	}
      new->next = ht->array[position];
      ht->array[position] = new;
      return (1);
}
