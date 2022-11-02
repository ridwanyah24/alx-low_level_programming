#include "main.h"
#include <string.h>
#include <stdio.h>
/**
  * _print_rev_recursion - prints a string in reverse
  *@s: the string
  *Return: void
  */
void _print_rev_recursion(char *s)
{
	unsigned int i = strlen(s) - 1;

	if (*s != '\0')
	{
		_putchar(*(s + i));
		i--;
		_print_rev_recursion(s + 1);
	}
	_putchar('\n');
}
