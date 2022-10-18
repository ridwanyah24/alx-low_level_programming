#include <unistd.h>
#include <stdlib.h>
#include "main.h"
/**
  * times_table - prints times tables from 0-9
  *
  *Return: none
  */
void times_table(void)
{
	int i = '0';
	int j = '0';
	int k;

	while (i <= '9')
	{
		while (j <= '9')
		{
			k = i * j;
			_putchar(k);
			_putchar(',');
			_putchar(' ');
			j++;
		}
		i++;
	}
}
