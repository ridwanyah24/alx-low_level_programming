#include <stdio.h>
#include <stdlib.h>
/**
  * main - Code runs here
  *
  *Return: Code returns 0
  */
int main(void)
{
	int lowerNotAllChar;

	for (lowerNotAllChar = 0x61; lowerNotAllChar < 0x7B; lowerNotAllChar++)
	{
		if (lowerNotAllChar != 0x65 || lowerNotAllChar != 0x71)
		{
			putchar(lowerNotAllChar);
		}
	}
	putchar(0x0A);

	return (0);
}
