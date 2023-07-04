#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"
/**
  * main - code runs herre
  *
  *Return: alwauys 0
  */
void print_tri(int);
int main(void)
{
	print_tri(10);
	return (0);
}

/**
  * print_tri - print a triangular shape using #
  *@n: number of #s that forms the triangle
  *Return: void
  */
void print_tri(int n)
{
	int numoftimes;
	int iternum;
	int spaces;
	int j;

	if(n <= 0)
	{
		_putchar('\n');
	} else if (n > 0)
	{
		for (numoftimes = 0; numoftimes < n; numoftimes++)
		{
			spaces = n - numoftimes;
			for (j = 1; j < spaces; j++)
			{
				_putchar(' ');
			}
			for (iternum = 0; iternum <= numoftimes; iternum++)
			{
				_putchar('#');
			}
			_putchar('\n');

		}
	}
}
