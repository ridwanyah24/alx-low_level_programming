#include <unistd.h>
/**
  * print_alphabet - prints lowercase alpahbets from a-z
  *@parameter: doesn't take any params
  *Return: function returns void
  */
void print_alphabet(void);
/**
  * main - code runs here
  *
  *Return: code returns 0
  */

int main(void)
{
	print_alphabet();
	return (0);
}
void print_alphabet(void)
{
	for (int i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
