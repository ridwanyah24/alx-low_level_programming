#include "main.h"
#include <stdio.h>
#include <string.h>
/**
  * checker - checks for palindrome
  *@s: the string
  *@n: the string lenght
  *Return: int
  */
int checker(char *s, int n)
{
	if (n > 1)
	{
		if (*s != *(s + n))
		{
			return (0);
		} else
			return (1);
	}
	return (checker(s + 1, n - 1));
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
