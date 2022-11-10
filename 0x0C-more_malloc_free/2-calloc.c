#include "main.h"
/**
  * _calloc - allocates memmory for an array
  *@nmemb: the number of elements in the array
  *@size: the size base for the memory
  *Return: pointer to the array or NULL
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *Array;

	Array = calloc(nmemb, size);
	if (nmemb == 0 || size == 0)
		return (NULL);
	if (Array == NULL)
		return NULL;
	return (Array);
}
