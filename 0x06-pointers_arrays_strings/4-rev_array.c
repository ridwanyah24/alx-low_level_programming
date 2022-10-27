#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * reverse_array - reverses the elements of the array
  *@a: the array
  *n: number of elements in the array
  *Return: void
  */
void reverse_array(int *a, int n)
{
	int j;
	n--;

	for (j = 0; j <= n; j++)
	{
		*(a + j) = *(a + (n));
		n--;
	}

}
