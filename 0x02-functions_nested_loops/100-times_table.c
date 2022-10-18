#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"
/**
  * print_times_table - print time table for n nums
  *@n: the number of tables to be printed
  *
  *Return: Code returns void
  */
void print_times_table(int n)
{
	int a, b, op;

	if (n >= 0 && n <= 15)
	{
		for (a = 0; a <= n; a++)
		{
			_putchar(48);
			for (b = 1; b <= n; b++)
			{
				op = a * b;
				_putchar(44);
				_putchar(32);
				if (op <= 9)
				{
					_putchar(32);
					_putchar(32);
					_putchar(op + 48);
				}
				else if (op <= 99)
				{
					_putchar(32);
					_putchar((op / 10) + 48);
					_putchar((op % 10) + 48);
				}
				else
				{
					_putchar(((op / 100) % 10) + 48);
					_putchar(((op / 10) % 10) + 48);
					_putchar((op % 10) + 48);
				}
			}
			_putchar('\n');
		}
	}
}
