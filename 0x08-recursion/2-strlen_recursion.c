#include "main.h"
#include <stdio.h>
/**
  * _strlen_recursion - returns lenght of a string
  *@s: the string
  *Return: int
  */
int _strlen_recursion(char *s)
{
	int len = 0;
	if (*s == '\0')
	{
		return (len);
	} else
	{
		len++;
		_strlen_recursion(s + len);
	}
	return (len);
}
