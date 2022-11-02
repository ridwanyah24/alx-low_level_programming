#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
  *_puts_recursion - prints a string using recursion
  *@s: the string
  *Return: void
  */
void _puts_recursion(char *s)
{
	unsigned int i = 0;
	char str[] = s;

	if (i > strlen(str) - 1)
	{
		return;
	}
	i++;
	_putchar(_puts_recursion(str[i]));
}
