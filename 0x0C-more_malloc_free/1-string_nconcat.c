#include "main.h"
/**
  * string_nconcat - concatenates two strings together using the first n
  *bytes of the other string
  *@s1: string 1
  *@s2: string 2
  *@n: the first n bytes of the string 2
  *Return: pointer to the concatenated string
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concated;
	unsigned int i, k;
	unsigned int j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n >= strlen(s2))
		k = strlen(s1) + strlen(s2);
	else
		k = strlen(s1) + n;
	concated = malloc((sizeof(char) * k) + 1);
	if (concated == NULL)
		return (NULL);
	for (i = 0; i < strlen(s1); i++)
	{
		concated[i] = s1[i];
	}
	for (; i < k; i++)
	{
		concated[i] = s2[j];
		j++;
		if (k > strlen(s2))
			break;
	}
	return (concated);
}
