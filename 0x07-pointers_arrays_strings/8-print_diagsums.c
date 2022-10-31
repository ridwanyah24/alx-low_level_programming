#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * print_diagsums - prints the sum of the two diagonals of a square matrix
  *@a: the square matrix
  *@size: the size of the matrix
  *Return: void
  */
void print_diagsums(int *a, int size)
{
	int i;
	int sum = 0;
	int sum1 = 0;


	for (i = 0; i < size * size; i++)
	{
		if (i % (sum + 1) == 0)
			sum = sum + *(a + i);
		if (i % (size - 1) == 0 && i != 0 && i < size * size - 1)
			sum1 = sum1 + *(a + i);
	}
	printf("%d, %d\n", sum, sum1);
}
