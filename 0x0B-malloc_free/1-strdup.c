#include "main.h"
/**
  *_strdup - returns a pointer to a space in memory contaiing str
  *@str: the string the space contains
  *Return: pointer to char
  */
char *_strdup(char *str)
{
	char *str1;
	unsigned int i, j;

	i = strlen(str) - 1;	
	str1 = malloc(sizeof(char) * i);
	if (str1 == NULL)
		return (NULL);
	for (j = 0; j < i; j++)
	{
		str1[j] = str[j];
	}
	return (str1);
}
