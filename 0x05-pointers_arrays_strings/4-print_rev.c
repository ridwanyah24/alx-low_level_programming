#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
  * print_rev - prints string in reverse
  *@s: string to be printed in reverse
  *Return: void
  */
void print_rev(char *s)
{
	int i;

	for (i = strlen(s) - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

