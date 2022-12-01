#include "main.h"

/**
  *flip_bits - returns the number of bits flipped to get
  *from one number to another
  *@n: the number
  *@m: the other number
  *Return: the number of bits flipped
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, bits = 0;

	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}

	return (bits);
}
