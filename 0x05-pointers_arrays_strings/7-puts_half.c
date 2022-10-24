#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * puts_half - prints half the chars in a string
  *@str: the string
  *Return: none
  */
void puts_half(char *str)
{
	int count = 0;
	int i;
	while (count >= 0)
	{
		if (str[count] == '\0')
		{
			break;
		}
		count++;
	}
	count /= 2;
	for (i = count; i < count * 2; i++)
	{
		_putchar(str[i]);
	}
}
