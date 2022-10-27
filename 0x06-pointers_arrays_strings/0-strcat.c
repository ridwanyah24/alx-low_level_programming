#include "main.h"
#include <stdio.h>
#include <string.h>
/**
  * _strcat - concatenates two strings together
  *@dest: desitantion string
  *@src: source string
  *Return: pointer to dest
  */
char *_strcat(char *dest, char *src)
{
	char concat;

	concat = strcat(dest, src);
	return (concat);
}
