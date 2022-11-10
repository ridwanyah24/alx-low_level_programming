#include "main.h"
/**
  *_realloc - reallocates a memory block
  *@ptr: the pointer to memory previously allocated
  *@old_size: old memory size
  *@new_size: new memory size
  *Return: pointer to new reallocated memory
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptr2;

	(void)old_size;

	if (ptr == NULL)
	{
		ptr2 = malloc(newsize);
	}
	ptr2 = realloc(ptr, new_size);
	return (ptr2);
}
