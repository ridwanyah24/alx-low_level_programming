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
	int i = 0;

	if (i > strlen(s))
	{
		return;
	}
	i++;
	_putchar(_puts_recursion(*(s + i)));
}
