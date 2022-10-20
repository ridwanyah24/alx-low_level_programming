#include "main.h"
/**
  * print_diagonal - prints a diagonal line on the terminal
  *@n: number of backslashes to print
  *
  *Return: void
  */
void print_diagonal(int n)
{
	int count = 0;
	int back = 1;

	while ((count < n + 1) && count != n)
	{
		while ((back < n))
		{
			_putchar(' ');
			back++;
		}
		_putchar('\\');
		_putchar('\n');
	}
}
