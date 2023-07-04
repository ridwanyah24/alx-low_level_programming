#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
/**
  * main - code runs here
  *
  *Return: always 0
  */
void prime_factor(void);

int main(void)
{
	prime_factor();
	return (0);
}
/**
  * prime_factor - prints the largset prime factor of the number 612852475143
  *
  * Return: void
  */
void prime_factor(void)
{
	long int number = 612852475143;
	long int n;

	for (n = 2;  n < number; n++)
	{
		if (number % n == 0)
		{
			number /= n;
			n--;
		}
	}
	printf("%ld\n", n);
}
