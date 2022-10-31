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
	int i, j;
	int sum = 0;
	int sum1 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				sum = sum + a[i][j];
			}
		}
	}
	for (i = 0; i < size; i++)
	{
		for (j = size - 1; j >= 0; j--)
		{
			sum1 = sum1 + a[i][j];
		}
	}
	printf("%d", (sum + sum1));
}
