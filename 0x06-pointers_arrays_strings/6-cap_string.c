#include "main.h"
#include <string.h>
#include <stdio.h>
#include <ctype.h>
/**
  * cap_string - captitalizes the string
  *@c: the string to be capitalized
  *Return: pointer to char
  */
char *cap_string(char *c)
{
	unsigned int i;

	for (i = 0; i < strlen(c); i++)
	{
		if (i == 0)
		{
			if (c[i] >= 'a' && c[i] <= 'z')
			{
				c[i] = toupper(c[i]);
			}
			continue;
		}
		if (c[i] == ' ')
		{
			i++;
			if (c[i] >= 'a' && c[i] <= 'z')
			{
				c[i] = toupper(c[i]);
				continue;
			}
		}else 
		{
			if (c[i] >= 'A' && c[i] <= 'Z')
			{
				c[i] = tolower(c[i]);
			}

		}
	}
	return (c);
}
