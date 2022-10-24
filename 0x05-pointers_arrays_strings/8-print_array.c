#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"
/**
  * print_array - prints n elements of an array
  *@a: the array to print
  *@n: number of elements to print to
  *Return: void
  */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d, ", *(a + i));
	}
	printf("\n");
}
