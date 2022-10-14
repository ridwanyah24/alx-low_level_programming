#include <stdio.h>
#include <stdlib.h>
/**
  * main - code runs here
  *Return: Code returns zero
  */
int main(void)
{
	char numb;
	char hexa;

	for (numb = '0'; numb <= '9'; numb++)
	{
		putchar(numb);
	}
	for (hexa = 'a'; hexa <= 'f'; hexa++)
	{
		putchar(hexa);
	}
	putchar(0x0A);

	return (0);
}
