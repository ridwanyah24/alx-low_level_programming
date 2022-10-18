#include <stdlib.h>
#include <stdio.h>
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
		for (; n > 98; n--)
		{
			printf("%d, ", n);
		}
	}
	else if (n < 98)
	{
		for (; n < 98; n++)
		{
			printf("%d, ", n);
		}
	}
	printf("%d\n", n);
}
