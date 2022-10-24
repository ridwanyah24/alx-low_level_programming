#include <unistd.h>
#include <string.h>
#include "main.h"
#include <stdio.h>
/**
  * rev_string - prints a string in reverse
  *@s: the string to be printed in reverse
  *Return: void
  */
void rev_string(char *s)
{
	int i;

	for (i = strlen(s) - 1; i >= 0; i++)
	{
		_putchar(*(s[i]);
	}
}
