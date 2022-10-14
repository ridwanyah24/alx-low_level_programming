#include <stdio.h>
#include <stdlib.h>
/**
 * main - code runs here
 *
 *Return: code returns 0
 */
int main(void)
{
	int i;

	for (i = 0x30; i <= 0x39; i++)
	{
		putchar(i);
	}
	putchar(0x0A);

	return (0);
}
