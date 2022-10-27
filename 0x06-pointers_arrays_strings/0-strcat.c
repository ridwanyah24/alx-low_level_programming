#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
  * _strcat - concatenates two strings together
  *@dest: desitantion string
  *@src: source string
  *Return: pointer to dest
  */
char *_strcat(char *dest, char *src)
{
	int i;

	while (i >= 0)
	{
		*(dest + strlen(dest)) = *(src + i);
		if (*(src + i) == '\0')
			break;
		i++;
		strlen(dest)++;
	}
}
