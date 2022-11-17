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
	int i = 0, j, a = 0;
	/*int num_args = strlen(format);*/
	char *strings, fmt[5] = "cifs";

	va_start(ap, format);
	while (format[i] != '\0' && format)
	{
		j = 0;
		while (fmt[j] != '\0')
		{
			if (format[i] == fmt[j] && a != 0)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
			case 'i':
				printf("%d", va_arg(ap, int)), a++;
				break;
			case 'c':
				printf("%c", va_arg(ap, int)), a++;
				break;
			case 'f':
				printf("%f", va_arg(ap, double)), a++;
				break;
			case 's':
				strings = va_arg(ap, char*);
				if (strings == NULL)
					strings = "(nil)";
				printf("%s", strings);
				a++;
				break;
		}
		i++;
	}
	va_end(ap);
	printf("\n");
}
