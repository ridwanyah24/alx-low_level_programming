#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * print_number - prints an integer
  *@n: the integer to be printed;
  *Return: void
  */
void print_number(int n)
{
	unsigned int count, m, d;

	if (n < 0)
	{
		n = -n;
		_putchar('-');
	} else 
	{
		m = n;
	}
	d = m;
	count  = 1;

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
