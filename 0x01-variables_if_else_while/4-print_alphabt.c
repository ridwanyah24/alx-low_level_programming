#include <stdio.h>
#include <stdlib.h>
/**
  * main - Code runs here
  *
  *Return: Code returns 0
  */
int main(void)
{
	int lowerchar;

	for (lowerchar = 0x61; lowerchar < 0x7B; lowerchar++)
	{
		if (lowerchar != 0x65 && lowerchar != 0x71)
		{
			putchar(lowerchar);
		}
	}

	return (0);
}
