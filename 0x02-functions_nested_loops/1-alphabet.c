#include <unistd.h>
#include "main.h"
/**
  * print_alphabet - function prints all alphabets in lowercase
  *
  *Return: code returns void
  */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
