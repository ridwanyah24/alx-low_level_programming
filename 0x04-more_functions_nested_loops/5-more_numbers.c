#include "main.h"
/**
  * more_numbers - print numbers 10 times
  *
  *Return: void
  */
void more_numbers(void)
{
	int i = 0;
	int j;

	while (i < 10)
	{
		for (j = 48; j <= 57; j++)
		{
			if (j > 57)
			{
				_putchar(49);
				_putchar((j % 10));
			}
			putchar(j);
		}
		i++;
		_putchar('\n');
	}
}
