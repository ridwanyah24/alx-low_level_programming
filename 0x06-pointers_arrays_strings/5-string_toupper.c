#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
  * string_toupper - converts all lowercase char to uppercase
  *@s: the string to convert
  *Return: pointer char
  */
char *string_toupper(char *s)
{
	int i, j;

	j = strlen(s) - 1;
	for (i = 0; i <= j; i++)
	{
		if (islower(s[i]))
		{
			s[i] = toupper(s[i]);
		}
	}
	return (s);
}
