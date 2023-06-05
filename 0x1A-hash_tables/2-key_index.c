#include <stdio.h>
#include "hash_tables.h"
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
/**
  *key_index - gives the index of a key
  *@key: the key
  *@size: the size of the hash table
  *
  *
  *Return: unsigned long int
  */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	int indexi;

	index = hash_djb2(key);
	return (index % size);
}
