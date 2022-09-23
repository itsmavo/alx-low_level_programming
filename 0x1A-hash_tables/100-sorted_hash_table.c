#include "hash_tables.h"
/**
 * shash_table_create - create hash table
 * @size: size of the hash table
 *
 * Return: hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
  shash_table_t *newt;
  unsigned int i;

  if (size > 0)
    {
      newt = malloc(sizeof(shash_table_t));
      if (!newt)
	return (NULL);
      newt->size = size;
      newt->array = malloc(sizeof(shash_node_t *) * size);
      newt->shead = NULL;
      newt->stail = NULL;
      if (!newt->array)
	{
	  free(newt);
	  return (NULL);
	}
      for (i = 0; i < size; i++)
	newt->array[i] = NULL;
      return (newt);
    }
  return (NULL);
}

/**
 * shash_table_set - sorts ht table
 * @ht: hash table
 * @key: key to sort
 * @value: value to sort
 *
 * Return: pass fail
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
  unsigned long int position;
  shash_node_t *check, *new;

  if (!ht || strlen(key) == 0)
    return (0);
  position = key_index((const unsigned char *)key, ht->size);
  check = ht->array[position];
  while (check)
    {
      if(!strcmp(check->key, key))
	{
	  free(check->value);
	  check->value = strdup((char *)value);
	  if(!check->value)
	    return (0);
	  return (1);
	}
      check = check->next;
    }
  new = malloc(sizeof(shash_node_t));
  if(!new)
    return (0);
  new->key = strdup((char *)key);
  if (!new->key)
    {
      free(new);
      return (0);
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
  new->snext = NULL;
  new->sprev = NULL;
  return (shash_sorted_list(ht, new));
}

/**
 * shash_sorted_list - sets doubly linked list
 * @ht: hash table to be sorted
 * @new: node to sort
 *
 * Return: pass or fail
 */
int shash_sorted_list(shash_table_t *ht, shash_node_t *new)
{
  shash_node_t *sort;
  if(!ht->shead)
    {
      ht->shead = new;
      ht->stail = new;
      return (1);
    }
  if (strcmp(new->key, ht->shead->key) < 0)
    {
      ht->shead->sprev = new;
      new->snext = ht->shead;
      ht->shead = new;
      return (1);
    }
  else
    {
      sort = ht->shead->snext;
      while (sort && strcmp(new->key, sort->key) > 0)
	sort = sort->snext;
      if (!sort)
	{
	  new->sprev = ht->stail;
	  ht->stail->snext = new;
	  ht->stail = new;
	  return (1);
	}
      new->sprev = sort->sprev;
      sort->sprev->snext = new;
      sort->sprev = new;
      new->snext = sort;
    }
  return (1);
}

/**
 * shash_table_get - returns value of key
 * @ht: hash table
 * @key: key to return value
 *
 * Return: string 
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
  unsigned long int position;
  shash_node_t *check;

  if(!ht || strlen(key) == 0)
    return (NULL);
  position = key_index((const unsigned char *)key, ht->size);
  check = ht->array[position];
  while (check)
    {
      if(!strcmp(check->key, key))
	return (check->value);
      check = check->next;
    }
  return (NULL);
}

/**
 * shash_table_print - prints hash table
 * @ht: hash table
 *
 * return: hash table
 */
void shash_table_print(const shash_table_t *ht)
{
  shash_node_t *hdr;
  if (!ht)
    return;
  hdr = ht->shead;
  printf("{");
  while (hdr)
    {
      printf("'%s': '%s'", hdr->key, hdr->value);
      if (hdr != ht->stail)
	printf(", ");
      hdr = hdr->snext;
    }
  printf("}\n");
}

/**
 * shash_table_print_rev - prints reversed hash table
 * @ht: hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
  shash_node_t *tlr;
  if(!ht)
    return;
  tlr = ht->stail;
  printf("{");
  while(tlr)
    {
      printf("'%s': '%s'", tlr->key, tlr->value);
      if(tlr != ht->shead)
	printf(", ");
      tlr = tlr->sprev;
    }
  printf("}\n");
}

/**
 * shash_table_delete - deletes a hash table
 * @ht: hash table to delete
 */
void shash_table_delete(shash_table_t *ht)
{
  unsigned int i;
  shash_node_t *fr, *temp;

  for(i = 0; i < ht->size; i++)
    {
      fr = ht->array[i];
      while(fr)
	{
	  temp = fr->next;
	  free(fr->key);
	  free(fr->value);
	  free(fr);
	  fr = temp;
	}
    }
  free(ht->array);
  free(ht);
}
