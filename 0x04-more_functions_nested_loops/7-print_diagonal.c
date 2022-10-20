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
	int back = 0;
	int numoflines = 0;

	while ((count < n) && n > 0)
	{
		while ((back < numoflines))
		{
			_putchar(' ');
			back++;
		}
		count++;
		numoflines++;
		_putchar('\\');
		_putchar('\n');
	}
}
