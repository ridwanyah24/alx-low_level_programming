#include "main.h"
#include <stdio.h>
/**
  * _strlen_recursion - returns lenght of a string
  *@s: the string
  *Return: int
  */
int _strlen_recursion(char *s)
{
	int  i = 1;

	if (*s != '\0')
	{
		_strlen_recursion(s + 1);
		i++;
	}
	return (i);
}
