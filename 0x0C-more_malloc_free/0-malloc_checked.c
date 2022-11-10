#include "main.h"
/**
  * malloc_checked - allocates memory
  *@b: the amount of memory to allocate
  *Return: pointer to the allocated memory
  */
void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);
	return (p);
}
