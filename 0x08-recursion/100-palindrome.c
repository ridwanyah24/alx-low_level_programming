#include "main.h"
#include <stdio.h>
#include <string.h>
int checker(char *s, int n)
{
	if (n > 1)
	{
		if (*s == *(s + n))
		{
			return (checker(s + 1, n - 1));
			return (1);
		} else
			return (0);
	}
}
/**
  * is_palindrome - checks if a string is a palindrome
  *@s: the string
  *Return: 1 if true, 0 if not
  */
int is_palindrome(char *s)
{
	int i = strlen(s) - 1;

	if (i == 1)
	{
		return (1);
	}
	return (checker(s, i));
}
