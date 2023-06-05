#include <string.h>
#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
/**
  *hash_table_set - adds an element to the hash_table
  *@ht: the hash table
  *@key: the key
  *@value: the value
  *
  *Desc - this function creates a hash table and adds elements to it
  *Return: 1 if it succeeds and 0 if not
  */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node = (hash_node_t*)malloc(sizeof(hash_node_t));
	unsigned long int index, i;
	char *value_cpy;

	if (ht == NULL || key == NULL || *key == '\0'|| value == NULL)
		return (0);
	value_cpy = strdup(value);
	if (value_cpy == NULL)
		return (0);
	
	index = key_index((const unsigned char*)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = value_cpy;
			return (1);
		}
	}
	
	if (node == NULL)
	{
		free(value_cpy);
		return (0);
	}
	
	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(node);
		return (0);
	}

	node->value = value_cpy;
	node->next = ht->array[index];
	ht->array[index] = node;

	return (1);
}
