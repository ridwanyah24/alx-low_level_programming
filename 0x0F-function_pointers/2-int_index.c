#include "function_pointers.h"
/**
  *int_index - searches for an integer
  *@array: the array to search from
  *@size: the size of the array
  *@cmp: pointer to the search function
  *Return: index of the first element for which cmp doesnt return 0
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array && size && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) == 1)
				return (i);
		}
	}
	return (-1);
}
