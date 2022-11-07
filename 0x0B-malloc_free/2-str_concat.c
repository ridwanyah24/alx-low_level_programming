#include "main.h"
/**
  * str_concat - concatenates two strings
  *@s1: string 1
  *@s2: string 2
  *Return: pointer to s1;
  */
char *str_concat(char *s1, char *s2)
{
	char *str;
	unsigned int i, j, k = 0;

	i = strlen(s1) + strlen(s2);
	if (s1 == NULL)
		*s1 = "";
	if (s2 == NULL)
		*s2 = "";
	str = malloc((sizeof(char) * i) + 1);
	if (str == NULL)
		return (NULL);
	for (j = 0; j < strlen(s1); j++)
	{
		str[j] = s1[j];
	}
	for (; j < i; j++)
	{
		str[j] = s2[k];
		k++;
		if (k >= strlen(s2))
			break;
	}
	return (str);
}
