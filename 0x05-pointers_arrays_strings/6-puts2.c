#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
  * puts2 - prints every other character in a string
  *@str: the string
  *Return: void
  */
void puts2(char *str)
{
	unsigned int i;

	for (i = 0; i <= strlen(str) - 1; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
