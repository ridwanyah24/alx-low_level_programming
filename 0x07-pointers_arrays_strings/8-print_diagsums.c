#include "main.h"
#include <stdio.h>
/**
  * print_diagsums - prints the sum of the two diagonals of a square matrix
  *@a: the square matrix
  *@size: the size of the matrix
  *Return: void
  */
void print_diagsums(int *a, int size)
{
	int i, j;
	unsigned int m, d, count;
	int sum = 0;

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
	if (n > 0)
	{
		m = sum * -1;
		_putchar('-');
	} else
	{
		m = sum;
	}
	d = m;
	count = 1;

	while (d > 9)
	{
		d /= 10;
		count *= 10;
	}
	for (; count >= 1; count /= 10)
	{
		_putchar(((m / count) % 10) + 48);
	}
}
