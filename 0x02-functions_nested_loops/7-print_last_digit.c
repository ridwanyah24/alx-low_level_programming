#include <unistd.h>
#include "main.h"
/**
  * print_last_digit - prints the last digit of a number
  *@l: the number to get its last digit
  *Return: returns the last digit of the number
  */
int print_last_digit(int l)
{
	int j;

	j = l % 10;
	_putchar(j);
	return (0);
}
