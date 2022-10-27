#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * reverse_array - reverses the elements of the array
  *@a: the array
  *@n: number of elements in the array
  *Return: void
  */
void reverse_array(int *a, int n)
{
	int i, j, temp;

	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			temp = *(a + j);
			*(a + j) = *(a + (j - 1));
			*(a + (j - 1)) = temp;
		}
	}
}
