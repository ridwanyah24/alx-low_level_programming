#include "main.h"

/**
  *clear_bit - sets the value of a bit to zero at a given position
  *@n: the pointer to the bytes
  *@index: the index position
  *Return: 1 if success -1 for failure
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n = *n & ~(1 << index);


	return (1);
}
