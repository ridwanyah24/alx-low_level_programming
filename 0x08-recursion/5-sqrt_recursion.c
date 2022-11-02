#include "main.h"
#include <stdio.h>
/**
  *_sqrt_recursion - returns the natural squareroot of a number
  *@n: the number
  *Return: int
  */
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	if (n / (n - 1) == n - 1 && (n - 1) != 1)
	{
		return (n - 1);
	}
	return (n / n - _sqrt_recursion(n - 1));
}
