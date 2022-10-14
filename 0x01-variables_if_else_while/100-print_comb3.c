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

	for (i = '0'; i <= 9; i++)
	{
		putchar(i);
		for (j = '0'; j <= 9; j++)
		{
			putchar(j);
			if (i != '9' && j != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar(0x0A);

	return (0);
}
