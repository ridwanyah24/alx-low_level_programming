#include "main.h"
/**
  * print_diagonal - prints a diagonal line on the terminal
  *@n: number of backslashes to print
  *
  *Return: void
  */
void print_diagonal(int n)
{
	int count;
	int back = n - 1;

	while ((count < n + 1) && (count != n))
	{
		while (back < n && !(back < 0))
		{
			_putchar(' ');
			back++;
		}
		_putchar('\\');
	}
}
