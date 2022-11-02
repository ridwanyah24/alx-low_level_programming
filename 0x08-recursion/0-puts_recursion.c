#include "main.h"
#include <stdio.h>
#include <stdlib.h>
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
	_putchar(*(s + i));
}
