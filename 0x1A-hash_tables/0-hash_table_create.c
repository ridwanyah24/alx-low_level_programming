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

	t->size = size;
	return (t);
}
