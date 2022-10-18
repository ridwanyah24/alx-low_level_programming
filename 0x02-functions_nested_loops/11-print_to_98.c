#include <stdlib.h>
#include "main.h"
/**
  * print_to_98 - print natural numbers from n to 98
  *@n: the number to start from
  * 
  *Return: code returns void
  */
void print_to_98(int n)
{
	if (n >= 98)
	{
		for (n = n; n >= 98; n--)
		{
			_putchar(n + '0');
			_putchar(',');
			_putchar(' ');
		}
	} else if (n <= b)
	{
		for (n = n; n <= 98; n++)
		{
			_putchar(n + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
