#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"
#include <unistd.h>
/**
  * hash_table_create - creates a hash table
  * @size: size of the hash table
  * Return: hash_table
  */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *t = malloc(sizeof(hash_table_t));
	unsigned long int i;
	t->array = malloc(sizeof(hash_node_t *) * size);
	t->size = size;

	if (t->array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		t->array[i] = NULL;

	return (t);
}
