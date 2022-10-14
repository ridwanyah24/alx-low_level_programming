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

	do {
		for (lowerNotAllChar = 0x61; lowerNotAllChar < 0x7B; lowerNotAllChar++)
		{
			putchar(lowerNotAllChar);
		}
	} while (lowerNotAllChar != 0x65 && lowerNotAllchar != 0x71)


	return (0);
}
