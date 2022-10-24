#include <unistd.h>
#include "main.h"
#include <stdio.h>
/**
  * rev_string - prints a string in reverse
  *@s: the string to be printed in reverse
  *Return: void
  */
void rev_string(char *s)
{
	int count;

	for (count = strlen(s) - 1; count >= 0; count--)
	{
		_putchar(s[count]);
	}
}
