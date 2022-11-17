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
	unsigned int i;
	unsigned int sum;

	sum = 0;
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);
	return (sum);
}
