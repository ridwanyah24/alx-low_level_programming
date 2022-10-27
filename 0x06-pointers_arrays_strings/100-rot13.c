#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
  * rot13 - encrypts a string using rot13
  *@c: the string
  *Return: void
  */
char *rot13(char *s)
{
	int i = 0;
	char a = 'a';

	while (s[i] != '\0')
	{
		while (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] += 13;
		}

	}
}
