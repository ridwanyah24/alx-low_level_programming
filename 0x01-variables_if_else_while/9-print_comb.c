#include <stdio.h>
#include <stdlib.h>
/**
  * main - code starts here
  *
  *Return: Code returns 0
  */
int main(void)
{
	int numb;

	for (numb = 0x30; numb <= 0x39; numb++)
	{
		putchar(numb);
		putchar(", ");
	}
	putchar(0x0A);

	return (0);
}
