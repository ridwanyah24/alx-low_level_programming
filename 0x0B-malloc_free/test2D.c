#include "main.h"
/**
  * alloc_grid - returns a pointer to a two dimensional array of int
  *@width: column
  *@height: row
  *Return: pointer to 2D
  */
int **alloc_grid(int width, int height)
{
	int **array2D;
	int i, j;

	array2D = malloc(sizeof(int *) * height);
	for (i = 0; i < height; i++)
	{
		array2D[i] = malloc(sizeof(int) * width);
		for (j = 0; j < width; j++)
		{

		}
	}
}
