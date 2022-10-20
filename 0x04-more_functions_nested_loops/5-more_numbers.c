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
		for (j = 0; j <= 14; j++)
		{
			if (j > 57)
			{
				_putchar((j / 10) + 48);
			}
			_putchar((j % 10) + 48)
		}
		i++;
		_putchar('\n');
	}
}
