#include <stdio.h>
#include <stdlib.h>
/**
  * main - Code runs here
  *
  *Return: returns a 0
  */
int main(void)
{
	int lowerChar = 0x61;

	for (lowerChar = 0x61; lowerChar < 0x7B; lowerChar++)
	{
		putchar(lowerChar);
	}
	putchar(0x0A);

	return (0);
}
