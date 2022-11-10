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
	int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	Array = malloc(size * nmemb);
	if (Array == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
	{
		Array[i] = 0;
	}
	return (Array);
}
