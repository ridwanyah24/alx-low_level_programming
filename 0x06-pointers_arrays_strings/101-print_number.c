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
	int count = 1;
	int d;

	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}
	d = n;
	while (d < 10)
	{
		_putchar(d + 48);
		break;
	}
	while (d > 9)
	{
		d /= 10;
		count *= 10;
	}
	d = n;
	for (; count >= 1; count /= 10)
	{
		_putchar(((m / count) % 10) + 48);
	}
}
