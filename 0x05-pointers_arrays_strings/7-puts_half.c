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
	if (count % 2 == 1)
		count = count / 2;
	else
		count = (count - 1) / 2;
	for (i = count + 1; i < count * 2; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
