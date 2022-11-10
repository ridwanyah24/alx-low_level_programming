#include "main.h"
/**
  *array_range - creates an array of integers from min to max in a range
  *@min: the minimum value
  *@max: thr maximum value
  *Return: pointer to the array
  */
int *array_range(int min, int max)
{
	int *arr;
	int def, i;

	def = max - min;
	if (min > max)
		return (NULL);
	arr = malloc((def + 2) * sizeof(int));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < (def + 3); i++)
	{
		arr[i] = min;
		min++;
	}
	return (arr);
}
