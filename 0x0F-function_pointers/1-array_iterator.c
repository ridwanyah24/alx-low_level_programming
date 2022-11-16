#include "function_pointers.h"
/**
  *array_iterator - executes a function param on each element of an
  *array
  *@array: the array
  *@size: the size of the array
  *@action: the function pointer
  */
void array_iterator(int *array, size_t size, void(*action)(int))
{
	unsigned int i;

	if (array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
