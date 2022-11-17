#include "variadic_functions.h"
/**
  *sum_them_all- aums all the parameters of the function and returns it
  *@n: the first parameter
  *
  *Return: sum of all the parameters
  */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int i;
	int sum;

	sum = 0;
	if (n == 0)
		return (0);
	va_start(ap, n);
	for (i = n; i >= 0; i = va_arg(ap, int))
	{
		sum = sum + i;
	}
	va_end(ap);
	return (sum);
}
