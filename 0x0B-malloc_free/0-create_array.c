#include "main.h"
/**
  * create_array - creates array of chars
  *@size: size of the array
  *@c: the return char
  *Return: pointer to the array or null
  */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	s = malloc(sizeof(char) * size);
	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return (s);
}
