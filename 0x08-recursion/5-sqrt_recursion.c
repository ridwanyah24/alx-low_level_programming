#include "main.h"
#include <stdio.h>
/**
  *_sqrt_recursion - returns the natural squareroot of a number
  *@n: the number
  *Return: int
  */
int _sqrt_recursion(int n)
{
	int i = 1;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (0);
	}
	if (n == 1)
	{
		return 1;
	}
	if (n == (i*i))
	{
		return (i);
	}
	i = n / n - _sqrt_recursion(n - 1);
	return (i);
}
