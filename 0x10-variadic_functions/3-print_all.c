#include "variadic_functions.h"
#include <string.h>
/**
  *print_all - prints anything.
  *@format: the type of what to print
  *
  */
void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0;
	int num_args = strlen(format);
	char *strings;

	va_start(ap, format);
	while (i < num_args)
	{
		switch (format[i])
		{
			case 'i':
				printf("%d", va_arg(ap, int));
				break;
			case 'c':
				printf("%c", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				break;
			case 's':
				strings = va_arg(ap, char*);
				if (strings == NULL)
					strings = "(nil)";
				printf("%s", strings);
				break;
		}
		if (i != num_args - 1 && (format[i] == 'i' || format[i] == 'c' ||
					 format[i] == 'f' || format[i] == 's'))
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
}
