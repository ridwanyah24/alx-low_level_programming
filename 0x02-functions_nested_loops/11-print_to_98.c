#include <stdlib.h>
#include "main.h"
/**
  * print_to_98 - print natural numbers from n to 98
  *@n: the number to start from
  *Return: code returns void
  */
void print_to_98(int n)
{
	if (n > 98)
	{
		for (n = n; n >= 98; n++)
		{
			if (n <= 9)
			{
				_putchar(n + 48);
				_putchar(',');
				_putchar(' ');
			} else
				_putchar((n / 10) + 48);
				_putchar((n % 10) + 48);
				_putchar(',');
				_putchar('')
		}
	} else if (n < 98)
	{
		for (n = n; n <= 98; n++)
		{
			if (n <= 9)
			{
				_putchar(n + 48);
				_putchar(',');
				_putchar(' ');
			} else
				_putchar((n / 10) + 48);
				_putchar((n % 10) + 48);
				_putchar(',');
				_putchar(' ');
		}
	}
	_putchar('\n');
}
