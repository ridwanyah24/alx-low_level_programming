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
	int *count;
	int i;

	count = s + (strlen(s) - 1)

	for (i = 0; i <= count; i++)
	{
		_putchar(*count);
	}
}
