#include "variadic_functions.h"
/**
  *print_strings - prints the strings arguments of a function
  *@seperator: the seperator string
  *@n: number of strings to print
  *
  */
void print_strings(const char *seperator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		char *strings = va_arg(ap, char*);

		if (strings == NULL)
			strings = "(nil)";
		printf("%s", strings);
		if (i == n - 1)
			continue;
		if (seperator != NULL)
			printf("%s", seperator);
	}
	va_end(ap);
	printf("\n");
}
