#include <stdio.h>
#include <stdlib.h>
/**
  * main - the code runs here
  *Return: code returns 0
  */
int main(void)
{
	int i;
	int j;

	for (i = 0x30; i <= 0x39; i++)
	{
		for (j = 0x30; j <= 0x39; j++)
		{
			if (i != j && i < j)
			{
				putchar(i);
				putchar(j);
				if (i == '8' && j == '9')
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar(0x0A);

	return (0);
}
