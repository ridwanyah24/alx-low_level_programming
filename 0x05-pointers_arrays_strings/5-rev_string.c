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

	while (count >= 0)
	{
		if (s[count] == '\0')
		{
			break;
		}
		count++;
	}
	for (count--; count >= 0; count--)
	{
		_putchar(s[count]);
	}
}
