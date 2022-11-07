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

	i = strlen(str);
	str1 = malloc((sizeof(*str) * i) + 1);
	if (str1 == NULL)
	{
		return (NULL);
	}
	if (str == NULL)
		return (NULL);
	for (j = 0; j < i; j++)
	{
		str1[j] = str[j];
	}
	return (str1);
}
