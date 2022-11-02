#include "main.h"
#include <stdio.h>
/**
  *_sqrt_recursion - returns the natural squareroot of a number
  *@n: the number
  *Return: int
  */
int _sqrt_recursion(int n)
{
	int i;

	i = n - 1;
	if (n < 0)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return i;
	}
	return _sqrt_recursion(n - 1);
}
