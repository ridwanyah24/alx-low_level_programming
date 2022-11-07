#include "main.h"
/**
  * alloc_grid - returns a pointer to a two dimensional array
  *@width: the width of the array
  *@height: the height of the array
  *Return: pointer to the two dimensional array
  */
int **alloc_grid(int width, int height)
{
	int **array;
	int i, j;

	if(width <= 0 || height <= 0)
		return (NULL);
	array = malloc(sizeof(int *) * (width * height));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			array[i][j] = 0;
		}
	}
	return (array);
}
