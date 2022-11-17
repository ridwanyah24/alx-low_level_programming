#include "variadic_functions.h"
/**
  *print_numbers - prints numbers
  *@seperator: the string to be printed between the numbers
  *@n: the number of numbers to be printed
  *
  */
void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (i == n - 1 && seperator == NULL)
			continue;
		printf("%s", seperator);
	}
	printf("\n");
	va_end(ap);
}
