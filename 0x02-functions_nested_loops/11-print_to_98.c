#include <stdlib.h>
#include "main.h"
/**
  * print_to_98 - print natural numbers from n to 98
  *@n: the number to start from
  *Return: code returns void
  */
void print_to_98(int n)
{
	n = '0' + n;

	if (n >= 'b')
	{
		while (n >= 'b')
		{
			_putchar(n);
			_putchar(',');
			_putchar(' ');
			n--;
		}
	} else if (n <= 'b')
	{
		for (n = n; n <= 'b'; n++)
		{
			_putchar(n);
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
