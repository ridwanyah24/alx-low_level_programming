#include <stdio.h>
#include <unistd.h>
#include "hash_tables.h"
#include <stdlib.h>

/**
  *hash_djb2 - implements the djb2 algorithm
  *@str: the string
  *
  *Return: unsigned long int
  */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash *33 + c */
	}
	return (hash);
}
