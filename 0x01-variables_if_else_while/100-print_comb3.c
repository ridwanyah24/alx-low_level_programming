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
		putchar(i);
		for (j = 0x30; j <= 0x39; j++)
		{
			putchar(j);
			if (i != 0x39 && j != 0x39)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar(0x0A);

	return (0);
}
