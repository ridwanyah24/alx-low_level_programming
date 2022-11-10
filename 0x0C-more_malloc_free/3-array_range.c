#include "main.h"
/**
  *array_range - creates an array of integers from min to max in a range
  *@min: the minimum value
  *@max: thr maximum value
  *Return: pointer to the array
  */
int *array_range(int min, int max)
{
	int *array, index, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	array = malloc(sizeof(int) * size);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = min++;

	return (array);
}
