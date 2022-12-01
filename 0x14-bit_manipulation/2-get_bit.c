#include "main.h"

/**
  *get_bit - gets a bit at the given index
  *@n: the integer bytes
  *@index: the index
  *Return: -1 for failure, and value of bit for success
  */
int get_bit(unsigned long int n, unsigned int index)
{
	char bit;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	bit = (n >> index) & 1;
	return (bit);
}
